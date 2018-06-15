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
#include <stdlib.h>
#include <string.h>
#include "./estruturas/pilha/pilha.h"
#include "./estruturas/tabelahash/tabelaHash.h"

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;
Pilha scope_stack;
HashTable symbol_table;

/*usado para contar qual bloco está*/
int forCounter;
int ifCounter;
int whileCounter;
int elseCounter;
int doWhileCounter;

void pushBlockScope(char*nome, int ordem);
void inicializaContadores();

#line 91 "y.tab.c" /* yacc.c:339  */

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
#line 26 "parserUoh.y" /* yacc.c:355  */

	char * sValue;  /* string value */

#line 261 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 276 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   273

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  242

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
       0,    55,    55,    55,    58,    59,    66,    67,    71,    86,
      87,    94,    95,    98,   110,   122,   123,   128,   131,   144,
     145,   151,   152,   159,   160,   164,   165,   163,   174,   175,
     173,   182,   189,   195,   196,   201,   204,   209,   216,   217,
     215,   224,   225,   232,   233,   234,   237,   238,   241,   242,
     245,   242,   250,   258,   260,   257,   267,   268,   269,   270,
     271,   272,   273,   276,   281,   288,   289,   290,   291,   292,
     293,   296,   297,   300,   301,   302,   306,   308,   305,   315,
     317,   315,   325,   327,   325,   336,   337,   340,   341,   344,
     351,   358,   363,   372,   373,   378,   383,   388,   395,   396,
     397,   400,   401,   402,   405,   406,   407,   408,   409,   410,
     413,   414,   415,   416,   417,   418,   421,   422,   425,   426,
     427,   430,   437,   442,   449,   456,   457,   458,   459,   460,
     463,   464,   472,   473,   480,   481,   485,   486,   487,   488
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
  "$accept", "programa", "$@1", "declaracoes", "declaracao_global",
  "declaracao_registro", "assinatura_funcoes", "assinaturas",
  "assinatura_funcao", "assinatura_proc", "parametros", "parametro",
  "bloco_funcoes", "funcoes_proc", "definicoes_funcoes_proc",
  "definicao_funcao", "$@2", "$@3", "definicao_procedimento", "$@4", "$@5",
  "chamada_funcao", "retorne", "parametros_chamada", "parametro_chamada",
  "bloco_principal", "$@6", "$@7", "sentencas", "sentenca", "controle",
  "bloco_se", "$@8", "$@9", "se_simplificado", "$@10", "$@11", "comando",
  "atribuicao", "atribuicao_binaria", "atribuicao_unaria", "repeticao",
  "bloco_enquanto", "$@12", "$@13", "bloco_faca_enquanto", "$@14", "$@15",
  "bloco_para", "$@16", "$@17", "declaracao_para", "comando_para",
  "imprime", "leia", "declaracao", "expressao", "operador_unario",
  "operador_binario", "operador_relacional", "operador_aritmetico",
  "operador_booleano", "tipo", "tipo_registro", "tipo_vetor",
  "tamanho_vetor", "tipo_primitivo", "termos", "ids", "termo", "literal", YY_NULLPTR
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

#define YYPACT_NINF -148

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-148)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -148,     7,     6,  -148,  -148,  -148,  -148,  -148,  -148,     9,
      26,   -56,   -46,  -148,  -148,    22,  -148,  -148,  -148,   -13,
      -9,    61,    29,   -15,   -12,  -148,  -148,     6,    20,    61,
     121,    -9,    33,    43,     3,     8,   -10,   -56,  -148,    10,
      12,     1,    64,  -148,  -148,  -148,  -148,  -148,    25,  -148,
    -148,  -148,    27,    61,  -148,    30,  -148,  -148,    32,  -148,
    -148,  -148,    10,   242,  -148,    10,   242,  -148,    61,  -148,
    -148,    61,    28,   151,   -41,    95,    38,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,    10,  -148,  -148,  -148,  -148,    10,  -148,    41,  -148,
      63,  -148,    45,    46,    47,    59,    60,    66,    10,   242,
    -148,  -148,    18,  -148,  -148,    35,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,    61,   109,    70,   -41,
    -148,  -148,   121,    71,    62,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,    10,  -148,
      10,   121,   112,    10,  -148,  -148,  -148,    76,   151,   -24,
     118,    86,  -148,  -148,  -148,  -148,    95,  -148,    87,    88,
      80,    81,    92,    93,    61,   151,  -148,  -148,  -148,  -148,
      96,    61,  -148,    94,  -148,   121,   112,  -148,    97,  -148,
    -148,  -148,   151,    61,    98,    89,  -148,  -148,   107,    83,
     108,  -148,   114,   111,  -148,  -148,    10,   113,   117,   122,
    -148,   151,   151,   110,   124,  -148,  -148,   151,  -148,  -148,
     187,    10,   151,  -148,   127,   129,  -148,   120,   130,  -148,
     134,  -148,  -148,   128,  -148,   137,  -148,   139,  -148,   151,
     146,  -148
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     4,     1,   129,   128,   127,   126,   125,     0,
       0,     9,     0,     7,     6,     0,   120,   119,   118,   121,
       0,     0,     0,     0,     0,    12,    11,     4,    91,    15,
       0,   123,     0,     0,     0,     0,    19,     9,     5,     0,
       0,    17,     0,   134,   139,   137,   136,   138,     0,   135,
     122,   121,     0,    15,    38,     0,     3,    10,   134,    99,
     100,    98,     0,     0,    92,     0,    93,     8,    15,    18,
     124,    15,     0,    41,    21,    33,     0,   104,   105,   106,
     107,   108,   109,   116,   117,   110,   114,   115,   111,   112,
     113,     0,   102,   103,   101,    94,     0,    16,     0,    14,
     134,    47,     0,     0,     0,     0,     0,     0,     0,    61,
      62,    39,     0,    44,    46,    48,    43,    60,    45,    73,
      74,    75,    57,    58,    56,    59,     0,     0,     0,    21,
      23,    24,     0,     0,    35,    37,    96,    97,    95,    13,
      65,    66,    67,    68,    69,    70,    71,    72,     0,    63,
       0,     0,     0,     0,    82,    79,    32,     0,    41,     0,
       0,     0,    20,    22,    36,    31,    33,    64,     0,     0,
     130,   132,     0,     0,    85,    41,    40,    42,    49,    52,
       0,    15,    34,     0,    89,     0,     0,    90,     0,    83,
      86,    80,    41,    15,     0,     0,   131,   133,     0,     0,
       0,    50,     0,     0,    53,    76,     0,     0,     0,     0,
      28,    41,    41,     0,     0,    51,    25,    41,    54,    77,
      87,     0,    41,    29,     0,     0,    88,     0,     0,    26,
       0,    55,    78,     0,    81,     0,    30,     0,    27,    41,
       0,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,  -148,   169,  -148,  -148,   166,  -148,  -148,  -148,
     -47,  -148,  -148,    75,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,   -70,  -148,    40,  -148,  -148,  -148,  -148,  -147,  -148,
    -148,    50,  -148,  -148,  -148,  -148,  -148,    -5,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,  -148,     0,   -39,  -148,   144,  -148,
    -148,  -148,   -20,  -148,  -148,   180,   206,    39,    31,   -22,
    -148
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    11,    12,    13,    23,    24,    25,    26,
      40,    41,    56,   128,   129,   130,   222,   235,   131,   217,
     230,    63,   110,   133,   134,    36,    73,   157,   111,   112,
     113,   114,   192,   208,   115,   211,   224,   116,   117,   148,
     149,   118,   119,   212,   225,   120,   175,   200,   121,   174,
     199,   189,   227,   122,   123,   124,   125,    65,    91,    92,
      93,    94,    15,    16,    17,    31,    18,   169,   172,    66,
      49
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      64,    33,    14,   109,    21,    22,    72,     3,    48,    42,
      27,   177,    19,    58,    44,    45,    46,    47,   178,   126,
     127,    97,   102,    76,    98,    28,    95,    14,   191,    29,
      59,    30,    34,    42,    39,    60,    51,    61,     4,     5,
       6,     7,     8,    35,    37,   201,    52,    53,    42,    55,
      54,    42,   137,   135,    62,    67,    68,   138,     4,     5,
       6,     7,     8,     9,   218,   219,    70,    69,    10,   156,
     223,    71,    74,    99,   158,   229,    75,   140,   141,   142,
     143,   144,   145,   136,   146,   147,   139,   159,   109,   150,
     151,   152,   240,     4,     5,     6,     7,     8,    43,    44,
      45,    46,    47,   153,   154,   109,   160,    75,   155,   167,
     164,   168,   161,   162,   173,   171,   165,   166,    32,   176,
     132,   180,   109,    10,    43,    44,    45,    46,    47,   170,
     181,   204,   183,   184,   194,   185,   186,   187,   188,   206,
     193,   109,   109,   203,   135,   195,   202,   109,   198,   205,
     109,   207,   109,   210,   100,    44,    45,    46,    47,   209,
     215,    42,   214,   170,   216,   233,   220,   213,   221,   109,
     231,    59,   232,    42,   190,   234,    60,   236,    61,   237,
     238,   239,   228,     4,     5,     6,     7,     8,   101,   241,
     100,    44,    45,    46,    47,    62,    38,   102,   103,   104,
     105,   106,   107,    57,   163,   108,   182,    59,    32,   179,
      96,    50,    60,    10,    61,   226,    20,   197,     0,     4,
       5,     6,     7,     8,   196,     0,     0,     0,     0,     0,
       0,    62,     0,     0,   103,   104,     0,     0,     0,     0,
       0,   108,     0,     0,    32,     0,     0,     0,     0,    10,
      77,    78,    79,    80,    81,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,    84,     0,    85,    86,
      87,    88,    89,    90
};

static const yytype_int16 yycheck[] =
{
      39,    21,     2,    73,    60,    61,    53,     0,    30,    29,
      56,   158,     3,     3,     4,     5,     6,     7,    42,    60,
      61,    68,    46,    62,    71,     3,    65,    27,   175,    42,
      20,    40,     3,    53,    14,    25,     3,    27,    32,    33,
      34,    35,    36,    58,    56,   192,     3,    44,    68,    59,
      42,    71,    91,    75,    44,    43,    55,    96,    32,    33,
      34,    35,    36,    57,   211,   212,    41,     3,    62,   108,
     217,    44,    42,    45,    56,   222,    44,    14,    15,    16,
      17,    18,    19,    45,    21,    22,    45,    52,   158,    44,
      44,    44,   239,    32,    33,    34,    35,    36,     3,     4,
       5,     6,     7,    44,    44,   175,   126,    44,    42,   148,
     132,   150,     3,    43,   153,     3,    45,    55,    57,    43,
      25,     3,   192,    62,     3,     4,     5,     6,     7,   151,
      44,    42,    45,    45,   181,    55,    55,    45,    45,    56,
      44,   211,   212,    45,   166,    51,   193,   217,    51,    42,
     220,    43,   222,    42,     3,     4,     5,     6,     7,    45,
      43,   181,    49,   185,    42,    45,    56,   206,    44,   239,
      43,    20,    43,   193,   174,    45,    25,    43,    27,    51,
      43,    42,   221,    32,    33,    34,    35,    36,    37,    43,
       3,     4,     5,     6,     7,    44,    27,    46,    47,    48,
      49,    50,    51,    37,   129,    54,   166,    20,    57,   159,
      66,    31,    25,    62,    27,   220,    10,   186,    -1,    32,
      33,    34,    35,    36,   185,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    26,    27,
      28,    29,    30,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    65,    66,     0,    32,    33,    34,    35,    36,    57,
      62,    67,    68,    69,   119,   126,   127,   128,   130,     3,
     130,    60,    61,    70,    71,    72,    73,    56,     3,    42,
      40,   129,    57,   126,     3,    58,    89,    56,    67,    14,
      74,    75,   126,     3,     4,     5,     6,     7,   133,   134,
     129,     3,     3,    44,    42,    59,    76,    70,     3,    20,
      25,    27,    44,    85,   120,   121,   133,    43,    55,     3,
      41,    44,    74,    90,    42,    44,   120,     8,     9,    10,
      11,    12,    13,    23,    24,    26,    27,    28,    29,    30,
      31,   122,   123,   124,   125,   120,   122,    74,    74,    45,
       3,    37,    46,    47,    48,    49,    50,    51,    54,    85,
      86,    92,    93,    94,    95,    98,   101,   102,   105,   106,
     109,   112,   117,   118,   119,   120,    60,    61,    77,    78,
      79,    82,    25,    87,    88,   133,    45,   120,   120,    45,
      14,    15,    16,    17,    18,    19,    21,    22,   103,   104,
      44,    44,    44,    44,    44,    42,   120,    91,    56,    52,
     126,     3,    43,    77,   133,    45,    55,   120,   120,   131,
     133,     3,   132,   120,   113,   110,    43,    92,    42,    95,
       3,    44,    87,    45,    45,    55,    55,    45,    45,   115,
     119,    92,    96,    44,    74,    51,   131,   132,    51,   114,
     111,    92,    74,    45,    42,    42,    56,    43,    97,    45,
      42,    99,   107,   120,    49,    43,    42,    83,    92,    92,
      56,    44,    80,    92,   100,   108,   101,   116,   120,    92,
      84,    43,    43,    45,    45,    81,    43,    51,    43,    42,
      92,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    66,    65,    67,    67,    68,    68,    69,    70,
      70,    71,    71,    72,    73,    74,    74,    74,    75,    76,
      76,    77,    77,    78,    78,    80,    81,    79,    83,    84,
      82,    85,    86,    87,    87,    87,    88,    88,    90,    91,
      89,    92,    92,    93,    93,    93,    94,    94,    95,    96,
      97,    95,    95,    99,   100,    98,   101,   101,   101,   101,
     101,   101,   101,   102,   102,   103,   103,   103,   103,   103,
     103,   104,   104,   105,   105,   105,   107,   108,   106,   110,
     111,   109,   113,   114,   112,   115,   115,   116,   116,   117,
     118,   119,   119,   120,   120,   120,   120,   120,   121,   121,
     121,   122,   122,   122,   123,   123,   123,   123,   123,   123,
     124,   124,   124,   124,   124,   124,   125,   125,   126,   126,
     126,   127,   128,   128,   129,   130,   130,   130,   130,   130,
     131,   131,   132,   132,   133,   133,   134,   134,   134,   134
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     5,     0,     3,     1,     1,     5,     0,
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
       1,     2,     4,     3,     3,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1
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
#line 55 "parserUoh.y" /* yacc.c:1646  */
    {pushScope("global","void");}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 55 "parserUoh.y" /* yacc.c:1646  */
    {popScope();}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 58 "parserUoh.y" /* yacc.c:1646  */
    {printf("passei en declaracoes\n");char * str = (char *) malloc(2); str = strdup(" "); (yyval.sValue) = str;}
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 59 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 4 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[0].sValue));
	        												char * str = (char *) malloc(tamanho); 
															sprintf(str, "%s;\n %s", (yyvsp[-2].sValue), (yyvsp[0].sValue)); 
															(yyval.sValue) = str;
															free((yyvsp[-2].sValue));free((yyvsp[0].sValue));}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 66 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 67 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 71 "parserUoh.y" /* yacc.c:1646  */
    {//if(!insertSymbolTable(symbol_table,(char*)$2, strdup(mostrarTopo(&scope_stack)->scopeName),"MeuTipo")){
															//	yyerror("nome de variável já foi declarada!\n");
														//	}else{
																
																int tamanho = 13 + strlen((yyvsp[-3].sValue)) + strlen((yyvsp[-1].sValue));
																char* str = (char*)malloc(tamanho);
																sprintf(str, "MeuTipo %s {\n%s\n}",(yyvsp[-3].sValue),(yyvsp[-1].sValue));
																(yyval.sValue) = str;
																printf("passei en meu tipo: %s %s\n",(yyvsp[-3].sValue),(yyvsp[-1].sValue));
														//	}
															free((yyvsp[-3].sValue)); free((yyvsp[-1].sValue));
															}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 86 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(2); str = strdup(" "); (yyval.sValue) = str;}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 87 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 4 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[0].sValue));
			        												char * str = (char *) malloc(tamanho); 
																	sprintf(str, "%s;\n %s", (yyvsp[-2].sValue), (yyvsp[0].sValue)); 
																	(yyval.sValue) = str;
																	free((yyvsp[-2].sValue));free((yyvsp[0].sValue));}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 94 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 95 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 98 "parserUoh.y" /* yacc.c:1646  */
    {//if(!insertSymbolTable(symbol_table,(char*)$3, strdup(mostrarTopo(&scope_stack)->scopeName),(char*)$2)){
																			//		yyerror("nome de variável já foi declarada!\n");
																		//	 }else{
																				int tamanho = 12 + strlen((yyvsp[-4].sValue)) + strlen((yyvsp[-3].sValue)) +strlen((yyvsp[-1].sValue));
																				char * str = (char *) malloc(tamanho); 
																				sprintf(str, "Funcao %s %s (%s)", (yyvsp[-4].sValue), (yyvsp[-3].sValue), (yyvsp[-1].sValue) ); 
																				(yyval.sValue) = str; 
																				
																		//	 }
																			 free((yyvsp[-4].sValue)); free((yyvsp[-3].sValue)); free((yyvsp[-1].sValue));}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 110 "parserUoh.y" /* yacc.c:1646  */
    {//if(!insertSymbolTable(symbol_table,$2, strdup(mostrarTopo(&scope_stack)->scopeName),"void") ){
																	//				yyerror("nome de variável já foi declarada!\n");
																	//}else{
																		int tamanho = 9 + strlen((yyvsp[-3].sValue)) + strlen((yyvsp[-1].sValue));
																		char * str = (char *) malloc(tamanho); 
																		 sprintf(str, "Proc %s (%s)", (yyvsp[-3].sValue),(yyvsp[-1].sValue)); 
																		 (yyval.sValue) = str;
																		 
																//	}
																	free((yyvsp[-3].sValue));free((yyvsp[-1].sValue));}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 122 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(2); str = strdup(" "); (yyval.sValue) = str;}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 123 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[0].sValue));
        												char * str = (char *) malloc(tamanho); 
														sprintf(str, "%s, %s", (yyvsp[-2].sValue), (yyvsp[0].sValue)); 
														(yyval.sValue) = str;
														free((yyvsp[-2].sValue));free((yyvsp[0].sValue));}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 128 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 131 "parserUoh.y" /* yacc.c:1646  */
    {//if(!insertSymbolTable(symbol_table,$2, strdup(mostrarTopo(&scope_stack)->scopeName),$1) ){
						//	yyerror("nome de variável já foi declarada!\n");
					//	}else{
							int  tamanho = 1+strlen((yyvsp[-1].sValue))+strlen((yyvsp[0].sValue));
							char * str = (char *) malloc(tamanho);
							sprintf(str, "%s%s",(yyvsp[-1].sValue),(yyvsp[0].sValue));
							 (yyval.sValue) = str;
							 free((yyvsp[-1].sValue));free((yyvsp[0].sValue));
					//	} 
						
						}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 144 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(2); str = strdup(" "); (yyval.sValue) = str;}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 145 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 17 + strlen((char *)(yyvsp[-1].sValue));
            											char * str = (char *) malloc(tamanho); 
													   sprintf(str, "%s%s\n}", "BlocoFuncoes {\n", (char *) (yyvsp[-1].sValue)); 
													   printf("%s\n",str); }
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 151 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(2); str = strdup(" "); (yyval.sValue) = str;}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 152 "parserUoh.y" /* yacc.c:1646  */
    {int  tamanho = 1+strlen((yyvsp[-1].sValue))+strlen((yyvsp[0].sValue));
													char * str = (char *) malloc(tamanho);
													sprintf(str, "%s%s",(yyvsp[-1].sValue),(yyvsp[0].sValue));
													 (yyval.sValue) = str;
													 free((yyvsp[-1].sValue));free((yyvsp[0].sValue));}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 159 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 160 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 164 "parserUoh.y" /* yacc.c:1646  */
    {inicializaContadores(); /*pushScope((char*)$3,(char*)$2);*/}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 165 "parserUoh.y" /* yacc.c:1646  */
    {/*popScope();*/}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 166 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 17+strlen((yyvsp[-9].sValue)) + strlen((yyvsp[-8].sValue)) + strlen((yyvsp[-6].sValue))+strlen((yyvsp[-2].sValue));
										 char * str = (char *) malloc(tamanho); 
										 sprintf(str, "Funcao %s %s (%s) {\n%s\n}", (yyvsp[-9].sValue), (yyvsp[-8].sValue), (yyvsp[-6].sValue), (yyvsp[-2].sValue)); 
										 (yyval.sValue) = str; 
										 free((yyvsp[-9].sValue)); free((yyvsp[-8].sValue)); free((yyvsp[-6].sValue)); free((yyvsp[-2].sValue));}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 174 "parserUoh.y" /* yacc.c:1646  */
    {inicializaContadores();/*pushScope((char*)$2,"void");*/}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 175 "parserUoh.y" /* yacc.c:1646  */
    {/*popScope();*/}
#line 1779 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 175 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 14 + strlen((yyvsp[-8].sValue)) + strlen((yyvsp[-6].sValue)) + strlen((yyvsp[-2].sValue));
																char * str = (char *) malloc(tamanho); 
																 sprintf(str, "Proc %s (%s) {\n%s\n}", (yyvsp[-8].sValue), (yyvsp[-6].sValue), (yyvsp[-2].sValue)); 
																 (yyval.sValue) = str; 
																 free((yyvsp[-8].sValue)); free((yyvsp[-6].sValue)); free((yyvsp[-2].sValue));}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 182 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 3+strlen((yyvsp[-3].sValue)) + strlen((yyvsp[-1].sValue));
																 char * str = (char *) malloc(tamanho); 
																 sprintf(str, "%s(%s)", (yyvsp[-3].sValue), (yyvsp[-1].sValue)); 
																 (yyval.sValue) = str;
																 free((yyvsp[-3].sValue)); free((yyvsp[-1].sValue));}
#line 1799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 189 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 9 + strlen((yyvsp[0].sValue));
								char * str = (char *) malloc(tamanho); 
								sprintf(str, "Retorne %s", (yyvsp[0].sValue)); 
								(yyval.sValue) = str;
								free((yyvsp[0].sValue));}
#line 1809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 195 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(2); str = strdup(" "); (yyval.sValue) = str;}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 196 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-2].sValue))+ strlen((yyvsp[0].sValue));
																	char * str = (char *) malloc(tamanho); 
																	sprintf(str, "%s, %s", (yyvsp[-2].sValue), (yyvsp[0].sValue)); 
																	(yyval.sValue) = str; 
																	free((yyvsp[-2].sValue)); free((yyvsp[0].sValue));}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 201 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 204 "parserUoh.y" /* yacc.c:1646  */
    {int  tamanho = 1+strlen((yyvsp[-1].sValue))+strlen((yyvsp[0].sValue));
									char * str = (char *) malloc(tamanho);
									sprintf(str, "%s%s",(yyvsp[-1].sValue),(yyvsp[0].sValue));
									 (yyval.sValue) = str;
									 free((yyvsp[-1].sValue));free((yyvsp[0].sValue));}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 209 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 216 "parserUoh.y" /* yacc.c:1646  */
    {inicializaContadores();/*pushScope("main","void");*/}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 217 "parserUoh.y" /* yacc.c:1646  */
    {/*popScope();*/}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 218 "parserUoh.y" /* yacc.c:1646  */
    {printf("BlocoPrincipal {\n%s}\n",(yyvsp[-2].sValue));
									free((yyvsp[-2].sValue));}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 224 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(2); str = strdup(" "); (yyval.sValue) = str;}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 225 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-2].sValue))+ strlen((yyvsp[0].sValue));
											char * str = (char *) malloc(tamanho); 
											sprintf(str, "%s;\n%s", (yyvsp[-2].sValue), (yyvsp[0].sValue)); 
											(yyval.sValue) = str; 
											free((yyvsp[-2].sValue)); free((yyvsp[0].sValue));}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 232 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 233 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 234 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 237 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 238 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 241 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 242 "parserUoh.y" /* yacc.c:1646  */
    {pushBlockScope("senao",elseCounter);
										elseCounter++;
										}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 245 "parserUoh.y" /* yacc.c:1646  */
    {popScope();}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 245 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 12 + strlen((yyvsp[-6].sValue))+ strlen((yyvsp[-2].sValue));
											char * str = (char *) malloc(tamanho); 
											sprintf(str, "%s\nSenao {\n%s\n}", (yyvsp[-6].sValue), (yyvsp[-2].sValue)); 
											(yyval.sValue) = str;
											free((yyvsp[-6].sValue));free((yyvsp[-2].sValue));}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 250 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 7 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[0].sValue));
													char * str = (char *) malloc(tamanho); 
													sprintf(str, "%s\nSenao%s", (yyvsp[-2].sValue), (yyvsp[0].sValue));
													(yyval.sValue) = str; 
													free((yyvsp[-2].sValue)); free((yyvsp[0].sValue));}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 258 "parserUoh.y" /* yacc.c:1646  */
    {pushBlockScope("se",ifCounter);
							ifCounter++; }
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 260 "parserUoh.y" /* yacc.c:1646  */
    {popScope();}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 260 "parserUoh.y" /* yacc.c:1646  */
    {	int tamanho = 5 + strlen((yyvsp[-7].sValue)) + strlen((yyvsp[-2].sValue));
														char * str = (char *) malloc(tamanho); 
														sprintf(str, "Se (%s) Execute {\n%s\n}", (yyvsp[-7].sValue), (yyvsp[-2].sValue)); 
														(yyval.sValue) = str;
														free((yyvsp[-7].sValue)); free((yyvsp[-2].sValue));}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 267 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 268 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 269 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 270 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 271 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 272 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 273 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 276 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 2 + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].sValue));
												 char * str = (char *) malloc(tamanho); 
												 sprintf(str, "%s %s", (yyvsp[-1].sValue), (yyvsp[0].sValue)); 
												 (yyval.sValue) = str;
												 free((yyvsp[-1].sValue)); free((yyvsp[0].sValue));}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 281 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].sValue));
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "%s %s %s", (yyvsp[-2].sValue), (yyvsp[-1].sValue), (yyvsp[0].sValue)); 
												(yyval.sValue) = str; 
												free((yyvsp[-2].sValue)); free((yyvsp[-1].sValue)); free((yyvsp[0].sValue));}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 288 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 289 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 290 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 291 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 292 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 293 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 296 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 297 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 300 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 301 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 302 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 306 "parserUoh.y" /* yacc.c:1646  */
    {pushBlockScope("enquanto",whileCounter);
							whileCounter++;}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 308 "parserUoh.y" /* yacc.c:1646  */
    {popScope();}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 308 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 25 + strlen((yyvsp[-7].sValue)) + strlen((yyvsp[-2].sValue));
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "Enquanto (%s) Execute {\n%s\n}", (yyvsp[-7].sValue), (yyvsp[-2].sValue)); 
												(yyval.sValue) = str; 
												free((yyvsp[-7].sValue)), free((yyvsp[-2].sValue));}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 315 "parserUoh.y" /* yacc.c:1646  */
    {	pushBlockScope("facaenquanto",doWhileCounter);
										doWhileCounter++;}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 317 "parserUoh.y" /* yacc.c:1646  */
    {popScope();}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 318 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 25 + strlen((yyvsp[-6].sValue)) +strlen((yyvsp[-1].sValue));
																	  char * str = (char *) malloc(tamanho); 
																	  sprintf(str, "Execute {\n%s\n} Enquanto (%s)", (yyvsp[-6].sValue), (yyvsp[-1].sValue)); 
																	  (yyval.sValue) = str;
																	  free((yyvsp[-6].sValue)), free((yyvsp[-1].sValue));}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 325 "parserUoh.y" /* yacc.c:1646  */
    {pushBlockScope("para",forCounter);
								forCounter++;}
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 327 "parserUoh.y" /* yacc.c:1646  */
    {popScope();}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 329 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 22 + strlen((yyvsp[-10].sValue)) + strlen((yyvsp[-7].sValue)) + strlen((yyvsp[-5].sValue)) + strlen((yyvsp[-1].sValue));
													char * str = (char *) malloc(tamanho); 
													sprintf(str, "Para (%s;%s;%s) Execute{\n%s\n}", (yyvsp[-10].sValue), (yyvsp[-7].sValue), (yyvsp[-5].sValue), (yyvsp[-1].sValue)); 
													(yyval.sValue) = str;
													free((yyvsp[-10].sValue)); free((yyvsp[-7].sValue)); free((yyvsp[-5].sValue)); free((yyvsp[-1].sValue));}
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 336 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(2); str = strdup(" "); (yyval.sValue) = str;}
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 337 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 340 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(2); str = strdup(" "); (yyval.sValue) = str;}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 341 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 344 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 10 + strlen((yyvsp[-1].sValue));
													char * str = (char *) malloc(tamanho); 
													sprintf(str, "Imprima(%s)", (yyvsp[-1].sValue)); 
													(yyval.sValue) = str; 
													free((yyvsp[-1].sValue));}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 351 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 7 + strlen((yyvsp[-1].sValue));
											char * str = (char *) malloc(tamanho); 
											sprintf(str, "Leia(%s)", (yyvsp[-1].sValue)); 
											(yyval.sValue) = str; 
											free((yyvsp[-1].sValue));}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 358 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 2 + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].sValue));
										 char * str = (char *) malloc(tamanho); 
										 sprintf(str, "%s %s", (yyvsp[-1].sValue), (yyvsp[0].sValue)); 
										 (yyval.sValue) = str;
										 free((yyvsp[-1].sValue)); free((yyvsp[0].sValue));}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 363 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 4 + strlen((yyvsp[-3].sValue))+ strlen((yyvsp[-2].sValue)) + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].sValue));
									     char * str = (char *) malloc(tamanho); 
										 sprintf(str, "%s %s %s %s", (yyvsp[-3].sValue), (yyvsp[-2].sValue), (yyvsp[-1].sValue), (yyvsp[0].sValue)); 
										 (yyval.sValue) = str;
										 free((yyvsp[-3].sValue)); free((yyvsp[-2].sValue));free((yyvsp[-1].sValue)); free((yyvsp[0].sValue));}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 372 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 373 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 2 + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].sValue));
										char * str = (char *) malloc(tamanho); 
										sprintf(str, "%s %s", (yyvsp[-1].sValue), (yyvsp[0].sValue)); 
										(yyval.sValue) = str;
										free((yyvsp[-1].sValue)); free((yyvsp[0].sValue));}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 378 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].sValue));
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "%s %s %s", (yyvsp[-2].sValue), (yyvsp[-1].sValue), (yyvsp[0].sValue)); 
												(yyval.sValue) = str; 
												free((yyvsp[-2].sValue)); free((yyvsp[-1].sValue)); free((yyvsp[0].sValue));}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 383 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-1].sValue));
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "(%s)", (yyvsp[-1].sValue)); 
												(yyval.sValue) = str; 
												free((yyvsp[-1].sValue));}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 388 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 3 + strlen((yyvsp[-2].sValue)) + strlen((yyvsp[-1].sValue)) + strlen((yyvsp[0].sValue));
															char * str = (char *) malloc(tamanho); 
															sprintf(str, "%s %s %s", (yyvsp[-2].sValue), (yyvsp[-1].sValue), (yyvsp[0].sValue)); 
															(yyval.sValue) = str; 
															free((yyvsp[-2].sValue)); free((yyvsp[-1].sValue)); free((yyvsp[0].sValue));}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 395 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 396 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 397 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 400 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 401 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 402 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 405 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 406 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 407 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 408 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 409 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 410 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 413 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 414 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 415 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 416 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 417 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 418 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 421 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 422 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 425 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 426 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 427 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 430 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 9+strlen((yyvsp[0].sValue));
								char* str = (char*)malloc(tamanho);
								sprintf(str, "MeuTipo %s", (yyvsp[0].sValue));
								(yyval.sValue) = str;
								free((yyvsp[0].sValue));}
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 437 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 8+strlen((yyvsp[-2].sValue))+ strlen((yyvsp[-1].sValue)) +strlen((yyvsp[0].sValue));
																 char* str = (char*)malloc(tamanho);
																 sprintf(str, "Vetor %s %s%s", (yyvsp[-2].sValue), (yyvsp[-1].sValue), (yyvsp[0].sValue));
																 (yyval.sValue) = str;
																 free((yyvsp[-2].sValue)); free((yyvsp[-1].sValue)); free((yyvsp[0].sValue));}
#line 2440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 442 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 8+strlen((yyvsp[-1].sValue))+strlen((yyvsp[0].sValue));
													char* str = (char*)malloc(tamanho);
													sprintf(str, "Vetor %s %s", (yyvsp[-1].sValue), (yyvsp[0].sValue));
													(yyval.sValue) = str; 
													free((yyvsp[-1].sValue)); free((yyvsp[0].sValue));}
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 449 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 3+strlen((char*)(yyvsp[-1].sValue));
											 char* str = (char*)malloc(tamanho);
											 sprintf(str, "[%s]",(yyvsp[-1].sValue));
											 (yyval.sValue) = str;
											 free((yyvsp[-1].sValue));}
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 456 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 457 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 458 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 459 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 460 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 463 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 464 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((yyvsp[-2].sValue)) + strlen((yyvsp[0].sValue)) + 3;
								char* str = (char*) malloc(tamanho);
								sprintf(str, "%s, %s", (yyvsp[-2].sValue), (yyvsp[0].sValue));
								(yyval.sValue) = str; 
								free((yyvsp[-2].sValue));
								free((yyvsp[0].sValue));}
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 472 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 473 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((yyvsp[-2].sValue))+1+strlen((yyvsp[0].sValue))+3;
					char* str = malloc(tamanho);
					sprintf(str, "%s, %s",(yyvsp[-2].sValue),(yyvsp[0].sValue));
					(yyval.sValue) = str; 
					free((yyvsp[-2].sValue)); free((yyvsp[0].sValue));}
#line 2523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 480 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 481 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 485 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 486 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 487 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 488 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2563 "y.tab.c" /* yacc.c:1646  */
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
#line 490 "parserUoh.y" /* yacc.c:1906  */


int main (void) {
	
	iniciar(&scope_stack);
	init_array(&symbol_table,50);
	int resultado =yyparse ( );
	return resultado;
}

int yyerror (char *msg) {
	fprintf (stderr, "-- %d: %s at '%s'\n", yylineno, msg, yytext);
	//destrua conteudo e fecha arquivo e exit
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

void pushBlockScope(char*nome, int ordem){
	ElementoTipoNome * item = mostrarTopo(&scope_stack);
	printf("nome do escopo: %s\n",item->scopeName);
	char * escopoPai = (char*) malloc(strlen(item->scopeName));
	
	

	char ordemStr [10];
	sprintf(ordemStr, "%d", ordem);
	
	int tamanho = strlen(escopoPai) + strlen(nome)+strlen(ordemStr)+1;
	char* resultado = (char*) malloc(tamanho);
	strcpy(resultado,escopoPai);
	strcat(resultado,nome);
	strcat(resultado,ordemStr);
	//strcat(resultado,"\0");
	//coloca na pilha
	pushScope(resultado,"void");
	
}

void inicializaContadores(){
	forCounter = 0;
	ifCounter= 0;
	whileCounter= 0;
	elseCounter = 0;
	doWhileCounter = 0;
}
int insertSymbolTable(HashTable* hashTable,char*name, char*scope,char*type){
	char* key = (char*) malloc(strlen(scope)+strlen(name)+1);
	strcpy(key,scope);
	strcat(key,name);
	Symbol *item = createSymbol(key,name,scope,type);
	int result = insert(&symbol_table,item);
	printf("tamanho da hash: %d\n",symbol_table.size);
	return result;
	free(key);
}


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
