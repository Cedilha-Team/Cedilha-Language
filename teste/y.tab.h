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
    CERQUILHA = 272,
    SE = 273,
    IMPRIME = 274,
    LEIA = 275,
    INCLUIR = 276,
    PARE = 277,
    ENQUANTO = 278,
    PROC = 279,
    PARA = 280,
    EXECUTE = 281,
    SENAO = 282,
    CONSTANTE = 283,
    RETORNE = 284,
    ASPAS_DUPLAS = 285,
    ASPAS_SIMPLES = 286,
    LCOLCHETE = 287,
    RCOLCHETE = 288,
    LCHAVE = 289,
    RCHAVE = 290,
    LPARENTESES = 291,
    RPARENTESES = 292,
    MENORIGUAL = 293,
    MAIORIQUAL = 294,
    IGUAL = 295,
    DIFERENTE = 296,
    MAIOR = 297,
    MENOR = 298,
    ATRIB = 299,
    ATRIB_SOMA = 300,
    ATRIB_SUB = 301,
    ATRIB_MULT = 302,
    ATRIB_DIV = 303,
    ATRIB_MOD = 304,
    NEGACAO = 305,
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
#define BPRINCIPAL 263
#define BFUNCOES 264
#define FUNCAO 265
#define TEXTO 266
#define CARACTERE 267
#define REAL 268
#define INTEIRO 269
#define VETOR 270
#define MEU_TIPO 271
#define CERQUILHA 272
#define SE 273
#define IMPRIME 274
#define LEIA 275
#define INCLUIR 276
#define PARE 277
#define ENQUANTO 278
#define PROC 279
#define PARA 280
#define EXECUTE 281
#define SENAO 282
#define CONSTANTE 283
#define RETORNE 284
#define ASPAS_DUPLAS 285
#define ASPAS_SIMPLES 286
#define LCOLCHETE 287
#define RCOLCHETE 288
#define LCHAVE 289
#define RCHAVE 290
#define LPARENTESES 291
#define RPARENTESES 292
#define MENORIGUAL 293
#define MAIORIQUAL 294
#define IGUAL 295
#define DIFERENTE 296
#define MAIOR 297
#define MENOR 298
#define ATRIB 299
#define ATRIB_SOMA 300
#define ATRIB_SUB 301
#define ATRIB_MULT 302
#define ATRIB_DIV 303
#define ATRIB_MOD 304
#define NEGACAO 305
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
#line 12 "parsercedilhinha.y" /* yacc.c:1909  */

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
