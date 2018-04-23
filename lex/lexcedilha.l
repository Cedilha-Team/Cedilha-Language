/* 
 * Sample Scanner2: 
 * Description: Count the number of characters and the number of lines 
 *              from standard input
 * Usage: (1) $ flex lexer00.l
 *        (2) $ gcc lex.yy.c -ll (or -lfl)
 *        (3) $ ./a.out
 *        stdin> whatever you like
 *	      stdin> Ctrl-D
 * Questions: Is it ok if we do not indent the first line?
 *            What will happen if we remove the second rule?
 */

%%

[\t\n ]                 ;
("Verdadeiro"|"Falso")  {printf("%s : %s", yytext, "LIT_BOOL");}
"Se"                    {printf("%s : %s", yytext, "SE");}
"Inteiro"               {printf("%s : %s", yytext, "INTEIRO");}
"Vetor"                 {printf("%s : %s", yytext, "VETOR");}
"Incluir"               {printf("%s : %s", yytext, "INCLUIR");}
"Pare"                  {printf("%s : %s", yytext, "PARE");}
"Enquanto"              {printf("%s : %s", yytext, "ENQUANTO");}
"Procedimento           {printf("%s : %s", yytext, "PROC");}
"Para"                  {printf("%s : %s", yytext, "PARA");}
"Execute"               {printf("%s : %s", yytext, "EXECUTE");}
"Senao"                 {printf("%s : %s", yytext, "SENAO");}
[0-9]*\.[0-9]+          {printf("%s : %s", yytext, "LIT_REAL");}
[0-9]+                  {printf("%s : %s", yytext, "LIT_INT");}
[a-zA-Z_][a-zA-Z0-9]*   {printf("%s : %s", yytext, "ID");}
"["                     {printf("%s : %s", yytext, "LCOLCHETE");}
"]"                     {printf("%s : %s", yytext, "RCOLCHETE");}
"{"                     {printf("%s : %s", yytext, "LCHAVE");}
"}"                     {printf("%s : %s", yytext, "RCHAVE");}
"("                     {printf("%s : %s", yytext, "LPARENTESES");}
")"                     {printf("%s : %s", yytext, "RPARENTESES");}
\"                      {printf("%s : %s", yytext, "ASPAS_DUPLAS");}
"'"                     {printf("%s : %s", yytext, "ASPAS_SIMPLES");}
"<="                    {printf("%s : %s", yytext, "MENORIGUALR");}
">="                    {printf("%s : %s", yytext, "MAIORIQUAL");}
"+="                    {printf("%s : %s", yytext, "ATRIB_SOMA");}
"-="                    {printf("%s : %s", yytext, "ATRIB_SUB");}
"++"                    {printf("%s : %s", yytext, "INC");}
"--"                    {printf("%s : %s", yytext, "DEC");}
"*"                     {printf("%s : %s", yytext, "MULT");}
"-"                     {printf("%s : %s", yytext, "SUB");}
"+"                     {printf("%s : %s", yytext, "SOMA");}
"/"                     {printf("%s : %s", yytext, "DIV");}
"%"                     {printf("%s : %s", yytext, "MOD");}
"^"                     {printf("%s : %s", yytext, "EXP");}
">"                     {printf("%s : %s", yytext, "MAIOR");}
"<"                     {printf("%s : %s", yytext, "MENOR");}
"="                     {printf("%s : %s", yytext, "IGUAL");}
"@"                     {printf("%s : %s", yytext, "ARROBA");}
.	                     
%%


int main(void)
{
  yylex();
  
  return 0;
}