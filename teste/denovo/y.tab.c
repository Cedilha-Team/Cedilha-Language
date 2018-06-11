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

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;
Pilha scope_stack;


#line 79 "y.tab.c" /* yacc.c:339  */

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
#line 14 "parserUoh.y" /* yacc.c:355  */

	char * sValue;  /* string value */

#line 253 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 268 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   244

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  205

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
       0,    45,    45,    48,    55,    56,    61,    62,    65,    71,
      77,    78,    81,    84,    88,    89,    95,    96,   107,   108,
     111,   123,   136,   142,   147,   148,   151,   154,   158,   164,
     169,   170,   176,   177,   178,   181,   182,   185,   186,   190,
     196,   203,   204,   205,   206,   207,   208,   209,   213,   217,
     223,   224,   225,   226,   227,   228,   231,   232,   235,   236,
     237,   240,   247,   254,   262,   263,   266,   267,   270,   276,
     282,   286,   294,   295,   299,   303,   307,   313,   314,   315,
     318,   319,   320,   323,   324,   325,   326,   327,   328,   331,
     332,   333,   334,   335,   336,   339,   340,   343,   344,   348,
     352,   358,   364,   365,   366,   367,   368,   369,   372,   373,
     379,   380,   386,   387,   391,   392,   393,   394
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
  "declaracoes", "assinatura_funcoes", "assinaturas", "assinatura_funcao",
  "assinatura_proc", "parametros", "parametro", "bloco_funcoes",
  "funcoes_proc", "definicoes_funcoes_proc", "definicao_funcao",
  "definicao_procedimento", "chamada_funcao", "retorne",
  "parametros_chamada", "parametro_chamada", "bloco_principal",
  "sentencas", "sentenca", "controle", "bloco_se", "se_simplificado",
  "comando", "atribuicao", "atribuicao_binaria", "atribuicao_unaria",
  "repeticao", "bloco_enquanto", "bloco_faca_enquanto", "bloco_para",
  "declaracao_para", "comando_para", "imprime", "leia", "declaracao",
  "expressao", "operador_unario", "operador_binario",
  "operador_relacional", "operador_aritmetico", "operador_booleano",
  "tipo", "tipo_vetor", "tamanho_vetor", "tipo_primitivo", "termos", "ids",
  "termo", "literal", YY_NULLPTR
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

#define YYPACT_NINF -95

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-95)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -95,    24,     6,   -95,    23,     3,    17,   -30,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,    -4,    29,   -95,   -95,     8,
       5,    34,     6,    39,    -4,    16,    23,   150,    19,   -95,
     -95,    22,   -95,    23,    26,    18,    54,    70,   -95,   -95,
     -95,   -95,    28,    35,    36,   -95,    37,    50,    43,     4,
       4,   -95,   -95,   -95,    41,   -95,    40,    30,   -95,   -95,
      62,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,     4,    90,    41,   -95,     6,   -95,    59,   -95,    23,
     -95,    15,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
       4,   -95,     4,    45,    95,     4,    23,   150,    72,    41,
     -95,    61,   -95,   -95,   -95,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,     4,   -95,   -95,   -95,
     -95,   150,    -5,   -95,    65,     4,    76,    77,    78,     6,
     -95,   -95,   -95,   -95,   -95,    45,    75,    67,   -95,   -95,
      88,    89,    71,    74,    94,    96,    79,   -95,    97,   -95,
     -95,   -95,   150,   -95,     4,   -95,   150,   150,   -95,   -95,
     -95,   -95,    15,   109,   -95,    45,    95,   -95,   111,     4,
     115,   105,   -95,   112,   107,   -95,   110,   -95,   -95,   113,
      86,   114,   -95,     4,   -95,   150,   150,   179,     4,    91,
     116,   131,   -95,   108,   130,   136,   -95,   -95,   120,   -95,
     -95,   143,   150,   145,   -95
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     4,     1,     0,     0,     0,     0,     7,     6,
     107,   106,   104,   103,   102,   105,     0,    98,    97,     0,
       0,    14,     4,     0,   100,     0,    10,    30,     0,     2,
       5,     0,    99,    10,     0,    12,     0,   112,   117,   115,
     114,   116,     0,     0,     0,    36,     0,     0,     0,     0,
       0,    78,    79,    77,    46,    47,     0,     0,    33,    35,
      37,    32,    45,    34,    58,    59,    60,    42,    43,    41,
      44,     0,     0,    72,   113,    16,   101,     0,     9,    10,
      13,    24,    50,    51,    52,    53,    54,    55,    56,    57,
       0,    48,     0,     0,     0,     0,    64,    30,   112,     0,
      23,     0,    83,    84,    85,    86,    87,    88,    95,    96,
      89,    93,    94,    90,    91,    92,     0,    81,    82,    80,
      29,    30,     0,    73,    70,     0,     0,     0,     0,    16,
      18,    19,     8,    11,   112,     0,     0,    26,    28,    49,
       0,     0,   108,   110,     0,     0,     0,    65,     0,    75,
      76,    31,    30,    39,     0,    74,     0,    30,    15,    17,
      27,    22,    24,     0,    68,     0,     0,    69,     0,     0,
       0,     0,    71,     0,     0,    25,     0,   109,   111,     0,
       0,     0,    38,     0,    21,    30,    30,    66,     0,     0,
       0,     0,    67,     0,     0,     0,    40,    61,     0,    62,
      20,     0,    30,     0,    63
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -95,   -95,   -95,   128,   -95,   -63,   -62,   -18,   -95,   -95,
      60,   -95,   -95,   -95,   -27,   -95,    42,   -95,   -95,   -94,
     -95,   -95,    57,   -95,     1,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   100,   -48,   -95,   124,
     -95,   -95,   -95,     0,   -95,   174,   -95,    38,    44,   -76,
     -95
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    34,    35,    29,
     128,   129,   130,   131,    99,    55,   136,   137,    21,    56,
      57,    58,    59,    60,    61,    62,    90,    91,    63,    64,
      65,    66,   146,   193,    67,    68,    69,    70,    71,   116,
     117,   118,   119,    72,    17,    24,    18,   141,   144,    73,
      74
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      54,   100,   101,   148,    16,   138,    19,    98,    38,    39,
      40,    41,   126,   127,    42,    77,     4,   142,   134,    38,
      39,    40,    41,   123,     3,    20,    36,   151,    22,    23,
     152,     5,    25,    36,    10,    11,    12,    13,    14,    15,
      27,    50,   139,    28,   140,    26,    31,   145,   134,    38,
      39,    40,    41,    33,    75,    51,    76,    80,   171,   160,
      52,   133,   173,   174,    78,    92,   126,   127,   150,    53,
      54,   135,    93,    94,    95,    79,   120,   155,    97,    36,
     102,   103,   104,   105,   106,   107,   138,    96,   121,   142,
     122,   190,   191,   124,    54,   108,   109,   132,   143,   149,
     110,   111,   112,   113,   114,   115,   172,    81,   203,    81,
     154,   156,   157,   161,   158,    82,    83,    84,    85,    86,
      87,   180,    88,    89,   162,    54,   163,   164,   165,    54,
      54,   166,   167,   170,   168,   189,   176,   169,   179,   181,
     194,   182,   183,   184,   187,   185,   198,   201,   186,   195,
      30,   188,   196,    37,    38,    39,    40,    41,    54,    54,
      54,    10,    11,    12,    13,    14,    15,   197,   199,    42,
      43,    44,   200,    45,    46,    54,    47,    48,   202,   153,
      49,   204,    37,    38,    39,    40,    41,    50,   192,   159,
      10,    11,    12,    13,    14,    15,   147,   125,    32,    43,
      44,    51,     0,   177,   175,     0,    52,     0,     0,    49,
     178,     0,     0,     0,     0,    53,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,    53
};

static const yytype_int16 yycheck[] =
{
      27,    49,    50,    97,     4,    81,     3,     3,     4,     5,
       6,     7,    75,    75,    19,    33,    10,    93,     3,     4,
       5,     6,     7,    71,     0,     8,    26,   121,    58,    33,
      35,    25,     3,    33,    11,    12,    13,    14,    15,    16,
      35,    37,    90,     9,    92,    37,     7,    95,     3,     4,
       5,     6,     7,    37,    35,    51,    34,     3,   152,   135,
      56,    79,   156,   157,    38,    37,   129,   129,   116,    65,
      97,    56,    37,    37,    37,    57,    36,   125,    35,    79,
      39,    40,    41,    42,    43,    44,   162,    37,    58,   165,
      28,   185,   186,     3,   121,    54,    55,    38,     3,    38,
      59,    60,    61,    62,    63,    64,   154,    37,   202,    37,
      45,    35,    35,    38,    36,    45,    46,    47,    48,    49,
      50,   169,    52,    53,    57,   152,    38,    38,    57,   156,
     157,    57,    38,    36,    38,   183,    27,    58,    27,    24,
     188,    36,    30,    36,    58,    35,    38,    27,    35,    58,
      22,    37,    36,     3,     4,     5,     6,     7,   185,   186,
     187,    11,    12,    13,    14,    15,    16,    36,    38,    19,
      20,    21,    36,    23,    24,   202,    26,    27,    35,   122,
      30,    36,     3,     4,     5,     6,     7,    37,   187,   129,
      11,    12,    13,    14,    15,    16,    96,    73,    24,    20,
      21,    51,    -1,   165,   162,    -1,    56,    -1,    -1,    30,
     166,    -1,    -1,    -1,    -1,    65,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    67,    68,     0,    10,    25,    69,    70,    71,    72,
      11,    12,    13,    14,    15,    16,   109,   110,   112,     3,
       8,    84,    58,    33,   111,     3,    37,    35,     9,    75,
      69,     7,   111,    37,    73,    74,   109,     3,     4,     5,
       6,     7,    19,    20,    21,    23,    24,    26,    27,    30,
      37,    51,    56,    65,    80,    81,    85,    86,    87,    88,
      89,    90,    91,    94,    95,    96,    97,   100,   101,   102,
     103,   104,   109,   115,   116,    35,    34,    73,    38,    57,
       3,    37,    45,    46,    47,    48,    49,    50,    52,    53,
      92,    93,    37,    37,    37,    37,    37,    35,     3,    80,
     103,   103,    39,    40,    41,    42,    43,    44,    54,    55,
      59,    60,    61,    62,    63,    64,   105,   106,   107,   108,
      36,    58,    28,   103,     3,   105,    71,    72,    76,    77,
      78,    79,    38,    73,     3,    56,    82,    83,   115,   103,
     103,   113,   115,     3,   114,   103,    98,   102,    85,    38,
     103,    85,    35,    88,    45,   103,    35,    35,    36,    76,
     115,    38,    57,    38,    38,    57,    57,    38,    38,    58,
      36,    85,   103,    85,    85,    82,    27,   113,   114,    27,
     103,    24,    36,    30,    36,    35,    35,    58,    37,   103,
      85,    85,    90,    99,   103,    58,    36,    36,    38,    38,
      36,    27,    35,    85,    36
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    69,    69,    70,    70,    71,    72,
      73,    73,    73,    74,    75,    75,    76,    76,    77,    77,
      78,    79,    80,    81,    82,    82,    82,    83,    83,    84,
      85,    85,    86,    86,    86,    87,    87,    88,    88,    88,
      89,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    92,    92,    92,    92,    93,    93,    94,    94,
      94,    95,    96,    97,    98,    98,    99,    99,   100,   101,
     102,   102,   103,   103,   103,   103,   103,   104,   104,   104,
     105,   105,   105,   106,   106,   106,   106,   106,   106,   107,
     107,   107,   107,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   112,   112,   112,   112,   112,   112,   113,   113,
     114,   114,   115,   115,   116,   116,   116,   116
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     0,     3,     1,     1,     6,     5,
       0,     3,     1,     2,     0,     4,     0,     2,     1,     1,
       7,     4,     4,     2,     0,     3,     1,     2,     1,     4,
       0,     3,     1,     1,     1,     1,     1,     1,     5,     3,
       8,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     8,     8,    12,     0,     1,     0,     1,     4,     4,
       2,     4,     1,     2,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     3,
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
#line 45 "parserUoh.y" /* yacc.c:1646  */
    {}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 48 "parserUoh.y" /* yacc.c:1646  */
    {}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 55 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "";}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 56 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(strlen((yyvsp[-2].sValue)) + 1 + strlen(";\n\n") + 1 +  strlen((yyvsp[0].sValue))); 
																			sprintf(str, "%s %s %s", (char *) (yyvsp[-2].sValue), ";\n\n", (char *) (yyvsp[0].sValue)); 
																			printf("%s", str);}
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 61 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 62 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 65 "parserUoh.y" /* yacc.c:1646  */
    {
																			char * str = (char *) malloc(7 + strlen((char *)(yyvsp[-4].sValue)) + strlen((char *)(yyvsp[-3].sValue)) + 6 + strlen((char *)(yyvsp[-1].sValue)) + 12 ); 
																			 sprintf(str, "%s %s %s %s %s %s", "Funcao",(char *) (yyvsp[-4].sValue), (char *) (yyvsp[-3].sValue), "(", (char*)(yyvsp[-1].sValue), ")" ); 
																			 (yyval.sValue) = str;}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 71 "parserUoh.y" /* yacc.c:1646  */
    {
																			char * str = (char *) malloc(10 + strlen((char *)(yyvsp[-3].sValue)) + strlen((char *)(yyvsp[-1].sValue))); 
																			 sprintf(str, "Proc %s ( %s)", (char *) (yyvsp[-3].sValue),(char *) (yyvsp[-1].sValue)); 
																			 (yyval.sValue) = str;}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 77 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "";}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 78 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(strlen((yyvsp[-2].sValue)) + 2 + strlen((yyvsp[0].sValue))); 
														sprintf(str, "%s%s %s", (char *) (yyvsp[-2].sValue), ",", (char *) (yyvsp[0].sValue)); 
														(yyval.sValue) = str;}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 81 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 84 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(strlen((yyvsp[-1].sValue)) + 1 + strlen((yyvsp[0].sValue))); 
						sprintf(str, "%s %s", (char *) (yyvsp[-1].sValue), (char *) (yyvsp[0].sValue)); 
						(yyval.sValue) = str; }
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 88 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "";}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 89 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 14 + strlen((yyvsp[-1].sValue)) + 2;
            											char * str = (char *) malloc(tamanho); 
													   sprintf(str, "%s %s %s", "BlocoFuncoes {", (char *) (yyvsp[-1].sValue), " }"); 
													   printf("%s\n",str); free((yyvsp[-1].sValue));}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 95 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue)="";}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 96 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(1+strlen((char *)(yyvsp[-1].sValue)) + strlen((char *)(yyvsp[0].sValue))); 
												    sprintf(str, "%s %s", (char *) (yyvsp[-1].sValue), (char *) (yyvsp[0].sValue)); 
											        (yyval.sValue) = str; }
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 107 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 108 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 111 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char *)(yyvsp[-6].sValue)) + 2 + strlen((char *)(yyvsp[-4].sValue)) + 8 + strlen((char *)(yyvsp[-2].sValue)) + 4;
																						 char * str = (char *) malloc(tamanho); 
																						 sprintf(str, "%s %s %s %s %s %s", (char *) (yyvsp[-6].sValue), "{\n", (char *) (yyvsp[-4].sValue), "Retorne ", (char *) (yyvsp[-2].sValue), ";\n}\n"); 
																						 (yyval.sValue) = str;}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 123 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 4 + strlen((char *)(yyvsp[-3].sValue)) + strlen((char *)(yyvsp[-1].sValue));
																	 char * str = (char *) malloc(tamanho); 
																	 sprintf(str, "%s {\n%s\n}", (char *) (yyvsp[-3].sValue),  (char *) (yyvsp[-1].sValue)); 
																	 (yyval.sValue) = str;}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 136 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-3].sValue)) + 1 + strlen((char*)(yyvsp[-1].sValue)) + 1;
																 char * str = (char *) malloc(tamanho); 
																 sprintf(str, "%s%s%s%s", (char *) (yyvsp[-3].sValue), "(", (char *) (yyvsp[-1].sValue), ")"); 
																 (yyval.sValue) = str; free((yyvsp[-3].sValue)); free((yyvsp[-1].sValue));}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 142 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 8 + strlen((char*)(yyvsp[0].sValue));
								char * str = (char *) malloc(tamanho); 
								sprintf(str, "Retorne %s", (char *) (yyvsp[0].sValue)); 
								(yyval.sValue) = str; free((yyvsp[0].sValue));}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 147 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "";}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 148 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(strlen((char *)(yyvsp[-2].sValue)) + 1 + strlen((char *)(yyvsp[0].sValue))); 
																   sprintf(str, "%s%s%s", (char *) (yyvsp[-2].sValue), ",", (char *) (yyvsp[0].sValue)); 
																   (yyval.sValue) = str; free((yyvsp[-2].sValue)); free((yyvsp[0].sValue));}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 151 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 154 "parserUoh.y" /* yacc.c:1646  */
    {char * str = (char *) malloc(1 + strlen((char*)(yyvsp[0].sValue)));
								 sprintf(str, "%s%s","@", (char *) (yyvsp[0].sValue));
								 (yyval.sValue) = str;
								 free((yyvsp[0].sValue));}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 158 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 164 "parserUoh.y" /* yacc.c:1646  */
    {printf("BlocoPrincipal {\n%s}\n",(yyvsp[-1].sValue));}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 169 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue)="";}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 170 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-2].sValue))+ 3 + strlen((char*)(yyvsp[0].sValue));
											char * str = (char *) malloc(tamanho); 
											sprintf(str, "%s%s\n%s", (char*)(yyvsp[-2].sValue), ";", (char *) (yyvsp[0].sValue)); 
											(yyval.sValue) = str; free((yyvsp[-2].sValue));}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 176 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 177 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 178 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 181 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 182 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "Pare";}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 185 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 186 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-4].sValue))+ 10 + strlen((char*)(yyvsp[-1].sValue)) + 2;
														char * str = (char *) malloc(tamanho); 
														sprintf(str, "%s%s %s %s", (char*)(yyvsp[-4].sValue), "\nSenao {", (char *) (yyvsp[-1].sValue), "}"); 
														(yyval.sValue) = str; free((yyvsp[-4].sValue));}
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 190 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-2].sValue))+ 9 + strlen((char*)(yyvsp[0].sValue));
														char * str = (char *) malloc(tamanho); 
														sprintf(str, "%s%s %s", (char*)(yyvsp[-2].sValue), "\nSenao", (char *) (yyvsp[0].sValue)); 
														(yyval.sValue) = str; free((yyvsp[-2].sValue));}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 196 "parserUoh.y" /* yacc.c:1646  */
    { int tamanho = 5 + strlen((char *) (yyvsp[-5].sValue)) + 13 + strlen((char *) (yyvsp[-1].sValue)) + 2;
																						char * str = (char *) malloc(tamanho); 
																						sprintf(str, "%s %s %s %s %s", 
																						"Se (", (char *) (yyvsp[-5].sValue), ") Execute {", (char *) (yyvsp[-1].sValue), "}"); 
																						(yyval.sValue) = str; free((yyvsp[-5].sValue));}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 203 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 204 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 205 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 206 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 207 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 208 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 209 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 213 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-1].sValue))+ 1 + strlen((char*)(yyvsp[0].sValue));
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "%s %s", (char*)(yyvsp[-1].sValue), (char *) (yyvsp[0].sValue)); 
												(yyval.sValue) = str;free((yyvsp[-1].sValue));}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 217 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-2].sValue))+ 1 + strlen((char*)(yyvsp[-1].sValue)) + 1 + strlen((char*)(yyvsp[0].sValue));
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "%s %s %s", (char*)(yyvsp[-2].sValue), (char *) (yyvsp[-1].sValue), (char *) (yyvsp[0].sValue)); 
												(yyval.sValue) = str;free((yyvsp[-2].sValue));free((yyvsp[0].sValue));}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 223 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "=";}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 224 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "+=";}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 225 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "-=";}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 226 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "*=";}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 227 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "/=";}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 228 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "%=";}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 231 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "++";}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 232 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "--";}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 235 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 236 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 237 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 240 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 10 + strlen((char*)(yyvsp[-5].sValue)) + 11 + strlen((char*)(yyvsp[-1].sValue))+1;
																							char * str = (char *) malloc(tamanho); 
																							sprintf(str, "%s%s%s%s%s", "Enquanto (", (char *) (yyvsp[-5].sValue), ") Execute {", 
																							(char *) (yyvsp[-1].sValue), "}"); 
																							(yyval.sValue) = str; free((yyvsp[-5].sValue)), free((yyvsp[-1].sValue));}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 247 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 10 + strlen((char*)(yyvsp[-5].sValue)) + 11 + strlen((char*)(yyvsp[-1].sValue))+1;
																								  char * str = (char *) malloc(tamanho); 
																								  sprintf(str, "%s%s%s%s%s", "Execute {", (char *) (yyvsp[-5].sValue), "} Enquanto (", 
																								  (char *) (yyvsp[-1].sValue), ")"); 
																								  (yyval.sValue) = str; free((yyvsp[-5].sValue)), free((yyvsp[-1].sValue));}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 255 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 6 + strlen((char *)(yyvsp[-9].sValue)) + strlen((char *)(yyvsp[-7].sValue)) + 1 + strlen((char *)(yyvsp[-5].sValue)) + 11 + strlen((char *)(yyvsp[-1].sValue)) + 1;
																				char * str = (char *) malloc(tamanho); 
																				sprintf(str, "%s%s%s%s%s%s%s%s%s", "Para (", (char *) (yyvsp[-9].sValue), ";", 
																						(char *)  (yyvsp[-7].sValue), ";", (char *)(yyvsp[-5].sValue), ") Execute {", (char *)(yyvsp[-1].sValue), "}"); 
																				(yyval.sValue) = str; }
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 262 "parserUoh.y" /* yacc.c:1646  */
    {}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 263 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 266 "parserUoh.y" /* yacc.c:1646  */
    {}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 267 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 270 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 9 + strlen((char*)(yyvsp[-1].sValue))+1;
													 char * str = (char *) malloc(tamanho); 
													 sprintf(str, "%s%s%s", "Imprima (", (char *) (yyvsp[-1].sValue), ")"); 
													 (yyval.sValue) = str; free((yyvsp[-1].sValue));}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 276 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 6 + strlen((char *) (yyvsp[-1].sValue)) + 1;
												char * str = (char *) malloc(tamanho); 
												sprintf(str, "%s%s%s", "Leia (", (char *) (yyvsp[-1].sValue), ")"); 
												(yyval.sValue) = str; free((yyvsp[-1].sValue));}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 282 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-1].sValue))+ 1 + strlen((char*)(yyvsp[0].sValue));
									 char * str = (char *) malloc(tamanho); 
									 sprintf(str, "%s %s", (char*)(yyvsp[-1].sValue), (char *) (yyvsp[0].sValue)); 
									 (yyval.sValue) = str;free((yyvsp[0].sValue));}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 286 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-3].sValue))+ 1 + strlen((char*)(yyvsp[-2].sValue)) + 3 + strlen((char*)(yyvsp[0].sValue));
								     char * str = (char *) malloc(tamanho); 
									 sprintf(str, "%s %s %s %s", (char*)(yyvsp[-3].sValue), (char *) (yyvsp[-2].sValue), "=", (char *) (yyvsp[0].sValue)); 
									 (yyval.sValue) = str;free((yyvsp[-2].sValue)); free((yyvsp[0].sValue));}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 294 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 295 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char *) (yyvsp[-1].sValue)) + 1 + strlen((char *) (yyvsp[0].sValue));
									char * str = (char *) malloc(tamanho); 
									sprintf(str, "%s %s", (char *) (yyvsp[-1].sValue), (char *) (yyvsp[0].sValue)); 
									(yyval.sValue) = str; free((yyvsp[0].sValue));}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 299 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char *) (yyvsp[-2].sValue)) + 1 + strlen((char *) (yyvsp[-1].sValue)) + 1 + strlen((char *) (yyvsp[0].sValue));
									char * str = (char *) malloc(tamanho); 
									sprintf(str, "%s %s %s", (char *) (yyvsp[-2].sValue), (char *) (yyvsp[-1].sValue), (char *) (yyvsp[0].sValue)); 
									(yyval.sValue) = str; free((yyvsp[0].sValue));}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 303 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 1 + strlen((char *) (yyvsp[-1].sValue)) + 1;
									char * str = (char *) malloc(tamanho); 
									sprintf(str, "%s%s%s", "(" , (char *) (yyvsp[-1].sValue), ")"); 
									(yyval.sValue) = str; free((yyvsp[-1].sValue));}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 307 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char *) (yyvsp[-2].sValue)) + 1 + strlen((char *) (yyvsp[-1].sValue)) + 1 + strlen((char *) (yyvsp[0].sValue));
														char * str = (char *) malloc(tamanho); 
														sprintf(str, "%s %s %s", (char *) (yyvsp[-2].sValue), (char *) (yyvsp[-1].sValue), (char *) (yyvsp[0].sValue)); 
														(yyval.sValue) = str; free((yyvsp[0].sValue));}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 313 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "-";}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 314 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "!";}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 315 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "@";}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 318 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 319 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 320 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 323 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "<=";}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 324 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = ">=";}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 325 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "==";}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 326 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "!=";}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 327 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "<";}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 328 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = ">";}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 331 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "*";}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 332 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "/";}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 333 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "%";}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 334 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "^";}
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 335 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "-";}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 336 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "+";}
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 339 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "&&";}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 340 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "||";}
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 343 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 344 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 348 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 6+strlen((char*)(yyvsp[-1].sValue))+strlen((char*)(yyvsp[0].sValue));
													 char* str = (char*)malloc(tamanho);
													 sprintf(str, "%s%s%s","Vetor ", (char*)(yyvsp[-1].sValue),(char*)(yyvsp[0].sValue));
													 (yyval.sValue) = str; free((yyvsp[-1].sValue));free((yyvsp[0].sValue));}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 352 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 6+strlen((char*)(yyvsp[0].sValue));
													 char* str = (char*)malloc(tamanho);
													 sprintf(str, "%s%s","Vetor ",(char*)(yyvsp[0].sValue));
													 (yyval.sValue) = str; free((yyvsp[0].sValue));}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 358 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = 1+strlen((char*)(yyvsp[-1].sValue))+1;
											 char* str = (char*)malloc(tamanho);
											 sprintf(str, "%s%s%s","[",(char*)(yyvsp[-1].sValue),"]");
											 (yyval.sValue) = str;}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 364 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "Inteiro";}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 365 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "Real";}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 366 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "Caractere";}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 367 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "Vetor";}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 368 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "Texto";}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 369 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = "Booleano";}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 372 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 373 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-2].sValue))+1+strlen((char*)(yyvsp[0].sValue));
								char* str = (char*)malloc(tamanho);
								sprintf(str, "%s,%s",(char*)(yyvsp[-2].sValue),(char*)(yyvsp[0].sValue));
								(yyval.sValue) = str; free((yyvsp[-2].sValue));}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 379 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 380 "parserUoh.y" /* yacc.c:1646  */
    {int tamanho = strlen((char*)(yyvsp[-2].sValue))+1+strlen((char*)(yyvsp[0].sValue));
					char* str = (char*)malloc(tamanho);
					sprintf(str, "%s,%s",(char*)(yyvsp[-2].sValue),(char*)(yyvsp[0].sValue));
					(yyval.sValue) = str; free((yyvsp[-2].sValue));}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 386 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 387 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 391 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 392 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 393 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 394 "parserUoh.y" /* yacc.c:1646  */
    {(yyval.sValue) = (yyvsp[0].sValue);}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2317 "y.tab.c" /* yacc.c:1646  */
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
#line 396 "parserUoh.y" /* yacc.c:1906  */


int main (void) {
	return yyparse ( );
}

int yyerror (char *msg) {
	fprintf (stderr, "-- %d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}

int pushScope(char* scope, char* type){

	iniciar(&scope_stack);
		
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

/*void check_type(char* identifier, char* scope){
	char* key = (char*) malloc(strlen(identifier)+strlen(scope);
	
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
