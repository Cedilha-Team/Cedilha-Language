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
    MENORIGUAL = 263,
    MAIORIQUAL = 264,
    IGUAL = 265,
    DIFERENTE = 266,
    MAIOR = 267,
    MENOR = 268,
    ATRIB = 269,
    ATRIB_SOMA = 270,
    ATRIB_SUB = 271,
    ATRIB_MULT = 272,
    ATRIB_DIV = 273,
    ATRIB_MOD = 274,
    NEGACAO = 275,
    INC = 276,
    DEC = 277,
    E_LOG = 278,
    OU_LOG = 279,
    ARROBA = 280,
    MULT = 281,
    SUB = 282,
    SOMA = 283,
    DIV = 284,
    MOD = 285,
    EXP = 286,
    BOOL = 287,
    TEXTO = 288,
    CARACTERE = 289,
    REAL = 290,
    INTEIRO = 291,
    PARE = 292,
    ASPAS_DUPLAS = 293,
    ASPAS_SIMPLES = 294,
    LCOLCHETE = 295,
    RCOLCHETE = 296,
    LCHAVE = 297,
    RCHAVE = 298,
    LPARENTESES = 299,
    RPARENTESES = 300,
    SE = 301,
    IMPRIMA = 302,
    LEIA = 303,
    ENQUANTO = 304,
    PARA = 305,
    EXECUTE = 306,
    SENAO = 307,
    CONSTANTE = 308,
    RETORNE = 309,
    VIRGULA = 310,
    PONTOVIRGULA = 311,
    MEU_TIPO = 312,
    BPRINCIPAL = 313,
    BFUNCOES = 314,
    FUNCAO = 315,
    PROC = 316,
    VETOR = 317,
    CERQUILHA = 318
  };
#endif
/* Tokens.  */
#define ID 258
#define LIT_TEXTO 259
#define LIT_BOOL 260
#define LIT_REAL 261
#define LIT_INT 262
#define MENORIGUAL 263
#define MAIORIQUAL 264
#define IGUAL 265
#define DIFERENTE 266
#define MAIOR 267
#define MENOR 268
#define ATRIB 269
#define ATRIB_SOMA 270
#define ATRIB_SUB 271
#define ATRIB_MULT 272
#define ATRIB_DIV 273
#define ATRIB_MOD 274
#define NEGACAO 275
#define INC 276
#define DEC 277
#define E_LOG 278
#define OU_LOG 279
#define ARROBA 280
#define MULT 281
#define SUB 282
#define SOMA 283
#define DIV 284
#define MOD 285
#define EXP 286
#define BOOL 287
#define TEXTO 288
#define CARACTERE 289
#define REAL 290
#define INTEIRO 291
#define PARE 292
#define ASPAS_DUPLAS 293
#define ASPAS_SIMPLES 294
#define LCOLCHETE 295
#define RCOLCHETE 296
#define LCHAVE 297
#define RCHAVE 298
#define LPARENTESES 299
#define RPARENTESES 300
#define SE 301
#define IMPRIMA 302
#define LEIA 303
#define ENQUANTO 304
#define PARA 305
#define EXECUTE 306
#define SENAO 307
#define CONSTANTE 308
#define RETORNE 309
#define VIRGULA 310
#define PONTOVIRGULA 311
#define MEU_TIPO 312
#define BPRINCIPAL 313
#define BFUNCOES 314
#define FUNCAO 315
#define PROC 316
#define VETOR 317
#define CERQUILHA 318

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 26 "parserUoh.y" /* yacc.c:1909  */

	char * sValue;  /* string value */

#line 184 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
