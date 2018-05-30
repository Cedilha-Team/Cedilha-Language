%{
#include <stdio.h>
#include <string.h>

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;

%}

%union {
	int    iValue; 	/* integer value */
	double dValue;  /* double value*/
	char   cValue; 	/* char value */
	char * sValue;  /* string value */
	};

%token <sValue> ID LIT_TEXTO
%token <iValue> LIT_INT
%token <dValue> LIT_REAL
%token LIT_BOOL BPRINCIPAL BFUNCOES FUNCAO
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

%type <sValue> bloco_principal sentencas sentenca tipo_primitivo tipo operador termo expressao literal comando declaracao declaracao_simples 
imprime bloco_funcoes funcoes_proc definicoes_funcoes definicoes_procedimentos definicao_funcao definicao_procedimento parametros parametro

%%

programa : bloco_principal bloco_funcoes
         ;

bloco_principal : BPRINCIPAL LCHAVE sentencas RCHAVE   {printf("BlocoPrincipal {\n %s\n }\n",$3);}
				;

sentencas :sentenca PONTOVIRGULA       			{char * str = (char *) malloc(strlen($1) + 1);
												sprintf(str, "%s %s", (char*) $1, ";"); 
												$$ = str; free($1);}
		  | sentenca PONTOVIRGULA sentencas 	{char * str = (char *) malloc(strlen($1) + strlen(";\n\n") +  strlen($3)); 
												sprintf(str, "%s %s %s", (char *) $1, ";\n\n", (char *) $3); 
												$$ = str; free $1; free $3;}
		  ;

sentenca : comando  		{$$ = $1;}
		 ;

comando : declaracao    	{$$ = $1;}
		| imprime			{$$ = $1;}
		;
			  
imprime : IMPRIME LPARENTESES literal RPARENTESES 	{char * str = (char *) malloc(9 + strlen($3) + 1); 
													 sprintf(str, "%s %s %s", "Imprime (", (char *) $3, ")"); 
													 $$ = str; free($3);} /* malloc */
		| IMPRIME LPARENTESES ID RPARENTESES 		{char * str = (char *) malloc(100); 
													 sprintf(str, "%s %s %s", "Imprime (", (char *) $3, ")"); 
													 $$ = str;}
		;
		

declaracao : declaracao_simples 			{$$ = $1;}

declaracao_simples : tipo ID ATRIB expressao  {char * str = (char *) malloc(100); sprintf(str, "%s %s %s %s", (char*) $1, (char*) $2," = ", (char*) $4);$$ = str;}
				   | tipo ID                  {char * str = (char *) malloc(10); sprintf(str, "%s %s", (char*) $1, (char*) $2); $$ = str;}
				   ;

expressao : termo operador expressao  {char * str = (char *) malloc(100); sprintf(str, "%s %s %s", (char*) $1, (char*) $2, (char*) $3); $$ = str;}
		  | termo                     {$$ = $1;}
		  ;

termo : ID       {$$ = $1;}
      | literal  {$$ = $1;}
      ;

literal : LIT_REAL  {char * str = (char *) malloc(10); sprintf(str, "%f", (double) $1); $$ = str;}
		| LIT_BOOL  { $$ = "booleano literal";}
		| LIT_INT   {char * str = (char *) malloc(10); sprintf(str, "%d", (int) $1); $$ = str;}
 		| LIT_TEXTO {$$ = $1;}
		;

operador : MULT                  {$$ = "*";}
		 | DIV                   {$$ = "/";}
		 | MOD                   {$$ = "%";}
		 | EXP                   {$$ = "^";}
		 | SUB                   {$$ = "-";}
		 | SOMA                  {$$ = "+";}
		 ;

tipo : tipo_primitivo	{$$ = $1;}
	 ;

tipo_primitivo : INTEIRO 	{$$ = "Inteiro";}
			   | REAL 		{$$ = "Real";}
			   | CARACTERE	{$$ = "Caractere";}
			   | VETOR		{$$ = "Vetor";}
			   | TEXTO		{$$ = "Texto";}
			   ;
		
bloco_funcoes : {$$ = "";}
              | BFUNCOES LCHAVE funcoes_proc RCHAVE   {char * str = (char *) malloc(14 + strlen($3) + 2); 
													 sprintf(str, "%s %s %s", "BlocoFuncoes {", (char *) $3, " }"); 
													 $$ = str; free($3);}
			  ;

funcoes_proc : definicoes_funcoes definicoes_procedimentos {char * str = (char *) malloc(strlen($1) + 1 + strlen($2)); 
													 sprintf(str, "%s %s", (char *) $1, (char *) $2); 
													 $$ = str; free($1); free($2);}
			 ;

definicoes_funcoes : {$$ = "";}
				   | definicao_funcao  {char * str = (char *) malloc(strlen($1)); 
										sprintf(str, "%s", (char*)$1);
										$$ = str; free($1);}
				   ;

definicoes_procedimentos : {$$ = "";}
				         | definicao_procedimento			{char * str = (char *) malloc(strlen($1)); 
															sprintf(str, "%s", (char*)$1);
															$$ = str; free($1);}
				         ;
				         
definicao_funcao : FUNCAO tipo ID parametros LCHAVE sentencas RETORNE termo RCHAVE	{char * str = (char *) malloc(5 + strlen($2) + 1 + strlen($3) + 1 
																					+ strlen($4) + 2 + strlen($6) + 8 +strlen($8) + 2); 
																					 
																					 sprintf(str, "%s %s %s %s %s %s %s %s %s", 
																					 "Func", (char *) $2, (char *) $3, (char *) $4,  
																					 "{", (char *) $6, "Retorne", (char *) $8, "}"); 
																					 $$ = str; 
																					 
																					 free($2); free($3); 
																					 free($4); free($6); 
																					 free($8); }
				 ;

definicao_procedimento : PROC ID parametros LCHAVE sentencas RCHAVE		{char * str = (char *) malloc(5 + strlen($2) + 1 + strlen($3) + 2 
																			+ strlen($5) + 2); 
																					 
																		sprintf(str, "%s %s %s %s %s %s", 
																			"Proc", (char *) $2, (char *) $3, "{",  
																			(char *) $5, "}"); 
																		$$ = str; 
																			
																				 
																		 free($2);
																		 free($3);
																		 free($5);}
					   ;

parametros :											{$$ = "";}
           | parametro VIRGULA parametros				{char * str = (char *) malloc(strlen($1) + 2 + strlen($3)); 
														sprintf(str, "%s%s %s", (char *) $1, ",", (char *) $3); 
														$$ = str; free($1); free($3);}
           | parametro {$$ = $1;}
           ;

parametro : tipo ID   {char * str = (char *) malloc(strlen($1) + 1 + strlen($2)); 
						sprintf(str, "%s %s", (char *) $1, (char *) $2); 
						$$ = str; free($1); free($2);}
		  ;

%%

int main (void) {
	return yyparse ( );
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
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

