%{
#include <stdio.h>
#include "y.tab.h"

extern void yyerror(const char *);  /* prints grammar violation message */

extern int sym_type(const char *);  /* returns type from symbol table */

#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */


%}


%%

"/*"                    {comment();}
#.*\n                   {}
\"(\\.|[^\\"])*\"       { yylval.sValue = strdup(yytext); return(LIT_TEXTO);}
("Verdadeiro"|"Falso")  { yylval.sValue = strdup(yytext); return(LIT_BOOL);}
"Se"                    { return(SE);}
"Inteiro"               { return(INTEIRO);}
"Imprime"               { return(IMPRIME);}
"Leia"            		{ return(LEIA);}
"Vetor"                 { return(VETOR);}
"Incluir"               { return(INCLUIR);}
"Pare"                  { return(PARE);}
"Enquanto"              { return(ENQUANTO);}
"Proc"		            { return(PROC);}
"Func"					{ return(FUNCAO);}
"Para"                  { return(PARA);}
"Execute"               { return(EXECUTE);}
"Senao"                 { return(SENAO);}
"Caractere"				{ return(CARACTERE);}
"Constante"				{ return(CONSTANTE);}
"Real"					{ return(REAL);}
"MeuTipo"				{ return(MEU_TIPO);}
"Retorne"				{ return(RETORNE);}
"Retorna"				{ return(RETORNE);}
"Texto"					{ return(TEXTO);}
"BlocoPrincipal"		{ return(BPRINCIPAL);}
"BlocoFuncoes"			{ return(BFUNCOES);}
[0-9]*\.[0-9]+          { yylval.dValue = atof(yytext); return(LIT_REAL);}
[0-9]+                  { yylval.iValue = atoi(yytext); return(LIT_INT);}
[a-zA-Z_][a-zA-Z0-9]*   { yylval.sValue = strdup(yytext); return(ID);}
\"                      { return(ASPAS_DUPLAS);}
"'"                     { return(ASPAS_SIMPLES);}
"<="                    { return(MENORIGUAL);}
">="                    { return(MAIORIQUAL);}
"+="                    { return(ATRIB_SOMA);}
"-="                    { return(ATRIB_SUB);}
"*="					{ return (ATRIB_MULT); }
"/="					{ return (ATRIB_DIV); }
"%="					{ return (ATRIB_MOD); }
"++"                    { return(INC);}
"--"                    { return(DEC);}
"&&"					{ return (E_LOG); }
"||"					{ return (OU_LOG); }

"!"						{ return (NEGACAO);}
"*"                     { return(MULT);}
"-"                     { return(SUB);}
"+"                     { return(SOMA);}
"/"                     { return(DIV);}
"%"                     { return(MOD);}
"^"                     { return(EXP);}
">"                     { return(MAIOR);}
"<"                     { return(MENOR);}
"="                     { return(ATRIB);}
"=="					{ return (IGUAL); }
"!="					{ return (DIFERENTE); }
"@"                     { return(ARROBA);}
","                     { return(VIRGULA);}
";"                     { return(PONTOVIRGULA);}


"["                     { return(LCOLCHETE);}
"]"                     { return(RCOLCHETE);}
"{"                     { return (LCHAVE);}
"}"                     { return (RCHAVE);}
"("                     { return(LPARENTESES);}
")"                     { return(RPARENTESES);}

[ \t\v\n\f]             {/* ignorar */}
.	                    {yyerror("Caractere inválido");}

%%
comment()
{
	char c, c1;

loop:
	while ((c = input()) != '*' && c != 0)
		putchar(c);

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	if (c != 0)
		putchar(c1);
}

#ifndef yywrap
   int yywrap (void) {return 1;}
#endif


