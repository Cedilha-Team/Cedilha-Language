/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    LIT_TEXTO = 259,
    LIT_INT = 260,
    LIT_REAL = 261,
    LIT_BOOL = 262,
    BPRINCIPAL = 263,
    BFUNCOES = 264,
    FUNCAO = 265,
    TEXTO = 266,
    CARACTERE = 267,
    REAL = 268,
    INTEIRO = 269,
    VETOR = 270,
    MEU_TIPO = 271,
    SE = 272,
    IMPRIME = 273,
    INCLUIR = 274,
    PARE = 275,
    ENQUANTO = 276,
    PROC = 277,
    PARA = 278,
    EXECUTE = 279,
    SENAO = 280,
    CONSTANTE = 281,
    RETORNE = 282,
    ASPAS_DUPLAS = 283,
    ASPAS_SIMPLES = 284,
    LCOLCHETE = 285,
    RCOLCHETE = 286,
    LCHAVE = 287,
    RCHAVE = 288,
    LPARENTESES = 289,
    RPARENTESES = 290,
    MENORIGUAL = 291,
    MAIORIQUAL = 292,
    IGUAL = 293,
    DIFERENTE = 294,
    MAIOR = 295,
    MENOR = 296,
    ATRIB = 297,
    ATRIB_SOMA = 298,
    ATRIB_SUB = 299,
    ATRIB_MULT = 300,
    ATRIB_DIV = 301,
    ATRIB_MOD = 302,
    NEGACAO = 303,
    INC = 304,
    DEC = 305,
    E_LOG = 306,
    OU_LOG = 307,
    ARROBA = 308,
    VIRGULA = 309,
    PONTOVIRGULA = 310,
    MULT = 311,
    SUB = 312,
    SOMA = 313,
    DIV = 314,
    MOD = 315,
    EXP = 316,
    MENOS = 317
  };
#endif
/* Tokens.  */
#define ID 258
#define LIT_TEXTO 259
#define LIT_INT 260
#define LIT_REAL 261
#define LIT_BOOL 262
#define BPRINCIPAL 263
#define BFUNCOES 264
#define FUNCAO 265
#define TEXTO 266
#define CARACTERE 267
#define REAL 268
#define INTEIRO 269
#define VETOR 270
#define MEU_TIPO 271
#define SE 272
#define IMPRIME 273
#define INCLUIR 274
#define PARE 275
#define ENQUANTO 276
#define PROC 277
#define PARA 278
#define EXECUTE 279
#define SENAO 280
#define CONSTANTE 281
#define RETORNE 282
#define ASPAS_DUPLAS 283
#define ASPAS_SIMPLES 284
#define LCOLCHETE 285
#define RCOLCHETE 286
#define LCHAVE 287
#define RCHAVE 288
#define LPARENTESES 289
#define RPARENTESES 290
#define MENORIGUAL 291
#define MAIORIQUAL 292
#define IGUAL 293
#define DIFERENTE 294
#define MAIOR 295
#define MENOR 296
#define ATRIB 297
#define ATRIB_SOMA 298
#define ATRIB_SUB 299
#define ATRIB_MULT 300
#define ATRIB_DIV 301
#define ATRIB_MOD 302
#define NEGACAO 303
#define INC 304
#define DEC 305
#define E_LOG 306
#define OU_LOG 307
#define ARROBA 308
#define VIRGULA 309
#define PONTOVIRGULA 310
#define MULT 311
#define SUB 312
#define SOMA 313
#define DIV 314
#define MOD 315
#define EXP 316
#define MENOS 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 11 "parsercedilha.y" /* yacc.c:1909  */

	int    iValue; 	/* integer value */
	double dValue;  /* double value*/
	char   cValue; 	/* char value */
	char * sValue;  /* string value */
	

#line 186 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
