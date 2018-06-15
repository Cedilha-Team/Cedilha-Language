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
"Se"                    { return(SE);}
"Inteiro"               { yylval.sValue = strdup(yytext); return(INTEIRO);}
"Booleano"				{ yylval.sValue = strdup(yytext); return(BOOL);}
"Imprima"               { return(IMPRIMA);}
"Leia"            		{ return(LEIA);}
"Vetor"                 { yylval.sValue = strdup(yytext); return(VETOR);}
"Pare"                  { yylval.sValue = strdup(yytext); return(PARE);}
"Enquanto"              { return(ENQUANTO);}
"Proc"		            { return(PROC);}
"Para"                  { return(PARA);}
"Execute"               { return(EXECUTE);}
"Senao"                 { return(SENAO);}
"Caractere"				{ yylval.sValue = strdup(yytext); return(CARACTERE);}
"Constante"				{ return(CONSTANTE);}
"Real"					{ yylval.sValue = strdup(yytext); return(REAL);}
"MeuTipo"				{ return(MEU_TIPO);}
"Retorne"				{ return(RETORNE);}
"Texto"					{ yylval.sValue = strdup(yytext); return(TEXTO);}
"Funcao"				{ return(FUNCAO);}
"BlocoPrincipal"		{ return(BPRINCIPAL);}
"BlocoFuncoes"			{ return(BFUNCOES);}
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
"#"						{ return (CERQUILHA); }
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
","                     { return(VIRGULA);}
";"                     { return(PONTOVIRGULA);}
"["                     { return(LCOLCHETE);}
"]"                     { return(RCOLCHETE);}
"{"                     { return (LCHAVE);}
"}"                     { return (RCHAVE);}
"("                     { return(LPARENTESES);}
")"                     { return(RPARENTESES);}
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


