%{
#include <stdio.h>

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
%token LIT_BOOL NEGACAO BPRINCIPAL BFUNCOES FUNCAO
%token TEXTO CARACTERE REAL INTEIRO VETOR MEU_TIPO
%token SE IMPRIME INCLUIR PARE ENQUANTO PROC PARA FACA ENTAO EXECUTE SENAO CONSTANTE MEU_TIPO RETORNE
%token ASPAS_DUPLAS ASPAS_SIMPLES LCOLCHETE RCOLCHETE LCHAVE RCHAVE LPARENTESES RPARENTESES
%token MENORIGUAL MAIORIQUAL IGUAL DIFERENTE MAIOR MENOR ATRIB ATRIB_SOMA ATRIB_SUB ATRIB_MULT ATRIB_DIV ATRIB_MOD
%token NEGACAO INC DEC E_LOG OU_LOG ARROBA VIRGULA PONTOVIRGULA
%token MULT SUB SOMA DIV MOD EXP


%left	SOMA	MENOS
%left	MULT	DIV    MOD
%right	EXP

%start programa

%%

programa : inclusoes bloco_principal bloco_funcoes   {}
	     ;

inclusoes : /*vazio*/
		  | INCLUIR biblioteca PONTOVIRGULA inclusoes   {}
		  ;

biblioteca : ASPAS_DUPLAS ID ASPAS_DUPLAS
		   ;


bloco_principal : BPRINCIPAL LCHAVE sentencas RCHAVE   {}
				;

sentencas : /*vazio*/						    {}
		  | sentenca PONTOVIRGULA sentencas    {}
		  ;

sentenca : comando     {}
		 | controle    {}
		 | repeticao   {}
		 ;

comando : chamada_funcao  {}
		| declaracao      {}
		| atribuicao      {}
		;

controle : bloco_se    {}
		 | PARE        {}
		 ;

bloco_se : se_simplificado                                 {}
		 | se_simplificado SENAO LCHAVE sentencas RCHAVE   {}
		 | se_simplificado SENAO se_simplificado           {} /*else if - falar com professor*/
		 ;

se_simplificado : SE LPARENTESES expressao_booleana RPARENTESES EXECUTE LCHAVE sentencas RCHAVE
			  ;

repeticao : bloco_enquanto       {}
		  | bloco_faca_enquanto  {}
		  | bloco_para           {}
		  ;

bloco_enquanto : ENQUANTO LPARENTESES expressao_booleana RPARENTESES EXECUTE LCHAVE sentencas RCHAVE {}
			   ;

bloco_faca_enquanto : EXECUTE LCHAVE sentencas RCHAVE ENQUANTO LPARENTESES expressao_booleana RPARENTESES {}
					;

bloco_para : PARA LPARENTESES declaracao PONTOVIRGULA expressao_booleana PONTOVIRGULA expressao RPARENTESES EXECUTE LCHAVE sentencas RCHAVE {}
			;

declaracao : tipo ID ATRIB expressao  {}
		   | tipo ID                  {}
		   ;

atribuicao : ID atribuicao_binaria expressao   {}
		   | ID atribuicao_unaria              {}
		   ;

atribuicao_binaria : ATRIB_SOMA {}
				   | ATRIB_SUB  {}
				   | ATRIB_MULT {}
				   | ATRIB_DIV  {}
				   | ATRIB_MOD  {}
                   ;

atribuicao_unaria : INC {}
				  | DEC {}
                  ;

expressao : termo operador expressao  {}
		  | termo                     {}
		  | chamada_funcao            {}
		  ;

termo : ID       {}
      | literal  {}
      ;

literal : LIT_REAL  {}
		| LIT_BOOL  {}
		| LIT_INT   {}
 		| LIT_TEXTO {}
		;

expressao_booleana : ID operador_comparacao expressao  {}
				   | ID                                {}
				   | booleano                          {}
				   | booleano operador_logico expressao_booleana {}
				   ;

operador : MULT                  {}
		 | DIV                   {}
		 | MOD                   {}
		 | EXP                   {}
		 | SUB                   {}
		 | SOMA                  {}
		 | atribuicao_binaria    {}
		 ;


operador_comparacao : MENORIGUAL    {}
					| MAIORIQUAL    {} 
					| IGUAL         {}
					| DIFERENTE     {}
					| MAIOR         {}
					| MENOR         {}
                    ;

operador_logico : E_LOG		{}
				| OU_LOG	{}
				;

booleano : LIT_BOOL 										{}		{}
         | NEGACAO booleano							    {}
         ;

bloco_funcoes :
              | BFUNCOES LCHAVE funcoes_proc RCHAVE   {}
			  ;

funcoes_proc : definicoes_funcoes definicoes_procedimentos
			 ;

definicoes_funcoes : /*vazio*/
				   | definicao_funcao
				   ;

definicoes_procedimentos : /*vazio*/
				         | definicao_procedimento
				         ;


definicao_funcao : FUNCAO tipo ID parametros LCHAVE sentencas RCHAVE	{}
				 ;

definicao_procedimento : PROC ID parametros LCHAVE sentencas RCHAVE		{}
					   ;

parametros : {/*vazio*/}
           | parametro VIRGULA parametros
           | parametro
           ;

parametro : tipo ID
		  ;

tipo : tipo_primitivo	{}
	 | tipo_estruturado {}
	 ;

tipo_primitivo : INTEIRO 		{}
			   | REAL 		{}
			   | CARACTERE	{}
			   | VETOR		{}
			   | TEXTO		{}
			   ;

tipo_estruturado : MEU_TIPO ID LPARENTESES parametros RPARENTESES	{}
				 | VETOR LCOLCHETE LIT_INT RCOLCHETE				{} /*ver com professor*/
				 ;


chamada_funcao : ID  LPARENTESES parametros RPARENTESES	{} /*VER COM O GRUPO O Q É ISSO?*/
			   ;

%%

int main (void) {
	return yyparse ( );
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}

