/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parserUoh.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include "./estruturas/pilha/pilha.h"
#include "./estruturas/tabelahash/tabelaHash.h"

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;


Pilha scope_stack;
HashTable symbol_table;

/*usado para contarqual bloco está*/
int forCounter;
int ifCounter;
int whileCounter;


#line 88 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 23 "parserUoh.y" /* yacc.c:355  */

	char * sValue;  /* string value */

#line 262 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 277 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   271

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  246

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    53,    56,    57,    63,    64,    68,    75,
      76,    81,    82,    85,    91,    97,    98,   101,   104,   108,
     109,   115,   116,   127,   128,   131,   131,   131,   146,   146,
     146,   161,   167,   172,   173,   176,   179,   183,   189,   189,
     189,   194,   195,   201,   202,   203,   206,   207,   210,   211,
     211,   211,   216,   222,   222,   222,   230,   231,   232,   233,
     234,   235,   236,   240,   244,   250,   251,   252,   253,   254,
     255,   258,   259,   262,   263,   264,   267,   267,   267,   274,
     274,   274,   282,   282,   282,   292,   293,   296,   297,   300,
     306,   312,   316,   324,   325,   329,   333,   337,   343,   344,
     345,   348,   349,   350,   353,   354,   355,   356,   357,   358,
     361,   362,   363,   364,   365,   366,   369,   370,   373,   374,
     375,   378,   384,   388,   394,   400,   401,   402,   403,   404,
     405,   408,   409,   415,   416,   422,   423,   427,   428,   429,
     430
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "LIT_TEXTO", "LIT_BOOL",
  "LIT_REAL", "LIT_INT", "BPRINCIPAL", "BFUNCOES", "FUNCAO", "BOOL",
  "TEXTO", "CARACTERE", "REAL", "INTEIRO", "VETOR", "MEU_TIPO",
  "CERQUILHA", "SE", "IMPRIME", "LEIA", "INCLUIR", "PARE", "ENQUANTO",
  "PROC", "PARA", "EXECUTE", "SENAO", "CONSTANTE", "RETORNE",
  "ASPAS_DUPLAS", "ASPAS_SIMPLES", "LCOLCHETE", "RCOLCHETE", "LCHAVE",
  "RCHAVE", "LPARENTESES", "RPARENTESES", "MENORIGUAL", "MAIORIQUAL",
  "IGUAL", "DIFERENTE", "MAIOR", "MENOR", "ATRIB", "ATRIB_SOMA",
  "ATRIB_SUB", "ATRIB_MULT", "ATRIB_DIV", "ATRIB_MOD", "NEGACAO", "INC",
  "DEC", "E_LOG", "OU_LOG", "ARROBA", "VIRGULA", "PONTOVIRGULA", "MULT",
  "SUB", "SOMA", "DIV", "MOD", "EXP", "MENOS", "$accept", "programa",
  "$@1", "declaracoes", "declaracao_global", "declaracao_registro",
  "assinatura_funcoes", "assinaturas", "assinatura_funcao",
  "assinatura_proc", "parametros", "parametro", "bloco_funcoes",
  "funcoes_proc", "definicoes_funcoes_proc", "definicao_funcao", "$@2",
  "$@3", "definicao_procedimento", "$@4", "$@5", "chamada_funcao",
  "retorne", "parametros_chamada", "parametro_chamada", "bloco_principal",
  "$@6", "$@7", "sentencas", "sentenca", "controle", "bloco_se", "$@8",
  "$@9", "se_simplificado", "$@10", "$@11", "comando", "atribuicao",
  "atribuicao_binaria", "atribuicao_unaria", "repeticao", "bloco_enquanto",
  "$@12", "$@13", "bloco_faca_enquanto", "$@14", "$@15", "bloco_para",
  "$@16", "$@17", "declaracao_para", "comando_para", "imprime", "leia",
  "declaracao", "expressao", "operador_unario", "operador_binario",
  "operador_relacional", "operador_aritmetico", "operador_booleano",
  "tipo", "tipo_registro", "tipo_vetor", "tamanho_vetor", "tipo_primitivo",
  "termos", "ids", "termo", "literal", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320
};
# endif

#define YYPACT_NINF -158

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-158)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -158,    16,    88,  -158,  -158,  -158,  -158,  -158,  -158,   107,
      17,     5,   -37,  -158,  -158,    21,   -16,  -158,  -158,  -158,
      -8,  -158,    88,    44,    41,    -7,  -158,  -158,    88,     9,
      88,    22,    47,  -158,    19,    24,    52,     5,  -158,    31,
      26,    10,    67,    65,   -25,    42,    88,  -158,    49,  -158,
    -158,    48,  -158,  -158,  -158,  -158,    31,  -158,  -158,  -158,
     205,  -158,    31,   205,  -158,  -158,    88,  -158,    54,  -158,
      22,    88,    51,   177,     8,     4,    55,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,    31,  -158,  -158,  -158,  -158,    31,  -158,  -158,    56,
      57,  -158,    28,    53,    60,    69,  -158,    70,    72,    76,
      31,   205,  -158,  -158,    34,  -158,  -158,    84,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,    88,   111,
      80,     8,  -158,  -158,  -158,    39,    86,    71,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,    31,  -158,    31,    39,   123,  -158,  -158,  -158,
    -158,    91,   177,     6,   126,    93,  -158,  -158,  -158,  -158,
       4,  -158,    94,    95,    74,    77,    97,    31,    88,   177,
    -158,  -158,  -158,  -158,    99,    88,  -158,   110,  -158,    39,
     123,  -158,  -158,  -158,  -158,  -158,   177,    88,   101,   105,
    -158,  -158,   103,    85,   106,  -158,   108,   112,  -158,   121,
      31,   125,   115,   119,  -158,   177,   124,    98,   127,  -158,
    -158,   177,  -158,   177,   206,    31,   177,  -158,   122,   129,
    -158,   128,   130,  -158,   133,  -158,  -158,   134,  -158,   137,
    -158,   135,  -158,   177,   138,  -158
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     4,     1,   130,   129,   127,   126,   125,   128,
       0,     9,     0,     7,     6,     0,   120,   119,   118,   128,
       0,   121,     0,     0,     0,     0,    12,    11,     4,    91,
      15,     0,     0,   120,     0,     0,    19,     9,     5,     0,
       0,    17,     0,     0,     0,     0,    15,    38,     0,     3,
      10,   135,   140,   138,   137,   139,     0,    99,   100,    98,
       0,    92,     0,    93,   136,     8,    15,    18,     0,   123,
       0,    15,     0,    41,    21,    33,     0,   104,   105,   106,
     107,   108,   109,   116,   117,   110,   114,   115,   111,   112,
     113,     0,   102,   103,   101,    94,     0,    16,   124,     0,
       0,    14,   135,     0,     0,     0,    47,     0,     0,     0,
       0,    61,    62,    39,     0,    44,    46,    48,    43,    60,
      45,    73,    74,    75,    57,    58,    56,    59,     0,     0,
       0,    21,    23,    24,   135,     0,     0,    35,    37,    96,
      97,    95,   122,    13,    65,    66,    67,    68,    69,    70,
      71,    72,     0,    63,     0,     0,     0,    76,    82,    79,
      32,     0,    41,     0,     0,     0,    20,    22,    36,    31,
      33,    64,     0,     0,   131,   133,     0,     0,    85,    41,
      40,    42,    49,    52,     0,    15,    34,     0,    89,     0,
       0,    90,    77,    83,    86,    80,    41,    15,     0,     0,
     132,   134,     0,     0,     0,    50,     0,     0,    53,     0,
       0,     0,     0,     0,    28,    41,     0,     0,     0,    51,
      25,    41,    54,    41,    87,     0,    41,    29,     0,     0,
      88,     0,     0,    26,     0,    55,    78,     0,    81,     0,
      30,     0,    27,    41,     0,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -158,  -158,  -158,   132,  -158,  -158,   139,  -158,  -158,  -158,
     -40,  -158,  -158,    32,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,   -71,  -158,    15,  -158,  -158,  -158,  -158,  -157,  -158,
    -158,    36,  -158,  -158,  -158,  -158,  -158,   -62,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,  -158,  -158,    -1,   -39,  -158,   142,  -158,
    -158,  -158,   -18,    12,  -158,   117,   166,   -11,    18,   -72,
    -158
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    11,    12,    13,    24,    25,    26,    27,
      40,    41,    49,   130,   131,   132,   226,   239,   133,   221,
     234,    60,   112,   136,   137,    36,    73,   161,   113,   114,
     115,   116,   196,   212,   117,   215,   228,   118,   119,   152,
     153,   120,   121,   177,   202,   122,   179,   204,   123,   178,
     203,   193,   231,   124,   125,   126,   127,    62,    91,    92,
      93,    94,    15,    33,    17,    44,    18,   173,   176,    63,
      64
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      61,    14,   111,   138,    32,   181,    72,   134,    52,    53,
      54,    55,    42,    69,    16,    22,     3,    76,   128,    30,
      21,    28,   195,    95,    29,   103,    97,    14,    42,    31,
      23,   100,    70,   129,    51,    52,    53,    54,    55,   205,
      16,   182,   134,    52,    53,    54,    55,    34,    42,    35,
      45,    37,   140,    42,    39,    43,    46,   141,   222,    47,
     135,    48,    65,   168,   227,    75,   229,    66,    56,   233,
      67,   160,    68,   144,   145,   146,   147,   148,   149,    71,
     150,   151,    57,   174,    74,    75,   244,    58,    98,   101,
     154,   111,   162,   139,   142,   143,    59,   155,   138,     4,
       5,     6,     7,     8,     9,    10,   156,   157,   111,   158,
     164,   159,   163,   171,   165,   172,   166,   174,     4,     5,
       6,     7,     8,    19,   169,   111,   175,   180,   170,   184,
     185,   189,   187,   188,   190,   191,   197,   199,   192,   207,
     208,   209,   211,   210,   111,   198,   213,   214,   216,   218,
     111,   219,   111,   111,   220,   111,   224,   206,   235,   223,
      38,   241,   230,   167,   225,   236,   237,    42,   238,   240,
     243,   217,   111,   242,   245,    20,    50,   194,   200,    42,
     102,    52,    53,    54,    55,   186,   232,    99,     4,     5,
       6,     7,     8,     9,    10,     0,   103,   104,   105,   183,
     106,   107,     0,   108,   109,    96,     0,   110,   201,   102,
      52,    53,    54,    55,    56,     0,     0,     4,     5,     6,
       7,     8,     9,    10,     0,     0,   104,   105,    57,     0,
       0,     0,     0,    58,     0,     0,   110,     0,     0,     0,
       0,     0,    59,    56,    77,    78,    79,    80,    81,    82,
       0,     0,     0,     0,     0,     0,     0,    57,     0,    83,
      84,     0,    58,     0,    85,    86,    87,    88,    89,    90,
       0,    59
};

static const yytype_int16 yycheck[] =
{
      39,     2,    73,    75,    22,   162,    46,     3,     4,     5,
       6,     7,    30,    38,     2,    10,     0,    56,    10,    35,
       3,    58,   179,    62,     3,    19,    66,    28,    46,    37,
      25,    71,    57,    25,     3,     4,     5,     6,     7,   196,
      28,    35,     3,     4,     5,     6,     7,     3,    66,     8,
       3,    58,    91,    71,    45,    33,    37,    96,   215,    35,
      56,     9,    36,   135,   221,    37,   223,    57,    37,   226,
       3,   110,     7,    45,    46,    47,    48,    49,    50,    37,
      52,    53,    51,   155,    35,    37,   243,    56,    34,    38,
      37,   162,    58,    38,    38,    38,    65,    37,   170,    11,
      12,    13,    14,    15,    16,    17,    37,    37,   179,    37,
     128,    35,    28,   152,     3,   154,    36,   189,    11,    12,
      13,    14,    15,    16,    38,   196,     3,    36,    57,     3,
      37,    57,    38,    38,    57,    38,    37,    27,   177,    38,
      35,    38,    36,    58,   215,   185,    38,    35,    27,    24,
     221,    36,   223,   224,    35,   226,    58,   197,    36,    35,
      28,    27,   224,   131,    37,    36,    38,   185,    38,    36,
      35,   210,   243,    36,    36,     9,    37,   178,   189,   197,
       3,     4,     5,     6,     7,   170,   225,    70,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,   163,
      23,    24,    -1,    26,    27,    63,    -1,    30,   190,     3,
       4,     5,     6,     7,    37,    -1,    -1,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    20,    21,    51,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    65,    37,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    54,
      55,    -1,    56,    -1,    59,    60,    61,    62,    63,    64,
      -1,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    67,    68,     0,    11,    12,    13,    14,    15,    16,
      17,    69,    70,    71,   121,   128,   129,   130,   132,    16,
     132,     3,    10,    25,    72,    73,    74,    75,    58,     3,
      35,    37,   128,   129,     3,     8,    91,    58,    69,    45,
      76,    77,   128,    33,   131,     3,    37,    35,     9,    78,
      72,     3,     4,     5,     6,     7,    37,    51,    56,    65,
      87,   122,   123,   135,   136,    36,    57,     3,     7,    38,
      57,    37,    76,    92,    35,    37,   122,    39,    40,    41,
      42,    43,    44,    54,    55,    59,    60,    61,    62,    63,
      64,   124,   125,   126,   127,   122,   124,    76,    34,   131,
      76,    38,     3,    19,    20,    21,    23,    24,    26,    27,
      30,    87,    88,    94,    95,    96,    97,   100,   103,   104,
     107,   108,   111,   114,   119,   120,   121,   122,    10,    25,
      79,    80,    81,    84,     3,    56,    89,    90,   135,    38,
     122,   122,    38,    38,    45,    46,    47,    48,    49,    50,
      52,    53,   105,   106,    37,    37,    37,    37,    37,    35,
     122,    93,    58,    28,   128,     3,    36,    79,   135,    38,
      57,   122,   122,   133,   135,     3,   134,   109,   115,   112,
      36,    94,    35,    97,     3,    37,    89,    38,    38,    57,
      57,    38,   122,   117,   121,    94,    98,    37,    76,    27,
     133,   134,   110,   116,   113,    94,    76,    38,    35,    38,
      58,    36,    99,    38,    35,   101,    27,   122,    24,    36,
      35,    85,    94,    35,    58,    37,    82,    94,   102,    94,
     103,   118,   122,    94,    86,    36,    36,    38,    38,    83,
      36,    27,    36,    35,    94,    36
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    68,    67,    69,    69,    70,    70,    71,    72,
      72,    73,    73,    74,    75,    76,    76,    76,    77,    78,
      78,    79,    79,    80,    80,    82,    83,    81,    85,    86,
      84,    87,    88,    89,    89,    89,    90,    90,    92,    93,
      91,    94,    94,    95,    95,    95,    96,    96,    97,    98,
      99,    97,    97,   101,   102,   100,   103,   103,   103,   103,
     103,   103,   103,   104,   104,   105,   105,   105,   105,   105,
     105,   106,   106,   107,   107,   107,   109,   110,   108,   112,
     113,   111,   115,   116,   114,   117,   117,   118,   118,   119,
     120,   121,   121,   122,   122,   122,   122,   122,   123,   123,
     123,   124,   124,   124,   125,   125,   125,   125,   125,   125,
     126,   126,   126,   126,   126,   126,   127,   127,   128,   128,
     128,   129,   130,   130,   131,   132,   132,   132,   132,   132,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   136,
     136
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     5,     0,     3,     1,     1,     4,     0,
       3,     1,     1,     6,     5,     0,     3,     1,     2,     0,
       4,     0,     2,     1,     1,     0,     0,    11,     0,     0,
      10,     4,     2,     0,     3,     1,     2,     1,     0,     0,
       6,     0,     3,     1,     1,     1,     1,     1,     1,     0,
       0,     7,     3,     0,     0,    10,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     0,    10,     0,
       0,    10,     0,     0,    14,     0,     1,     0,     1,     4,
       4,     2,     4,     1,     2,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     7,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 53 "parserUoh.y" /* yacc.c:1646  */
    {pushScope("global","void");}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 53 "parserUoh.y" /* yacc.c:1646  */
    {popScope(&scope_stack,"global");}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 56 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "";}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 57 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-2].sValue))+3+strlen((char*)(yyvsp[0].sValue));
															char* str = (char*)malloc(tamanho);
															sprintf(str, "%s;\n%s",(char*)(yyvsp[-2].sValue),(char*)(yyvsp[0].sValue));
															printf("%s", str);}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 63 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 64 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 68 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-3].sValue))+3+strlen((char*)(yyvsp[-1].sValue));
															char* str = (char*)malloc(tamanho);
															sprintf(str, "%s { %s\n}",(char*)(yyvsp[-3].sValue),(char*)(yyvsp[-1].sValue));
															(yyval.sValue) = str;}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 75 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "";}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 76 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(strlen((yyvsp[-2].sValue)) + 1 + strlen(";\n\n") + 1 +  strlen((yyvsp[0].sValue))); 
																			sprintf(str, "%s %s %s", (char *) (yyvsp[-2].sValue), ";\n\n", (char *) (yyvsp[0].sValue)); 
																			printf("%s", str);}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 81 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 82 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 85 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 11 + strlen((char *)(yyvsp[-4].sValue)) + strlen((char *)(yyvsp[-3].sValue)) +strlen((char *)(yyvsp[-1].sValue));
																			char * str = (char *) malloc(tamanho); 
																			 sprintf(str, "Funcao %s %s (%s)", (char *) (yyvsp[-4].sValue), (char *) (yyvsp[-3].sValue), (char*)(yyvsp[-1].sValue) ); 
																			 (yyval.sValue) = str;}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 91 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 10 + strlen((char *)(yyvsp[-3].sValue)) + strlen((char *)(yyvsp[-1].sValue));
																	char * str = (char *) malloc(tamanho); 
																	 sprintf(str, "Proc %s ( %s)", (char *) (yyvsp[-3].sValue),(char *) (yyvsp[-1].sValue)); 
																	 (yyval.sValue) = str;}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 97 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "";}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 98 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(strlen((yyvsp[-2].sValue)) + 2 + strlen((yyvsp[0].sValue))); 
														sprintf(str, "%s%s %s", (char *) (yyvsp[-2].sValue), ",", (char *) (yyvsp[0].sValue)); 
														(yyval.sValue) = str;}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 101 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 104 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(strlen((yyvsp[-1].sValue)) + 1 + strlen((yyvsp[0].sValue))); 
						sprintf(str, "%s %s", (char *) (yyvsp[-1].sValue), (char *) (yyvsp[0].sValue)); 
						(yyval.sValue) = str; }
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 108 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "";}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 109 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 17 + strlen((char *)(yyvsp[-1].sValue));
            											char * str = (char *) malloc(tamanho); 
													   sprintf(str, "%s%s\n}", "BlocoFuncoes {\n", (char *) (yyvsp[-1].sValue)); 
													   printf("%s\n",str); }
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 115 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue)="";}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 116 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(1+strlen((char *)(yyvsp[-1].sValue)) + strlen((char *)(yyvsp[0].sValue))); 
												    sprintf(str, "%s %s", (char *) (yyvsp[-1].sValue), (char *) (yyvsp[0].sValue)); 
											        (yyval.sValue) = str;free((yyvsp[-1].sValue));}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 127 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 128 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 131 "parserUoh.y" /* yacc.c:1646  */
    {pushScope((char*)(yyvsp[-4].sValue),(char*)(yyvsp[-5].sValue));}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 131 "parserUoh.y" /* yacc.c:1646  */
    {popScope();}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 133 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 13+strlen((char *)(yyvsp[-9].sValue)) + strlen((char *)(yyvsp[-8].sValue)) + strlen((char *)(yyvsp[-6].sValue))+strlen((char *)(yyvsp[-2].sValue));
																			char * str = (char *) malloc(tamanho); 
																			 sprintf(str, "Func %s %s (%s) {\n%s\n}", (char *) (yyvsp[-9].sValue), (char *) (yyvsp[-8].sValue),  (char *) (yyvsp[-6].sValue), (char *) (yyvsp[-2].sValue)); 
																			 (yyval.sValue) = str; /*free($3);free($5);free($9);*/}
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 146 "parserUoh.y" /* yacc.c:1646  */
    {pushScope((char*)(yyvsp[-4].sValue),"void");}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 146 "parserUoh.y" /* yacc.c:1646  */
    {popScope();}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 148 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 13+strlen((char *)(yyvsp[-8].sValue)) + strlen((char *)(yyvsp[-6].sValue)) + strlen((char *)(yyvsp[-2].sValue));
																			char * str = (char *) malloc(tamanho); 
																			 sprintf(str, "Proc %s (%s) {\n%s\n}", (char *) (yyvsp[-8].sValue), (char *) (yyvsp[-6].sValue),  (char *) (yyvsp[-2].sValue)); 
																			 (yyval.sValue) = str; /*free($2);free($4);free($8);*/}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 161 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-3].sValue)) + 1 + strlen((char*)(yyvsp[-1].sValue)) + 1;
																 char * str = (char *) malloc(tamanho); 
																 sprintf(str, "%s%s%s%s", (char *) (yyvsp[-3].sValue), "(", (char *) (yyvsp[-1].sValue), ")"); 
																 (yyval.sValue) = str; free((yyvsp[-3].sValue)); free((yyvsp[-1].sValue));}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 167 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 8 + strlen((char*)(yyvsp[0].sValue));
								char * str = (char *) malloc(tamanho); 
								sprintf(str, "Retorne %s", (char *) (yyvsp[0].sValue)); 
								(yyval.sValue) = str; free((yyvsp[0].sValue));}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 172 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "";}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 173 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(strlen((char *)(yyvsp[-2].sValue)) + 1 + strlen((char *)(yyvsp[0].sValue))); 
																   sprintf(str, "%s%s%s", (char *) (yyvsp[-2].sValue), ",", (char *) (yyvsp[0].sValue)); 
																   (yyval.sValue) = str; free((yyvsp[-2].sValue)); free((yyvsp[0].sValue));}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 176 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 179 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(1 + strlen((char*)(yyvsp[0].sValue)));
								 sprintf(str, "%s%s","@", (char *) (yyvsp[0].sValue));
								 (yyval.sValue) = str;
								 free((yyvsp[0].sValue));}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 183 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 189 "parserUoh.y" /* yacc.c:1646  */
    {pushScope("main","void");}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 189 "parserUoh.y" /* yacc.c:1646  */
    {popScope();}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 189 "parserUoh.y" /* yacc.c:1646  */
    {printf("BlocoPrincipal {\n%s}\n",(yyvsp[-2].sValue));}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 194 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue)="";}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 195 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-2].sValue))+ 3 + strlen((char*)(yyvsp[0].sValue));
											char * str = (char *) malloc(tamanho); 
											sprintf(str, "%s%s\n%s", (char*)(yyvsp[-2].sValue), ";", (char *) (yyvsp[0].sValue)); 
											(yyval.sValue) = str; free((yyvsp[-2].sValue));}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 201 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 202 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 203 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 206 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 207 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "Pare";}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 210 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 211 "parserUoh.y" /* yacc.c:1646  */
    {pushScope("Senao","void");}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 211 "parserUoh.y" /* yacc.c:1646  */
    {popScope();}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 212 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-6].sValue))+ 10 + strlen((char*)(yyvsp[-2].sValue)) + 2;
														char * str = (char *) malloc(tamanho); 
														sprintf(str, "%s%s %s %s", (char*)(yyvsp[-6].sValue), "\nSenao {", (char *) (yyvsp[-2].sValue), "}"); 
														(yyval.sValue) = str; free((yyvsp[-6].sValue));}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 216 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-2].sValue))+ 9 + strlen((char*)(yyvsp[0].sValue));
														char * str = (char *) malloc(tamanho); 
														sprintf(str, "%s%s %s", (char*)(yyvsp[-2].sValue), "\nSenao", (char *) (yyvsp[0].sValue)); 
														(yyval.sValue) = str; free((yyvsp[-2].sValue));}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 222 "parserUoh.y" /* yacc.c:1646  */
    {pushScope("Se","void");}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 222 "parserUoh.y" /* yacc.c:1646  */
    {popScope();}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 223 "parserUoh.y" /* yacc.c:1646  */
    {	int tamanho = 5 + strlen((char *) (yyvsp[-7].sValue)) + 13 + strlen((char *) (yyvsp[-2].sValue)) + 2;
																		char * str = (char *) malloc(tamanho); 
																		sprintf(str, "%s %s %s %s %s", 
																		"Se (", (char *) (yyvsp[-7].sValue), ") Execute {", (char *) (yyvsp[-2].sValue), "}"); 
																		(yyval.sValue) = str; free((yyvsp[-7].sValue));}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 230 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 231 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 232 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 233 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 234 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 235 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 236 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 240 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-1].sValue))+ 1 + strlen((char*)(yyvsp[0].sValue));
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "%s %s", (char*)(yyvsp[-1].sValue), (char *) (yyvsp[0].sValue)); 
												(yyval.sValue) = str;free((yyvsp[-1].sValue));}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 244 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-2].sValue))+ 1 + strlen((char*)(yyvsp[-1].sValue)) + 1 + strlen((char*)(yyvsp[0].sValue));
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "%s %s %s", (char*)(yyvsp[-2].sValue), (char *) (yyvsp[-1].sValue), (char *) (yyvsp[0].sValue)); 
												(yyval.sValue) = str;free((yyvsp[-2].sValue));free((yyvsp[0].sValue));}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 250 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "=";}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 251 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "+=";}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 252 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "-=";}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 253 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "*=";}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 254 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "/=";}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 255 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "%=";}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 258 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "++";}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 259 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "--";}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 262 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 263 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 264 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 267 "parserUoh.y" /* yacc.c:1646  */
    {pushScope("Enquanto","void");}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 267 "parserUoh.y" /* yacc.c:1646  */
    {popScope();}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 267 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 10 + strlen((char*)(yyvsp[-6].sValue)) + 11 + strlen((char*)(yyvsp[-1].sValue))+1;
																							char * str = (char *) malloc(tamanho); 
																							sprintf(str, "%s%s%s%s%s", "Enquanto (", (char *) (yyvsp[-6].sValue), ") Execute {", 
																							(char *) (yyvsp[-1].sValue), "}"); 
																							(yyval.sValue) = str; free((yyvsp[-6].sValue)), free((yyvsp[-1].sValue));}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 274 "parserUoh.y" /* yacc.c:1646  */
    {pushScope("FacaEnquanto","void");}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 274 "parserUoh.y" /* yacc.c:1646  */
    {popScope();}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 275 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 10 + strlen((char*)(yyvsp[-6].sValue)) + 11 + strlen((char*)(yyvsp[-1].sValue))+1;
																								  char * str = (char *) malloc(tamanho); 
																								  sprintf(str, "%s%s%s%s%s", "Execute {", (char *) (yyvsp[-6].sValue), "} Enquanto (", 
																								  (char *) (yyvsp[-1].sValue), ")"); 
																								  (yyval.sValue) = str; free((yyvsp[-6].sValue)), free((yyvsp[-1].sValue));}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 282 "parserUoh.y" /* yacc.c:1646  */
    {pushScope("Para","void");}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 282 "parserUoh.y" /* yacc.c:1646  */
    {popScope();}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 285 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 6 + strlen((char *)(yyvsp[-10].sValue)) + strlen((char *)(yyvsp[-7].sValue)) + 1 + strlen((char *)(yyvsp[-5].sValue)) + 11 + strlen((char *)(yyvsp[-1].sValue)) + 1;
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "%s%s%s%s%s%s%s%s%s", "Para (", (char *) (yyvsp[-10].sValue), ";", 
														(char *)  (yyvsp[-7].sValue), ";", (char *)(yyvsp[-5].sValue), ") Execute {", (char *)(yyvsp[-1].sValue), "}"); 
												(yyval.sValue) = str; }
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 292 "parserUoh.y" /* yacc.c:1646  */
    {}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 293 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 296 "parserUoh.y" /* yacc.c:1646  */
    {}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 297 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 300 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 9 + strlen((char*)(yyvsp[-1].sValue))+1;
												char * str = (char *) malloc(tamanho); 
													 sprintf(str, "%s%s%s", "Imprima (", (char *) (yyvsp[-1].sValue), ")"); 
													 (yyval.sValue) = str; free((yyvsp[-1].sValue));}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 306 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 6 + strlen((char *) (yyvsp[-1].sValue)) + 1;
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "%s%s%s", "Leia (", (char *) (yyvsp[-1].sValue), ")"); 
												(yyval.sValue) = str; free((yyvsp[-1].sValue));}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 312 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-1].sValue))+ 1 + strlen((char*)(yyvsp[0].sValue));
									 char * str = (char *) malloc(tamanho); 
									 sprintf(str, "%s %s", (char*)(yyvsp[-1].sValue), (char *) (yyvsp[0].sValue)); 
									 (yyval.sValue) = str;free((yyvsp[0].sValue));}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 316 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-3].sValue))+ 1 + strlen((char*)(yyvsp[-2].sValue)) + 3 + strlen((char*)(yyvsp[0].sValue));
								 ;    char * str = (char *) malloc(tamanho); 
									 sprintf(str, "%s %s %s %s", (char*)(yyvsp[-3].sValue), (char *) (yyvsp[-2].sValue), "=", (char *) (yyvsp[0].sValue)); 
									 (yyval.sValue) = str;free((yyvsp[-2].sValue)); free((yyvsp[0].sValue));}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 324 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 325 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char *) (yyvsp[-1].sValue)) + 1 + strlen((char *) (yyvsp[0].sValue));
									char * str = (char *) malloc(tamanho); 
									sprintf(str, "%s %s", (char *) (yyvsp[-1].sValue), (char *) (yyvsp[0].sValue)); 
									(yyval.sValue) = str; free((yyvsp[0].sValue));}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 329 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char *) (yyvsp[-2].sValue)) + 1 + strlen((char *) (yyvsp[-1].sValue)) + 1 + strlen((char *) (yyvsp[0].sValue));
									char * str = (char *) malloc(tamanho); 
									sprintf(str, "%s %s %s", (char *) (yyvsp[-2].sValue), (char *) (yyvsp[-1].sValue), (char *) (yyvsp[0].sValue)); 
									(yyval.sValue) = str; free((yyvsp[0].sValue));}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 333 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 1 + strlen((char *) (yyvsp[-1].sValue)) + 1;
									char * str = (char *) malloc(tamanho); 
									sprintf(str, "%s%s%s", "(" , (char *) (yyvsp[-1].sValue), ")"); 
									(yyval.sValue) = str; free((yyvsp[-1].sValue));}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 337 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char *) (yyvsp[-2].sValue)) + 1 + strlen((char *) (yyvsp[-1].sValue)) + 1 + strlen((char *) (yyvsp[0].sValue));
														char * str = (char *) malloc(tamanho); 
														sprintf(str, "%s %s %s", (char *) (yyvsp[-2].sValue), (char *) (yyvsp[-1].sValue), (char *) (yyvsp[0].sValue)); 
														(yyval.sValue) = str; free((yyvsp[0].sValue));}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 343 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "-";}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 344 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "!";}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 345 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "@";}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 348 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 349 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 350 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 353 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "<=";}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 354 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = ">=";}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 355 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "==";}
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 356 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "!=";}
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 357 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "<";}
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 358 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = ">";}
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 361 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "*";}
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 362 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "/";}
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 363 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "%";}
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 364 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "^";}
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 365 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "-";}
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 366 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "+";}
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 369 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "&&";}
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 370 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "||";}
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 373 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 374 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 375 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 378 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 8+strlen((char*)(yyvsp[0].sValue));
								char* str = (char*)malloc(tamanho);
								sprintf(str, "MeuTipo %s", (char*)(yyvsp[0].sValue));
								(yyval.sValue) = str;}
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 384 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 6+strlen((char*)(yyvsp[-5].sValue))+ 3 +strlen((char*)(yyvsp[-3].sValue)) + 3 +strlen((char*)(yyvsp[-1].sValue)) + 1;
													 char* str = (char*)malloc(tamanho);
													 sprintf(str, "%s %s (%s,%s)","Vetor ", (char*)(yyvsp[-5].sValue), (char*)(yyvsp[-3].sValue), (char*)(yyvsp[-1].sValue));
													 (yyval.sValue) = str; free((yyvsp[-5].sValue));free((yyvsp[-3].sValue)); free((yyvsp[-1].sValue));}
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 388 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 6+strlen((char*)(yyvsp[-3].sValue)) + 2 + strlen((char*)(yyvsp[-1].sValue)) +1;
																			char* str = (char*)malloc(tamanho);
																			sprintf(str, "%s %s (%s)","Vetor ",(char*)(yyvsp[-3].sValue), (char*)(yyvsp[-1].sValue));
																			(yyval.sValue) = str; free((yyvsp[-3].sValue));free((yyvsp[-1].sValue));}
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 394 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 1+strlen((char*)(yyvsp[-1].sValue))+1;
											 char* str = (char*)malloc(tamanho);
											 sprintf(str, "%s%s%s","[",(char*)(yyvsp[-1].sValue),"]");
											 (yyval.sValue) = str;}
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 400 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "Inteiro";}
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 401 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "Real";}
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 402 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "Caractere";}
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 403 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "Vetor";}
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 404 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "Texto";}
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 405 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "Booleano";}
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 408 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 409 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-2].sValue))+1+strlen((char*)(yyvsp[0].sValue));
								char* str = (char*)malloc(tamanho);
								sprintf(str, "%s,%s",(char*)(yyvsp[-2].sValue),(char*)(yyvsp[0].sValue));
								(yyval.sValue) = str; free((yyvsp[-2].sValue));}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 415 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 416 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-2].sValue))+1+strlen((char*)(yyvsp[0].sValue));
					char* str = (char*)malloc(tamanho);
					sprintf(str, "%s,%s",(char*)(yyvsp[-2].sValue),(char*)(yyvsp[0].sValue));
					(yyval.sValue) = str; free((yyvsp[-2].sValue));}
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 422 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 423 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 427 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 428 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 429 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 430 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2506 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 432 "parserUoh.y" /* yacc.c:1906  */


int main (void) {
	iniciar(&scope_stack);
	init_array(&symbol_table,50);
	return yyparse ( );
}

int yyerror (char *msg) {
	fprintf (stderr, "-- %d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}


int pushScope(char* scope, char* type){
		
	if(procurar(&scope_stack, scope, type)<0){
		empilhar(&scope_stack,scope,type);
		printf("tamanho:%d\n",scope_stack.tamanho);
	}
	mostrar(&scope_stack);
}

int popScope(){

	if(desempilhar(&scope_stack)<0){
		printf("pilha vazia\n");
	}else{
		printf("pop com sucesso\n");
		printf("tamanho:%d \n",scope_stack.tamanho);
	}
}

char* formarNome(char* escopoPai, char*nome, char*ordem){
	char* str = (char*) malloc(strlen(escopoPai)+strlen(nome)+strlen(ordem));
	strcpy(str,escopoPai);
	strcat(str,nome);
	strcat(str,ordem);
	
	return str;
}

/*
int insertSymbolTable(HashTable* hashTable,char*name, char*scope,char*type){
	char* key = (char*) malloc(strlen(scope)+strlen(id));
	strcpy(key,scope);
	strcat(key,name);
	Symbol *item = createSymbol(key,name,scope,type);
	return insert(&symbol_table,&item);
}
*/

/*void check_type(char* identifier, char* scope){
	char* key = (char*) malloc( strlen(identifier) + strlen(scope) );
	
	strcpy(key,identifier);
	strcat(key,scope);
	
	int i;
	int rows = 100;
	char** table = (char*)malloc(rows*sizeof(char*));
	
	for(i=0; i< rows; i++){
		if(table[i] == NULL){
			table[i] = info;
		}
	}

}*/
