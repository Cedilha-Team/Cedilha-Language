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
#line 1 "parserVdc.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "./include/pilha.h"
#include "./include/tabelaHash.h"
#include "./include/attrib.h"
#include "./include/memoryBank.h"

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;

Pilha scope_stack;
HashTable symbol_table;
FILE *fp;

/*usado para contar qual bloco está*/
int forCounter;
int ifCounter;
int whileCounter;
int elseCounter;
int doWhileCounter;


void pushBlockScope(char*nome, int ordem);
void inicializaContadores();
int checkBeforeDeclaration(char* name);
int insertSymbolTable(char*name,char*type);




#line 102 "y.tab.c" /* yacc.c:339  */

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
#line 37 "parserVdc.y" /* yacc.c:355  */

	char * sValue;  /* string value */

#line 272 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 287 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   298

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  147
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  250

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    66,    67,    65,    71,    80,    91,    92,
      96,    97,    96,   110,   116,   126,   127,   130,   131,   130,
     143,   144,   143,   156,   162,   171,   174,   185,   191,   201,
     207,   218,   219,   223,   224,   222,   235,   236,   234,   245,
     254,   263,   269,   276,   279,   286,   293,   294,   292,   301,
     307,   316,   317,   318,   321,   322,   325,   326,   329,   326,
     336,   346,   348,   345,   357,   358,   359,   360,   361,   362,
     363,   366,   373,   382,   383,   384,   385,   386,   387,   390,
     391,   394,   395,   396,   400,   402,   399,   411,   413,   411,
     423,   425,   423,   436,   442,   445,   451,   454,   463,   472,
     483,   494,   495,   502,   509,   516,   525,   526,   527,   530,
     531,   532,   535,   536,   537,   538,   539,   540,   543,   544,
     545,   546,   547,   548,   551,   552,   555,   556,   557,   560,
     569,   576,   585,   594,   595,   596,   597,   598,   601,   602,
     611,   612,   621,   622,   626,   627,   628,   629
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "LIT_TEXTO", "LIT_BOOL",
  "LIT_REAL", "LIT_INT", "MENORIGUAL", "MAIORIQUAL", "IGUAL", "DIFERENTE",
  "MAIOR", "MENOR", "ATRIB", "ATRIB_SOMA", "ATRIB_SUB", "ATRIB_MULT",
  "ATRIB_DIV", "ATRIB_MOD", "NEGACAO", "INC", "DEC", "E_LOG", "OU_LOG",
  "ARROBA", "MULT", "SUB", "SOMA", "DIV", "MOD", "EXP", "BOOL", "TEXTO",
  "CARACTERE", "REAL", "INTEIRO", "PARE", "ASPAS_DUPLAS", "ASPAS_SIMPLES",
  "LCOLCHETE", "RCOLCHETE", "LCHAVE", "RCHAVE", "LPARENTESES",
  "RPARENTESES", "SE", "IMPRIMA", "LEIA", "ENQUANTO", "PARA", "EXECUTE",
  "SENAO", "CONSTANTE", "RETORNE", "VIRGULA", "PONTOVIRGULA", "MEU_TIPO",
  "BPRINCIPAL", "BFUNCOES", "FUNCAO", "PROC", "VETOR", "CERQUILHA",
  "$accept", "programa", "$@1", "$@2", "$@3", "declaracoes",
  "declaracao_global", "declaracao_registro", "$@4", "$@5",
  "assinatura_funcoes", "assinaturas", "assinatura_funcao", "$@6", "$@7",
  "assinatura_proc", "$@8", "$@9", "parametros", "parametro",
  "bloco_funcoes", "funcoes_proc", "definicoes_funcoes_proc",
  "definicao_funcao", "$@10", "$@11", "definicao_procedimento", "$@12",
  "$@13", "chamada_funcao", "retorne", "parametros_chamada",
  "parametro_chamada", "bloco_principal", "$@14", "$@15", "sentencas",
  "sentenca", "controle", "bloco_se", "$@16", "$@17", "se_simplificado",
  "$@18", "$@19", "comando", "atribuicao", "atribuicao_binaria",
  "atribuicao_unaria", "repeticao", "bloco_enquanto", "$@20", "$@21",
  "bloco_faca_enquanto", "$@22", "$@23", "bloco_para", "$@24", "$@25",
  "declaracao_para", "comando_para", "imprime", "leia", "declaracao",
  "expressao", "operador_unario", "operador_binario",
  "operador_relacional", "operador_aritmetico", "operador_booleano",
  "tipo", "tipo_registro", "tipo_vetor", "tamanho_vetor", "tipo_primitivo",
  "termos", "ids_leia", "termo", "literal", YY_NULLPTR
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
     315,   316,   317,   318
};
# endif

#define YYPACT_NINF -159

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-159)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -159,     6,    24,  -159,  -159,  -159,  -159,  -159,  -159,    21,
       5,  -159,   -31,  -159,  -159,    25,  -159,  -159,  -159,   -12,
      -9,   -52,    24,    18,  -159,   132,    -9,    66,    30,  -159,
     -21,  -159,  -159,  -159,     9,    66,  -159,  -159,  -159,  -159,
    -159,     2,  -159,  -159,    41,    42,     3,   -10,   -52,     7,
    -159,  -159,  -159,     9,   267,  -159,     9,   267,  -159,    -6,
      49,  -159,  -159,    10,  -159,    22,     4,  -159,   141,    23,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,     9,  -159,  -159,  -159,  -159,     9,
      27,    66,  -159,  -159,    66,  -159,    29,  -159,   132,    28,
      19,  -159,  -159,  -159,  -159,  -159,  -159,    66,  -159,   152,
     -43,  -159,  -159,   141,  -159,    32,    90,  -159,    31,    34,
      35,    39,    40,    43,     9,   267,  -159,  -159,    36,  -159,
    -159,    45,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,    66,    84,    50,   -43,  -159,  -159,  -159,    65,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,     9,
    -159,     9,   132,    85,     9,  -159,  -159,  -159,    51,   152,
     -19,    92,    69,  -159,  -159,  -159,  -159,    73,    74,    67,
      76,    75,    87,    66,   152,  -159,  -159,  -159,  -159,    89,
      66,    78,  -159,   132,    85,  -159,    91,  -159,  -159,  -159,
     152,    66,    96,   107,  -159,  -159,   108,    95,   109,  -159,
     115,   111,  -159,  -159,     9,   105,   118,   120,  -159,   152,
     152,   112,   119,  -159,  -159,   152,  -159,  -159,   212,     9,
     152,  -159,   121,   124,  -159,   125,   128,  -159,   126,  -159,
    -159,   123,  -159,   135,  -159,   133,  -159,   152,   138,  -159
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     6,     1,   137,   136,   135,   134,   133,     0,
       0,     3,     0,     9,     8,     0,   128,   127,   126,   129,
       0,    13,     6,    99,    10,     0,   131,     0,     0,     4,
       0,    16,    15,     7,     0,    23,   142,   147,   145,   144,
     146,     0,   143,   130,     0,     0,     0,     0,    13,   142,
     107,   108,   106,     0,     0,   100,     0,   101,    11,    25,
       0,   132,   129,     0,    20,     0,    27,    14,    41,     0,
     112,   113,   114,   115,   116,   117,   124,   125,   118,   122,
     123,   119,   120,   121,     0,   110,   111,   109,   102,     0,
       0,    23,    26,    17,    23,    46,     0,     5,     0,     0,
      43,    45,   104,   105,   103,    12,    24,    23,    21,    49,
      29,    44,    39,    41,    18,     0,   142,    55,     0,     0,
       0,     0,     0,     0,     0,    69,    70,    47,     0,    52,
      54,    56,    51,    68,    53,    81,    82,    83,    65,    66,
      64,    67,     0,     0,     0,    29,    31,    32,    42,     0,
      22,    73,    74,    75,    76,    77,    78,    79,    80,     0,
      71,     0,     0,     0,     0,    90,    87,    40,     0,    49,
       0,     0,     0,    28,    30,    19,    72,     0,     0,   138,
     140,     0,     0,    93,    49,    48,    50,    57,    60,     0,
      23,     0,    97,     0,     0,    98,     0,    91,    94,    88,
      49,    23,     0,     0,   139,   141,     0,     0,     0,    58,
       0,     0,    61,    84,     0,     0,     0,     0,    36,    49,
      49,     0,     0,    59,    33,    49,    62,    85,    95,     0,
      49,    37,     0,     0,    96,     0,     0,    34,     0,    63,
      86,     0,    89,     0,    38,     0,    35,    49,     0,    92
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -159,  -159,  -159,  -159,  -159,   161,  -159,  -159,  -159,  -159,
     142,  -159,  -159,  -159,  -159,  -159,  -159,  -159,   -87,  -159,
    -159,    46,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -104,
    -159,    79,  -159,  -159,  -159,  -159,  -158,  -159,  -159,    37,
    -159,  -159,  -159,  -159,  -159,   -35,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,    -1,   -34,  -159,   137,  -159,  -159,  -159,
     -25,  -159,  -159,   171,   194,    12,    14,   -22,  -159
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    21,    47,    11,    12,    13,    35,    90,
      29,    30,    31,   107,   149,    32,    94,   115,    58,    59,
      97,   144,   145,   146,   230,   243,   147,   225,   238,    54,
     126,    99,   100,    66,   109,   168,   127,   128,   129,   130,
     200,   216,   131,   219,   232,   132,   133,   159,   160,   134,
     135,   220,   233,   136,   184,   208,   137,   183,   207,   197,
     235,   138,   139,   140,   141,    56,    84,    85,    86,    87,
      15,    16,    17,    26,    18,   178,   181,    57,    42
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      55,    14,    45,    41,   106,   125,     3,   108,    27,    28,
      60,   186,    49,    37,    38,    39,    40,   142,   143,    69,
     114,    14,    88,   187,    19,    22,   199,   118,    23,    50,
      24,    25,    34,    46,    51,    48,    52,     4,     5,     6,
       7,     8,   209,    61,    62,    63,   101,    64,    65,    91,
     103,    68,    92,    53,    93,   104,     4,     5,     6,     7,
       8,   226,   227,    96,    95,   125,    60,   231,   102,    60,
     105,   110,   237,   112,   113,   161,   111,   150,   162,   163,
     125,     9,    60,   164,   165,   166,    10,   172,   180,   248,
     167,   101,   169,   173,   185,   189,   125,   170,     4,     5,
       6,     7,     8,   202,   151,   152,   153,   154,   155,   156,
     175,   157,   158,   190,   210,   125,   125,   171,   191,   192,
     195,   125,   193,    44,   125,   176,   125,   177,    10,   203,
     182,   194,   196,   201,    68,    36,    37,    38,    39,    40,
     179,   211,   206,   125,    36,    37,    38,    39,    40,   212,
     213,   214,   215,   218,   222,   116,    37,    38,    39,    40,
     217,   223,   224,   229,   239,    60,    98,   240,   228,   244,
     241,   179,    50,   242,   245,   247,    60,    51,   246,    52,
     221,   249,   198,    33,     4,     5,     6,     7,     8,   117,
      67,   174,   148,   234,    89,   236,    53,    43,   118,   119,
     120,   121,   122,   123,    20,   204,   124,   188,   205,    44,
       0,     0,     0,     0,    10,   116,    37,    38,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,    51,     0,    52,
       0,     0,     0,     0,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     0,    53,     0,     0,   119,
     120,     0,     0,     0,     0,     0,   124,     0,     0,    44,
       0,     0,     0,     0,    10,    70,    71,    72,    73,    74,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,    77,     0,    78,    79,    80,    81,    82,    83
};

static const yytype_int16 yycheck[] =
{
      34,     2,    27,    25,    91,   109,     0,    94,    60,    61,
      35,   169,     3,     4,     5,     6,     7,    60,    61,    53,
     107,    22,    56,    42,     3,    56,   184,    46,     3,    20,
      42,    40,    14,     3,    25,    56,    27,    32,    33,    34,
      35,    36,   200,    41,     3,     3,    68,    44,    58,    55,
      84,    44,     3,    44,    44,    89,    32,    33,    34,    35,
      36,   219,   220,    59,    42,   169,    91,   225,    45,    94,
      43,    42,   230,    45,    55,    44,    98,    45,    44,    44,
     184,    57,   107,    44,    44,    42,    62,     3,     3,   247,
     124,   113,    56,    43,    43,     3,   200,    52,    32,    33,
      34,    35,    36,   190,    14,    15,    16,    17,    18,    19,
      45,    21,    22,    44,   201,   219,   220,   142,    45,    45,
      45,   225,    55,    57,   228,   159,   230,   161,    62,    51,
     164,    55,    45,    44,    44,     3,     4,     5,     6,     7,
     162,    45,    51,   247,     3,     4,     5,     6,     7,    42,
      42,    56,    43,    42,    49,     3,     4,     5,     6,     7,
      45,    43,    42,    44,    43,   190,    25,    43,    56,    43,
      45,   193,    20,    45,    51,    42,   201,    25,    43,    27,
     214,    43,   183,    22,    32,    33,    34,    35,    36,    37,
      48,   145,   113,   228,    57,   229,    44,    26,    46,    47,
      48,    49,    50,    51,    10,   193,    54,   170,   194,    57,
      -1,    -1,    -1,    -1,    62,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    62,     8,     9,    10,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    -1,    26,    27,    28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    65,    66,     0,    32,    33,    34,    35,    36,    57,
      62,    69,    70,    71,   127,   134,   135,   136,   138,     3,
     138,    67,    56,     3,    42,    40,   137,    60,    61,    74,
      75,    76,    79,    69,    14,    72,     3,     4,     5,     6,
       7,   141,   142,   137,    57,   134,     3,    68,    56,     3,
      20,    25,    27,    44,    93,   128,   129,   141,    82,    83,
     134,    41,     3,     3,    44,    58,    97,    74,    44,   128,
       8,     9,    10,    11,    12,    13,    23,    24,    26,    27,
      28,    29,    30,    31,   130,   131,   132,   133,   128,   130,
      73,    55,     3,    44,    80,    42,    59,    84,    25,    95,
      96,   141,    45,   128,   128,    43,    82,    77,    82,    98,
      42,   141,    45,    55,    82,    81,     3,    37,    46,    47,
      48,    49,    50,    51,    54,    93,    94,   100,   101,   102,
     103,   106,   109,   110,   113,   114,   117,   120,   125,   126,
     127,   128,    60,    61,    85,    86,    87,    90,    95,    78,
      45,    14,    15,    16,    17,    18,    19,    21,    22,   111,
     112,    44,    44,    44,    44,    44,    42,   128,    99,    56,
      52,   134,     3,    43,    85,    45,   128,   128,   139,   141,
       3,   140,   128,   121,   118,    43,   100,    42,   103,     3,
      44,    45,    45,    55,    55,    45,    45,   123,   127,   100,
     104,    44,    82,    51,   139,   140,    51,   122,   119,   100,
      82,    45,    42,    42,    56,    43,   105,    45,    42,   107,
     115,   128,    49,    43,    42,    91,   100,   100,    56,    44,
      88,   100,   108,   116,   109,   124,   128,   100,    92,    43,
      43,    45,    45,    89,    43,    51,    43,    42,   100,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    66,    67,    68,    65,    69,    69,    70,    70,
      72,    73,    71,    74,    74,    75,    75,    77,    78,    76,
      80,    81,    79,    82,    82,    82,    83,    84,    84,    85,
      85,    86,    86,    88,    89,    87,    91,    92,    90,    93,
      94,    95,    95,    95,    96,    96,    98,    99,    97,   100,
     100,   101,   101,   101,   102,   102,   103,   104,   105,   103,
     103,   107,   108,   106,   109,   109,   109,   109,   109,   109,
     109,   110,   110,   111,   111,   111,   111,   111,   111,   112,
     112,   113,   113,   113,   115,   116,   114,   118,   119,   117,
     121,   122,   120,   123,   123,   124,   124,   125,   126,   127,
     127,   128,   128,   128,   128,   128,   129,   129,   129,   130,
     130,   130,   131,   131,   131,   131,   131,   131,   132,   132,
     132,   132,   132,   132,   133,   133,   134,   134,   134,   135,
     136,   136,   137,   138,   138,   138,   138,   138,   139,   139,
     140,   140,   141,   141,   142,   142,   142,   142
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,     7,     0,     3,     1,     1,
       0,     0,     7,     0,     3,     1,     1,     0,     0,     8,
       0,     0,     7,     0,     3,     1,     2,     0,     4,     0,
       2,     1,     1,     0,     0,    11,     0,     0,    10,     4,
       2,     0,     3,     1,     2,     1,     0,     0,     6,     0,
       3,     1,     1,     1,     1,     1,     1,     0,     0,     7,
       3,     0,     0,    10,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     0,    10,     0,     0,    10,
       0,     0,    14,     0,     1,     0,     1,     4,     4,     2,
       4,     1,     2,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     3,     3,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1
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
#line 65 "parserVdc.y" /* yacc.c:1646  */
    {pushScope("global","void");}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 66 "parserVdc.y" /* yacc.c:1646  */
    {fprintf(fp,"%s\n",(yyvsp[0].sValue));}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 67 "parserVdc.y" /* yacc.c:1646  */
    {fprintf(fp,"%s\n",(yyvsp[0].sValue));}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 68 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 71 "parserVdc.y" /* yacc.c:1646  */
    {printf("declaracoes inicio\n;");
				create_pointer(char,str,2);
					test(str){
						strcpy(str, " ");
						(yyval.sValue) = str;
						printf("declaracoes fim\n;");
					}
					
				}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 81 "parserVdc.y" /* yacc.c:1646  */
    {printf("declaracoes inicio\n;");int tamanho = 4 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[0].sValue));
				create_pointer(char,str,tamanho);
				test(str){
					sprintf(str, "%s;\n %s", (yyvsp[-2].sValue), (yyvsp[0].sValue)); 
					(yyval.sValue) = str;
					printf("declaracoes fim\n;");
				}
				}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 91 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 92 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 96 "parserVdc.y" /* yacc.c:1646  */
    {pushScope((yyvsp[-1].sValue),"MeuTipo");}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 97 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 98 "parserVdc.y" /* yacc.c:1646  */
    {if(insertSymbolTable){
							int tamanho = 13 + strlen((yyvsp[-5].sValue)) + strlen((yyvsp[-2].sValue));
							create_pointer(char,str,tamanho);
							test(str){
								sprintf(str, "MeuTipo %s {\n%s\n}",(yyvsp[-5].sValue),(yyvsp[-2].sValue));
								(yyval.sValue) = str;
							}
						}
						}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 110 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
						test(str){
							strcpy(str, " ");
							(yyval.sValue) = str;
						}
						}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 117 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 4 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[0].sValue));
						create_pointer(char,str,tamanho);
						test(str){
							sprintf(str, "%s;\n %s", (yyvsp[-2].sValue), (yyvsp[0].sValue));
							(yyval.sValue) = str;
						}
						}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 126 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 127 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 130 "parserVdc.y" /* yacc.c:1646  */
    {pushScope((yyvsp[-1].sValue),(yyvsp[-2].sValue));}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 131 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 132 "parserVdc.y" /* yacc.c:1646  */
    {	if(insertSymbolTable((yyvsp[-5].sValue),(yyvsp[-6].sValue))){
								int tamanho = 12 + strlen((yyvsp[-6].sValue)) + strlen((yyvsp[-5].sValue)) +strlen((yyvsp[-2].sValue));
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "Funcao %s %s (%s)", (yyvsp[-6].sValue), (yyvsp[-5].sValue), (yyvsp[-2].sValue));
									(yyval.sValue) = str;
								}
							}
						}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 143 "parserVdc.y" /* yacc.c:1646  */
    {pushScope((yyvsp[-1].sValue),"void");}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 144 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 145 "parserVdc.y" /* yacc.c:1646  */
    {	if(insertSymbolTable((yyvsp[-5].sValue),"void") ){
							int tamanho = 9 + strlen((yyvsp[-5].sValue)) + strlen((yyvsp[-2].sValue));
							create_pointer(char,str,tamanho);
							test(str){
								sprintf(str, "Proc %s (%s)", (yyvsp[-5].sValue),(yyvsp[-2].sValue)); 
								(yyval.sValue) = str;
							} 
						}
					}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 156 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
				test(str){
					strcpy(str, " ");
					(yyval.sValue) = str;
				}
				}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 163 "parserVdc.y" /* yacc.c:1646  */
    {	int tamanho = 3 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[0].sValue));
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "%s, %s", (yyvsp[-2].sValue), (yyvsp[0].sValue)); 
						(yyval.sValue) = str;
					}
					
				}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 171 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 174 "parserVdc.y" /* yacc.c:1646  */
    {	if(insertSymbolTable((yyvsp[0].sValue), (yyvsp[-1].sValue)) ){
								int  tamanho = 1+strlen((yyvsp[-1].sValue))+strlen((yyvsp[0].sValue));
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "%s%s",(yyvsp[-1].sValue),(yyvsp[0].sValue));
									(yyval.sValue) = str;
								}
							} 
						}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 185 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
					test(str){
						strcpy(str," ");
						(yyval.sValue) = str;
					}
					}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 192 "parserVdc.y" /* yacc.c:1646  */
    {	int tamanho = 17 + strlen((char *)(yyvsp[-1].sValue));
						create_pointer(char,str,tamanho);
						test(str){
							sprintf(str, "%s%s\n}", "BlocoFuncoes {\n", (char *) (yyvsp[-1].sValue)); 
							fprintf(fp,"%s\n",str); 
						}
					}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 201 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
				test(str){
					strcpy(str, " ");
					(yyval.sValue) = str;
				}
				}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 208 "parserVdc.y" /* yacc.c:1646  */
    {	int  tamanho = 1+strlen((yyvsp[-1].sValue))+strlen((yyvsp[0].sValue));
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "%s%s",(yyvsp[-1].sValue),(yyvsp[0].sValue));
						(yyval.sValue) = str;
					}
				 
				}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 218 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 219 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 223 "parserVdc.y" /* yacc.c:1646  */
    {inicializaContadores(); pushScope((yyvsp[-4].sValue),(yyvsp[-5].sValue));}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 224 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 225 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 17+strlen((yyvsp[-9].sValue)) + strlen((yyvsp[-8].sValue)) + strlen((yyvsp[-6].sValue))+strlen((yyvsp[-2].sValue));
										create_pointer(char,str,tamanho);
										test(str){
											sprintf(str, "Funcao %s %s (%s) {\n%s\n}", (yyvsp[-9].sValue), (yyvsp[-8].sValue), (yyvsp[-6].sValue), (yyvsp[-2].sValue)); 
											(yyval.sValue) = str;
										}
										}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 235 "parserVdc.y" /* yacc.c:1646  */
    {inicializaContadores();pushScope((char*)(yyvsp[-4].sValue),"void");}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 236 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 236 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 14 + strlen((yyvsp[-8].sValue)) + strlen((yyvsp[-6].sValue)) + strlen((yyvsp[-2].sValue));
																	create_pointer(char,str,tamanho);
																	test(str){
																		sprintf(str, "Proc %s (%s) {\n%s\n}", (yyvsp[-8].sValue), (yyvsp[-6].sValue), (yyvsp[-2].sValue)); 
																		(yyval.sValue) = str;
																	}
																	}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 245 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3+strlen((yyvsp[-3].sValue)) + strlen((yyvsp[-1].sValue));
																create_pointer(char,str,tamanho);
																test(str){
																	sprintf(str, "%s(%s)", (yyvsp[-3].sValue), (yyvsp[-1].sValue)); 
																	(yyval.sValue) = str;
																} 
																}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 254 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 9 + strlen((yyvsp[0].sValue));
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "Retorne %s", (yyvsp[0].sValue)); 
									(yyval.sValue) = str;
								} 
								}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 263 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
																	test(str){
																		strcpy(str, " ");
																		(yyval.sValue) = str;
																	}
																	}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 269 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-2].sValue))+ strlen((yyvsp[0].sValue));
																	create_pointer(char,str,tamanho);
																	test(str){
																		sprintf(str, "%s, %s", (yyvsp[-2].sValue), (yyvsp[0].sValue)); 
																		(yyval.sValue) = str;
																	} 
																	}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 276 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 279 "parserVdc.y" /* yacc.c:1646  */
    {int  tamanho = 1+strlen((yyvsp[-1].sValue))+strlen((yyvsp[0].sValue));
									create_pointer(char,str,tamanho);
									test(str){
										sprintf(str, "%s%s",(yyvsp[-1].sValue),(yyvsp[0].sValue));
										(yyval.sValue) = str;
									} 
									}
#line 1961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 286 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 293 "parserVdc.y" /* yacc.c:1646  */
    {inicializaContadores(); pushScope("main","void");}
#line 1973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 294 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 295 "parserVdc.y" /* yacc.c:1646  */
    {fprintf(fp,"BlocoPrincipal {\n%s}\n",(yyvsp[-2].sValue)); 
									}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 301 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
											test(str){
												strcpy(str, " ");
												(yyval.sValue) = str;
											}
											}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 307 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-2].sValue))+ strlen((yyvsp[0].sValue));
											create_pointer(char,str,tamanho);
											test(str){
												sprintf(str, "%s;\n%s", (yyvsp[-2].sValue), (yyvsp[0].sValue)); 
												(yyval.sValue) = str;
											} 
											}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 316 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 317 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 318 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 321 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 322 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 325 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 326 "parserVdc.y" /* yacc.c:1646  */
    {pushBlockScope("senao",elseCounter);
										elseCounter++;
										}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 329 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 329 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 12 + strlen((yyvsp[-6].sValue))+ strlen((yyvsp[-2].sValue));
											create_pointer(char,str,tamanho);
											test(str){
												sprintf(str, "%s\nSenao {\n%s\n}", (yyvsp[-6].sValue), (yyvsp[-2].sValue));
												(yyval.sValue) = str;
											}  
											}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 336 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 7 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[0].sValue));
													create_pointer(char,str,tamanho);
													test(str){
														sprintf(str, "%s\nSenao%s", (yyvsp[-2].sValue), (yyvsp[0].sValue));
														(yyval.sValue) = str;
													}  
													}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 346 "parserVdc.y" /* yacc.c:1646  */
    {pushBlockScope("se",ifCounter);
							ifCounter++; }
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 348 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 348 "parserVdc.y" /* yacc.c:1646  */
    {	int tamanho = 5 + strlen((yyvsp[-7].sValue)) + strlen((yyvsp[-2].sValue));
														create_pointer(char,str,tamanho);
														test(str){
															sprintf(str, "Se (%s) Execute {\n%s\n}", (yyvsp[-7].sValue), (yyvsp[-2].sValue));
															(yyval.sValue) = str;
														} 
														}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 357 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 358 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 359 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 360 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 361 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 362 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 363 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 366 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 2 + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].sValue));
												create_pointer(char,str,tamanho);
												test(str){
													sprintf(str, "%s %s", (yyvsp[-1].sValue), (yyvsp[0].sValue));
													(yyval.sValue) = str;
												} 
												}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 373 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].sValue));
												create_pointer(char,str,tamanho);
												test(str){
													sprintf(str, "%s %s %s", (yyvsp[-2].sValue), (yyvsp[-1].sValue), (yyvsp[0].sValue)); 
													(yyval.sValue) = str;
												} 
												}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 382 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 383 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 384 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 385 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 386 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 387 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 390 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 391 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 394 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 395 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 396 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 400 "parserVdc.y" /* yacc.c:1646  */
    {pushBlockScope("enquanto",whileCounter);
							whileCounter++;}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 402 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 402 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 25 + strlen((yyvsp[-7].sValue)) + strlen((yyvsp[-2].sValue));
												create_pointer(char,str,tamanho);
												test(str){
													sprintf(str, "Enquanto (%s) Execute {\n%s\n}", (yyvsp[-7].sValue), (yyvsp[-2].sValue)); 
													(yyval.sValue) = str;
												}
												}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 411 "parserVdc.y" /* yacc.c:1646  */
    {	pushBlockScope("facaenquanto",doWhileCounter);
										doWhileCounter++;}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 413 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 414 "parserVdc.y" /* yacc.c:1646  */
    {	int tamanho = 25 + strlen((yyvsp[-6].sValue)) +strlen((yyvsp[-1].sValue));
																		create_pointer(char,str,tamanho);
																		test(str){
																			sprintf(str, "Execute {\n%s\n} Enquanto (%s)", (yyvsp[-6].sValue), (yyvsp[-1].sValue)); 
																			(yyval.sValue) = str;
																		} 
																	  }
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 423 "parserVdc.y" /* yacc.c:1646  */
    {pushBlockScope("para",forCounter);
								forCounter++;}
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 425 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 427 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 22 + strlen((yyvsp[-10].sValue)) + strlen((yyvsp[-7].sValue)) + strlen((yyvsp[-5].sValue)) + strlen((yyvsp[-1].sValue));
													create_pointer(char,str,tamanho);
													test(str){
														sprintf(str, "Para (%s;%s;%s) Execute{\n%s\n}", (yyvsp[-10].sValue), (yyvsp[-7].sValue), (yyvsp[-5].sValue), (yyvsp[-1].sValue)); 
														(yyval.sValue) = str;
													} 
													}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 436 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
							test(str){
								strcpy(str, " ");
								(yyval.sValue) = str;
							}
							}
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 442 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 445 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
						test(str){
							strcpy(str, " ");
							(yyval.sValue) = str;
						}
						}
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 451 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 454 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 10 + strlen((yyvsp[-1].sValue));
													create_pointer(char,str,tamanho);
													test(str){
														sprintf(str, "Imprima(%s)", (yyvsp[-1].sValue)); 
														(yyval.sValue) = str;
													} 
													}
#line 2361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 463 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 7 + strlen((yyvsp[-1].sValue));
											create_pointer(char,str,tamanho);
											test(str){
												sprintf(str, "Leia(%s)", (yyvsp[-1].sValue));  
												(yyval.sValue) = str;
											} 
											}
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 472 "parserVdc.y" /* yacc.c:1646  */
    {if(insertSymbolTable((yyvsp[0].sValue),(yyvsp[-1].sValue))){
											int tamanho = 2 + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].sValue));
											create_pointer(char,str,tamanho);
											test(str){
												sprintf(str, "%s %s", (yyvsp[-1].sValue), (yyvsp[0].sValue));   
												(yyval.sValue) = str;
											}
										}else{
											yyerror("nome de variável já foi declarada!\n");
										} 
										}
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 483 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 4 + strlen((yyvsp[-3].sValue))+ strlen((yyvsp[-2].sValue)) + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].sValue));
									    create_pointer(char,str,tamanho);
										test(str){
											sprintf(str, "%s %s %s %s", (yyvsp[-3].sValue), (yyvsp[-2].sValue), (yyvsp[-1].sValue), (yyvsp[0].sValue)); 
											(yyval.sValue) = str;
										}
										}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 494 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 495 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 2 + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].sValue));
										create_pointer(char,str,tamanho);
										test(str){
											sprintf(str, "%s %s", (yyvsp[-1].sValue), (yyvsp[0].sValue)); 
											(yyval.sValue) = str;
										} 
										}
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 502 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].sValue));
												create_pointer(char,str,tamanho);
												test(str){
													sprintf(str, "%s %s %s", (yyvsp[-2].sValue), (yyvsp[-1].sValue), (yyvsp[0].sValue)); 
													(yyval.sValue) = str;
												} 
												}
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 509 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-1].sValue));
												create_pointer(char,str,tamanho);
												test(str){
													sprintf(str, "(%s)", (yyvsp[-1].sValue));
													(yyval.sValue) = str;
												} 
												}
#line 2443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 516 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].sValue));
															create_pointer(char,str,tamanho);
															test(str){
																sprintf(str, "%s %s %s", (yyvsp[-2].sValue), (yyvsp[-1].sValue), (yyvsp[0].sValue)); 
																(yyval.sValue) = str;
															} 
															}
#line 2455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 525 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 526 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 527 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 530 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 531 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 532 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 535 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 536 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 537 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 538 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 539 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 540 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 543 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 544 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 545 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 546 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 547 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 548 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 551 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 552 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 555 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 556 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 557 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 560 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 9+strlen((yyvsp[0].sValue));
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "MeuTipo %s", (yyvsp[0].sValue));
									(yyval.sValue) = str;
								}
								}
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 569 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 8+strlen((yyvsp[-2].sValue))+ strlen((yyvsp[-1].sValue)) +strlen((yyvsp[0].sValue));
																create_pointer(char,str,tamanho);
																test(str){
																	sprintf(str, "Vetor %s %s%s", (yyvsp[-2].sValue), (yyvsp[-1].sValue), (yyvsp[0].sValue));
																	(yyval.sValue) = str;
																}
																}
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 576 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 8+strlen((yyvsp[-1].sValue))+strlen((yyvsp[0].sValue));
													create_pointer(char,str,tamanho);
													test(str){
														sprintf(str, "Vetor %s %s", (yyvsp[-1].sValue), (yyvsp[0].sValue));
														(yyval.sValue) = str;
													}
													}
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 585 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3+strlen((char*)(yyvsp[-1].sValue));
											create_pointer(char,str,tamanho);
											test(str){
												sprintf(str, "[%s]",(yyvsp[-1].sValue));
												(yyval.sValue) = str;
											}
											}
#line 2641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 594 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 595 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 596 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 597 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 598 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 601 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 602 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = strlen((yyvsp[-2].sValue)) + strlen((yyvsp[0].sValue)) + 3;
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "%s, %s", (yyvsp[-2].sValue), (yyvsp[0].sValue));
									(yyval.sValue) = str;
								}
								}
#line 2689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 611 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 612 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3+strlen((yyvsp[-2].sValue))+strlen((yyvsp[0].sValue));
							create_pointer(char,str,tamanho);
							test(str){
								sprintf(str, "%s, %s",(yyvsp[-2].sValue),(yyvsp[0].sValue));
								(yyval.sValue) = str;
							}
							}
#line 2707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 621 "parserVdc.y" /* yacc.c:1646  */
    { (yyval.sValue) = (yyvsp[0].sValue);}
#line 2713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 622 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 626 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 627 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 628 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 629 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2743 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2747 "y.tab.c" /* yacc.c:1646  */
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
#line 631 "parserVdc.y" /* yacc.c:1906  */


int main (void) {
	startMemoryBank();
	fp = fopen("result.c", "w+");
	iniciar(&scope_stack);
	init_array(&symbol_table,50);
	
	
	int resultado = yyparse ( );
	
	fclose(fp);
	stopMemoryBank();
	return resultado;
}

int yyerror (char *msg) {
	fprintf (stderr, "-- %d: %s at '%s'\n", yylineno, msg, yytext);
	//destrua conteudo e fecha arquivo e exit
	printf("%s\n",msg);

	return 0;
}


int pushScope(char* scope, char* type){
		
	if(procurar(&scope_stack, scope, type)<0){
		empilhar(&scope_stack,scope,type);
		printf("tamanho da pilha apos push:%d\n",scope_stack.tamanho);
	}
	mostrar(&scope_stack);
}

int popScope(){

	if(desempilhar(&scope_stack)<0){
		printf("pilha vazia\n");
	}else{
		printf("pop! tamanho da pilha:%d \n",scope_stack.tamanho);
	}
}

int numdigits(int n){
	int count = 1; /* bound to be at least one digit! */
	while(n != 0){
		n /= 10;
		++count;
	}
	return count;
}

void pushBlockScope(char*nome, int ordem){
	//Pega o item do topo da lista que guarda o escopo atual
	ElementoTipoNome * item = mostrarTopo(&scope_stack);
	create_pointer(char,escopoPai,strlen(item->scopeName));
	test(escopoPai){
		strcpy(escopoPai,item->scopeName);
	}
	
	//Alocando para guardar a ordem
	create_pointer(char,ordemStr,numdigits(ordem));
	test(ordemStr){
		sprintf(ordemStr, "%d", ordem);
	}
	
	int tamanho = strlen(escopoPai) + strlen(nome)+strlen(ordemStr)+1;
	create_pointer(char,resultado,tamanho);
	test(resultado){
		strcpy(resultado,escopoPai);
		strcat(resultado,nome);
		strcat(resultado,ordemStr);
		printf("nome do escopo adicionado na pilha: %s\n",resultado);
		
		//coloca na pilha
		pushScope(resultado,"void");
	}
}

void inicializaContadores(){
	forCounter = 0;
	ifCounter= 0;
	whileCounter= 0;
	elseCounter = 0;
	doWhileCounter = 0;
}

int insertSymbolTable(char*name,char*type){
	int tamanho = strlen(mostrarTopo(&scope_stack)->scopeName)+strlen(name)+1;
	create_pointer(char,key,tamanho);
	test(key){
		strcpy(key,mostrarTopo(&scope_stack)->scopeName);
		strcat(key,name);
	}
	
	Symbol *item = createSymbol(key,name,mostrarTopo(&scope_stack)->scopeName,type);
	int result = insert(&symbol_table,item);
	
	
	if(result){
		printf("variavel inserida na tabela de simbolo. tamanho da hash: %d\n",symbol_table.size);
		return 1;
	}else{
		create_pointer(char,errormsg,50);
		test(errormsg){
			sprintf(errormsg, "Na função ‘%s’:\n erro: redeclaração de ‘%s’",
					mostrarTopo(&scope_stack)->scopeName,name);
			printf("%s",errormsg);
			yyerror(errormsg);
			
		}
	}
	
}

int checkBeforeDeclaration(char* name){
	
	int keysize = strlen(name) + strlen(mostrarTopo(&scope_stack)->scopeName)+1;
	create_pointer(char,key,keysize);
	test(key){
		strcpy(key,mostrarTopo(&scope_stack)->scopeName);
		strcat(key,name);
	}
	
	Symbol * item = findHashTable(&symbol_table,key);
	if(item!=NULL){
		printf("ok, variavel ja foi declarada\n");
		return 1;
	}else{
		create_pointer(char,errormsg,50);
		test(errormsg){
			sprintf(errormsg, "Na função ‘%s’:\n erro: ‘%s’ não declarada (primeiro uso nesta função)\n",
					mostrarTopo(&scope_stack)->scopeName,name);
			printf("erro: %s",errormsg);
			yyerror(errormsg);
			
		}
		
		
	}
}

/*
void check_type(char* identifier, char* scope){
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
