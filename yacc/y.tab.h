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
    NEGACAO = 263,
    BPRINCIPAL = 264,
    BFUNCOES = 265,
    FUNCAO = 266,
    TEXTO = 267,
    CARACTERE = 268,
    REAL = 269,
    INTEIRO = 270,
    VETOR = 271,
    MEU_TIPO = 272,
    SE = 273,
    IMPRIME = 274,
    INCLUIR = 275,
    PARE = 276,
    ENQUANTO = 277,
    PROC = 278,
    PARA = 279,
    FACA = 280,
    ENTAO = 281,
    EXECUTE = 282,
    SENAO = 283,
    CONSTANTE = 284,
    RETORNE = 285,
    ASPAS_DUPLAS = 286,
    ASPAS_SIMPLES = 287,
    LCOLCHETE = 288,
    RCOLCHETE = 289,
    LCHAVE = 290,
    RCHAVE = 291,
    LPARENTESES = 292,
    RPARENTESES = 293,
    MENORIGUAL = 294,
    MAIORIQUAL = 295,
    IGUAL = 296,
    DIFERENTE = 297,
    MAIOR = 298,
    MENOR = 299,
    ATRIB = 300,
    ATRIB_SOMA = 301,
    ATRIB_SUB = 302,
    ATRIB_MULT = 303,
    ATRIB_DIV = 304,
    ATRIB_MOD = 305,
    INC = 306,
    DEC = 307,
    E_LOG = 308,
    OU_LOG = 309,
    ARROBA = 310,
    VIRGULA = 311,
    PONTOVIRGULA = 312,
    MULT = 313,
    SUB = 314,
    SOMA = 315,
    DIV = 316,
    MOD = 317,
    EXP = 318,
    MENOS = 319
  };
#endif
/* Tokens.  */
#define ID 258
#define LIT_TEXTO 259
#define LIT_INT 260
#define LIT_REAL 261
#define LIT_BOOL 262
#define NEGACAO 263
#define BPRINCIPAL 264
#define BFUNCOES 265
#define FUNCAO 266
#define TEXTO 267
#define CARACTERE 268
#define REAL 269
#define INTEIRO 270
#define VETOR 271
#define MEU_TIPO 272
#define SE 273
#define IMPRIME 274
#define INCLUIR 275
#define PARE 276
#define ENQUANTO 277
#define PROC 278
#define PARA 279
#define FACA 280
#define ENTAO 281
#define EXECUTE 282
#define SENAO 283
#define CONSTANTE 284
#define RETORNE 285
#define ASPAS_DUPLAS 286
#define ASPAS_SIMPLES 287
#define LCOLCHETE 288
#define RCOLCHETE 289
#define LCHAVE 290
#define RCHAVE 291
#define LPARENTESES 292
#define RPARENTESES 293
#define MENORIGUAL 294
#define MAIORIQUAL 295
#define IGUAL 296
#define DIFERENTE 297
#define MAIOR 298
#define MENOR 299
#define ATRIB 300
#define ATRIB_SOMA 301
#define ATRIB_SUB 302
#define ATRIB_MULT 303
#define ATRIB_DIV 304
#define ATRIB_MOD 305
#define INC 306
#define DEC 307
#define E_LOG 308
#define OU_LOG 309
#define ARROBA 310
#define VIRGULA 311
#define PONTOVIRGULA 312
#define MULT 313
#define SUB 314
#define SOMA 315
#define DIV 316
#define MOD 317
#define EXP 318
#define MENOS 319

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
	

#line 190 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
