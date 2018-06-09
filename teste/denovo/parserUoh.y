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
operador_unario operador_binario operador_relacional operador_aritmetico operador_booleano

%%
programa : sentencas {printf("%s\n",$1);}
		 ;

sentencas: {$$ = "";}
		 | sentenca PONTOVIRGULA sentencas {int tamanho = strlen((char*)$1)+ 3 + strlen((char*)$3);
											char * str = (char *) malloc(tamanho); 
													 sprintf(str, "%s%s\n%s", (char*)$1, ";", (char *) $3); 
													 $$ = str; free($1);}
		 ;


sentenca:declaracao {$$ =$1;}
		 | imprime	{$$ = $1;}
		 | leia 	{$$ = $1;}
		 | expressao {$$ = $1;}
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

tipo : tipo_primitivo	{$$ = $1;}
	 ;

tipo_primitivo : INTEIRO 	{$$ = "Inteiro";}
			   | REAL 		{$$ = "Real";}
			   | CARACTERE	{$$ = "Caractere";}
			   | VETOR		{$$ = "Vetor";}
			   | TEXTO		{$$ = "Texto";}
			   | BOOL		{$$ = "Booleano";}
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

