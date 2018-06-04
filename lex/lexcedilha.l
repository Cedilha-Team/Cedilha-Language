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
  ;

%%
\"(\\.|[^\\"])*\"       {printf("<%s : %s> ", yytext, "LIT_TEXTO");}
#.*                     ;
"/*"                    {comment();}
[ \t\v\n\f]             ;
("Verdadeiro"|"Falso")  {printf("<%s : %s> ", yytext, "LIT_BOOL");}
"BlocoFuncoes"          {printf("<%s : %s> ", yytext, "BFUNCOES");}
"Senao"                 {printf("<%s : %s> ", yytext, "SENAO");}
"Se"                    {printf("<%s : %s> ", yytext, "SE");}
"Vetor"                 {printf("<%s : %s> ", yytext, "VETOR");}
"Inteiro"               {printf("<%s : %s> ", yytext, "INTEIRO");}
"Incluir"               {printf("<%s : %s> ", yytext, "INCLUIR");}
"Imprima"               {printf("<%s : %s> ", yytext, "IMPRIMA");}
"Pare"                  {printf("<%s : %s> ", yytext, "PARE");}
"Enquanto"              {printf("<%s : %s> ", yytext, "ENQUANTO");}
"Procedimento"          {printf("<%s : %s> ", yytext, "PROC");}
"Para"                  {printf("<%s : %s> ", yytext, "PARA");}
"Execute"               {printf("<%s : %s> ", yytext, "EXECUTE");}
"Leia"                  {printf("<%s : %s> ", yytext, "LEIA");}
[0-9]*\.[0-9]+          {printf("<%s : %s> ", yytext, "LIT_REAL");}
[0-9]+                  {printf("<%s : %s> ", yytext, "LIT_INT");}
[a-zA-Z_][a-zA-Z0-9]*   {printf("<%s : %s> ", yytext, "ID");}
"<="                    {printf("<%s : %s> ", yytext, "MENORIGUALR");}
">="                    {printf("<%s : %s> ", yytext, "MAIORIQUAL");}
"+="                    {printf("<%s : %s> ", yytext, "ATRIB_SOMA");}
"-="                    {printf("<%s : %s> ", yytext, "ATRIB_SUB");}
"++"                    {printf("<%s : %s> ", yytext, "INC");}
"--"                    {printf("<%s : %s> ", yytext, "DEC");}
"["                     {printf("<%s : %s> ", yytext, "LCOLCHETE");}
"]"                     {printf("<%s : %s> ", yytext, "RCOLCHETE");}
"{"                     {printf("<%s : %s> ", yytext, "LCHAVE");}
"}"                     {printf("<%s : %s> ", yytext, "RCHAVE");}
"("                     {printf("<%s : %s> ", yytext, "LPARENTESES");}
")"                     {printf("<%s : %s> ", yytext, "RPARENTESES");}
\"                      {printf("<%s : %s> ", yytext, "ASPAS_DUPLAS");}
"'"                     {printf("<%s : %s> ", yytext, "ASPAS_SIMPLES");}
"!"											{printf("<%s : %s> ", yytext, "NEGACAO");}
"*"                     {printf("<%s : %s> ", yytext, "MULT");}
"-"                     {printf("<%s : %s> ", yytext, "SUB");}
"+"                     {printf("<%s : %s> ", yytext, "SOMA");}
"/"                     {printf("<%s : %s> ", yytext, "DIV");}
"%"                     {printf("<%s : %s> ", yytext, "MOD");}
"^"                     {printf("<%s : %s> ", yytext, "EXP");}
">"                     {printf("<%s : %s> ", yytext, "MAIOR");}
"<"                     {printf("<%s : %s> ", yytext, "MENOR");}
"="                     {printf("<%s : %s> ", yytext, "IGUAL");}
"@"                     {printf("<%s : %s> ", yytext, "ARROBA");}
","                     {printf("<%s : %s> ", yytext, "VIRGULA");}
.	                      {/* ignorar */}
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

int main(void)
{
  yylex();
  
  return 0;
}