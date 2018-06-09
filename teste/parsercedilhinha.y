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
%token LIT_BOOL BPRINCIPAL BFUNCOES FUNCAO BOOL
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
controle bloco_se se_simplificado operador_relacional operador_logico booleano repeticao bloco_enquanto bloco_faca_enquanto
bloco_para chamada_funcao parametros_chamada parametro_chamada atribuicao atribuicao_binaria atribuicao_unaria tipo_estruturado tipos_estruturados
leia assinatura_funcoes assinatura_funcao expressao_relacional expressao_logica

%%

programa : tipos_estruturados assinatura_funcoes bloco_principal bloco_funcoes
         ;
         
tipos_estruturados	:										{$$ = "";}
					| tipo_estruturado tipos_estruturados	{char * str = (char *) malloc(strlen($1) + 1 + strlen($2));
															sprintf(str, "%s %s", (char*) $1, (char*) $2); 
															$$ = str; free($1);}
					;

bloco_principal : BPRINCIPAL LCHAVE sentencas RCHAVE   {printf("BlocoPrincipal {\n %s\n }\n",$3);}
				;

sentencas : 									{$$ = "";}
		  | sentenca PONTOVIRGULA sentencas 	{char * str = (char *) malloc(strlen($1) + 1 + strlen(";\n\n") + 1 +  strlen($3)); 
												sprintf(str, "%s %s %s", (char *) $1, ";\n\n", (char *) $3); 
												$$ = str; free ($1);}
		  ;
		  
assinatura_funcoes :														{$$ = "";}
					| assinatura_funcao PONTOVIRGULA assinatura_funcoes		{char * str = (char *) malloc(strlen($1) + 1 + strlen(";\n\n") + 1 +  strlen($3)); 
																			sprintf(str, "%s %s %s", (char *) $1, ";\n\n", (char *) $3); 
																			$$ = str; free ($1);}

assinatura_funcao : FUNCAO tipo ID LPARENTESES parametro RPARENTESES		{char * str = (char *) malloc(7 + strlen($2) + strlen($3) + 6 + strlen($5) + 12 ); 
																									sprintf(str, "%s %s %s %s %s %s", "Funcao",	(char *) $2, (char *) $3, "(", (char*)$5, ")" ); 
																									$$ = str;} 
					;

	/*Funcao1 Inteiro2 somarPara3 (4 Inteiro5 max6 )7 {8 retorna9 }10 ;11*/

sentenca : comando  		{$$ = $1;}
		 | controle 		{$$ = $1;} 
		 | repeticao		{$$ = $1;}
		 ;

comando : chamada_funcao  {$$ = $1;}
		| declaracao      {$$ = $1;}
		| atribuicao      {$$ = $1;}
		| imprime		  {$$ = $1;}
		| leia			  {$$ = $1;}
		;
		
controle : bloco_se 		{$$ = $1;}
		 | PARE     		{$$ = "Pare";}
		 ;
		 
bloco_se : se_simplificado                                 {$$ = $1;}
		 | se_simplificado SENAO LCHAVE sentencas RCHAVE   {char * str = (char *) malloc(strlen($1) + 9 + strlen($4) + 2); 
															sprintf(str, "%s %s %s %s", (char *) $1, "Senao {", (char *) $4, "}"); 
															$$ = str; free($1); free($4);}
		 | se_simplificado SENAO se_simplificado           {char * str = (char *) malloc(strlen($1) + 7 + strlen($3)); 
															sprintf(str, "%s %s %s", (char *) $1, "Senao", (char *) $3); 
															$$ = str; free($1); free($3);}
		 ;

se_simplificado : SE LPARENTESES expressao RPARENTESES EXECUTE LCHAVE sentencas RCHAVE	{char * str = (char *) malloc(5 + strlen($3) + 13 + strlen($7) + 2); 
																					 
																								sprintf(str, "%s %s %s %s %s", 
																								"Se (", (char *) $3, ") Execute {", (char *) $7, "}"); 
																								$$ = str; 
																					 
																								free($3); free($7);}
			  ;
		
			  
imprime : IMPRIME LPARENTESES literal RPARENTESES 	{char * str = (char *) malloc(9 + strlen($3) + 1); 
													 sprintf(str, "%s %s %s", "Imprima (", (char *) $3, ")"); 
													 $$ = str; free($3);} /* malloc */
		| IMPRIME LPARENTESES ID RPARENTESES 		{char * str = (char *) malloc(100); 
													 sprintf(str, "%s %s %s", "Imprime (", (char *) $3, ")"); 
													 $$ = str;}
		;
		
leia	: LEIA LPARENTESES termo RPARENTESES			{char * str = (char *) malloc(100); 
													 sprintf(str, "%s %s %s", "Leia (", (char *) $3, ")"); 
													 $$ = str;}
		;
		
repeticao : bloco_enquanto       {$$ = $1;}
		  | bloco_faca_enquanto  {$$ = $1;}
		  | bloco_para           {$$ = $1;}
		  ;

bloco_enquanto : ENQUANTO LPARENTESES expressao RPARENTESES EXECUTE LCHAVE sentencas RCHAVE {char * str = (char *) malloc(22 + strlen($3) + 13 + strlen( $7 )); 
																									  sprintf(str, "%s %s %s %s %s", "Enquanto (", (char *) $3, ") Execute {", 
																									  (char *)  $7, "}"); 
																									  $$ = str; free($3), free($7);}
			   ;

bloco_faca_enquanto : EXECUTE LCHAVE sentencas RCHAVE ENQUANTO LPARENTESES expressao RPARENTESES {char * str = (char *) malloc(11 + strlen($3) + 14 + strlen( $7 )); 
																										   sprintf(str, "%s %s %s %s %s", "Execute {", (char *) $3, "} Enquanto (", 
																										   (char *)  $7, ")"); 
																										   $$ = str; free($3), free($7);}
					;

bloco_para : PARA LPARENTESES declaracao PONTOVIRGULA expressao PONTOVIRGULA expressao RPARENTESES EXECUTE LCHAVE sentencas RCHAVE {char * str = (char *) malloc(7 + strlen($3) + strlen($5) + 1 + strlen($7) + 13 + strlen($11) + 2); 
																																		     sprintf(str, "%s %s %s %s %s %s %s %s %s", "Para (", (char *) $3, ";", 
																																		     (char *)  $5, ";", (char *)$7, ") Execute {", (char *)$11, "}"); 
																																		     $$ = str; free($3),  free($5), free($7), free($11);}
			;



declaracao : declaracao_simples 			{$$ = $1;}

declaracao_simples : tipo ID ATRIB expressao  {char * str = (char *) malloc(100); sprintf(str, "%s %s %s %s", (char*) $1, (char*) $2," = ", (char*) $4);$$ = str;}
				   | tipo ID                  {char * str = (char *) malloc(10); sprintf(str, "%s %s", (char*) $1, (char*) $2); $$ = str;}
				   ;
				   
				   
atribuicao : ID atribuicao_binaria expressao   {char * str = (char *) malloc(strlen($1) + 1 + strlen($2) + 1 + strlen( $3 )); 
												sprintf(str, "%s %s %s", (char *) $1, (char *) $2, (char *) $3); }
		   | ID atribuicao_unaria              {char * str = (char *) malloc(strlen($1) + 1 + strlen($2)); 
												sprintf(str, "%s %s", (char *) $1, (char *) $2); }
		   | ID atribuicao_binaria expressao   {char * str = (char *) malloc(strlen($1) + 1 + strlen($2) + 1 + strlen( $3 )); 
												sprintf(str, "%s %s %s", (char *) $1, (char *) $2, (char *) $3); }
		   ;
		   
atribuicao_binaria : ATRIB_SOMA {$$ = "+=";}
				   | ATRIB_SUB  {$$ = "-=";}
				   | ATRIB_MULT {$$ = "*=";}
				   | ATRIB_DIV  {$$ = "/=";}
				   | ATRIB_MOD  {$$ = "%=";}
                   ;

atribuicao_unaria : INC {$$ = "++";}
				  | DEC {$$ = "--";}
                  ;

expressao : termo operador expressao  {char * str = (char *) malloc(100); sprintf(str, "%s %s %s", (char*) $1, (char*) $2, (char*) $3); $$ = str;}
		  | termo                     {$$ = $1;}
		  | expressao_logica		  {$$ = $1;}
		  | expressao_relacional	  {$$ = $1;}
		  ;

termo : ID       {$$ = $1;}
      | literal  {$$ = $1;}
      ;

literal : LIT_REAL  {char * str = (char *) malloc(10); sprintf(str, "%f", (double) $1); $$ = str;}
		| LIT_BOOL  { $$ = "booleano literal";}
		| LIT_INT   {char * str = (char *) malloc(10); sprintf(str, "%d", (int) $1); $$ = str;}
 		| LIT_TEXTO {$$ = $1;}
		;


expressao_logica : termo operador_logico expressao_logica		{}
				 | termo operador_logico expressao_logica		{}
				 | termo operador_logico expressao_relacional	{}
				 | booleano										{}
				 ;
				 
expressao_relacional : termo operador_relacional expressao_relacional		{}
					 | termo operador_relacional expressao_logica			{}
					 ;


operador : MULT                  {$$ = "*";}
		 | DIV                   {$$ = "/";}
		 | MOD                   {$$ = "%";}
		 | EXP                   {$$ = "^";}
		 | SUB                   {$$ = "-";}
		 | SOMA                  {$$ = "+";}
		 ;
		 
operador_relacional : MENORIGUAL    {$$ = "<=";}
					| MAIORIQUAL    {$$ = ">=";} 
					| IGUAL         {$$ = "==";}
					| DIFERENTE     {$$ = "!=";}
					
					| MAIOR         {$$ = "<";}
					| MENOR         {$$ = ">";}
                    ;
                    
operador_logico : E_LOG		{$$ = "&&";}
				| OU_LOG	{$$ = "||";}
				;
				
booleano : LIT_BOOL					{$$ = "Verdadeiro";}
         | ID						{$$ = $1;}
         | NEGACAO booleano			{char * str = (char *) malloc(2 + strlen($2)); 
									sprintf(str, "%s%s", "!", (char *) $2); 
									$$ = str; free($2);}  /*TODO VERIFICAR O NEGACAO WESLEY */
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
			   
tipo_estruturado : MEU_TIPO ID LPARENTESES parametros RPARENTESES		{char * str = (char *) malloc(8 + 2 + strlen($2) + 2 + strlen($4)+ 2); 
																	     sprintf(str, "%s %s %s %s %s", "MeuTipo", (char *) $2, "(", (char *) $4, ")" ); 
																	     $$ = str; free($2);free($4);}
				 /*| VETOR LCOLCHETE LIT_INT RCOLCHETE				{} /*ver com professor*/
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
																					 $$ = str; }
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
		  
parametros_chamada: {$$ = "";}
		           | parametro_chamada VIRGULA parametros {char * str = (char *) malloc(strlen($1) + 2 + strlen($3)); 
														   sprintf(str, "%s %s %s", (char *) $1, ",", (char *) $3); 
														   $$ = str; free($1); free($3);}
		           | parametro_chamada					  {$$ = $1;}
        			;
        			
parametro_chamada: ARROBA termo {char * str = (char *) malloc(1 + strlen($2));
								 sprintf(str, "%s%s","@", (char *) $2);
								 $$ = str;
								 free($2);}
	    		  | termo     {$$ = $1;}
	    		 ;
		  
		  
chamada_funcao : ID  LPARENTESES parametros_chamada RPARENTESES	{char * str = (char *) malloc(strlen($1) + 2 + strlen($3) + 2); 
																 sprintf(str, "%s %s %s %s", (char *) $1, "(", (char *) $3, ")"); 
																 $$ = str; free($1); free($3);} 
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

