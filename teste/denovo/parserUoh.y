%{
#include <stdio.h>
#include <string.h>

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;

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

%type <sValue> termo literal imprime leia sentencas sentenca tipo tipo_primitivo declaracao expressao 
operador_unario operador_binario operador_relacional operador_aritmetico operador_booleano comando atribuicao
bloco_principal atribuicao_binaria atribuicao_unaria controle bloco_se se_simplificado
bloco_enquanto bloco_faca_enquanto bloco_para repeticao
		   ;
%%

programa : bloco_principal
         ;

bloco_principal : BPRINCIPAL LCHAVE sentencas RCHAVE   {printf("BlocoPrincipal {\n%s}\n",$3);}
				;



sentencas: {$$ = "";}
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
		| se_simplificado SENAO LCHAVE sentencas RCHAVE {int tamanho = strlen((char*)$1)+ 10 + strlen((char*)$4) + 2;
														char * str = (char *) malloc(tamanho); 
														sprintf(str, "%s%s %s %s", (char*)$1, "\nSenao {", (char *) $4, "}"); 
														$$ = str; free($1);}
		| se_simplificado SENAO se_simplificado			{int tamanho = strlen((char*)$1)+ 9 + strlen((char*)$3);
														char * str = (char *) malloc(tamanho); 
														sprintf(str, "%s%s %s", (char*)$1, "\nSenao", (char *) $3); 
														$$ = str; free($1);}
		;		 

se_simplificado : SE LPARENTESES expressao RPARENTESES EXECUTE LCHAVE sentencas RCHAVE	{ int tamanho = 5 + strlen((char *) $3) + 13 + strlen((char *) $7) + 2;
																						char * str = (char *) malloc(tamanho); 
																						sprintf(str, "%s %s %s %s %s", 
																						"Se (", (char *) $3, ") Execute {", (char *) $7, "}"); 
																						$$ = str; free($3);}
			  ;

comando:   declaracao 	{$$ = $1;}
		 | imprime		{$$ = $1;}
		 | leia 		{$$ = $1;}
		 | expressao	{$$ = $1;}
         | atribuicao	{$$ = $1;}
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

bloco_enquanto : {}
			   ;
			   
bloco_faca_enquanto : {}
			        ;
			   
bloco_para : {}
		   ;			   
		  
imprime : IMPRIME LPARENTESES termo RPARENTESES {int tamanho = 9 + strlen((char*)$3)+1;
													 char * str = (char *) malloc(tamanho); 
													 sprintf(str, "%s%s%s", "Imprima (", (char *) $3, ")"); 
													 $$ = str; free($3);} /* malloc */
		;

leia	: LEIA LPARENTESES termo RPARENTESES	{int tamanho = 6 + strlen((char *) $3) + 1;
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "%s%s%s", "Leia (", (char *) $3, ")"); 
												$$ = str; free($3);}
		;
 
declaracao : tipo ID				{int tamanho = strlen((char*)$1)+ 1 + strlen((char*)$2);
									 char * str = (char *) malloc(tamanho); 
									 sprintf(str, "%s %s", (char*)$1, (char *) $2); 
									 $$ = str;free($2);}  //TIPO Não pode ser free
			| tipo ID ATRIB expressao	{int tamanho = strlen((char*)$1)+ 1 + strlen((char*)$2) + 3 + strlen((char*)$4);
								     char * str = (char *) malloc(tamanho); 
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
	 ;

tipo_primitivo : INTEIRO 	{$$ = "Inteiro";}
			   | REAL 		{$$ = "Real";}
			   | CARACTERE	{$$ = "Caractere";}
			   | VETOR		{$$ = "Vetor";}
			   | TEXTO		{$$ = "Texto";}
			   | BOOL		{$$ = "Booleano";}
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
	return yyparse ( );
}

int yyerror (char *msg) {
	fprintf (stderr, "-- %d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}

/*void insertSymbolTable(char* info){
	int i;
	int rows = 100;
	char** table = (char*)malloc(rows*sizeof(char*));
	
	for(i=0; i< rows; i++){
		if(table[i] == NULL){
			table[i] = info;
		}
	}

}*/

