%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./estruturas/pilha/pilha.h"
#include "./estruturas/tabelahash/tabelaHash.h"

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;
Pilha scope_stack;
HashTable symbol_table;

/*usado para contar qual bloco está*/
int forCounter;
int ifCounter;
int whileCounter;
int elseCounter;
int doWhileCounter;

void pushBlockScope(char* escopoPai, char*nome, int ordem);
void inicializaContadores();
%}

%union {
	char * sValue;  /* string value */
};

%token <sValue> ID LIT_TEXTO LIT_BOOL LIT_REAL LIT_INT
%token BPRINCIPAL BFUNCOES FUNCAO BOOL
%token TEXTO CARACTERE REAL INTEIRO VETOR MEU_TIPO CERQUILHA
%token SE IMPRIME LEIA INCLUIR PARE ENQUANTO PROC PARA EXECUTE SENAO CONSTANTE RETORNE
%token ASPAS_DUPLAS ASPAS_SIMPLES LCOLCHETE RCOLCHETE LCHAVE RCHAVE LPARENTESES RPARENTESES
%token MENORIGUAL MAIORIQUAL IGUAL DIFERENTE MAIOR MENOR ATRIB ATRIB_SOMA ATRIB_SUB ATRIB_MULT ATRIB_DIV ATRIB_MOD
%token NEGACAO INC DEC E_LOG OU_LOG ARROBA VIRGULA PONTOVIRGULA
%token MULT SUB SOMA DIV MOD EXP


%left	SOMA	MENOS
%left	MULT	DIV    MOD
%right	EXP

%start programa

%type <sValue> bloco_principal termo literal imprime leia sentencas sentenca tipo tipo_primitivo declaracao expressao 
operador_unario operador_binario operador_relacional operador_aritmetico operador_booleano comando atribuicao
atribuicao_binaria atribuicao_unaria controle bloco_se se_simplificado
bloco_enquanto bloco_faca_enquanto bloco_para repeticao declaracao_para comando_para
assinaturas assinatura_funcoes assinatura_funcao assinatura_proc parametro parametros   
bloco_funcoes funcoes_proc definicoes_funcoes_proc definicao_funcao definicao_procedimento
chamada_funcao parametros_chamada parametro_chamada declaracoes declaracao_global
tamanho_vetor tipo_vetor termos ids retorne tipo_registro declaracao_registro
%%

programa : {pushScope("global","void");} declaracoes assinatura_funcoes bloco_principal bloco_funcoes {popScope(&scope_stack,"global");}
         ;

declaracoes :												{$$ = "";}
			| declaracao_global PONTOVIRGULA declaracoes	{int tamanho = strlen((char*)$1)+3+strlen((char*)$3);
															char* str = (char*)malloc(tamanho);
															sprintf(str, "%s;\n%s",(char*)$1,(char*)$3);
															printf("%s", str);}
			;
			
declaracao_global : declaracao				{$$ = $1;}
				  | declaracao_registro 	{$$ = $1;}
				  ;
				

declaracao_registro : MEU_TIPO ID LCHAVE parametros RCHAVE	{if(!insertSymbolTable(symbol_table,(char*)$2, strdup(mostrarTopo(&scope_stack)->scopeName),"MeuTipo")){
																					yyerror("Função já foi declarada!\n");
															}
															int tamanho = 13 + strlen((char*)$2) + strlen((char*)$4);
															char* str = (char*)malloc(tamanho);
															sprintf(str, "MeuTipo %s {\n%s\n}",(char*)$2,(char*)$4);
															$$ = str;}
					;										


assinatura_funcoes  :														{$$ = "";}
					| assinaturas PONTOVIRGULA assinatura_funcoes 	{char * str = (char *) malloc(strlen($1) + 1 + strlen(";\n\n") + 1 +  strlen($3)); 
																			sprintf(str, "%s %s %s", (char *) $1, ";\n\n", (char *) $3); 
																			printf("%s", str); free($1);}
					;

assinaturas : assinatura_proc   {$$ = $1;}
			| assinatura_funcao {$$ = $1;}
			;
					
assinatura_funcao : FUNCAO tipo ID LPARENTESES parametros RPARENTESES		{if(!insertSymbolTable(symbol_table,(char*)$3, strdup(mostrarTopo(&scope_stack)->scopeName),(char*)$2)){
																					yyerror("Função já foi declarada!\n");
																			 }
																			 
																			int tamanho = 11 + strlen((char *)$2) + strlen((char *)$3) +strlen((char *)$5);
																			char * str = (char *) malloc(tamanho); 
																			 sprintf(str, "Funcao %s %s (%s)", (char *) $2, (char *) $3, (char*)$5 ); 
																			 $$ = str; free($3); free($5);}
				  ;
				  
assinatura_proc : PROC ID LPARENTESES parametros RPARENTESES		{int tamanho = 10 + strlen((char *)$2) + strlen((char *)$4);
																	char * str = (char *) malloc(tamanho); 
																	 sprintf(str, "Proc %s ( %s)", (char *) $2,(char *) $4); 
																	 $$ = str; free($2);free($4);}
				;
				
parametros :											{$$ = "";}
           | parametro VIRGULA parametros				{char * str = (char *) malloc(strlen($1) + 2 + strlen($3)); 
														sprintf(str, "%s%s %s", (char *) $1, ",", (char *) $3); 
														$$ = str;}
           | parametro {$$ = $1;}
           ;

parametro  : tipo ID   {char * str = (char *) malloc(strlen($1) + 1 + strlen($2)); 
						sprintf(str, "%s %s", (char *) $1, (char *) $2); 
						$$ = str; }
					
bloco_funcoes  : {$$ = "";}
               | BFUNCOES LCHAVE funcoes_proc RCHAVE   {int tamanho = 17 + strlen((char *)$3);
            											char * str = (char *) malloc(tamanho); 
													   sprintf(str, "%s%s\n}", "BlocoFuncoes {\n", (char *) $3); 
													   printf("%s\n",str); }
				;
				
funcoes_proc :										{$$="";}
			 | definicoes_funcoes_proc funcoes_proc {char * str = (char *) malloc(1+strlen((char *)$1) + strlen((char *)$2)); 
												    sprintf(str, "%s %s", (char *) $1, (char *) $2); 
											        $$ = str;free($1);}
			 ;
			 
/*definicoes_funcoes :									{$$ = "";}
					   | definicao_funcao PONTOVIRGULA {char * str = (char *) malloc(strlen((char*)$1) + 1); 
											sprintf(str, "%s%s", (char*)$1, ";");
											$$ = str; free($1);}
					   ;*/

definicoes_funcoes_proc : definicao_funcao			{$$ = $1;}
						| definicao_procedimento	{$$ = $1;}
						;

definicao_funcao : FUNCAO tipo ID LPARENTESES parametros RPARENTESES LCHAVE {inicializaContadores();
																			pushScope((char*)$3,(char*)$2);} sentencas {popScope();} RCHAVE	
																			
																			{int tamanho = 13+strlen((char *)$2) + strlen((char *)$3) + strlen((char *)$5)+strlen((char *)$9);
																			char * str = (char *) malloc(tamanho); 
																			 sprintf(str, "Func %s %s (%s) {\n%s\n}", (char *) $2, (char *) $3,  (char *) $5, (char *) $9); 
																			 $$ = str; /*free($3);free($5);free($9);*/}
				 ;
				
/*definicoes_procedimentos : {$$ = "";}
					     | definicao_procedimento PONTOVIRGULA {char * str = (char *) malloc(strlen((char*)$1) + 1); 
																	sprintf(str, "%s%s", (char*)$1, ";");
																	$$ = str; free($1);}
					     ;*/


definicao_procedimento : PROC ID LPARENTESES parametros RPARENTESES LCHAVE {pushScope((char*)$2,"void");} sentencas {popScope();} RCHAVE	
																			
																			{int tamanho = 13+strlen((char *)$2) + strlen((char *)$4) + strlen((char *)$8);
																			char * str = (char *) malloc(tamanho); 
																			 sprintf(str, "Proc %s (%s) {\n%s\n}", (char *) $2, (char *) $4,  (char *) $8); 
																			 $$ = str; /*free($2);free($4);free($8);*/}
				 ;
				 
/*chamada_procedimento:  ID  LPARENTESES parametros_chamada RPARENTESES	{int tamanho = strlen((char*)$1) + 1 + strlen((char*)$3) + 1;
																		 char * str = (char *) malloc(tamanho); 
																		 sprintf(str, "%s%s%s%s", (char *) $1, "(", (char *) $3, ")"); 
																		 $$ = str; free($1); free($3);
																		 } */
						;

chamada_funcao : ID  LPARENTESES parametros_chamada RPARENTESES	{int tamanho = strlen((char*)$1) + 1 + strlen((char*)$3) + 1;
																 char * str = (char *) malloc(tamanho); 
																 sprintf(str, "%s%s%s%s", (char *) $1, "(", (char *) $3, ")"); 
																 $$ = str; free($1); free($3);} 
			   ;

retorne : RETORNE expressao		{int tamanho = 8 + strlen((char*)$2);
								char * str = (char *) malloc(tamanho); 
								sprintf(str, "Retorne %s", (char *) $2); 
								$$ = str; free($2);}

parametros_chamada: {$$ = "";}
		           | parametro_chamada VIRGULA parametros_chamada {char * str = (char *) malloc(strlen((char *)$1) + 1 + strlen((char *)$3)); 
																   sprintf(str, "%s%s%s", (char *) $1, ",", (char *) $3); 
																   $$ = str; free($1); free($3);}
		           | parametro_chamada								{$$ = $1;}
        			;
        			
parametro_chamada: ARROBA termo {char * str = (char *) malloc(1 + strlen((char*)$2));
								 sprintf(str, "%s%s","@", (char *) $2);
								 $$ = str;
								 free($2);}
	    		  | termo   	{$$ = $1;}
	    		 ;
		  
		  

					
bloco_principal : BPRINCIPAL LCHAVE {inicializaContadores(); pushScope("main","void");} sentencas {popScope();} RCHAVE   {printf("BlocoPrincipal {\n%s}\n",$4);}
				;



sentencas: {$$="";}
		 | sentenca PONTOVIRGULA sentencas {int tamanho = strlen((char*)$1)+ 3 + strlen((char*)$3);
											char * str = (char *) malloc(tamanho); 
											sprintf(str, "%s%s\n%s", (char*)$1, ";", (char *) $3); 
											$$ = str; free($1);}
		 ;

sentenca: comando {$$ = $1;}
		| controle {$$ = $1;}
		| repeticao {$$ = $1;}
		;

controle : bloco_se 		{$$ = $1;}
		 | PARE     		{$$ = "Pare";} /*possivelmente vai sair */
		 ;
		 
bloco_se : se_simplificado		{$$ = $1;}
		| se_simplificado SENAO LCHAVE {char* scopeFather = strdup(mostrarTopo(&scope_stack)->scopeName);
										char * senaoC = strdup("senao");
										pushBlockScope(scopeFather,senaoC,elseCounter);
										elseCounter++;
										} sentencas {popScope();}RCHAVE 
																				{int tamanho = strlen((char*)$1)+ 10 + strlen((char*)$5) + 2;
																				char * str = (char *) malloc(tamanho); 
																				sprintf(str, "%s%s %s %s", (char*)$1, "\nSenao {", (char *) $5, "}"); 
																				$$ = str; free($1);}
		| se_simplificado SENAO bloco_se			{int tamanho = strlen((char*)$1)+ 9 + strlen((char*)$3);
														char * str = (char *) malloc(tamanho); 
														sprintf(str, "%s%s %s", (char*)$1, "\nSenao", (char *) $3); 
														$$ = str; free($1);}
		;		 

se_simplificado : SE LPARENTESES expressao RPARENTESES EXECUTE LCHAVE {char* scopeFather = strdup(mostrarTopo(&scope_stack)->scopeName);
																		char * se = strdup("se");
																		pushBlockScope(scopeFather,se,ifCounter);
																		ifCounter++;} sentencas {popScope();}RCHAVE	
																													{	int tamanho = 5 + strlen((char *) $3) + 13 + strlen((char *) $8) + 2;
																														char * str = (char *) malloc(tamanho); 
																														sprintf(str, "%s %s %s %s %s", 
																														"Se (", (char *) $3, ") Execute {", (char *) $8, "}"); 
																														$$ = str; free($3);}
			  ;

comando:   declaracao 	{$$ = $1;}
		 | imprime		{$$ = $1;}
		 | leia 		{$$ = $1;}
		 | expressao	{$$ = $1;}
         | atribuicao	{$$ = $1;}
         | chamada_funcao {$$ = $1;}
         | retorne		  {$$ = $1;}	
        /* | chamada_procedimento {$$ = $1;}*/
         ;

atribuicao : ID atribuicao_unaria				{int tamanho = strlen((char*)$1)+ 1 + strlen((char*)$2);
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "%s %s", (char*)$1, (char *) $2); 
												$$ = str;free($1);}
		   | ID atribuicao_binaria expressao	{int tamanho = strlen((char*)$1)+ 1 + strlen((char*)$2) + 1 + strlen((char*)$3);
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "%s %s %s", (char*)$1, (char *) $2, (char *) $3); 
												$$ = str;free($1);free($3);}
		   ;
		   
atribuicao_binaria : ATRIB		{$$ = "=";}
				   | ATRIB_SOMA {$$ = "+=";}
				   | ATRIB_SUB  {$$ = "-=";}
				   | ATRIB_MULT {$$ = "*=";}
				   | ATRIB_DIV  {$$ = "/=";}
				   | ATRIB_MOD  {$$ = "%=";}
                   ;

atribuicao_unaria : INC {$$ = "++";}
				  | DEC {$$ = "--";}
     

repeticao : bloco_enquanto       {$$ = $1;}
		  | bloco_faca_enquanto  {$$ = $1;}
		  | bloco_para           {$$ = $1;}
		  ;

bloco_enquanto : ENQUANTO LPARENTESES {char* scopeFather = strdup(mostrarTopo(&scope_stack)->scopeName);
										char * enquanto = strdup("enquanto");
										pushBlockScope(scopeFather,enquanto,whileCounter);
										whileCounter++;} expressao {popScope();} 
										RPARENTESES EXECUTE LCHAVE sentencas RCHAVE {int tamanho = 10 + strlen((char*)$4) + 11 + strlen((char*)$9)+1;
																															char * str = (char *) malloc(tamanho); 
																															sprintf(str, "%s%s%s%s%s", "Enquanto (", (char *) $4, ") Execute {", 
																															(char *) $9, "}"); 
																															$$ = str; free($4), free($9);}
			   ;
			   
bloco_faca_enquanto : EXECUTE LCHAVE {char* scopeFather = strdup(mostrarTopo(&scope_stack)->scopeName);
										char * facaenquanto = strdup("facaenquanto");
										pushBlockScope(scopeFather,facaenquanto,doWhileCounter);
										doWhileCounter++;} sentencas {popScope();} RCHAVE ENQUANTO LPARENTESES expressao RPARENTESES 
																								{int tamanho = 10 + strlen((char*)$4) + 11 + strlen((char*)$9)+1;
																								  char * str = (char *) malloc(tamanho); 
																								  sprintf(str, "%s%s%s%s%s", "Execute {", (char *) $4, "} Enquanto (", 
																								  (char *) $9, ")"); 
																								  $$ = str; free($4), free($9);}
			        ;
			   
bloco_para : PARA LPARENTESES {char* scopeFather = strdup(mostrarTopo(&scope_stack)->scopeName);
								char * para = strdup("para");
								pushBlockScope(scopeFather,para,forCounter);
								forCounter++;} declaracao_para {popScope();} PONTOVIRGULA
									expressao PONTOVIRGULA comando_para RPARENTESES 
											EXECUTE LCHAVE sentencas RCHAVE 
																			{int tamanho = 6 + strlen((char *)$4) + strlen((char *)$7) + 1 + strlen((char *)$9) + 11 + strlen((char *)$13) + 1;
																				char * str = (char *) malloc(tamanho); 
																				sprintf(str, "%s%s%s%s%s%s%s%s%s", "Para (", (char *) $4, ";", 
																						(char *)  $7, ";", (char *)$9, ") Execute {", (char *)$13, "}"); 
												$$ = str; }
		   ;			   

declaracao_para:			{}
				| declaracao {$$ = $1;}
				;

comando_para :	{}
			 | comando {$$ = $1;}
			 ;

imprime : IMPRIME LPARENTESES termos RPARENTESES {int tamanho = 9 + strlen((char*)$3)+1;
												char * str = (char *) malloc(tamanho); 
													 sprintf(str, "%s%s%s", "Imprima (", (char *) $3, ")"); 
													 $$ = str; free($3);} /* malloc */
		;

leia	: LEIA LPARENTESES ids RPARENTESES	{int tamanho = 6 + strlen((char *) $3) + 1;
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "%s%s%s", "Leia (", (char *) $3, ")"); 
												$$ = str; free($3);}
		;
 
declaracao : tipo ID				{int tamanho = strlen((char*)$1)+ 1 + strlen((char*)$2);
									 char * str = (char *) malloc(tamanho); 
									 sprintf(str, "%s %s", (char*)$1, (char *) $2); 
									 $$ = str;free($2);}  //TIPO Não pode ser free
			| tipo ID ATRIB expressao	{int tamanho = strlen((char*)$1)+ 1 + strlen((char*)$2) + 3 + strlen((char*)$4);
								 ;    char * str = (char *) malloc(tamanho); 
									 sprintf(str, "%s %s %s %s", (char*)$1, (char *) $2, "=", (char *) $4); 
									 $$ = str;free($2); free($4);}
			
			;


expressao : termo {$$ = $1;}
		| operador_unario expressao	{int tamanho = strlen((char *) $1) + 1 + strlen((char *) $2);
									char * str = (char *) malloc(tamanho); 
									sprintf(str, "%s %s", (char *) $1, (char *) $2); 
									$$ = str; free($2);}
		| termo operador_binario expressao {int tamanho = strlen((char *) $1) + 1 + strlen((char *) $2) + 1 + strlen((char *) $3);
									char * str = (char *) malloc(tamanho); 
									sprintf(str, "%s %s %s", (char *) $1, (char *) $2, (char *) $3); 
									$$ = str; free($3);}
		| LPARENTESES expressao RPARENTESES {int tamanho = 1 + strlen((char *) $2) + 1;
									char * str = (char *) malloc(tamanho); 
									sprintf(str, "%s%s%s", "(" , (char *) $2, ")"); 
									$$ = str; free($2);}
		| chamada_funcao operador_binario expressao {int tamanho = strlen((char *) $1) + 1 + strlen((char *) $2) + 1 + strlen((char *) $3);
														char * str = (char *) malloc(tamanho); 
														sprintf(str, "%s %s %s", (char *) $1, (char *) $2, (char *) $3); 
														$$ = str; free($3);}
		;

operador_unario :	MENOS				{$$ = "-";}
				|	NEGACAO				{$$ = "!";}
				|	ARROBA				{$$ = "@";}
				;

operador_binario	: operador_booleano    {$$ = $1;}
					| operador_relacional  {$$ = $1;}
					| operador_aritmetico  {$$ = $1;}
		            ;	
		            
operador_relacional  : MENORIGUAL   		 {$$ = "<=";}
					 | MAIORIQUAL            {$$ = ">=";} 
					 | IGUAL                 {$$ = "==";}
					 | DIFERENTE             {$$ = "!=";}
					 | MAIOR                 {$$ = "<";}
					 | MENOR                 {$$ = ">";}
					 ;
					 
operador_aritmetico : MULT                  {$$ = "*";}
				    | DIV                   {$$ = "/";}
				    | MOD                   {$$ = "%";}
				    | EXP                   {$$ = "^";}
				    | SUB                   {$$ = "-";}
				    | SOMA                  {$$ = "+";}
				    ;
				 
operador_booleano : E_LOG		        	{$$ = "&&";}
					| OU_LOG	            {$$ = "||";}
					;

tipo : tipo_primitivo	{$$ = $1;}
	 | tipo_vetor       {$$ = $1;}
	 | tipo_registro	{$$ = $1;}
	 ;
	 
tipo_registro : MEU_TIPO ID		{int tamanho = 8+strlen((char*)$2);
								char* str = (char*)malloc(tamanho);
								sprintf(str, "MeuTipo %s", (char*)$2);
								$$ = str;}
			  ;

tipo_vetor : VETOR tipo_primitivo tamanho_vetor tamanho_vetor		 {int tamanho = 6+strlen((char*)$2)+ 1 +strlen((char*)$3) +strlen((char*)$4);
													 char* str = (char*)malloc(tamanho);
													 sprintf(str, "Vetor %s %s%s", (char*)$2, (char*)$3, (char*)$4);
													 $$ = str; free($3); free($4);}
			| VETOR tipo_primitivo tamanho_vetor 	{int tamanho = 6+strlen((char*)$2) + 2 + strlen((char*)$3);
													char* str = (char*)malloc(tamanho);
													sprintf(str, "Vetor %s %s", (char*)$2, (char*)$3);
													$$ = str; free($3);}
			;

tamanho_vetor : LCOLCHETE termo RCOLCHETE {int tamanho = 1+strlen((char*)$2)+1;
											 char* str = (char*)malloc(tamanho);
											 sprintf(str, "%s%s%s","[",(char*)$2,"]");
											 $$ = str;}
			  ;

tipo_primitivo : INTEIRO 	{$$ = "Inteiro";}
			   | REAL 		{$$ = "Real";}
			   | CARACTERE	{$$ = "Caractere";}
			   | TEXTO		{$$ = "Texto";}
			   | BOOL		{$$ = "Booleano";}
			   ;

termos : termo {$$ = $1;}
	   | termo VIRGULA termos {int tamanho = strlen((char*)$1)+1+strlen((char*)$3);
								char* str = (char*)malloc(tamanho);
								sprintf(str, "%s,%s",(char*)$1,(char*)$3);
								$$ = str; free($1);}
	   ;
	   
ids : ID {$$ = $1;}
	| ID VIRGULA ids {int tamanho = strlen((char*)$1)+1+strlen((char*)$3);
					char* str = (char*)malloc(tamanho);
					sprintf(str, "%s,%s",(char*)$1,(char*)$3);
					$$ = str; free($1);}
	;
			   
termo : ID       {$$ = $1;}
      | literal  {$$ = $1;}
      ;
      

literal : LIT_REAL  {$$ = $1;}
		| LIT_BOOL  {$$ = $1;}
		| LIT_INT   {$$ = $1;}
 		| LIT_TEXTO {$$ = $1;}
		;
%%

int main (void) {
	
	iniciar(&scope_stack);
	init_array(&symbol_table,50);
	return yyparse ( );
}

int yyerror (char *msg) {
	fprintf (stderr, "-- %d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}


int pushScope(char* scope, char* type){
		
	if(procurar(&scope_stack, scope, type)<0){
		empilhar(&scope_stack,scope,type);
		printf("tamanho:%d\n",scope_stack.tamanho);
	}
	mostrar(&scope_stack);
}

int popScope(){

	if(desempilhar(&scope_stack)<0){
		printf("pilha vazia\n");
	}else{
		printf("pop com sucesso\n");
		printf("tamanho:%d \n",scope_stack.tamanho);
	}
}

void pushBlockScope(char* escopoPai, char*nome, int ordem){
	
	char ordemStr [10];
	sprintf(ordemStr, "%d", ordem);
	
	int tamanho = strlen(escopoPai) + strlen(nome)+strlen(ordemStr)+1;
	char* resultado = (char*) malloc(tamanho);
	strcpy(resultado,escopoPai);
	strcat(resultado,nome);
	strcat(resultado,ordemStr);
	strcat(resultado,"\0");
	//coloca na pilha
	pushScope(resultado,"void");
	
}

void inicializaContadores(){
	forCounter = 0;
	ifCounter= 0;
	whileCounter= 0;
	elseCounter = 0;
	doWhileCounter = 0;
}
int insertSymbolTable(HashTable* hashTable,char*name, char*scope,char*type){
	char* key = (char*) malloc(strlen(scope)+strlen(name));
	strcpy(key,scope);
	strcat(key,name);
	Symbol *item = createSymbol(key,name,scope,type);
	int result = insert(&symbol_table,item);
	printf("tamanho da hash: %d\n",symbol_table.size);
	return result;
}


/*void check_type(char* identifier, char* scope){
	char* key = (char*) malloc( strlen(identifier) + strlen(scope) );
	
	strcpy(key,identifier);
	strcat(key,scope);
	
	int i;
	int rows = 100;
	char** table = (char*)malloc(rows*sizeof(char*));
	
	for(i=0; i< rows; i++){
		if(table[i] == NULL){
			table[i] = info;
		}
	}

}*/