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
#include <stdbool.h>
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
static struct AllAttributes *attrib;


/*usado para contar qual bloco está*/
int forCounter;
int ifCounter;
int whileCounter;
int elseCounter;
int doWhileCounter;


void pushBlockScope(char*nome, int ordem);
void inicializaContadores();
int insertSymbolTable(char*name,char*type);
Symbol* checkBeforeDeclaration(char* name);
char * getCType(char * type);



#line 105 "y.tab.c" /* yacc.c:339  */

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
#line 40 "parserVdc.y" /* yacc.c:355  */

	struct AllAttributes * attrib;
	char * sValue;  /* string value */

#line 276 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 291 "y.tab.c" /* yacc.c:358  */

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
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  152
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  255

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
       0,    71,    71,    72,    73,    71,    77,    86,    97,    98,
     102,   103,   102,   122,   128,   138,   139,   142,   143,   142,
     155,   156,   155,   168,   174,   183,   186,   197,   203,   213,
     219,   230,   231,   234,   235,   236,   237,   234,   247,   247,
     248,   249,   247,   259,   259,   270,   279,   285,   293,   296,
     303,   309,   310,   309,   317,   323,   333,   334,   335,   338,
     339,   342,   343,   344,   343,   352,   363,   364,   362,   374,
     375,   376,   377,   378,   379,   380,   383,   393,   403,   404,
     405,   406,   407,   408,   411,   412,   415,   416,   417,   421,
     422,   420,   432,   433,   432,   443,   444,   443,   456,   462,
     465,   471,   474,   484,   493,   504,   518,   521,   531,   541,
     551,   563,   564,   565,   568,   569,   570,   573,   574,   575,
     576,   577,   578,   581,   582,   583,   584,   585,   586,   589,
     590,   593,   594,   595,   598,   611,   623,   635,   645,   646,
     647,   648,   649,   652,   653,   662,   663,   673,   680,   686,
     689,   692,   695
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
  "definicao_funcao", "$@10", "$@11", "$@12", "$@13",
  "definicao_procedimento", "$@14", "$@15", "$@16", "$@17",
  "chamada_funcao", "$@18", "retorne", "parametros_chamada",
  "parametro_chamada", "bloco_principal", "$@19", "$@20", "sentencas",
  "sentenca", "controle", "bloco_se", "$@21", "$@22", "se_simplificado",
  "$@23", "$@24", "comando", "atribuicao", "atribuicao_binaria",
  "atribuicao_unaria", "repeticao", "bloco_enquanto", "$@25", "$@26",
  "bloco_faca_enquanto", "$@27", "$@28", "bloco_para", "$@29", "$@30",
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

#define YYPACT_NINF -168

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-168)))

#define YYTABLE_NINF -44

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -168,    16,    13,  -168,  -168,  -168,  -168,  -168,  -168,    23,
     103,  -168,   -29,  -168,  -168,    26,  -168,  -168,  -168,   -12,
      -9,   -56,    13,    18,  -168,   149,    -9,    24,    39,  -168,
      -5,  -168,  -168,  -168,     8,    24,  -168,  -168,  -168,  -168,
    -168,    20,  -168,  -168,    59,    60,    25,     6,   -56,    29,
    -168,  -168,  -168,     8,    82,  -168,     8,    82,  -168,    12,
      71,  -168,  -168,    32,  -168,    38,    42,  -168,    40,    57,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,     8,  -168,  -168,  -168,  -168,     8,
      61,    24,  -168,  -168,    24,  -168,    41,  -168,    93,  -168,
    -168,  -168,  -168,  -168,    24,  -168,   173,   -36,   149,    62,
      30,  -168,  -168,    70,    22,  -168,    72,    73,    75,    76,
      77,    84,     8,    82,  -168,  -168,    68,  -168,  -168,    80,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
      24,   130,    97,   -36,  -168,  -168,  -168,  -168,    93,    99,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,     8,
    -168,     8,   149,   139,     8,  -168,  -168,  -168,   102,   173,
     -25,   144,  -168,  -168,  -168,  -168,  -168,  -168,   104,   105,
     106,   107,   112,   113,    24,   173,  -168,  -168,  -168,  -168,
    -168,   115,   109,  -168,   149,   139,  -168,   114,  -168,  -168,
    -168,   173,   119,  -168,   122,  -168,  -168,   124,    92,   125,
    -168,  -168,    24,  -168,  -168,     8,   118,   126,    24,   127,
     173,   173,   117,   138,  -168,   129,   128,  -168,  -168,   209,
       8,   141,  -168,   145,   146,  -168,   142,   150,  -168,   173,
    -168,  -168,   120,  -168,   173,  -168,   148,  -168,   151,   173,
     154,  -168,   156,  -168,  -168
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     6,     1,   142,   141,   140,   139,   138,     0,
       0,     3,     0,     9,     8,     0,   133,   132,   131,   134,
       0,    13,     6,   104,    10,     0,   136,     0,     0,     4,
       0,    16,    15,     7,     0,    23,   147,   152,   150,   149,
     151,     0,   148,   135,     0,     0,     0,     0,    13,   147,
     112,   113,   111,     0,     0,   105,     0,   106,    11,    25,
       0,   137,   134,     0,    20,     0,    27,    14,     0,     0,
     117,   118,   119,   120,   121,   122,   129,   130,   123,   127,
     128,   124,   125,   126,     0,   115,   116,   114,   107,     0,
       0,    23,    26,    17,    23,    51,     0,     5,    46,   109,
     110,   108,    12,    24,    23,    21,    54,    29,     0,     0,
      48,    50,    18,     0,   147,    60,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    52,     0,    57,    59,    61,
      56,    73,    58,    86,    87,    88,    70,    71,    69,    72,
       0,     0,     0,    29,    31,    32,    49,    44,    46,     0,
      22,    78,    79,    80,    81,    82,    83,    84,    85,     0,
      76,     0,     0,     0,     0,    95,    92,    45,     0,    54,
       0,     0,    38,    28,    30,    47,    19,    77,     0,     0,
     143,   145,     0,     0,    98,    54,    53,    55,    62,    65,
      33,     0,     0,   102,     0,     0,   103,     0,    96,    99,
      93,    54,     0,    39,     0,   144,   146,     0,     0,     0,
      63,    34,    23,    66,    89,     0,     0,     0,    23,     0,
      54,    54,     0,     0,    64,     0,     0,    67,    90,   100,
       0,     0,    40,     0,     0,   101,     0,     0,    35,    54,
      68,    91,     0,    94,    54,    41,     0,    36,     0,    54,
       0,    42,     0,    37,    97
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,  -168,  -168,  -168,  -168,   162,  -168,  -168,  -168,  -168,
     143,  -168,  -168,  -168,  -168,  -168,  -168,  -168,   -84,  -168,
    -168,    58,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,   -98,  -168,  -168,    54,  -168,  -168,  -168,
    -168,  -167,  -168,  -168,    33,  -168,  -168,  -168,  -168,  -168,
     -18,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,     1,   -34,
    -168,   147,  -168,  -168,  -168,   -26,  -168,  -168,   192,   215,
      34,    31,   -19,  -168
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    21,    47,    11,    12,    13,    35,    90,
      29,    30,    31,   104,   149,    32,    94,   113,    58,    59,
      97,   142,   143,   144,   202,   218,   244,   250,   145,   191,
     212,   239,   248,    54,    68,   124,   109,   110,    66,   106,
     168,   125,   126,   127,   128,   201,   217,   129,   220,   233,
     130,   131,   159,   160,   132,   133,   221,   234,   134,   185,
     209,   135,   184,   208,   198,   236,   136,   137,   138,   139,
      56,    84,    85,    86,    87,    15,    16,    17,    26,    18,
     179,   182,    57,    42
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,    45,   187,    14,    27,    28,    41,   103,   123,    60,
     105,    49,    37,    38,    39,    40,     3,   188,   200,    69,
     112,   116,    88,    14,   140,   141,    19,    22,    50,    23,
      24,    25,    34,    51,   210,    52,   151,   152,   153,   154,
     155,   156,    46,   157,   158,     4,     5,     6,     7,     8,
     100,    48,    53,   227,   228,   101,     4,     5,     6,     7,
       8,    61,    62,    63,    65,    60,   -43,    91,    60,    64,
       9,   123,   245,   -43,    92,    10,    93,   247,    60,   111,
      95,    44,   252,   107,    98,   148,    10,   123,   167,   146,
      70,    71,    72,    73,    74,    75,    36,    37,    38,    39,
      40,    96,    99,   123,   102,    76,    77,   147,    78,    79,
      80,    81,    82,    83,   171,   150,   161,   162,   108,   163,
     164,   165,   123,   123,   169,   177,   166,   178,   219,   111,
     183,   123,   170,   172,   225,     4,     5,     6,     7,     8,
     173,   123,   181,   180,   176,   186,   123,   190,   215,   192,
     193,   123,    36,    37,    38,    39,    40,   196,   197,   203,
     204,   194,   195,   211,   213,   207,   214,   223,   216,   224,
     232,   246,   226,   229,   231,   180,   114,    37,    38,    39,
      40,   222,   230,   238,    33,   199,    60,   242,   240,   241,
     249,    67,    60,    50,   251,   243,   237,   253,    51,   254,
      52,   174,   175,   189,    89,     4,     5,     6,     7,     8,
     115,   235,   114,    37,    38,    39,    40,    53,    43,   116,
     117,   118,   119,   120,   121,    20,   206,   122,   205,    50,
      44,     0,     0,     0,    51,    10,    52,     0,     0,     0,
       0,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       0,     0,     0,    53,     0,     0,   117,   118,     0,     0,
       0,     0,     0,   122,     0,     0,    44,     0,     0,     0,
       0,    10
};

static const yytype_int16 yycheck[] =
{
      34,    27,   169,     2,    60,    61,    25,    91,   106,    35,
      94,     3,     4,     5,     6,     7,     0,    42,   185,    53,
     104,    46,    56,    22,    60,    61,     3,    56,    20,     3,
      42,    40,    14,    25,   201,    27,    14,    15,    16,    17,
      18,    19,     3,    21,    22,    32,    33,    34,    35,    36,
      84,    56,    44,   220,   221,    89,    32,    33,    34,    35,
      36,    41,     3,     3,    58,    91,    44,    55,    94,    44,
      57,   169,   239,    44,     3,    62,    44,   244,   104,    98,
      42,    57,   249,    42,    44,    55,    62,   185,   122,   108,
       8,     9,    10,    11,    12,    13,     3,     4,     5,     6,
       7,    59,    45,   201,    43,    23,    24,    45,    26,    27,
      28,    29,    30,    31,   140,    45,    44,    44,    25,    44,
      44,    44,   220,   221,    56,   159,    42,   161,   212,   148,
     164,   229,    52,     3,   218,    32,    33,    34,    35,    36,
      43,   239,     3,   162,    45,    43,   244,     3,    56,    45,
      45,   249,     3,     4,     5,     6,     7,    45,    45,    44,
      51,    55,    55,    44,    42,    51,    42,    49,    43,    43,
      42,    51,    45,    56,    45,   194,     3,     4,     5,     6,
       7,   215,    44,    42,    22,   184,   212,    45,    43,    43,
      42,    48,   218,    20,    43,    45,   230,    43,    25,    43,
      27,   143,   148,   170,    57,    32,    33,    34,    35,    36,
      37,   229,     3,     4,     5,     6,     7,    44,    26,    46,
      47,    48,    49,    50,    51,    10,   195,    54,   194,    20,
      57,    -1,    -1,    -1,    25,    62,    27,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    65,    66,     0,    32,    33,    34,    35,    36,    57,
      62,    69,    70,    71,   132,   139,   140,   141,   143,     3,
     143,    67,    56,     3,    42,    40,   142,    60,    61,    74,
      75,    76,    79,    69,    14,    72,     3,     4,     5,     6,
       7,   146,   147,   142,    57,   139,     3,    68,    56,     3,
      20,    25,    27,    44,    97,   133,   134,   146,    82,    83,
     139,    41,     3,     3,    44,    58,   102,    74,    98,   133,
       8,     9,    10,    11,    12,    13,    23,    24,    26,    27,
      28,    29,    30,    31,   135,   136,   137,   138,   133,   135,
      73,    55,     3,    44,    80,    42,    59,    84,    44,    45,
     133,   133,    43,    82,    77,    82,   103,    42,    25,   100,
     101,   146,    82,    81,     3,    37,    46,    47,    48,    49,
      50,    51,    54,    97,    99,   105,   106,   107,   108,   111,
     114,   115,   118,   119,   122,   125,   130,   131,   132,   133,
      60,    61,    85,    86,    87,    92,   146,    45,    55,    78,
      45,    14,    15,    16,    17,    18,    19,    21,    22,   116,
     117,    44,    44,    44,    44,    44,    42,   133,   104,    56,
      52,   139,     3,    43,    85,   100,    45,   133,   133,   144,
     146,     3,   145,   133,   126,   123,    43,   105,    42,   108,
       3,    93,    45,    45,    55,    55,    45,    45,   128,   132,
     105,   109,    88,    44,    51,   144,   145,    51,   127,   124,
     105,    44,    94,    42,    42,    56,    43,   110,    89,    82,
     112,   120,   133,    49,    43,    82,    45,   105,   105,    56,
      44,    45,    42,   113,   121,   114,   129,   133,    42,    95,
      43,    43,    45,    45,    90,   105,    51,   105,    96,    42,
      91,    43,   105,    43,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    66,    67,    68,    65,    69,    69,    70,    70,
      72,    73,    71,    74,    74,    75,    75,    77,    78,    76,
      80,    81,    79,    82,    82,    82,    83,    84,    84,    85,
      85,    86,    86,    88,    89,    90,    91,    87,    93,    94,
      95,    96,    92,    98,    97,    99,   100,   100,   100,   101,
     101,   103,   104,   102,   105,   105,   106,   106,   106,   107,
     107,   108,   109,   110,   108,   108,   112,   113,   111,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   116,   116,
     116,   116,   116,   116,   117,   117,   118,   118,   118,   120,
     121,   119,   123,   124,   122,   126,   127,   125,   128,   128,
     129,   129,   130,   131,   132,   132,   133,   133,   133,   133,
     133,   134,   134,   134,   135,   135,   135,   136,   136,   136,
     136,   136,   136,   137,   137,   137,   137,   137,   137,   138,
     138,   139,   139,   139,   140,   141,   141,   142,   143,   143,
     143,   143,   143,   144,   144,   145,   145,   146,   146,   147,
     147,   147,   147
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     0,     7,     0,     3,     1,     1,
       0,     0,     7,     0,     3,     1,     1,     0,     0,     8,
       0,     0,     7,     0,     3,     1,     2,     0,     4,     0,
       2,     1,     1,     0,     0,     0,     0,    13,     0,     0,
       0,     0,    12,     0,     5,     2,     0,     3,     1,     2,
       1,     0,     0,     6,     0,     3,     1,     1,     1,     1,
       1,     1,     0,     0,     7,     3,     0,     0,    10,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       0,    10,     0,     0,    10,     0,     0,    14,     0,     1,
       0,     1,     4,     4,     2,     4,     1,     2,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     3,     3,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1
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
#line 71 "parserVdc.y" /* yacc.c:1646  */
    {pushScope("global","void");}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 72 "parserVdc.y" /* yacc.c:1646  */
    {fprintf(fp,"%s\n",(yyvsp[0].sValue));}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 73 "parserVdc.y" /* yacc.c:1646  */
    {fprintf(fp,"%s\n",(yyvsp[0].sValue));}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 74 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 77 "parserVdc.y" /* yacc.c:1646  */
    {printf("declaracoes inicio\n;");
				create_pointer(char,str,2);
					test(str){
						strcpy(str, " ");
						(yyval.sValue) = str;
						printf("declaracoes fim\n;");
					}
					
				}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 87 "parserVdc.y" /* yacc.c:1646  */
    {printf("declaracoes inicio\n;");int tamanho = 4 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[0].sValue));
				create_pointer(char,str,tamanho);
				test(str){
					sprintf(str, "%s;\n %s", (yyvsp[-2].sValue), (yyvsp[0].sValue)); 
					(yyval.sValue) = str;
					printf("declaracoes fim\n;");
				}
				}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 97 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 98 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 102 "parserVdc.y" /* yacc.c:1646  */
    {pushScope((yyvsp[-1].sValue),"MeuTipo");}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 103 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 104 "parserVdc.y" /* yacc.c:1646  */
    {int tam = strlen((yyvsp[-5].sValue))+8;
						create_pointer(char,meutipoId,tam);
							test(meutipoId){
								strcpy(meutipoId,"MeuTipo");
								strcat(meutipoId,(yyvsp[-5].sValue));
							}
						if(insertSymbolTable((yyvsp[-5].sValue),meutipoId)){
							int tamanho = 13 + strlen((yyvsp[-5].sValue)) + strlen((yyvsp[-2].sValue));
							create_pointer(char,str,tamanho);
							test(str){
								sprintf(str, "MeuTipo %s {\n%s\n}",(yyvsp[-5].sValue),(yyvsp[-2].sValue));
								(yyval.sValue) = str;
							}
						}
						}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 122 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
						test(str){
							strcpy(str, " ");
							(yyval.sValue) = str;
						}
						}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 129 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 4 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[0].sValue));
						create_pointer(char,str,tamanho);
						test(str){
							sprintf(str, "%s;\n %s", (yyvsp[-2].sValue), (yyvsp[0].sValue));
							(yyval.sValue) = str;
						}
						}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 138 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 139 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 142 "parserVdc.y" /* yacc.c:1646  */
    {pushScope((yyvsp[-1].sValue),(yyvsp[-2].sValue));}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 143 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 144 "parserVdc.y" /* yacc.c:1646  */
    {	if(insertSymbolTable((yyvsp[-5].sValue),(yyvsp[-6].sValue))){
								int tamanho = 12 + strlen((yyvsp[-6].sValue)) + strlen((yyvsp[-5].sValue)) +strlen((yyvsp[-2].sValue));
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "Funcao %s %s (%s)", (yyvsp[-6].sValue), (yyvsp[-5].sValue), (yyvsp[-2].sValue));
									(yyval.sValue) = str;
								}
							}
						}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 155 "parserVdc.y" /* yacc.c:1646  */
    {pushScope((yyvsp[-1].sValue),"void");}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 156 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 157 "parserVdc.y" /* yacc.c:1646  */
    {	if(insertSymbolTable((yyvsp[-5].sValue),"void") ){
							int tamanho = 9 + strlen((yyvsp[-5].sValue)) + strlen((yyvsp[-2].sValue));
							create_pointer(char,str,tamanho);
							test(str){
								sprintf(str, "Proc %s (%s)", (yyvsp[-5].sValue),(yyvsp[-2].sValue)); 
								(yyval.sValue) = str;
							} 
						}
					}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 168 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
				test(str){
					strcpy(str, " ");
					(yyval.sValue) = str;
				}
				}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 175 "parserVdc.y" /* yacc.c:1646  */
    {	int tamanho = 3 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[0].sValue));
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "%s, %s", (yyvsp[-2].sValue), (yyvsp[0].sValue)); 
						(yyval.sValue) = str;
					}
					
				}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 183 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 186 "parserVdc.y" /* yacc.c:1646  */
    {	if(insertSymbolTable((yyvsp[0].sValue), (yyvsp[-1].sValue)) ){
								int  tamanho = 1+strlen((yyvsp[-1].sValue))+strlen((yyvsp[0].sValue));
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "%s%s",(yyvsp[-1].sValue),(yyvsp[0].sValue));
									(yyval.sValue) = str;
								}
							}
						}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 197 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
					test(str){
						strcpy(str," ");
						(yyval.sValue) = str;
					}
					}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 204 "parserVdc.y" /* yacc.c:1646  */
    {	int tamanho = 17 + strlen((char *)(yyvsp[-1].sValue));
						create_pointer(char,str,tamanho);
						test(str){
							sprintf(str, "%s%s\n}", "BlocoFuncoes {\n", (char *) (yyvsp[-1].sValue)); 
							fprintf(fp,"%s\n",str); 
						}
					}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 213 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
				test(str){
					strcpy(str, " ");
					(yyval.sValue) = str;
				}
				}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 220 "parserVdc.y" /* yacc.c:1646  */
    {	int  tamanho = 1+strlen((yyvsp[-1].sValue))+strlen((yyvsp[0].sValue));
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "%s%s",(yyvsp[-1].sValue),(yyvsp[0].sValue));
						(yyval.sValue) = str;
					}
				 
				}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 230 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 231 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 234 "parserVdc.y" /* yacc.c:1646  */
    {checkBeforeDeclaration((yyvsp[0].sValue));}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 235 "parserVdc.y" /* yacc.c:1646  */
    {pushScope((yyvsp[-2].sValue),(yyvsp[-3].sValue));}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 236 "parserVdc.y" /* yacc.c:1646  */
    {inicializaContadores();}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 237 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 238 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 17+strlen((yyvsp[-11].sValue)) + strlen((yyvsp[-10].sValue)) + strlen((yyvsp[-6].sValue))+strlen((yyvsp[-2].sValue));
						create_pointer(char,str,tamanho);
						test(str){
							sprintf(str, "Funcao %s %s (%s) {\n%s\n}", (yyvsp[-11].sValue), (yyvsp[-10].sValue), (yyvsp[-6].sValue), (yyvsp[-2].sValue)); 
							(yyval.sValue) = str;
						}
						}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 247 "parserVdc.y" /* yacc.c:1646  */
    {checkBeforeDeclaration((yyvsp[0].sValue));}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 247 "parserVdc.y" /* yacc.c:1646  */
    {pushScope((char*)(yyvsp[-2].sValue),"void");}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 248 "parserVdc.y" /* yacc.c:1646  */
    {inicializaContadores();}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 249 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 250 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 14 + strlen((yyvsp[-10].sValue)) + strlen((yyvsp[-6].sValue)) + strlen((yyvsp[-2].sValue));
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "Proc %s (%s) {\n%s\n}", (yyvsp[-10].sValue), (yyvsp[-6].sValue), (yyvsp[-2].sValue)); 
									(yyval.sValue) = str;
								}
								}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 259 "parserVdc.y" /* yacc.c:1646  */
    {checkBeforeDeclaration((yyvsp[0].sValue));}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 261 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3+strlen((yyvsp[-4].sValue)) + strlen((yyvsp[-1].sValue));
						create_pointer(char,str,tamanho);
						test(str){
							sprintf(str, "%s(%s)", (yyvsp[-4].sValue), (yyvsp[-1].sValue)); 
							(yyval.sValue) = str;
						} 
						}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 270 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 9 + strlen((yyvsp[0].attrib)->code);
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "Retorne %s", (yyvsp[0].attrib)->code); 
									(yyval.sValue) = str;
								} 
								}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 279 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
						test(str){
							strcpy(str, " ");
							(yyval.sValue) = str;
						}
						}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 286 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-2].sValue))+ strlen((yyvsp[0].sValue));
						create_pointer(char,str,tamanho);
						test(str){
							sprintf(str, "%s, %s", (yyvsp[-2].sValue), (yyvsp[0].sValue)); 
							(yyval.sValue) = str;
						} 
						}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 293 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 296 "parserVdc.y" /* yacc.c:1646  */
    {int  tamanho = 1+strlen((yyvsp[-1].sValue))+strlen((yyvsp[0].attrib)->code);
									create_pointer(char,str,tamanho);
									test(str){
										sprintf(str, "%s%s",(yyvsp[-1].sValue),(yyvsp[0].attrib)->code);
										(yyval.sValue) = str;
									} 
									}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 303 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].attrib)->code;}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 309 "parserVdc.y" /* yacc.c:1646  */
    {inicializaContadores(); pushScope("main","void");}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 310 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 311 "parserVdc.y" /* yacc.c:1646  */
    {fprintf(fp,"BlocoPrincipal {\n%s}\n",(yyvsp[-2].sValue)); 
						}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 317 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
				test(str){
					strcpy(str, " ");
					(yyval.sValue) = str;
				}
				}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 324 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 4 + strlen((yyvsp[-2].sValue))+ strlen((yyvsp[0].sValue));
			create_pointer(char,str,tamanho);
			test(str){
				sprintf(str, "\t%s;\n%s", (yyvsp[-2].sValue), (yyvsp[0].sValue)); 
				(yyval.sValue) = str;
			} 
			}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 333 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 334 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 335 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 338 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 339 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 342 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 343 "parserVdc.y" /* yacc.c:1646  */
    {pushBlockScope("senao",elseCounter); 	elseCounter++;}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 344 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 345 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 12 + strlen((yyvsp[-6].sValue))+ strlen((yyvsp[-2].sValue));
				create_pointer(char,str,tamanho);
				test(str){
					sprintf(str, "%s\nSenao {\n%s\n}", (yyvsp[-6].sValue), (yyvsp[-2].sValue));
					(yyval.sValue) = str;
				}  
				}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 353 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 7 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[0].sValue));
				create_pointer(char,str,tamanho);
				test(str){
					sprintf(str, "%s\nSenao%s", (yyvsp[-2].sValue), (yyvsp[0].sValue));
					(yyval.sValue) = str;
				}  
				}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 363 "parserVdc.y" /* yacc.c:1646  */
    {pushBlockScope("se",ifCounter);	ifCounter++; }
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 364 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 365 "parserVdc.y" /* yacc.c:1646  */
    {	int tamanho = 8 + strlen((yyvsp[-7].attrib)->code) + strlen((yyvsp[-2].sValue));
							create_pointer(char,str,tamanho);
							test(str){
								sprintf(str, "Se (%s) \tExecute {\n\t\t%s\n}", (yyvsp[-7].attrib)->code, (yyvsp[-2].sValue));
								(yyval.sValue) = str;
							} 
						}
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 374 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 375 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 376 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 377 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].attrib)->code;}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 378 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 379 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 380 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 384 "parserVdc.y" /* yacc.c:1646  */
    {	int tamanho = 2 + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].sValue));
						create_pointer(char,str,tamanho);
						test(str){
							sprintf(str, "%s %s", (yyvsp[-1].sValue), (yyvsp[0].sValue));
							(yyval.sValue) = str;
						}
					}
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 394 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].attrib)->code);
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "%s %s %s", (yyvsp[-2].sValue), (yyvsp[-1].sValue), (yyvsp[0].attrib)->code); 
						(yyval.sValue) = str;
					} 
					}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 403 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 404 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 405 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 406 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 407 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 408 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 411 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 412 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 415 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 416 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 417 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 421 "parserVdc.y" /* yacc.c:1646  */
    {pushBlockScope("enquanto",whileCounter); whileCounter++;}
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 422 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 423 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 25 + strlen((yyvsp[-7].attrib)->code) + strlen((yyvsp[-2].sValue));
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "Enquanto (%s) Execute {\n%s\n}", (yyvsp[-7].attrib)->code, (yyvsp[-2].sValue)); 
						(yyval.sValue) = str;
					}
					}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 432 "parserVdc.y" /* yacc.c:1646  */
    {pushBlockScope("facaenquanto",doWhileCounter); doWhileCounter++;}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 433 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 434 "parserVdc.y" /* yacc.c:1646  */
    {	int tamanho = 25 + strlen((yyvsp[-6].sValue)) +strlen((yyvsp[-1].attrib)->code);
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "Execute {\n%s\n} Enquanto (%s)", (yyvsp[-6].sValue), (yyvsp[-1].attrib)->code); 
									(yyval.sValue) = str;
								} 
							}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 443 "parserVdc.y" /* yacc.c:1646  */
    {pushBlockScope("para",forCounter); forCounter++;}
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 444 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 447 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 22 + strlen((yyvsp[-10].sValue)) + strlen((yyvsp[-7].attrib)->code) + strlen((yyvsp[-5].sValue)) + strlen((yyvsp[-1].sValue));
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "Para (%s;%s;%s) Execute{\n%s\n}", (yyvsp[-10].sValue), (yyvsp[-7].attrib)->code, (yyvsp[-5].sValue), (yyvsp[-1].sValue)); 
						(yyval.sValue) = str;
					} 
					}
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 456 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
					test(str){
						strcpy(str, " ");
						(yyval.sValue) = str;
					}
					}
#line 2365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 462 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 465 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
				test(str){
					strcpy(str, " ");
					(yyval.sValue) = str;
				}
				}
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 471 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 475 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 10 + strlen((yyvsp[-1].sValue));
				create_pointer(char,str,tamanho);
				test(str){
					sprintf(str, "Imprima(%s)", (yyvsp[-1].sValue)); 
					(yyval.sValue) = str;
				} 
				}
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 484 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 7 + strlen((yyvsp[-1].sValue));
											create_pointer(char,str,tamanho);
											test(str){
												sprintf(str, "Leia(%s)", (yyvsp[-1].sValue));  
												(yyval.sValue) = str;
											} 
											}
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 494 "parserVdc.y" /* yacc.c:1646  */
    {if(insertSymbolTable((yyvsp[0].sValue),(yyvsp[-1].sValue))){
						int tamanho = 2 + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].sValue));
						create_pointer(char,str,tamanho);
						char * type = getCType((yyvsp[-1].sValue));
						test(str){
							sprintf(str, "%s %s", type, (yyvsp[0].sValue));   
							(yyval.sValue) = str;
						}
					}
					}
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 505 "parserVdc.y" /* yacc.c:1646  */
    {if(insertSymbolTable((yyvsp[-2].sValue),(yyvsp[-3].sValue))){
					int tamanho = 4 + strlen((yyvsp[-3].sValue))+ strlen((yyvsp[-2].sValue)) + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].attrib)->code);
				    create_pointer(char,str,tamanho);
					char * type = getCType((yyvsp[-3].sValue));
					test(str){
						sprintf(str, "%s %s %s %s", type, (yyvsp[-2].sValue), (yyvsp[-1].sValue), (yyvsp[0].attrib)->code); 
						(yyval.sValue) = str;
					}
				}
				}
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 518 "parserVdc.y" /* yacc.c:1646  */
    {struct AllAttributes * info =
						attrib_new("Escopo", "Tipo", (yyvsp[0].attrib)->code);
						(yyval.attrib) = info;}
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 522 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 2 + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].attrib)->code);
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "%s %s", (yyvsp[-1].sValue), (yyvsp[0].attrib)->code);
						struct AllAttributes * info =
						attrib_new("Escopo", "Tipo", str);
						(yyval.attrib) = info;
					} 
					}
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 532 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-2].attrib)->code) + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].attrib)->code);
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "%s %s %s", (yyvsp[-2].attrib)->code, (yyvsp[-1].sValue), (yyvsp[0].attrib)->code); 
						struct AllAttributes * info =
						attrib_new("Escopo", "Tipo", str);
						(yyval.attrib) = info;
					} 
					}
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 542 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-1].attrib)->code);
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "(%s)", (yyvsp[-1].attrib)->code);
						struct AllAttributes * info =
						attrib_new("Escopo", "Tipo", str);
						(yyval.attrib) = info;
					} 
					}
#line 2492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 552 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].attrib)->code);
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "%s %s %s", (yyvsp[-2].sValue), (yyvsp[-1].sValue), (yyvsp[0].attrib)->code); 
						struct AllAttributes * info =
						attrib_new("Escopo", "Tipo", str);
						(yyval.attrib) = info;
					} 
					}
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 563 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 564 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 565 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 568 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 569 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 570 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 573 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 574 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 575 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 576 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 577 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 578 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 581 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 582 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 583 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 584 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 585 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 586 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 589 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 590 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 593 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 594 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].attrib)->code;}
#line 2638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 595 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 599 "parserVdc.y" /* yacc.c:1646  */
    {
					if(insertSymbolTable((yyvsp[0].sValue),"MeuTipo")){
						int tamanho = 9+strlen((yyvsp[0].sValue));
						create_pointer(char,str,tamanho);
						test(str){
							sprintf(str, "MeuTipo %s", (yyvsp[0].sValue));
							(yyval.sValue) = str;
						}
					}
					}
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 612 "parserVdc.y" /* yacc.c:1646  */
    {
					int tamanho = 8+strlen((yyvsp[-2].sValue))+ strlen((yyvsp[-1].sValue)) +strlen((yyvsp[0].sValue));
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "Vetor %s %s%s", (yyvsp[-2].sValue), (yyvsp[-1].sValue), (yyvsp[0].sValue));
						struct AllAttributes * info =
						attrib_new("Escopo", "Tipo", str);
						(yyval.attrib) = info;
					}
				
				}
#line 2675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 624 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 8+strlen((yyvsp[-1].sValue))+strlen((yyvsp[0].sValue));
				create_pointer(char,str,tamanho);
				test(str){
					sprintf(str, "Vetor %s %s", (yyvsp[-1].sValue), (yyvsp[0].sValue));
						struct AllAttributes * info =
						attrib_new("Escopo", "Tipo", str);
						(yyval.attrib) = info;
				}
				}
#line 2689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 636 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3+strlen((char*)(yyvsp[-1].attrib)->code); //TODO verificar se o termo é do tipo inteiro
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "[%s]",(yyvsp[-1].attrib)->code);
						(yyval.sValue) = str;
					}
					}
#line 2701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 645 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 646 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 647 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 648 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 649 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 652 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].attrib)->code;}
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 653 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = strlen((yyvsp[-2].attrib)->code) + strlen((yyvsp[0].sValue)) + 3;
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "%s, %s", (yyvsp[-2].attrib)->code, (yyvsp[0].sValue));
									(yyval.sValue) = str;
								}
								}
#line 2749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 662 "parserVdc.y" /* yacc.c:1646  */
    {checkBeforeDeclaration((yyvsp[0].sValue)); (yyval.sValue) = (yyvsp[0].sValue);}
#line 2755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 663 "parserVdc.y" /* yacc.c:1646  */
    {checkBeforeDeclaration((yyvsp[-2].sValue));
							int tamanho = 3+strlen((yyvsp[-2].sValue))+strlen((yyvsp[0].sValue));
							create_pointer(char,str,tamanho);
							test(str){
								sprintf(str, "%s, %s",(yyvsp[-2].sValue),(yyvsp[0].sValue));
								(yyval.sValue) = str;
							}
							}
#line 2768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 673 "parserVdc.y" /* yacc.c:1646  */
    {  create_pointer(char,tipo,10);
					test(tipo){
						strcpy(tipo,checkBeforeDeclaration((yyvsp[0].sValue))->type);
					}
					struct AllAttributes * info =
					attrib_new(mostrarTopo(&scope_stack)->scopeName,tipo, (yyvsp[0].sValue));
					(yyval.attrib) = info;}
#line 2780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 680 "parserVdc.y" /* yacc.c:1646  */
    {struct AllAttributes * info =
					attrib_new(mostrarTopo(&scope_stack)->scopeName, (yyvsp[0].attrib)->type, (yyvsp[0].attrib)->code);
					(yyval.attrib) = info;}
#line 2788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 686 "parserVdc.y" /* yacc.c:1646  */
    {struct AllAttributes * info =
					attrib_new(mostrarTopo(&scope_stack)->scopeName, "Real", (yyvsp[0].sValue));
					(yyval.attrib) = info;}
#line 2796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 689 "parserVdc.y" /* yacc.c:1646  */
    {struct AllAttributes * info =
					attrib_new(mostrarTopo(&scope_stack)->scopeName, "Bool", (yyvsp[0].sValue));
					(yyval.attrib) = info;}
#line 2804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 692 "parserVdc.y" /* yacc.c:1646  */
    {struct AllAttributes * info =
					attrib_new(mostrarTopo(&scope_stack)->scopeName, "Inteiro", (yyvsp[0].sValue));
					(yyval.attrib) = info;}
#line 2812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 695 "parserVdc.y" /* yacc.c:1646  */
    {struct AllAttributes * info =
					attrib_new(mostrarTopo(&scope_stack)->scopeName, "Texto", (yyvsp[0].sValue));
					(yyval.attrib) = info;}
#line 2820 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2824 "y.tab.c" /* yacc.c:1646  */
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
#line 699 "parserVdc.y" /* yacc.c:1906  */


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
	//TODO destrua conteudo e fecha arquivo e exit
	fclose(fp);
	fclose(fopen("result.c", "w"));
	remove("result.c");
	exit(0);
	return 0;
}


int pushScope(char* scope, char* type){
		
	if(procurar(&scope_stack, scope, type)<0){
		empilhar(&scope_stack,scope,type);
	}
	mostrar(&scope_stack);
}

int popScope(){

	if(desempilhar(&scope_stack)<0){
		printf("pilha vazia\n");
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
		printf("variavel inserida na tabela de simbolo. tamanho da hash: %d nome: %s escopo: %s\n",symbol_table.size, name, mostrarTopo(&scope_stack)->scopeName);
		return 1;
	}else{
		create_pointer(char,errormsg,50);
		test(errormsg){
			sprintf(errormsg, "Na função ‘%s’:\n erro: redeclaração de ‘%s’\n",
					mostrarTopo(&scope_stack)->scopeName,name);
			yyerror(errormsg);
			
		}
	}
	
}

char * getCType(char * type){
	if(strcmp(type, "Inteiro") == 0){
		return "int";
	}
	else if(strcmp(type, "Real") == 0){
		return "double";
	} 
	else if(strcmp(type, "Texto") == 0){
		return "char *";
	}
	else if(strcmp(type, "Booleano") == 0){
		return "int";
	}
	else if(strcmp(type, "MeuTipo") == 0){
		return "struct";
	}
	else{
		create_pointer(char,errormsg,50);
		test(errormsg){
			sprintf(errormsg, "Na função ‘%s’:\n erro: ‘%s’ não é um tipo válido\n",
					mostrarTopo(&scope_stack)->scopeName,type);
			yyerror(errormsg);
			
		}
	}
}

bool compareTypes(char * type1, char * type2){
	if((strcmp(type1, "Inteiro") == 0 && strcmp(type2, "Real")) == 0||
		(strcmp(type1, "Real") == 0 && strcmp(type2, "Inteiro")==0)
		|| strcmp(type1, type2) == 0)
		return true;
	return false;
}

Symbol* checkBeforeDeclaration(char* name){
	int posicao = scope_stack.tamanho;
	
	do{
		
		ElementoTipoNome* currentScope = procurarTopo(&scope_stack,posicao);
		
		if(currentScope!=NULL){
			int keysize = strlen(name) + strlen(currentScope->scopeName)+1;
			create_pointer(char,key,keysize);
			test(key){
				strcpy(key,currentScope->scopeName);
				strcat(key,name);
			}
			
			Symbol * item = findHashTable(&symbol_table,key);
			
			if(item!=NULL){
				printf("Variavel ja foi declarada. Nome:%s\n",name);
				return item;
			}else{
				posicao--;
			}	
			
		}
	}while(posicao>0);
	
	create_pointer(char,errormsg,50);
	test(errormsg){
		sprintf(errormsg, "Na função ‘%s’:\n erro: ‘%s’ não declarada (primeiro uso nesta função)\n",
				mostrarTopo(&scope_stack)->scopeName,name);
		yyerror(errormsg);
		
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
