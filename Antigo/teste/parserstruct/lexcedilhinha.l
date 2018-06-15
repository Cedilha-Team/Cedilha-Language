%{
#include <stdio.h>
#include "y.tab.h"

extern void yyerror(const char *);  /* prints grammar violation message */

extern int sym_type(const char *);  /* returns type from symbol table */

#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */
void comment();

%}


%%

"/*"                    {comment();}
\"(\\.|[^\\"])*\"       { yylval.sValue = strdup(yytext); return(LIT_TEXTO);}
("Verdadeiro"|"Falso")  { yylval.sValue = strdup(yytext); return(LIT_BOOL);}
#.*\n                   {}
"Se"                    { yylval.sValue = strdup(yytext); return(SE);}
"Inteiro"               { yylval.sValue = strdup(yytext); return(INTEIRO);}
"Booleano"				{ yylval.sValue = strdup(yytext); return(BOOL);}
"Imprima"               { yylval.sValue = strdup(yytext); return(IMPRIME);}
"Leia"            		{ yylval.sValue = strdup(yytext); return(LEIA);}
"Vetor"                 { yylval.sValue = strdup(yytext); return(VETOR);}
"Incluir"               { yylval.sValue = strdup(yytext); return(INCLUIR);}
"Pare"                  { yylval.sValue = strdup(yytext); return(PARE);}
"Enquanto"              { yylval.sValue = strdup(yytext); return(ENQUANTO);}
"Proc"		            { yylval.sValue = strdup(yytext); return(PROC);}
"Func"					{ yylval.sValue = strdup(yytext); return(FUNCAO);}
"Para"                  { yylval.sValue = strdup(yytext); return(PARA);}
"Execute"               { yylval.sValue = strdup(yytext); return(EXECUTE);}
"Senao"                 { yylval.sValue = strdup(yytext); return(SENAO);}
"Caractere"				{ yylval.sValue = strdup(yytext); return(CARACTERE);}
"Constante"				{ yylval.sValue = strdup(yytext); return(CONSTANTE);}
"Real"					{ yylval.sValue = strdup(yytext); return(REAL);}
"MeuTipo"				{ yylval.sValue = strdup(yytext); return(MEU_TIPO);}
"Retorne"				{ yylval.sValue = strdup(yytext); return(RETORNE);}
"Texto"					{ yylval.sValue = strdup(yytext); return(TEXTO);}
"Funcao"				{ yylval.sValue = strdup(yytext); return(FUNCAO);}
"BlocoPrincipal"		{ yylval.sValue = strdup(yytext); return(BPRINCIPAL);}
"BlocoFuncoes"			{ yylval.sValue = strdup(yytext); return(BFUNCOES);}
[0-9]*\.[0-9]+          { yylval.sValue = strdup(yytext); return(LIT_REAL);}
[0-9]+                  { yylval.sValue = strdup(yytext); return(LIT_INT);}
[a-zA-Z_][a-zA-Z0-9_]*  { yylval.sValue = strdup(yytext); return(ID);}
\"                      { yylval.sValue = strdup(yytext); return(ASPAS_DUPLAS);}
"'"                     { yylval.sValue = strdup(yytext); return(ASPAS_SIMPLES);}
"<="                    { yylval.sValue = strdup(yytext); return(MENORIGUAL);}
">="                    { yylval.sValue = strdup(yytext); return(MAIORIQUAL);}
"+="                    { yylval.sValue = strdup(yytext); return(ATRIB_SOMA);}
"-="                    { yylval.sValue = strdup(yytext); return(ATRIB_SUB);}
"*="					{ yylval.sValue = strdup(yytext); return (ATRIB_MULT); }
"/="					{ yylval.sValue = strdup(yytext); return (ATRIB_DIV); }
"%="					{ yylval.sValue = strdup(yytext); return (ATRIB_MOD); }
"++"                    { yylval.sValue = strdup(yytext); return(INC);}
"--"                    { yylval.sValue = strdup(yytext);  return(DEC);}
"&&"					{ yylval.sValue = strdup(yytext); return (E_LOG); }
"||"					{ yylval.sValue = strdup(yytext); return (OU_LOG); }
"#"						{ yylval.sValue = strdup(yytext); return (CERQUILHA); }
"!"						{ yylval.sValue = strdup(yytext); return (NEGACAO);}
"*"                     { yylval.sValue = strdup(yytext); return(MULT);}
"-"                     { yylval.sValue = strdup(yytext); return(SUB);}
"+"                     { yylval.sValue = strdup(yytext); return(SOMA);}
"/"                     { yylval.sValue = strdup(yytext); return(DIV);}
"%"                     { yylval.sValue = strdup(yytext); return(MOD);}
"^"                     { yylval.sValue = strdup(yytext); return(EXP);}
">"                     { yylval.sValue = strdup(yytext); return(MAIOR);}
"<"                     { yylval.sValue = strdup(yytext); return(MENOR);}
"="                     { yylval.sValue = strdup(yytext); return(ATRIB);}
"=="					{ yylval.sValue = strdup(yytext); return (IGUAL); }
"!="					{ yylval.sValue = strdup(yytext); return (DIFERENTE); }
"@"                     { yylval.sValue = strdup(yytext); return(ARROBA);}
","                     { yylval.sValue = strdup(yytext); return(VIRGULA);}
";"                     { yylval.sValue = strdup(yytext); return(PONTOVIRGULA);}
"["                     { yylval.sValue = strdup(yytext); return(LCOLCHETE);}
"]"                     { yylval.sValue = strdup(yytext); return(RCOLCHETE);}
"{"                     { yylval.sValue = strdup(yytext); return (LCHAVE);}
"}"                     { yylval.sValue = strdup(yytext); return (RCHAVE);}
"("                     { yylval.sValue = strdup(yytext); return(LPARENTESES);}
")"                     { yylval.sValue = strdup(yytext); return(RPARENTESES);}
(\ |\t|\n)+                {}
[\v\f]					{}
.	                    {/*yyerror(" Símbolo inválido");*/}

%%

void comment(void)
{
	char c, prev = 0;
  
	while ((c = input()) != 0)      /* (EOF maps to 0) */
	{
		if (c == '/' && prev == '*')
			return;
		prev = c;
	}
	error("unterminated comment");
}


#ifndef yywrap
   int yywrap (void) {return 1;}
#endif


