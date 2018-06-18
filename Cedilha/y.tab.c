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
char * getScanType(char * type);
char * getPrintType(char * type);



#line 107 "y.tab.c" /* yacc.c:339  */

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
#line 42 "parserVdc.y" /* yacc.c:355  */

	struct AllAttributes * attrib;
	char * sValue;  /* string value */

#line 278 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 293 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   261

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  154
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  257

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
       0,    73,    73,    74,    75,    73,    79,    88,    99,   100,
     104,   105,   104,   124,   130,   140,   141,   144,   145,   144,
     157,   158,   157,   170,   176,   185,   188,   199,   205,   215,
     221,   232,   233,   236,   237,   238,   239,   236,   249,   249,
     250,   251,   249,   261,   261,   272,   281,   287,   295,   298,
     305,   311,   312,   311,   319,   325,   335,   336,   337,   340,
     341,   344,   345,   346,   345,   354,   365,   366,   364,   376,
     377,   378,   379,   380,   381,   382,   385,   395,   405,   406,
     407,   408,   409,   410,   413,   414,   417,   418,   419,   423,
     424,   422,   434,   435,   434,   445,   447,   445,   457,   463,
     466,   472,   475,   485,   495,   507,   514,   520,   529,   540,
     554,   557,   567,   577,   587,   599,   600,   601,   604,   605,
     606,   609,   610,   611,   612,   613,   614,   617,   618,   619,
     620,   621,   622,   625,   626,   629,   630,   631,   634,   647,
     659,   671,   681,   682,   683,   684,   685,   698,   706,   717,
     724,   730,   733,   736,   739
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
  "declaracao_para", "comando_para", "imprime", "termos_imprime",
  "termo_imprime", "leia", "declaracao", "expressao", "operador_unario",
  "operador_binario", "operador_relacional", "operador_aritmetico",
  "operador_booleano", "tipo", "tipo_registro", "tipo_vetor",
  "tamanho_vetor", "tipo_primitivo", "ids_leia", "termo", "literal", YY_NULLPTR
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

#define YYPACT_NINF -150

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-150)))

#define YYTABLE_NINF -44

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -150,     2,   115,  -150,  -150,  -150,  -150,  -150,  -150,     7,
      26,  -150,   -21,  -150,  -150,    18,  -150,  -150,  -150,    -5,
      -1,   -30,   115,    33,  -150,    77,    -1,   127,    37,  -150,
      -8,  -150,  -150,  -150,    99,   127,  -150,  -150,  -150,  -150,
    -150,     8,  -150,  -150,    49,    61,    25,    12,   -30,    28,
    -150,  -150,  -150,    99,   230,  -150,    99,   230,  -150,    20,
      73,  -150,  -150,    42,  -150,    35,    31,  -150,    43,    46,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,    99,  -150,  -150,  -150,  -150,    99,
      50,   127,  -150,  -150,   127,  -150,    52,  -150,    21,  -150,
    -150,  -150,  -150,  -150,   127,  -150,   175,   -28,    77,    51,
      40,  -150,  -150,    53,    94,  -150,    56,    63,    74,    79,
      87,    75,    99,   230,  -150,  -150,    76,  -150,  -150,    81,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
     127,   132,    93,   -28,  -150,  -150,  -150,  -150,    21,    92,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,    99,
    -150,    99,   149,   137,    99,  -150,  -150,  -150,    98,   175,
     -35,   139,  -150,  -150,  -150,  -150,  -150,  -150,   100,  -150,
     112,   103,  -150,   109,   120,   121,   127,   175,  -150,  -150,
    -150,  -150,  -150,   123,   117,  -150,   149,   137,  -150,   118,
     114,  -150,  -150,   175,   129,  -150,   133,  -150,  -150,   141,
      99,   128,  -150,  -150,   127,  -150,  -150,   130,   125,   142,
     127,   145,   175,   175,     9,   147,  -150,   148,   150,  -150,
    -150,  -150,   151,    99,   155,  -150,   158,   160,   153,   161,
    -150,   175,  -150,  -150,   156,  -150,   175,  -150,   175,  -150,
     162,  -150,   170,  -150,   171,  -150,  -150
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     6,     1,   146,   145,   144,   143,   142,     0,
       0,     3,     0,     9,     8,     0,   137,   136,   135,   138,
       0,    13,     6,   108,    10,     0,   140,     0,     0,     4,
       0,    16,    15,     7,     0,    23,   149,   154,   152,   151,
     153,     0,   150,   139,     0,     0,     0,     0,    13,   149,
     116,   117,   115,     0,     0,   109,     0,   110,    11,    25,
       0,   141,   138,     0,    20,     0,    27,    14,     0,     0,
     121,   122,   123,   124,   125,   126,   133,   134,   127,   131,
     132,   128,   129,   130,     0,   119,   120,   118,   111,     0,
       0,    23,    26,    17,    23,    51,     0,     5,    46,   113,
     114,   112,    12,    24,    23,    21,    54,    29,     0,     0,
      48,    50,    18,     0,   149,    60,     0,     0,     0,     0,
       0,     0,     0,    74,    75,    52,     0,    57,    59,    61,
      56,    73,    58,    86,    87,    88,    70,    71,    69,    72,
       0,     0,     0,    29,    31,    32,    49,    44,    46,     0,
      22,    78,    79,    80,    81,    82,    83,    84,    85,     0,
      76,     0,     0,     0,     0,    95,    92,    45,     0,    54,
       0,     0,    38,    28,    30,    47,    19,    77,     0,   105,
       0,   103,   106,   147,     0,     0,    98,    54,    53,    55,
      62,    65,    33,     0,     0,   102,     0,     0,   107,     0,
       0,    99,    93,    54,     0,    39,     0,   104,   148,     0,
       0,     0,    63,    34,    23,    66,    89,     0,     0,     0,
      23,     0,    54,    54,   100,     0,    64,     0,     0,    67,
      90,   101,     0,     0,     0,    40,     0,     0,     0,     0,
      35,    54,    68,    91,     0,    94,    54,    41,    54,    36,
       0,    96,     0,    42,     0,    37,    97
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,  -150,  -150,  -150,   193,  -150,  -150,  -150,  -150,
     168,  -150,  -150,  -150,  -150,  -150,  -150,  -150,   -86,  -150,
    -150,    84,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -102,  -150,  -150,    69,  -150,  -150,  -150,
    -150,  -149,  -150,  -150,    48,  -150,  -150,  -150,  -150,  -150,
      -4,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,    32,  -150,  -150,
       1,   -34,  -150,   173,  -150,  -150,  -150,   -26,  -150,  -150,
     205,   223,    38,   -19,  -145
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    21,    47,    11,    12,    13,    35,    90,
      29,    30,    31,   104,   149,    32,    94,   113,    58,    59,
      97,   142,   143,   144,   204,   220,   246,   252,   145,   193,
     214,   241,   250,    54,    68,   124,   109,   110,    66,   106,
     168,   125,   126,   127,   128,   203,   219,   129,   222,   236,
     130,   131,   159,   160,   132,   133,   223,   237,   134,   187,
     211,   135,   186,   254,   200,   232,   136,   180,   181,   137,
     138,   139,    56,    84,    85,    86,    87,    15,    16,    17,
      26,    18,   184,    57,    42
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,    45,     3,    14,   123,   103,    41,   190,   105,    60,
      19,   116,   114,    37,    38,    39,    40,   182,   112,    69,
     189,    23,    88,    14,    36,    37,    38,    39,    40,    50,
      27,    28,   140,   141,    51,    22,    52,    24,   202,    25,
      46,     4,     5,     6,     7,     8,   108,    34,    48,    61,
     100,   182,    62,    53,   212,   101,   117,   118,     4,     5,
       6,     7,     8,   122,    63,    60,    44,   123,    60,    64,
      65,    10,   -43,   229,   230,    91,    92,    95,    60,   111,
      36,    37,    38,    39,    40,   123,    93,    98,   167,   146,
      96,    99,   247,   102,   107,   148,   147,   249,   150,   251,
     161,   123,    49,    37,    38,    39,    40,   162,   151,   152,
     153,   154,   155,   156,   171,   157,   158,   166,   163,    50,
     123,   123,   123,   164,    51,   177,    52,   178,   221,   111,
     185,   165,   169,   170,   227,   172,   173,   176,   -43,   123,
     183,   188,   192,    53,   123,   194,   123,     4,     5,     6,
       7,     8,   179,    37,    38,    39,    40,   195,   196,     4,
       5,     6,     7,     8,   197,   198,   199,   205,   206,   209,
     210,   218,     9,   213,   225,   215,   217,    10,   114,    37,
      38,    39,    40,   216,    44,   226,   224,   201,    60,    10,
     228,   233,   235,   234,    60,    50,   238,   240,   248,   239,
      51,   242,    52,   243,   244,   253,   245,     4,     5,     6,
       7,     8,   115,   255,   256,    33,    67,   175,   191,    53,
     231,   116,   117,   118,   119,   120,   121,   174,   207,   122,
      89,    43,    44,    20,     0,   208,     0,    10,    70,    71,
      72,    73,    74,    75,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,    77,     0,    78,    79,    80,    81,
      82,    83
};

static const yytype_int16 yycheck[] =
{
      34,    27,     0,     2,   106,    91,    25,    42,    94,    35,
       3,    46,     3,     4,     5,     6,     7,   162,   104,    53,
     169,     3,    56,    22,     3,     4,     5,     6,     7,    20,
      60,    61,    60,    61,    25,    56,    27,    42,   187,    40,
       3,    32,    33,    34,    35,    36,    25,    14,    56,    41,
      84,   196,     3,    44,   203,    89,    47,    48,    32,    33,
      34,    35,    36,    54,     3,    91,    57,   169,    94,    44,
      58,    62,    44,   222,   223,    55,     3,    42,   104,    98,
       3,     4,     5,     6,     7,   187,    44,    44,   122,   108,
      59,    45,   241,    43,    42,    55,    45,   246,    45,   248,
      44,   203,     3,     4,     5,     6,     7,    44,    14,    15,
      16,    17,    18,    19,   140,    21,    22,    42,    44,    20,
     222,   223,   224,    44,    25,   159,    27,   161,   214,   148,
     164,    44,    56,    52,   220,     3,    43,    45,    44,   241,
       3,    43,     3,    44,   246,    45,   248,    32,    33,    34,
      35,    36,     3,     4,     5,     6,     7,    45,    55,    32,
      33,    34,    35,    36,    55,    45,    45,    44,    51,    51,
      56,    43,    57,    44,    49,    42,   210,    62,     3,     4,
       5,     6,     7,    42,    57,    43,    56,   186,   214,    62,
      45,    44,    42,    45,   220,    20,    45,    42,    42,   233,
      25,    43,    27,    43,    51,    43,    45,    32,    33,    34,
      35,    36,    37,    43,    43,    22,    48,   148,   170,    44,
     224,    46,    47,    48,    49,    50,    51,   143,   196,    54,
      57,    26,    57,    10,    -1,   197,    -1,    62,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    -1,    26,    27,    28,    29,
      30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    65,    66,     0,    32,    33,    34,    35,    36,    57,
      62,    69,    70,    71,   134,   141,   142,   143,   145,     3,
     145,    67,    56,     3,    42,    40,   144,    60,    61,    74,
      75,    76,    79,    69,    14,    72,     3,     4,     5,     6,
       7,   147,   148,   144,    57,   141,     3,    68,    56,     3,
      20,    25,    27,    44,    97,   135,   136,   147,    82,    83,
     141,    41,     3,     3,    44,    58,   102,    74,    98,   135,
       8,     9,    10,    11,    12,    13,    23,    24,    26,    27,
      28,    29,    30,    31,   137,   138,   139,   140,   135,   137,
      73,    55,     3,    44,    80,    42,    59,    84,    44,    45,
     135,   135,    43,    82,    77,    82,   103,    42,    25,   100,
     101,   147,    82,    81,     3,    37,    46,    47,    48,    49,
      50,    51,    54,    97,    99,   105,   106,   107,   108,   111,
     114,   115,   118,   119,   122,   125,   130,   133,   134,   135,
      60,    61,    85,    86,    87,    92,   147,    45,    55,    78,
      45,    14,    15,    16,    17,    18,    19,    21,    22,   116,
     117,    44,    44,    44,    44,    44,    42,   135,   104,    56,
      52,   141,     3,    43,    85,   100,    45,   135,   135,     3,
     131,   132,   148,     3,   146,   135,   126,   123,    43,   105,
      42,   108,     3,    93,    45,    45,    55,    55,    45,    45,
     128,   134,   105,   109,    88,    44,    51,   131,   146,    51,
      56,   124,   105,    44,    94,    42,    42,   135,    43,   110,
      89,    82,   112,   120,    56,    49,    43,    82,    45,   105,
     105,   114,   129,    44,    45,    42,   113,   121,    45,   135,
      42,    95,    43,    43,    51,    45,    90,   105,    42,   105,
      96,   105,    91,    43,   127,    43,    43
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
     129,   129,   130,   131,   131,   132,   132,   133,   134,   134,
     135,   135,   135,   135,   135,   136,   136,   136,   137,   137,
     137,   138,   138,   138,   138,   138,   138,   139,   139,   139,
     139,   139,   139,   140,   140,   141,   141,   141,   142,   143,
     143,   144,   145,   145,   145,   145,   145,   146,   146,   147,
     147,   148,   148,   148,   148
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
       0,     1,     4,     1,     3,     1,     1,     4,     2,     4,
       1,     2,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       3,     3,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1
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
#line 73 "parserVdc.y" /* yacc.c:1646  */
    {pushScope("global","void");}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 74 "parserVdc.y" /* yacc.c:1646  */
    {fprintf(fp," #include <stdio.h>\n\n%s\n",(yyvsp[0].sValue));}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 75 "parserVdc.y" /* yacc.c:1646  */
    {fprintf(fp,"%s\n",(yyvsp[0].sValue));}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 76 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 79 "parserVdc.y" /* yacc.c:1646  */
    {
				create_pointer(char,str,2);
					test(str){
						strcpy(str, " ");
						(yyval.sValue) = str;
						
					}
					
				}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 89 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 4 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[0].sValue));
				create_pointer(char,str,tamanho);
				test(str){
					sprintf(str, "%s;\n %s", (yyvsp[-2].sValue), (yyvsp[0].sValue)); 
					(yyval.sValue) = str;
					
				}
				}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 99 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 100 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 104 "parserVdc.y" /* yacc.c:1646  */
    {pushScope((yyvsp[-1].sValue),"MeuTipo");}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 105 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 106 "parserVdc.y" /* yacc.c:1646  */
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
								sprintf(str, "struct %s {\n%s\n};",(yyvsp[-5].sValue),(yyvsp[-2].sValue));
								(yyval.sValue) = str;
							}
						}
						}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 124 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
						test(str){
							strcpy(str, " ");
							(yyval.sValue) = str;
						}
						}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 131 "parserVdc.y" /* yacc.c:1646  */
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
#line 140 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 141 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 144 "parserVdc.y" /* yacc.c:1646  */
    {pushScope((yyvsp[-1].sValue),(yyvsp[-2].sValue));}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 145 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 146 "parserVdc.y" /* yacc.c:1646  */
    {	if(insertSymbolTable((yyvsp[-5].sValue),(yyvsp[-6].sValue))){
								int tamanho = 22 + strlen((yyvsp[-6].sValue)) + strlen((yyvsp[-5].sValue)) +strlen((yyvsp[-2].sValue));
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "/*funcao*/%s %s (%s)", (yyvsp[-6].sValue), (yyvsp[-5].sValue), (yyvsp[-2].sValue));
									(yyval.sValue) = str;
								}
							}
						}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 157 "parserVdc.y" /* yacc.c:1646  */
    {pushScope((yyvsp[-1].sValue),"void");}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 158 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 159 "parserVdc.y" /* yacc.c:1646  */
    {	if(insertSymbolTable((yyvsp[-5].sValue),"void") ){
							int tamanho = 17 + strlen((yyvsp[-5].sValue)) + strlen((yyvsp[-2].sValue));
							create_pointer(char,str,tamanho);
							test(str){
								sprintf(str, "/*proc*/void %s (%s)", (yyvsp[-5].sValue),(yyvsp[-2].sValue)); 
								(yyval.sValue) = str;
							} 
						}
					}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 170 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
				test(str){
					strcpy(str, " ");
					(yyval.sValue) = str;
				}
				}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 177 "parserVdc.y" /* yacc.c:1646  */
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
#line 185 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 188 "parserVdc.y" /* yacc.c:1646  */
    {	if(insertSymbolTable((yyvsp[0].sValue), (yyvsp[-1].sValue)) ){
								int  tamanho = 3+strlen((yyvsp[-1].sValue))+strlen((yyvsp[0].sValue));
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "%s %s",(yyvsp[-1].sValue),(yyvsp[0].sValue));
									(yyval.sValue) = str;
								}
							}
						}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 199 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
					test(str){
						strcpy(str," ");
						(yyval.sValue) = str;
					}
					}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 206 "parserVdc.y" /* yacc.c:1646  */
    {	int tamanho = 18 + strlen((char *)(yyvsp[-1].sValue));
						create_pointer(char,str,tamanho);
						test(str){
							sprintf(str, "%s%s\n", "/*BlocoFuncoes*/\n", (yyvsp[-1].sValue)); 
							fprintf(fp,"%s\n",str); 
						}
					}
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 215 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
				test(str){
					strcpy(str, " ");
					(yyval.sValue) = str;
				}
				}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 222 "parserVdc.y" /* yacc.c:1646  */
    {	int  tamanho = 2+strlen((yyvsp[-1].sValue))+strlen((yyvsp[0].sValue));
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "%s %s",(yyvsp[-1].sValue),(yyvsp[0].sValue));
						(yyval.sValue) = str;
					}
				 
				}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 232 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 233 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 236 "parserVdc.y" /* yacc.c:1646  */
    {checkBeforeDeclaration((yyvsp[0].sValue));}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 237 "parserVdc.y" /* yacc.c:1646  */
    {pushScope((yyvsp[-2].sValue),(yyvsp[-3].sValue));}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 238 "parserVdc.y" /* yacc.c:1646  */
    {inicializaContadores();}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 239 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 240 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 21+strlen((yyvsp[-11].sValue)) + strlen((yyvsp[-10].sValue)) + strlen((yyvsp[-6].sValue))+strlen((yyvsp[-2].sValue));
						create_pointer(char,str,tamanho);
						test(str){
							sprintf(str, "/*Funcao*/ %s %s (%s) {\n%s\n}", (yyvsp[-11].sValue), (yyvsp[-10].sValue), (yyvsp[-6].sValue), (yyvsp[-2].sValue)); 
							(yyval.sValue) = str;
						}
						}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 249 "parserVdc.y" /* yacc.c:1646  */
    {checkBeforeDeclaration((yyvsp[0].sValue));}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 249 "parserVdc.y" /* yacc.c:1646  */
    {pushScope((char*)(yyvsp[-2].sValue),"void");}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 250 "parserVdc.y" /* yacc.c:1646  */
    {inicializaContadores();}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 251 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 252 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 25 + strlen((yyvsp[-10].sValue)) + strlen((yyvsp[-6].sValue)) + strlen((yyvsp[-2].sValue));
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "/*Proc*/ void %s (%s) {\n%s\n}", (yyvsp[-10].sValue), (yyvsp[-6].sValue), (yyvsp[-2].sValue)); 
									(yyval.sValue) = str;
								}
								}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 261 "parserVdc.y" /* yacc.c:1646  */
    {checkBeforeDeclaration((yyvsp[0].sValue));}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 263 "parserVdc.y" /* yacc.c:1646  */
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
#line 272 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 9 + strlen((yyvsp[0].attrib)->code);
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "return %s", (yyvsp[0].attrib)->code); 
									(yyval.sValue) = str;
								} 
								}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 281 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
						test(str){
							strcpy(str, " ");
							(yyval.sValue) = str;
						}
						}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 288 "parserVdc.y" /* yacc.c:1646  */
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
#line 295 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 298 "parserVdc.y" /* yacc.c:1646  */
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
#line 305 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].attrib)->code;}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 311 "parserVdc.y" /* yacc.c:1646  */
    {inicializaContadores(); pushScope("main","void");}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 312 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 313 "parserVdc.y" /* yacc.c:1646  */
    {fprintf(fp,"int main() {\n%s\nreturn 0;\n}\n",(yyvsp[-2].sValue)); 
						}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 319 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
				test(str){
					strcpy(str, " ");
					(yyval.sValue) = str;
				}
				}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 326 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 5 + strlen((yyvsp[-2].sValue))+ strlen((yyvsp[0].sValue));
			create_pointer(char,str,tamanho);
			test(str){
				sprintf(str, "\t%s;\n\t%s", (yyvsp[-2].sValue), (yyvsp[0].sValue)); 
				(yyval.sValue) = str;
			} 
			}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 335 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 336 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 337 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 340 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 341 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 344 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 345 "parserVdc.y" /* yacc.c:1646  */
    {pushBlockScope("senao",elseCounter); 	elseCounter++;}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 346 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 347 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 14 + strlen((yyvsp[-6].sValue))+ strlen((yyvsp[-2].sValue));
				create_pointer(char,str,tamanho);
				test(str){
					sprintf(str, "%s\n} else {\n\t%s\n}", (yyvsp[-6].sValue), (yyvsp[-2].sValue));
					(yyval.sValue) = str;
				}  
				}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 355 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 14 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[0].sValue));
				create_pointer(char,str,tamanho);
				test(str){
					sprintf(str, "%s\n} else %s\n}\n}", (yyvsp[-2].sValue), (yyvsp[0].sValue));
					(yyval.sValue) = str;
				}  
				}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 365 "parserVdc.y" /* yacc.c:1646  */
    {pushBlockScope("se",ifCounter);	ifCounter++; }
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 366 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 367 "parserVdc.y" /* yacc.c:1646  */
    {	int tamanho = 8 + strlen((yyvsp[-7].attrib)->code) + strlen((yyvsp[-2].sValue));
							create_pointer(char,str,tamanho);
							test(str){
								sprintf(str, "if(%s){\n\t\t%s\n}", (yyvsp[-7].attrib)->code, (yyvsp[-2].sValue));
								(yyval.sValue) = str;
							} 
						}
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 376 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 377 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 378 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 379 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].attrib)->code;}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 380 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 381 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 382 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 386 "parserVdc.y" /* yacc.c:1646  */
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
#line 396 "parserVdc.y" /* yacc.c:1646  */
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
#line 405 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 406 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 407 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 408 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 409 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 410 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 413 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 414 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 417 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 418 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 419 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 423 "parserVdc.y" /* yacc.c:1646  */
    {pushBlockScope("enquanto",whileCounter); whileCounter++;}
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 424 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 425 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 30 + strlen((yyvsp[-7].attrib)->subprogram) + strlen((yyvsp[-7].attrib)->code) + strlen((yyvsp[-2].sValue));
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "%s: if(%s){\n%s\ngoto %s;\n}", (yyvsp[-7].attrib)->subprogram, (yyvsp[-7].attrib)->code, (yyvsp[-2].sValue), (yyvsp[-7].attrib)->subprogram); 
						(yyval.sValue) = str;
					}
					}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 434 "parserVdc.y" /* yacc.c:1646  */
    {pushBlockScope("facaenquanto",doWhileCounter); doWhileCounter++;}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 435 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 436 "parserVdc.y" /* yacc.c:1646  */
    {	int tamanho = 25 + strlen((yyvsp[-6].sValue)) +strlen((yyvsp[-1].attrib)->code);
								create_pointer(char,str,tamanho);
								test(str){
									sprintf(str, "do{\n%s\n} while(%s)", (yyvsp[-6].sValue), (yyvsp[-1].attrib)->code); 
									(yyval.sValue) = str;
								} 
							}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 445 "parserVdc.y" /* yacc.c:1646  */
    {pushBlockScope("para",forCounter); forCounter++;}
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 447 "parserVdc.y" /* yacc.c:1646  */
    {popScope();}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 448 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 22 + strlen((yyvsp[-10].sValue)) + strlen((yyvsp[-8].attrib)->code) + strlen((yyvsp[-6].sValue)) + strlen((yyvsp[-2].sValue));
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "for (%s;%s;%s){\n%s\n}", (yyvsp[-10].sValue), (yyvsp[-8].attrib)->code, (yyvsp[-6].sValue), (yyvsp[-2].sValue)); 
						(yyval.sValue) = str;
					} 
					}
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 457 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
					test(str){
						strcpy(str, " ");
						(yyval.sValue) = str;
					}
					}
#line 2365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 463 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 466 "parserVdc.y" /* yacc.c:1646  */
    {create_pointer(char,str,2);
				test(str){
					strcpy(str, " ");
					(yyval.sValue) = str;
				}
				}
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 472 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 476 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 10 + strlen((yyvsp[-1].sValue));
				create_pointer(char,str,tamanho);
				test(str){
					sprintf(str, "%s", (yyvsp[-1].sValue)); 
					(yyval.sValue) = str;
				} 
				}
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 486 "parserVdc.y" /* yacc.c:1646  */
    {
						char * printType = getPrintType((yyvsp[0].attrib)->type);
						int tamanho = 2+strlen(printType)+strlen((yyvsp[0].attrib)->code);
						create_pointer(char,print,tamanho);
						test(print){
							sprintf(print,"%s%s)", printType, (yyvsp[0].attrib)->code);
							(yyval.sValue) = print;
						}
						}
#line 2414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 496 "parserVdc.y" /* yacc.c:1646  */
    {
					char * printType = getPrintType((yyvsp[-2].attrib)->type);
						int tamanho = 3+strlen(printType)+strlen((yyvsp[-2].attrib)->code)+strlen((yyvsp[0].sValue));
						create_pointer(char,print,tamanho);
						test(print){
							sprintf(print,"%s%s);%s", printType, (yyvsp[-2].attrib)->code,(yyvsp[0].sValue));
							(yyval.sValue) = print;
						}
					}
#line 2428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 507 "parserVdc.y" /* yacc.c:1646  */
    {  create_pointer(char,tipo,10);
							test(tipo){
								strcpy(tipo,checkBeforeDeclaration((yyvsp[0].sValue))->type);
							}
							struct AllAttributes * info =
							attrib_new(mostrarTopo(&scope_stack)->scopeName,tipo, (yyvsp[0].sValue));
							(yyval.attrib) = info;}
#line 2440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 514 "parserVdc.y" /* yacc.c:1646  */
    {struct AllAttributes * info =
							attrib_new(mostrarTopo(&scope_stack)->scopeName, (yyvsp[0].attrib)->type, (yyvsp[0].attrib)->code);
							(yyval.attrib) = info;}
#line 2448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 520 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 8 + strlen((yyvsp[-1].sValue));
											create_pointer(char,str,tamanho);
											test(str){
												sprintf(str, "%s", (yyvsp[-1].sValue));  
												(yyval.sValue) = str;
											} 
											}
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 530 "parserVdc.y" /* yacc.c:1646  */
    {if(insertSymbolTable((yyvsp[0].sValue),(yyvsp[-1].sValue))){
						int tamanho = 2 + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].sValue));
						create_pointer(char,str,tamanho);
					//	char * type = getCType($1);
						test(str){
							sprintf(str, "%s %s", (yyvsp[-1].sValue), (yyvsp[0].sValue));   
							(yyval.sValue) = str;
						}
					}
					}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 541 "parserVdc.y" /* yacc.c:1646  */
    {if(insertSymbolTable((yyvsp[-2].sValue),(yyvsp[-3].sValue))){
					int tamanho = 4 + strlen((yyvsp[-3].sValue))+ strlen((yyvsp[-2].sValue)) + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].attrib)->code);
				    create_pointer(char,str,tamanho);
				//	char * type = getCType($1);
					test(str){
						sprintf(str, "%s %s %s %s", (yyvsp[-3].sValue), (yyvsp[-2].sValue), (yyvsp[-1].sValue), (yyvsp[0].attrib)->code); 
						(yyval.sValue) = str;
					}
				}
				}
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 554 "parserVdc.y" /* yacc.c:1646  */
    {struct AllAttributes * info =
						attrib_new("Escopo", "Tipo", (yyvsp[0].attrib)->code);
						(yyval.attrib) = info;}
#line 2498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 558 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 2 + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].attrib)->code);
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "%s %s", (yyvsp[-1].sValue), (yyvsp[0].attrib)->code);
						struct AllAttributes * info =
						attrib_new("Escopo", "Tipo", str);
						(yyval.attrib) = info;
					} 
					}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 568 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-2].attrib)->code) + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].attrib)->code);
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "%s %s %s", (yyvsp[-2].attrib)->code, (yyvsp[-1].sValue), (yyvsp[0].attrib)->code); 
						struct AllAttributes * info =
						attrib_new("Escopo", "Tipo", str);
						(yyval.attrib) = info;
					} 
					}
#line 2526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 578 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-1].attrib)->code);
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "(%s)", (yyvsp[-1].attrib)->code);
						struct AllAttributes * info =
						attrib_new("Escopo", "Tipo", str);
						(yyval.attrib) = info;
					} 
					}
#line 2540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 588 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].attrib)->code);
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "%s %s %s", (yyvsp[-2].sValue), (yyvsp[-1].sValue), (yyvsp[0].attrib)->code); 
						struct AllAttributes * info =
						attrib_new("Escopo", "Tipo", str);
						(yyval.attrib) = info;
					} 
					}
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 599 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 600 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 601 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 604 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 605 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 606 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 609 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 610 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 611 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 612 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 613 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 614 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 617 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 618 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 619 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 620 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 621 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 622 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 625 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 626 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 629 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 630 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].attrib)->code;}
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 631 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 635 "parserVdc.y" /* yacc.c:1646  */
    {
					if(insertSymbolTable((yyvsp[0].sValue),"MeuTipo")){
						int tamanho = 9+strlen((yyvsp[0].sValue));
						create_pointer(char,str,tamanho);
						test(str){
							sprintf(str, "struct %s", (yyvsp[0].sValue));
							(yyval.sValue) = str;
						}
					}
					}
#line 2707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 648 "parserVdc.y" /* yacc.c:1646  */
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
#line 2723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 660 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 8+strlen((yyvsp[-1].sValue))+strlen((yyvsp[0].sValue));
				create_pointer(char,str,tamanho);
				test(str){
					sprintf(str, "Vetor %s %s", (yyvsp[-1].sValue), (yyvsp[0].sValue));
						struct AllAttributes * info =
						attrib_new("Escopo", "Tipo", str);
						(yyval.attrib) = info;
				}
				}
#line 2737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 672 "parserVdc.y" /* yacc.c:1646  */
    {int tamanho = 3+strlen((char*)(yyvsp[-1].attrib)->code); //TODO verificar se o termo é do tipo inteiro
					create_pointer(char,str,tamanho);
					test(str){
						sprintf(str, "[%s]",(yyvsp[-1].attrib)->code);
						(yyval.sValue) = str;
					}
					}
#line 2749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 681 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 682 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 683 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 684 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 685 "parserVdc.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 698 "parserVdc.y" /* yacc.c:1646  */
    { //TODO gerar uma str "scanf("%?",$1);\n"
								char * scanType = getScanType(checkBeforeDeclaration((yyvsp[0].sValue))->type);
								create_pointer(char,scan,(strlen(scanType)+strlen((yyvsp[0].sValue))+2 ))
								test(scan){
									sprintf(scan,"%s%s)", scanType, (yyvsp[0].sValue));
									(yyval.sValue) = scan;
								}
							}
#line 2792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 706 "parserVdc.y" /* yacc.c:1646  */
    {
							char * scanType = getScanType(checkBeforeDeclaration((yyvsp[-2].sValue))->type);
							int tamanho = 4+strlen(scanType)+strlen((yyvsp[-2].sValue))+strlen((yyvsp[0].sValue));
							create_pointer(char,scan,tamanho);
							test(scan){
								sprintf(scan,"%s%s);\n%s", scanType, (yyvsp[-2].sValue),(yyvsp[0].sValue));
								(yyval.sValue) = scan;
							}
							}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 717 "parserVdc.y" /* yacc.c:1646  */
    {  create_pointer(char,tipo,10);
					test(tipo){
						strcpy(tipo,checkBeforeDeclaration((yyvsp[0].sValue))->type);
					}
					struct AllAttributes * info =
					attrib_new(mostrarTopo(&scope_stack)->scopeName,tipo, (yyvsp[0].sValue));
					(yyval.attrib) = info;}
#line 2818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 724 "parserVdc.y" /* yacc.c:1646  */
    {struct AllAttributes * info =
					attrib_new(mostrarTopo(&scope_stack)->scopeName, (yyvsp[0].attrib)->type, (yyvsp[0].attrib)->code);
					(yyval.attrib) = info;}
#line 2826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 730 "parserVdc.y" /* yacc.c:1646  */
    {struct AllAttributes * info =
					attrib_new(mostrarTopo(&scope_stack)->scopeName, "double", (yyvsp[0].sValue));
					(yyval.attrib) = info;}
#line 2834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 733 "parserVdc.y" /* yacc.c:1646  */
    {struct AllAttributes * info =
					attrib_new(mostrarTopo(&scope_stack)->scopeName, "int", (yyvsp[0].sValue));
					(yyval.attrib) = info;}
#line 2842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 736 "parserVdc.y" /* yacc.c:1646  */
    {struct AllAttributes * info =
					attrib_new(mostrarTopo(&scope_stack)->scopeName, "int", (yyvsp[0].sValue));
					(yyval.attrib) = info;}
#line 2850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 739 "parserVdc.y" /* yacc.c:1646  */
    {struct AllAttributes * info =
					attrib_new(mostrarTopo(&scope_stack)->scopeName, "char*", (yyvsp[0].sValue));
					(yyval.attrib) = info;}
#line 2858 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2862 "y.tab.c" /* yacc.c:1646  */
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
#line 743 "parserVdc.y" /* yacc.c:1906  */


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

char * getPrintType(char * type){
	if(strcmp(type, "int") == 0){
		return "printf(\"%d\",";
	}
	else if(strcmp(type, "double") == 0){
		return "printf(\"%lf\",";
	} 
	else if(strcmp(type, "char*") == 0){
		return "printf(\"%s\",";
	}
	else if(strcmp(type, "char") == 0){
		return "printf(\"%c\",";
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



char * getScanType(char * type){
	if(strcmp(type, "int") == 0){
		return "scanf(\"%d\",&";
	}
	else if(strcmp(type, "double") == 0){
		return "scanf(\"%lf\",&";
	} 
	else if(strcmp(type, "char*") == 0){
		return "scanf(\"%s\",";
	}
	else if(strcmp(type, "char") == 0){
		return "scanf(\"%c\",&";
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
