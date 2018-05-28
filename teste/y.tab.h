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
# define YYDEBUG 1
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
    LEIA = 274,
    INCLUIR = 275,
    PARE = 276,
    ENQUANTO = 277,
    PROC = 278,
    PARA = 279,
    EXECUTE = 280,
    SENAO = 281,
    CONSTANTE = 282,
    RETORNE = 283,
    ASPAS_DUPLAS = 284,
    ASPAS_SIMPLES = 285,
    LCOLCHETE = 286,
    RCOLCHETE = 287,
    LCHAVE = 288,
    RCHAVE = 289,
    LPARENTESES = 290,
    RPARENTESES = 291,
    MENORIGUAL = 292,
    MAIORIQUAL = 293,
    IGUAL = 294,
    DIFERENTE = 295,
    MAIOR = 296,
    MENOR = 297,
    ATRIB = 298,
    ATRIB_SOMA = 299,
    ATRIB_SUB = 300,
    ATRIB_MULT = 301,
    ATRIB_DIV = 302,
    ATRIB_MOD = 303,
    NEGACAO = 304,
    INC = 305,
    DEC = 306,
    E_LOG = 307,
    OU_LOG = 308,
    ARROBA = 309,
    VIRGULA = 310,
    PONTOVIRGULA = 311,
    MULT = 312,
    SUB = 313,
    SOMA = 314,
    DIV = 315,
    MOD = 316,
    EXP = 317,
    MENOS = 318
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
#define LEIA 274
#define INCLUIR 275
#define PARE 276
#define ENQUANTO 277
#define PROC 278
#define PARA 279
#define EXECUTE 280
#define SENAO 281
#define CONSTANTE 282
#define RETORNE 283
#define ASPAS_DUPLAS 284
#define ASPAS_SIMPLES 285
#define LCOLCHETE 286
#define RCOLCHETE 287
#define LCHAVE 288
#define RCHAVE 289
#define LPARENTESES 290
#define RPARENTESES 291
#define MENORIGUAL 292
#define MAIORIQUAL 293
#define IGUAL 294
#define DIFERENTE 295
#define MAIOR 296
#define MENOR 297
#define ATRIB 298
#define ATRIB_SOMA 299
#define ATRIB_SUB 300
#define ATRIB_MULT 301
#define ATRIB_DIV 302
#define ATRIB_MOD 303
#define NEGACAO 304
#define INC 305
#define DEC 306
#define E_LOG 307
#define OU_LOG 308
#define ARROBA 309
#define VIRGULA 310
#define PONTOVIRGULA 311
#define MULT 312
#define SUB 313
#define SOMA 314
#define DIV 315
#define MOD 316
#define EXP 317
#define MENOS 318

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 12 "parsercedilhinha.y" /* yacc.c:1909  */

	int    iValue; 	/* integer value */
	double dValue;  /* double value*/
	char   cValue; 	/* char value */
	char * sValue;  /* string value */
	

#line 188 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
