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
    LIT_BOOL = 260,
    LIT_REAL = 261,
    LIT_INT = 262,
    BPRINCIPAL = 263,
    BFUNCOES = 264,
    FUNCAO = 265,
    BOOL = 266,
    TEXTO = 267,
    CARACTERE = 268,
    REAL = 269,
    INTEIRO = 270,
    VETOR = 271,
    MEU_TIPO = 272,
    CERQUILHA = 273,
    SE = 274,
    IMPRIME = 275,
    LEIA = 276,
    INCLUIR = 277,
    PARE = 278,
    ENQUANTO = 279,
    PROC = 280,
    PARA = 281,
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
    NEGACAO = 306,
    INC = 307,
    DEC = 308,
    E_LOG = 309,
    OU_LOG = 310,
    ARROBA = 311,
    VIRGULA = 312,
    PONTOVIRGULA = 313,
    MULT = 314,
    SUB = 315,
    SOMA = 316,
    DIV = 317,
    MOD = 318,
    EXP = 319,
    MENOS = 320
  };
#endif
/* Tokens.  */
#define ID 258
#define LIT_TEXTO 259
#define LIT_BOOL 260
#define LIT_REAL 261
#define LIT_INT 262
#define BPRINCIPAL 263
#define BFUNCOES 264
#define FUNCAO 265
#define BOOL 266
#define TEXTO 267
#define CARACTERE 268
#define REAL 269
#define INTEIRO 270
#define VETOR 271
#define MEU_TIPO 272
#define CERQUILHA 273
#define SE 274
#define IMPRIME 275
#define LEIA 276
#define INCLUIR 277
#define PARE 278
#define ENQUANTO 279
#define PROC 280
#define PARA 281
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
#define NEGACAO 306
#define INC 307
#define DEC 308
#define E_LOG 309
#define OU_LOG 310
#define ARROBA 311
#define VIRGULA 312
#define PONTOVIRGULA 313
#define MULT 314
#define SUB 315
#define SOMA 316
#define DIV 317
#define MOD 318
#define EXP 319
#define MENOS 320

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 12 "parsernovoprofessor.y" /* yacc.c:1909  */

	//int    iValue; 	/* integer value */
	// double dValue;  /* double value*/
	// char   cValue; 	/* char value */
	char * sValue;  /* string value */
	// bool   bValue;  /* bool value */
	

#line 193 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
