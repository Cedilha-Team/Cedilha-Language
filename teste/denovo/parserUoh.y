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

void pushBlockScope(char*nome, int ordem);
void inicializaContadores();
%}

%union {
	char * sValue;  /* string value */
};

%token <sValue> ID LIT_TEXTO LIT_BOOL LIT_REAL LIT_INT
%token <sValue> MENORIGUAL MAIORIQUAL IGUAL DIFERENTE MAIOR MENOR ATRIB ATRIB_SOMA ATRIB_SUB ATRIB_MULT ATRIB_DIV ATRIB_MOD
%token <sValue> NEGACAO INC DEC E_LOG OU_LOG ARROBA MULT SUB SOMA DIV MOD EXP
%token <sValue> BOOL TEXTO CARACTERE REAL INTEIRO PARE
%token ASPAS_DUPLAS ASPAS_SIMPLES LCOLCHETE RCOLCHETE LCHAVE RCHAVE LPARENTESES RPARENTESES
%token SE IMPRIMA LEIA ENQUANTO  PARA EXECUTE SENAO CONSTANTE RETORNE
%token VIRGULA PONTOVIRGULA MEU_TIPO BPRINCIPAL BFUNCOES FUNCAO PROC VETOR CERQUILHA

%left	SOMA	SUB
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
tamanho_vetor termos ids retorne declaracao_registro
tipo_vetor tipo_registro
%%

programa : {pushScope("global","void");} declaracoes assinatura_funcoes bloco_principal bloco_funcoes {popScope();}
         ;

declaracoes :												{printf("passei en declaracoes\n");char * str = (char *) malloc(2); str = strdup(" "); $$ = str;}
			| declaracao_global PONTOVIRGULA declaracoes	{int tamanho = 4 + strlen($1) + strlen($3);
	        												char * str = (char *) malloc(tamanho); 
															sprintf(str, "%s;\n %s", $1, $3); 
															$$ = str;
															free($1);free($3);}
			;
			
declaracao_global : declaracao				{$$ = $1;}
				  | declaracao_registro 	{$$ = $1;}
				  ;
				

declaracao_registro : MEU_TIPO ID LCHAVE parametros RCHAVE	{//if(!insertSymbolTable(symbol_table,(char*)$2, strdup(mostrarTopo(&scope_stack)->scopeName),"MeuTipo")){
															//	yyerror("nome de variável já foi declarada!\n");
														//	}else{
																
																int tamanho = 13 + strlen($2) + strlen($4);
																char* str = (char*)malloc(tamanho);
																sprintf(str, "MeuTipo %s {\n%s\n}",$2,$4);
																$$ = str;
																printf("passei en meu tipo: %s %s\n",$2,$4);
														//	}
															free($2); free($4);
															}
					;										


assinatura_funcoes  :												{char * str = (char *) malloc(2); str = strdup(" "); $$ = str;}
					| assinaturas PONTOVIRGULA assinatura_funcoes 	{int tamanho = 4 + strlen($1) + strlen($3);
			        												char * str = (char *) malloc(tamanho); 
																	sprintf(str, "%s;\n %s", $1, $3); 
																	$$ = str;
																	free($1);free($3);}
					;

assinaturas : assinatura_proc   {$$ = $1;}
			| assinatura_funcao {$$ = $1;}
			;
					
assinatura_funcao : FUNCAO tipo ID LPARENTESES parametros RPARENTESES		{//if(!insertSymbolTable(symbol_table,(char*)$3, strdup(mostrarTopo(&scope_stack)->scopeName),(char*)$2)){
																			//		yyerror("nome de variável já foi declarada!\n");
																		//	 }else{
																				int tamanho = 12 + strlen($2) + strlen($3) +strlen($5);
																				char * str = (char *) malloc(tamanho); 
																				sprintf(str, "Funcao %s %s (%s)", $2, $3, $5 ); 
																				$$ = str; 
																				
																		//	 }
																			 free($2); free($3); free($5);}
				  ;
				  
assinatura_proc : PROC ID LPARENTESES parametros RPARENTESES		{//if(!insertSymbolTable(symbol_table,$2, strdup(mostrarTopo(&scope_stack)->scopeName),"void") ){
																	//				yyerror("nome de variável já foi declarada!\n");
																	//}else{
																		int tamanho = 9 + strlen($2) + strlen($4);
																		char * str = (char *) malloc(tamanho); 
																		 sprintf(str, "Proc %s (%s)", $2,$4); 
																		 $$ = str;
																		 
																//	}
																	free($2);free($4);}
				;
				
parametros :											{char * str = (char *) malloc(2); str = strdup(" "); $$ = str;}
           | parametro VIRGULA parametros				{int tamanho = 3 + strlen($1) + strlen($3);
        												char * str = (char *) malloc(tamanho); 
														sprintf(str, "%s, %s", $1, $3); 
														$$ = str;
														free($1);free($3);}
           | parametro {$$ = $1;}
           ;

parametro  : tipo ID   {//if(!insertSymbolTable(symbol_table,$2, strdup(mostrarTopo(&scope_stack)->scopeName),$1) ){
						//	yyerror("nome de variável já foi declarada!\n");
					//	}else{
							int  tamanho = 1+strlen($1)+strlen($2);
							char * str = (char *) malloc(tamanho);
							sprintf(str, "%s%s",$1,$2);
							 $$ = str;
							 free($1);free($2);
					//	} 
						
						}
			;
					
bloco_funcoes  : {char * str = (char *) malloc(2); str = strdup(" "); $$ = str;}
               | BFUNCOES LCHAVE funcoes_proc RCHAVE   {int tamanho = 17 + strlen((char *)$3);
            											char * str = (char *) malloc(tamanho); 
													   sprintf(str, "%s%s\n}", "BlocoFuncoes {\n", (char *) $3); 
													   printf("%s\n",str); }
				;
				
funcoes_proc :										{char * str = (char *) malloc(2); str = strdup(" "); $$ = str;}
			 | definicoes_funcoes_proc funcoes_proc {int  tamanho = 1+strlen($1)+strlen($2);
													char * str = (char *) malloc(tamanho);
													sprintf(str, "%s%s",$1,$2);
													 $$ = str;
													 free($1);free($2);}
			 ;

definicoes_funcoes_proc : definicao_funcao			{$$ = $1;}
						| definicao_procedimento	{$$ = $1;}
						;

definicao_funcao : FUNCAO tipo ID LPARENTESES parametros RPARENTESES 
								LCHAVE {inicializaContadores(); /*pushScope((char*)$3,(char*)$2);*/} 
										sentencas {/*popScope();*/} 
								RCHAVE	{int tamanho = 17+strlen($2) + strlen($3) + strlen($5)+strlen($9);
										 char * str = (char *) malloc(tamanho); 
										 sprintf(str, "Funcao %s %s (%s) {\n%s\n}", $2, $3, $5, $9); 
										 $$ = str; 
										 free($2); free($3); free($5); free($9);}
				 ;

definicao_procedimento : PROC ID LPARENTESES parametros RPARENTESES 
								LCHAVE {inicializaContadores();/*pushScope((char*)$2,"void");*/}
								sentencas {/*popScope();*/} RCHAVE	{int tamanho = 14 + strlen($2) + strlen($4) + strlen($8);
																char * str = (char *) malloc(tamanho); 
																 sprintf(str, "Proc %s (%s) {\n%s\n}", $2, $4, $8); 
																 $$ = str; 
																 free($2); free($4); free($8);}
				 ;

chamada_funcao : ID  LPARENTESES parametros_chamada RPARENTESES	{int tamanho = 3+strlen($1) + strlen($3);
																 char * str = (char *) malloc(tamanho); 
																 sprintf(str, "%s(%s)", $1, $3); 
																 $$ = str;
																 free($1); free($3);} 
			   ;

retorne : RETORNE expressao		{int tamanho = 9 + strlen($2);
								char * str = (char *) malloc(tamanho); 
								sprintf(str, "Retorne %s", $2); 
								$$ = str;
								free($2);}

parametros_chamada: {char * str = (char *) malloc(2); str = strdup(" "); $$ = str;}
		           | parametro_chamada VIRGULA parametros_chamada	{int tamanho = 3 + strlen($1)+ strlen($3);
																	char * str = (char *) malloc(tamanho); 
																	sprintf(str, "%s, %s", $1, $3); 
																	$$ = str; 
																	free($1); free($3);}
		           | parametro_chamada								{$$ = $1;}
        			;
        			
parametro_chamada: ARROBA termo    {int  tamanho = 1+strlen($1)+strlen($2);
									char * str = (char *) malloc(tamanho);
									sprintf(str, "%s%s",$1,$2);
									 $$ = str;
									 free($1);free($2);}
	    		  | termo   		{$$ = $1;}
	    		 ;
		  
		  

					
bloco_principal : BPRINCIPAL LCHAVE 
								{inicializaContadores();/*pushScope("main","void");*/} 
								sentencas {/*popScope();*/} 
							RCHAVE  {printf("BlocoPrincipal {\n%s}\n",$4);
									free($4);}
				;



sentencas:									{char * str = (char *) malloc(2); str = strdup(" "); $$ = str;}
		 | sentenca PONTOVIRGULA sentencas {int tamanho = 3 + strlen($1)+ strlen($3);
											char * str = (char *) malloc(tamanho); 
											sprintf(str, "%s;\n%s", $1, $3); 
											$$ = str; 
											free($1); free($3);}
		 ;

sentenca: comando   {$$ = $1;}
		| controle  {$$ = $1;}
		| repeticao {$$ = $1;}
		;

controle : bloco_se 		{$$ = $1;}
		 | PARE     		{$$ = $1;}
		 ;
		 
bloco_se : se_simplificado		{$$ = $1;}
		| se_simplificado SENAO LCHAVE {pushBlockScope("senao",elseCounter);
										elseCounter++;
										} 
			sentencas {popScope();} RCHAVE {int tamanho = 12 + strlen($1)+ strlen($5);
											char * str = (char *) malloc(tamanho); 
											sprintf(str, "%s\nSenao {\n%s\n}", $1, $5); 
											$$ = str;
											free($1);free($5);}
		| se_simplificado SENAO bloco_se			{int tamanho = 7 + strlen($1) + strlen($3);
													char * str = (char *) malloc(tamanho); 
													sprintf(str, "%s\nSenao%s", $1, $3);
													$$ = str; 
													free($1); free($3);}
		;		 

se_simplificado : SE LPARENTESES expressao RPARENTESES EXECUTE 
					LCHAVE {pushBlockScope("se",ifCounter);
							ifCounter++; }
					sentencas {popScope();} RCHAVE	{	int tamanho = 5 + strlen($3) + strlen($8);
														char * str = (char *) malloc(tamanho); 
														sprintf(str, "Se (%s) Execute {\n%s\n}", $3, $8); 
														$$ = str;
														free($3); free($8);}
;

comando	 : declaracao 		{$$ = $1;}
		 | imprime			{$$ = $1;}
		 | leia 			{$$ = $1;}
		 | expressao		{$$ = $1;}
         | atribuicao		{$$ = $1;}
         | chamada_funcao	{$$ = $1;}
         | retorne			{$$ = $1;}	
         ;

atribuicao : ID atribuicao_unaria				{int tamanho = 2 + strlen($1) + strlen($2);
												 char * str = (char *) malloc(tamanho); 
												 sprintf(str, "%s %s", $1, $2); 
												 $$ = str;
												 free($1); free($2);}
		   | ID atribuicao_binaria expressao	{int tamanho = 3 + strlen($1) + strlen($2) + strlen($3);
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "%s %s %s", $1, $2, $3); 
												$$ = str; 
												free($1); free($2); free($3);}
		   ;
		   
atribuicao_binaria : ATRIB		{$$ = $1;}
				   | ATRIB_SOMA {$$ = $1;}
				   | ATRIB_SUB  {$$ = $1;}
				   | ATRIB_MULT {$$ = $1;}
				   | ATRIB_DIV  {$$ = $1;}
				   | ATRIB_MOD  {$$ = $1;}
                   ;

atribuicao_unaria	: INC {$$ = $1;}
					| DEC {$$ = $1;}
    				;

repeticao : bloco_enquanto       {$$ = $1;}
		  | bloco_faca_enquanto  {$$ = $1;}
		  | bloco_para           {$$ = $1;}
		  ;

bloco_enquanto : ENQUANTO LPARENTESES expressao RPARENTESES EXECUTE 
				 LCHAVE 	{pushBlockScope("enquanto",whileCounter);
							whileCounter++;}
				sentencas {popScope();} RCHAVE {int tamanho = 25 + strlen($3) + strlen($8);
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "Enquanto (%s) Execute {\n%s\n}", $3, $8); 
												$$ = str; 
												free($3), free($8);}
				;
			   
bloco_faca_enquanto : EXECUTE LCHAVE {	pushBlockScope("facaenquanto",doWhileCounter);
										doWhileCounter++;}
					sentencas {popScope();} 
					RCHAVE ENQUANTO LPARENTESES expressao RPARENTESES {int tamanho = 25 + strlen($4) +strlen($9);
																	  char * str = (char *) malloc(tamanho); 
																	  sprintf(str, "Execute {\n%s\n} Enquanto (%s)", $4, $9); 
																	  $$ = str;
																	  free($4), free($9);}
			        ;
			   
bloco_para : PARA LPARENTESES {pushBlockScope("para",forCounter);
								forCounter++;} 
			declaracao_para {popScope();} PONTOVIRGULA
			expressao PONTOVIRGULA comando_para RPARENTESES 
			EXECUTE LCHAVE sentencas RCHAVE 		{int tamanho = 22 + strlen($4) + strlen($7) + strlen($9) + strlen($13);
													char * str = (char *) malloc(tamanho); 
													sprintf(str, "Para (%s;%s;%s) Execute{\n%s\n}", $4, $7, $9, $13); 
													$$ = str;
													free($4); free($7); free($9); free($13);}
		   ;			   

declaracao_para:			 {char * str = (char *) malloc(2); str = strdup(" "); $$ = str;}
				| declaracao {$$ = $1;}
				;

comando_para :			{char * str = (char *) malloc(2); str = strdup(" "); $$ = str;}
			 | comando	{$$ = $1;}
			 ;

imprime : IMPRIMA LPARENTESES termos RPARENTESES	{int tamanho = 10 + strlen($3);
													char * str = (char *) malloc(tamanho); 
													sprintf(str, "Imprima(%s)", $3); 
													$$ = str; 
													free($3);} 
		;

leia	: LEIA LPARENTESES ids RPARENTESES	{int tamanho = 7 + strlen($3);
											char * str = (char *) malloc(tamanho); 
											sprintf(str, "Leia(%s)", $3); 
											$$ = str; 
											free($3);}
		;
 
declaracao : tipo ID					 {int tamanho = 2 + strlen($1) + strlen($2);
										 char * str = (char *) malloc(tamanho); 
										 sprintf(str, "%s %s", $1, $2); 
										 $$ = str;
										 free($1); free($2);}  
			| tipo ID ATRIB expressao	{int tamanho = 4 + strlen($1)+ strlen($2) + strlen($3) + strlen($4);
									     char * str = (char *) malloc(tamanho); 
										 sprintf(str, "%s %s %s %s", $1, $2, $3, $4); 
										 $$ = str;
										 free($1); free($2);free($3); free($4);}
			
			;


expressao	: termo {$$ = $1;}
			| operador_unario expressao	{int tamanho = 2 + strlen($1) + strlen($2);
										char * str = (char *) malloc(tamanho); 
										sprintf(str, "%s %s", $1, $2); 
										$$ = str;
										free($1); free($2);}
			| termo operador_binario expressao {int tamanho = 3 + strlen($1) + strlen($2) + strlen($3);
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "%s %s %s", $1, $2, $3); 
												$$ = str; 
												free($1); free($2); free($3);}
			| LPARENTESES expressao RPARENTESES {int tamanho = 3 + strlen($2);
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "(%s)", $2); 
												$$ = str; 
												free($2);}
			| chamada_funcao operador_binario expressao 	{int tamanho = 3 + strlen($1) + strlen($2) + strlen($3);
															char * str = (char *) malloc(tamanho); 
															sprintf(str, "%s %s %s", $1, $2, $3); 
															$$ = str; 
															free($1); free($2); free($3);}
			;

operador_unario :	SUB					{$$ = $1;}
				|	NEGACAO				{$$ = $1;}
				|	ARROBA				{$$ = $1;}
				;

operador_binario	: operador_booleano    {$$ = $1;}
					| operador_relacional  {$$ = $1;}
					| operador_aritmetico  {$$ = $1;}
		            ;	
		            
operador_relacional  : MENORIGUAL   		 {$$ = $1;}
					 | MAIORIQUAL            {$$ = $1;} 
					 | IGUAL                 {$$ = $1;}
					 | DIFERENTE             {$$ = $1;}
					 | MAIOR                 {$$ = $1;}
					 | MENOR                 {$$ = $1;}
					 ;
					 
operador_aritmetico : MULT                  {$$ = $1;}
				    | DIV                   {$$ = $1;}
				    | MOD                   {$$ = $1;}
				    | EXP                   {$$ = $1;}
				    | SUB                   {$$ = $1;}
				    | SOMA                  {$$ = $1;}
				    ;
				 
operador_booleano : E_LOG		        	{$$ = $1;}
					| OU_LOG	            {$$ = $1;}
					;

tipo : tipo_primitivo	{$$ = $1;}
	 | tipo_vetor       {$$ = $1;}
	 | tipo_registro	{$$ = $1;}
	 ;
	 
tipo_registro : MEU_TIPO ID		{int tamanho = 9+strlen($2);
								char* str = (char*)malloc(tamanho);
								sprintf(str, "MeuTipo %s", $2);
								$$ = str;
								free($2);}
			  ;

tipo_vetor : VETOR tipo_primitivo tamanho_vetor tamanho_vetor	{int tamanho = 8+strlen($2)+ strlen($3) +strlen($4);
																 char* str = (char*)malloc(tamanho);
																 sprintf(str, "Vetor %s %s%s", $2, $3, $4);
																 $$ = str;
																 free($2); free($3); free($4);}
	        | VETOR tipo_primitivo tamanho_vetor 	{int tamanho = 8+strlen($2)+strlen($3);
													char* str = (char*)malloc(tamanho);
													sprintf(str, "Vetor %s %s", $2, $3);
													$$ = str; 
													free($2); free($3);}
			;

tamanho_vetor : LCOLCHETE termo RCOLCHETE {int tamanho = 3+strlen((char*)$2);
											 char* str = (char*)malloc(tamanho);
											 sprintf(str, "[%s]",$2);
											 $$ = str;
											 free($2);}
			  ;

tipo_primitivo : INTEIRO 	{$$ = $1;}
			   | REAL 		{$$ = $1;}
			   | CARACTERE	{$$ = $1;}
			   | TEXTO		{$$ = $1;}
			   | BOOL		{$$ = $1;}
			   ;

termos : termo					{$$ = $1;}
	   | termo VIRGULA termos	{int tamanho = strlen($1) + strlen($3) + 3;
								char* str = (char*) malloc(tamanho);
								sprintf(str, "%s, %s", $1, $3);
								$$ = str; 
								free($1);
								free($3);}
	   ;
	   
ids : ID			 {$$ = $1;}
	| ID VIRGULA ids {int tamanho = strlen($1)+1+strlen($3)+3;
					char* str = malloc(tamanho);
					sprintf(str, "%s, %s",$1,$3);
					$$ = str; 
					free($1); free($3);}
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
	int resultado =yyparse ( );
	return resultado;
}

int yyerror (char *msg) {
	fprintf (stderr, "-- %d: %s at '%s'\n", yylineno, msg, yytext);
	//destrua conteudo e fecha arquivo e exit
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

void pushBlockScope(char*nome, int ordem){
	ElementoTipoNome * item = mostrarTopo(&scope_stack);
	printf("nome do escopo: %s\n",item->scopeName);
	char * escopoPai = (char*) malloc(strlen(item->scopeName));
	
	

	char ordemStr [10];
	sprintf(ordemStr, "%d", ordem);
	
	int tamanho = strlen(escopoPai) + strlen(nome)+strlen(ordemStr)+1;
	char* resultado = (char*) malloc(tamanho);
	strcpy(resultado,escopoPai);
	strcat(resultado,nome);
	strcat(resultado,ordemStr);
	//strcat(resultado,"\0");
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
	char* key = (char*) malloc(strlen(scope)+strlen(name)+1);
	strcpy(key,scope);
	strcat(key,name);
	Symbol *item = createSymbol(key,name,scope,type);
	int result = insert(&symbol_table,item);
	printf("tamanho da hash: %d\n",symbol_table.size);
	return result;
	free(key);
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