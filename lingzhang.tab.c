/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 11 "lingzhang.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <stack>
#include "SymbolTable.h"
using namespace std;

int line_num = 1;
bool assignment_statement = false;


stack<SYMBOL_TABLE> scopeStack; // stack of scope hashtables

void beginScope();
void endScope();
void cleanUp();
TYPE_INFO findEntryInAnyScope(const string the_name);

void printTokenInfo(const char* token_type, const char* lexeme);

void printRule(const char *, const char *);

int yyerror(const char *s) 
{
    printf("Line %d: %s\n", line_num, s);
    cleanUp();
    exit(1);
}

extern "C" 
{
    int yyparse(void);
    int yylex(void);
    int yywrap() { return 1; }
}


#line 106 "lingzhang.tab.c" /* yacc.c:339  */

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
    T_IDENT = 258,
    T_INTCONST = 259,
    T_FLOATCONST = 260,
    T_UNKNOWN = 261,
    T_STRCONST = 262,
    T_IF = 263,
    T_ELSE = 264,
    T_WHILE = 265,
    T_FUNCTION = 266,
    T_FOR = 267,
    T_IN = 268,
    T_NEXT = 269,
    T_BREAK = 270,
    T_TRUE = 271,
    T_FALSE = 272,
    T_QUIT = 273,
    T_PRINT = 274,
    T_CAT = 275,
    T_READ = 276,
    T_LPAREN = 277,
    T_RPAREN = 278,
    T_LBRACE = 279,
    T_RBRACE = 280,
    T_LBRACKET = 281,
    T_RBRACKET = 282,
    T_SEMICOLON = 283,
    T_COMMA = 284,
    T_ADD = 285,
    T_SUB = 286,
    T_MULT = 287,
    T_DIV = 288,
    T_MOD = 289,
    T_POW = 290,
    T_LT = 291,
    T_LE = 292,
    T_GT = 293,
    T_GE = 294,
    T_EQ = 295,
    T_NE = 296,
    T_NOT = 297,
    T_AND = 298,
    T_OR = 299,
    T_ASSIGN = 300,
    T_LIST = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 51 "lingzhang.y" /* yacc.c:355  */

    char* text;
    TYPE_INFO typeInfo;

#line 195 "lingzhang.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 212 "lingzhang.tab.c" /* yacc.c:358  */

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
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   139

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    83,    83,    91,    98,   105,   112,   119,   126,   133,
     140,   147,   154,   161,   168,   178,   185,   192,   199,   206,
     215,   223,   243,   265,   288,   296,   319,   336,   344,   351,
     358,   365,   374,   384,   392,   397,   401,   410,   409,   432,
     431,   455,   465,   470,   477,   476,   511,   520,   528,   537,
     550,   563,   570,   569,   586,   590,   597,   602,   619,   637,
     648,   652,   659,   664,   668,   674,   681,   688,   697,   704,
     711,   718,   725,   734,   738,   742,   746,   750,   754,   760,
     767,   776,   793
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_IDENT", "T_INTCONST", "T_FLOATCONST",
  "T_UNKNOWN", "T_STRCONST", "T_IF", "T_ELSE", "T_WHILE", "T_FUNCTION",
  "T_FOR", "T_IN", "T_NEXT", "T_BREAK", "T_TRUE", "T_FALSE", "T_QUIT",
  "T_PRINT", "T_CAT", "T_READ", "T_LPAREN", "T_RPAREN", "T_LBRACE",
  "T_RBRACE", "T_LBRACKET", "T_RBRACKET", "T_SEMICOLON", "T_COMMA",
  "T_ADD", "T_SUB", "T_MULT", "T_DIV", "T_MOD", "T_POW", "T_LT", "T_LE",
  "T_GT", "T_GE", "T_EQ", "T_NE", "T_NOT", "T_AND", "T_OR", "T_ASSIGN",
  "T_LIST", "$accept", "N_START", "N_EXPR", "N_CONST", "N_ARITHLOGIC_EXPR",
  "N_SIMPLE_ARITHLOGIC", "N_ADD_OP_LIST", "N_TERM", "N_MULT_OP_LIST",
  "N_FACTOR", "N_COMPOUND_EXPR", "N_EXPR_LIST", "N_IF_EXPR",
  "N_WHILE_EXPR", "$@1", "N_FOR_EXPR", "$@2", "N_LIST_EXPR",
  "N_CONST_LIST", "N_ASSIGNMENT_EXPR", "$@3", "N_INDEX", "N_QUIT_EXPR",
  "N_OUTPUT_EXPR", "N_INPUT_EXPR", "N_FUNCTION_DEF", "$@4", "N_PARAM_LIST",
  "N_NO_PARAMS", "N_PARAMS", "N_FUNCTION_CALL", "N_ARG_LIST", "N_NO_ARGS",
  "N_ARGS", "N_ADD_OP", "N_MULT_OP", "N_REL_OP", "N_VAR",
  "N_SINGLE_ELEMENT", "N_ENTIRE_VAR", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF -55

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-55)))

#define YYTABLE_NINF -48

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      15,   -17,   -55,   -55,   -55,   -16,   -14,   -55,    -8,   -55,
     -55,     2,     7,     8,    16,    15,    15,    47,    18,    41,
     -55,   -55,   -55,    34,   -27,   -22,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
      15,   -19,   -55,    15,    15,    20,    42,    23,    15,    15,
      44,    30,    31,    39,   -55,    51,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,    47,   -55,   -55,   -55,   -55,    47,   -55,
     -55,   -55,   -55,   -55,   -55,    47,    37,    53,   -55,   -55,
      15,    32,    55,   -55,    76,   -55,   -55,    58,    59,    60,
     -55,    15,    61,    62,    56,    64,   -55,   -27,   -22,    15,
     -55,    57,    15,    15,    67,    63,    70,   -55,   -55,    81,
     -55,   -55,   -55,    31,   -55,    15,    51,   -55,   -55,   -55,
     -55,    68,   -55,    87,    15,    76,    73,    15,   -55,    71,
     -55,    54,    15,   -55,   -55,   -55,    77,    74,   -55,    15,
     -55,   -55
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    82,    15,    17,    16,     0,     0,    52,     0,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,    29,     7,    20,    24,    27,     6,     3,     4,     5,
      11,     8,    14,     9,    10,    12,    13,    28,    80,    79,
      62,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    82,    31,     0,     1,    73,    75,    74,
      76,    77,    78,     0,    65,    66,    67,    22,     0,    68,
      69,    71,    72,    70,    25,     0,    63,     0,    61,    60,
       0,     0,     0,    37,    56,    39,    48,     0,     0,     0,
      30,     0,     0,     0,    43,     0,    21,    24,    27,     0,
      59,     0,     0,     0,     0,    57,     0,    55,    54,     0,
      49,    50,    51,    34,    32,     0,     0,    41,    23,    26,
      64,     0,    45,    35,     0,     0,     0,     0,    33,     0,
      42,    81,     0,    38,    58,    53,     0,     0,    36,     0,
      81,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -55,   -55,     0,   -54,   -55,    43,    10,    36,    11,   -15,
     -21,    -5,   -55,   -55,   -55,   -55,   -55,   -55,    -6,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -13,
     -55,   -55,   -55,    12,   -55,   -55,   -55,    66,   -55,   -55
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    19,    76,    21,    22,    23,    67,    24,    74,    25,
      26,    92,    27,    28,   104,    29,   109,    30,    95,    31,
      81,    42,    32,    33,    34,    35,    45,   106,   107,   108,
      36,    77,    78,    79,    68,    75,    63,    37,    38,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    94,    54,    64,    65,    40,    43,    80,    44,    41,
      69,    70,    71,    72,    46,    51,    52,    66,     1,     2,
       3,    73,     4,     5,    47,     6,     7,     8,   -47,    48,
      49,     9,    10,    11,    12,    13,    14,    15,    50,    16,
      55,    56,    84,    82,    83,    85,    86,    53,    87,    88,
      53,     2,     3,    90,     4,     2,     3,    17,     4,    91,
      98,    18,    94,     9,    10,    93,    99,     9,    10,    15,
      57,    58,    59,    60,    61,    62,   100,   102,   103,   105,
     101,   110,   111,   112,   121,   116,   114,   117,   115,    17,
     124,   113,   125,   126,   127,   131,   132,    16,   137,   -46,
     139,   140,   122,   123,    97,   135,    96,   118,   128,   119,
     130,   120,   134,     0,     0,   129,    89,     0,     0,     0,
       0,     0,     0,     0,   133,     0,     0,   136,     0,     0,
       0,     0,   138,     0,     0,     0,     0,     0,     0,   141
};

static const yytype_int16 yycheck[] =
{
       0,    55,    17,    30,    31,    22,    22,    26,    22,    26,
      32,    33,    34,    35,    22,    15,    16,    44,     3,     4,
       5,    43,     7,     8,    22,    10,    11,    12,    45,    22,
      22,    16,    17,    18,    19,    20,    21,    22,    22,    24,
      22,     0,    22,    43,    44,     3,    23,     3,    48,    49,
       3,     4,     5,    23,     7,     4,     5,    42,     7,    28,
      75,    46,   116,    16,    17,    26,    29,    16,    17,    22,
      36,    37,    38,    39,    40,    41,    23,    45,    23,     3,
      80,    23,    23,    23,    27,    29,    25,    23,    26,    42,
      23,    91,    29,    23,    13,    27,     9,    24,    27,    45,
      23,    27,   102,   103,    68,   126,    63,    97,   113,    98,
     116,    99,   125,    -1,    -1,   115,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   124,    -1,    -1,   127,    -1,    -1,
      -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,   139
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     8,    10,    11,    12,    16,
      17,    18,    19,    20,    21,    22,    24,    42,    46,    48,
      49,    50,    51,    52,    54,    56,    57,    59,    60,    62,
      64,    66,    69,    70,    71,    72,    77,    84,    85,    86,
      22,    26,    68,    22,    22,    73,    22,    22,    22,    22,
      22,    49,    49,     3,    56,    22,     0,    36,    37,    38,
      39,    40,    41,    83,    30,    31,    44,    53,    81,    32,
      33,    34,    35,    43,    55,    82,    49,    78,    79,    80,
      26,    67,    49,    49,    22,     3,    23,    49,    49,    84,
      23,    28,    58,    26,    50,    65,    52,    54,    56,    29,
      23,    49,    45,    23,    61,     3,    74,    75,    76,    63,
      23,    23,    23,    49,    25,    26,    29,    23,    53,    55,
      80,    27,    49,    49,    23,    29,    23,    13,    58,    49,
      65,    27,     9,    49,    76,    57,    49,    27,    49,    23,
      27,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    50,    50,    50,    50,    50,
      51,    51,    52,    53,    53,    54,    55,    55,    56,    56,
      56,    56,    57,    58,    58,    59,    59,    61,    60,    63,
      62,    64,    65,    65,    67,    66,    68,    68,    69,    70,
      70,    71,    73,    72,    74,    74,    75,    76,    76,    77,
      78,    78,    79,    80,    80,    81,    81,    81,    82,    82,
      82,    82,    82,    83,    83,    83,    83,    83,    83,    84,
      84,    85,    86
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     3,     0,     2,     3,     0,     1,     1,
       3,     2,     4,     3,     0,     5,     7,     0,     6,     0,
       8,     4,     3,     1,     0,     5,     5,     0,     3,     4,
       4,     4,     0,     6,     1,     1,     0,     1,     3,     4,
       1,     1,     0,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     6,     1
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
#line 84 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("START", "EXPR");
                    endScope();
                    printf("\n---- Completed parsing ----\n\n");
                    return 0;
                }
#line 1403 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 92 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "IF_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;
                }
#line 1414 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 99 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "WHILE_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;
                }
#line 1425 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 106 "lingzhang.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;
                    printRule("EXPR", "FOR_EXPR");
                }
#line 1436 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 113 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "COMPOUND_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                }
#line 1447 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 120 "lingzhang.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                    printRule("EXPR", "ARITHLOGIC_EXPR");
                }
#line 1458 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 127 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "ASSIGNMENT_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                }
#line 1469 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 134 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "OUTPUT_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                }
#line 1480 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 141 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "INPUT_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;               
                }
#line 1491 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 148 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "LIST_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                }
#line 1502 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 155 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "FUNCTION_DEF");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                }
#line 1513 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 162 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "FUNCTION_CALL");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                }
#line 1524 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 169 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("EXPR", "QUIT_EXPR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                
                    exit(1);
                }
#line 1536 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 179 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("CONST", "INTCONST");
                    (yyval.typeInfo).type = INT;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 1547 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 186 "lingzhang.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = STR;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    printRule("CONST", "STRCONST");
                }
#line 1558 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 193 "lingzhang.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = FLOAT;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                
                    printRule("CONST", "FLOATCONST");
                }
#line 1569 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 200 "lingzhang.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = BOOL;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                
                    printRule("CONST", "TRUE");
                }
#line 1580 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 207 "lingzhang.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = BOOL;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                
                    printRule("CONST", "FALSE");
                }
#line 1591 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 216 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("ARITHLOGIC_EXPR", 
                              "SIMPLE_ARITHLOGIC");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 1603 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 225 "lingzhang.y" /* yacc.c:1646  */
    {
                    if((yyvsp[-2].typeInfo).type != INT && (yyvsp[-2].typeInfo).type != BOOL && (yyvsp[-2].typeInfo).type != FLOAT && (yyvsp[-2].typeInfo).type != INT_OR_STR_OR_BOOL_OR_FLOAT)
                    {
                        yyerror("Arg 1 must be integer or float or bool");
                    }
                    if((yyvsp[0].typeInfo).type != INT && (yyvsp[0].typeInfo).type != BOOL && (yyvsp[0].typeInfo).type != FLOAT && (yyvsp[0].typeInfo).type != INT_OR_STR_OR_BOOL_OR_FLOAT)
                    {
                        yyerror("Arg 2 must be integer or float or bool");
                    }
                    (yyval.typeInfo).type = BOOL;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    printRule("ARITHLOGIC_EXPR", 
                              "SIMPLE_ARITHLOGIC REL_OP "
                              "SIMPLE_ARITHLOGIC");
                }
#line 1624 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 244 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("SIMPLE_ARITHLOGIC", 
                              "TERM ADD_OP_LIST");
                    if((yyvsp[0].typeInfo).type == NOT_APPLICABLE){
                        (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;                       
                    }else{
                        if((yyvsp[-1].typeInfo).type != INT && (yyvsp[-1].typeInfo).type != BOOL && (yyvsp[-1].typeInfo).type != FLOAT && (yyvsp[-1].typeInfo).type != INT_OR_STR_OR_BOOL_OR_FLOAT)
                        {
                            yyerror("Arg 1 must be integer or float or bool");
                        }
                        if((yyvsp[-1].typeInfo).type == FLOAT || (yyvsp[0].typeInfo).type == FLOAT){
                            (yyval.typeInfo).type = FLOAT;                       
                        }else{
                            (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;                       
                        }                       
                    }    
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                              
                }
#line 1648 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 266 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("ADD_OP_LIST", 
                              "ADD_OP TERM ADD_OP_LIST");
                    if((yyvsp[-1].typeInfo).type != INT && (yyvsp[-1].typeInfo).type != BOOL && (yyvsp[-1].typeInfo).type != FLOAT && (yyvsp[-1].typeInfo).type != INT_OR_STR_OR_BOOL_OR_FLOAT)
                    {
                        yyerror("Arg 2 must be integer or float or bool");
                    }
                    if((yyvsp[-2].typeInfo).type == LOGICAL){
                        (yyval.typeInfo).type = BOOL;
                        (yyval.typeInfo).numParams = NOT_APPLICABLE;
                        (yyval.typeInfo).returnType = NOT_APPLICABLE;                        
                    }else{
                        if((yyvsp[-1].typeInfo).type == FLOAT || (yyvsp[0].typeInfo).type == FLOAT){
                            (yyval.typeInfo).type = FLOAT;                       
                        }else{
                            (yyval.typeInfo).type = INT;                       
                        }   
                        (yyval.typeInfo).numParams = NOT_APPLICABLE;
                        (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    }                    
                }
#line 1674 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 288 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("ADD_OP_LIST", "epsilon");
                    (yyval.typeInfo).type = NOT_APPLICABLE;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 1685 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 297 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("TERM", 
                              "FACTOR MULT_OP_LIST");

                    if((yyvsp[0].typeInfo).type == NOT_APPLICABLE){
                        (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;                       
                    }else{
                        if((yyvsp[-1].typeInfo).type != INT && (yyvsp[-1].typeInfo).type != BOOL && (yyvsp[-1].typeInfo).type != FLOAT && (yyvsp[-1].typeInfo).type != INT_OR_STR_OR_BOOL_OR_FLOAT)
                        {
                            yyerror("Arg 1 must be integer or float or bool");
                        }
                        if((yyvsp[-1].typeInfo).type == FLOAT || (yyvsp[0].typeInfo).type == FLOAT){
                            (yyval.typeInfo).type = FLOAT;                       
                        }else{
                            (yyval.typeInfo).type = INT;                       
                        }   
                    }   
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                   
                }
#line 1710 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 320 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP_LIST", 
                              "MULT_OP FACTOR MULT_OP_LIST");
                    if((yyvsp[-1].typeInfo).type != INT && (yyvsp[-1].typeInfo).type != BOOL && (yyvsp[-1].typeInfo).type != FLOAT && (yyvsp[-1].typeInfo).type != INT_OR_STR_OR_BOOL_OR_FLOAT)
                    {
                        yyerror("Arg 2 must be integer or float or bool");
                    }
                    if((yyvsp[-1].typeInfo).type == FLOAT || (yyvsp[0].typeInfo).type == FLOAT){
                        (yyval.typeInfo).type = FLOAT;                       
                    }else{
                        (yyval.typeInfo).type = INT;                       
                    }   
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                     
                }
#line 1730 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 336 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP_LIST", "epsilon");
                    (yyval.typeInfo).type = NOT_APPLICABLE;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    }
#line 1741 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 345 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("FACTOR", "VAR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).numParams;
                    }
#line 1752 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 352 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("FACTOR", "CONST");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).numParams;
                    }
#line 1763 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 359 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("FACTOR", "( EXPR )");
                    (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[-1].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[-1].typeInfo).numParams;
                    }
#line 1774 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 366 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("FACTOR", "! FACTOR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).numParams;
                    }
#line 1785 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 375 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("COMPOUND_EXPR",
                              "{ EXPR EXPR_LIST }");
                    (yyval.typeInfo).type = (yyvsp[-2].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[-2].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[-2].typeInfo).returnType;                              
                }
#line 1797 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 385 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("EXPR_LIST", "; EXPR EXPR_LIST");
                    (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[-1].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[-1].typeInfo).returnType;                   
                }
#line 1808 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 392 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("EXPR_LIST", "epsilon");
                }
#line 1816 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 398 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("IF_EXPR", "IF ( EXPR ) EXPR");
                }
#line 1824 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 403 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("IF_EXPR", 
                              "IF ( EXPR ) EXPR ELSE EXPR");
                }
#line 1833 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 410 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("WHILE_EXPR", 
                              "WHILE ( EXPR ) "
                              "LOOP_EXPR");
                    if(((yyvsp[0].typeInfo).type == FUNCTION) || ((yyvsp[0].typeInfo).type == STR) || ((yyvsp[0].typeInfo).type == NULL_TYPE) || ((yyvsp[0].typeInfo).type == LIST)){
                        yyerror("Arg 1 cannot be function or null or list or string");
                    }                
                }
#line 1846 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 419 "lingzhang.y" /* yacc.c:1646  */
    {
                    /*
                    if(($6.type == FUNCTION) || ($6.type == STR) || ($6.type == NULL_TYPE) || ($6.type == LIST)){
                        yyerror("Arg 2 cannot be function or null or list or string");
                    } 
                    */
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                      
                }
#line 1861 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 432 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("FOR_EXPR", 
                              "FOR ( IDENT IN EXPR ) "
                              "LOOP_EXPR");
                    string lexeme = string((yyvsp[0].text));
                             
                    
                    if(scopeStack.top().findEntry(lexeme).type == NOT_APPLICABLE){
                        if(assignment_statement){
                        printf("___Adding %s to symbol table\n",
                               (yyvsp[0].text));}
                        TYPE_INFO typeinfo = {NOT_APPLICABLE, NOT_APPLICABLE, NOT_APPLICABLE};

                        bool success = scopeStack.top().addEntry(
                            SYMBOL_TABLE_ENTRY(lexeme,
                                               typeinfo));
                    }
                }
#line 1884 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 456 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("LIST_EXPR", 
                              "LIST ( CONST_LIST )");
                    (yyval.typeInfo).type = LIST;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                               
                }
#line 1896 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 466 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("CONST_LIST", 
                              "CONST, CONST_LIST");
                }
#line 1905 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 471 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("CONST_LIST", "CONST");
                }
#line 1913 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 477 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("ASSIGNMENT_EXPR", 
                              "IDENT INDEX ASSIGN EXPR");
                    
                    
                    if((yyvsp[0].typeInfo).type != NULL_TYPE){
                        if(scopeStack.top().findEntry(string((yyvsp[-1].text))).type == NOT_APPLICABLE)
                            yyerror("hahahhahahhaha T_IDENT does not exist");
                        if(scopeStack.top().findEntry(string((yyvsp[-1].text))).type != LIST)
                            yyerror("Arg 1 must be list");
                      
                    }
                    
                }
#line 1932 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 492 "lingzhang.y" /* yacc.c:1646  */
    {
                    string lexeme = string((yyvsp[-4].text));
             
                    if((yyvsp[-3].typeInfo).type != NULL_TYPE && (yyvsp[0].typeInfo).type == LIST)
                        yyerror("Arg 1 cannot be list");
                    TYPE_INFO typeinfo = {(yyvsp[0].typeInfo).type, (yyvsp[0].typeInfo).numParams, (yyvsp[0].typeInfo).returnType};
                    if(scopeStack.top().findEntry(lexeme).type == NOT_APPLICABLE) {
                        if(assignment_statement){
                            printf("___Adding %s to symbol table\n",
                               (yyvsp[-4].text));}
                        scopeStack.top().addEntry(
                            SYMBOL_TABLE_ENTRY(lexeme, typeinfo));
                    }       
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;	                    
                }
#line 1954 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 513 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("INDEX", " [[ EXPR ]]");
                    (yyval.typeInfo).type = (yyvsp[-2].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[-2].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[-2].typeInfo).returnType;			    
                }
#line 1965 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 520 "lingzhang.y" /* yacc.c:1646  */
    {
                    (yyval.typeInfo).type = NULL_TYPE;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    printRule("INDEX", " epsilon");
                }
#line 1976 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 529 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("QUIT_EXPR", "QUIT()");
                    (yyval.typeInfo).type = NULL_TYPE;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                       
                }
#line 1987 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 538 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("OUTPUT_EXPR", 
                              "PRINT ( EXPR )");
                    if((yyvsp[-1].typeInfo).type == FUNCTION || (yyvsp[-1].typeInfo).type == NULL_TYPE)
                    {
                        yyerror("Arg 1 cannot be function or null");
                    }
                    (yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[-1].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[-1].typeInfo).returnType;                      
                              
                }
#line 2004 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 551 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("OUTPUT_EXPR", 
                              "CAT ( EXPR )");
                    if((yyvsp[-1].typeInfo).type == NULL_TYPE || (yyvsp[-1].typeInfo).type == FUNCTION){
                        yyerror("Arg 1 cannot be function or null");
                    }
                    (yyval.typeInfo).type = NULL_TYPE;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                                
                }
#line 2019 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 564 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("INPUT_EXPR", "READ ( VAR )");
                }
#line 2027 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 570 "lingzhang.y" /* yacc.c:1646  */
    {
                    beginScope();
                }
#line 2035 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 574 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("FUNCTION_DEF",
                              "FUNCTION ( PARAM_LIST )"
                              " COMPOUND_EXPR");
                    (yyval.typeInfo).type = FUNCTION;
                    // Not yet
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE; 
                    endScope();
                }
#line 2050 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 587 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("PARAM_LIST", "PARAMS");
                }
#line 2058 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 591 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("PARAM_LIST", "NO PARAMS");
                }
#line 2066 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 597 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("NO_PARAMS", "epsilon");
                }
#line 2074 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 603 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("PARAMS", "IDENT");
                    string lexeme = string((yyvsp[0].text));
                    if(assignment_statement){
                        printf("___Adding %s to symbol table\n", (yyvsp[0].text));
                    }
                    TYPE_INFO typeinfo = {INT, NOT_APPLICABLE, NOT_APPLICABLE};
                    bool success = scopeStack.top().addEntry(
                        SYMBOL_TABLE_ENTRY(lexeme, typeinfo));
                    if(!success) {
                        yyerror("Multiply defined identifier");
                        return(0);
                    }
                    
                    
                }
#line 2095 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 620 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("PARAMS", "IDENT, PARAMS");
                    string lexeme = string((yyvsp[-2].text));
                    if(assignment_statement){
                    printf("___Adding %s to symbol table\n", (yyvsp[-2].text));}
                    
                    TYPE_INFO typeinfo = {INT, NOT_APPLICABLE, NOT_APPLICABLE};
                    bool success = scopeStack.top().addEntry(
                        SYMBOL_TABLE_ENTRY(lexeme, typeinfo));
                    if(!success) {
                        yyerror("Multiply defined identifier");
                        return(0);
                    }
                    
                }
#line 2115 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 638 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("FUNCTION_CALL", "IDENT"
                              " ( ARG_LIST )");
                    if (findEntryInAnyScope((yyvsp[-3].text)).type == NOT_APPLICABLE) {
                        yyerror("Undefined identifier");
                        return(0);
                    }
                }
#line 2128 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 649 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("ARG_LIST", "ARGS");
                }
#line 2136 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 653 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("ARG_LIST", "NO_ARGS");
                }
#line 2144 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 659 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("NO_ARGS", "epsilon");
                }
#line 2152 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 665 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("ARGS", "EXPR");
                }
#line 2160 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 669 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("ARGS", "EXPR, ARGS");
                }
#line 2168 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 675 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("ADD_OP", "+");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 2179 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 682 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("ADD_OP", "-");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    }
#line 2190 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 689 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("ADD_OP", "|");
                    (yyval.typeInfo).type = LOGICAL;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    }
#line 2201 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 698 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP", "*");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 2212 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 705 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP", "/");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 2223 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 712 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP", "&");
                    (yyval.typeInfo).type = LOGICAL;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 2234 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 719 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP", "\%\%");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                }
#line 2245 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 726 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("MULT_OP", "^");
                    (yyval.typeInfo).type = ARITHMETIC;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                
                }
#line 2256 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 735 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", "<");
                }
#line 2264 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 739 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", ">");
                }
#line 2272 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 743 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", "<=");
                }
#line 2280 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 747 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", ">=");
                }
#line 2288 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 751 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", "==");
                }
#line 2296 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 755 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("REL_OP", "!=");
                }
#line 2304 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 761 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("VAR", "ENTIRE_VAR");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;                     
                }
#line 2315 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 768 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("VAR", "SINGLE_ELEMENT");
                    (yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;  
                    }
#line 2326 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 778 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("SINGLE_ELEMENT", "IDENT"
                              " [[ EXPR ]]");
                    if (findEntryInAnyScope((yyvsp[-5].text)).type == NOT_APPLICABLE) {
                        yyerror("Undefined identifier");
                        return(0);
                    }
                    if(scopeStack.top().findEntry(string((yyvsp[-5].text))).type != LIST)
                        yyerror("Arg 1 must be list");
                    (yyval.typeInfo).type = INT_OR_STR_OR_BOOL_OR_FLOAT;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;                  
                }
#line 2344 "lingzhang.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 794 "lingzhang.y" /* yacc.c:1646  */
    {
                    printRule("ENTIRE_VAR", "IDENT");
                    if(findEntryInAnyScope((yyvsp[0].text)).type == NOT_APPLICABLE)
                    {
                        yyerror("Undefined identifier");
                        return(0);
                    }
                    (yyval.typeInfo).type = findEntryInAnyScope((yyvsp[0].text)).type;
                    (yyval.typeInfo).numParams = findEntryInAnyScope((yyvsp[0].text)).numParams;
                    (yyval.typeInfo).returnType = findEntryInAnyScope((yyvsp[0].text)).returnType; 
                }
#line 2360 "lingzhang.tab.c" /* yacc.c:1646  */
    break;


#line 2364 "lingzhang.tab.c" /* yacc.c:1646  */
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
#line 807 "lingzhang.y" /* yacc.c:1906  */


#include "lex.yy.c"
extern FILE *yyin;

void printTokenInfo(const char* token_type, const char* lexeme)
{
    if(assignment_statement)
        printf("TOKEN: %s \t\t LEXEME: %s\n", token_type, lexeme);
}

void printRule(const char *lhs, const char *rhs)
{
    if(assignment_statement)
        printf("%s -> %s\n", lhs, rhs);
    return;
}

void beginScope() {
    scopeStack.push(SYMBOL_TABLE());
    if(assignment_statement)
        printf("\n___Entering new scope...\n\n");
}

void endScope() {
    scopeStack.pop();
    if(assignment_statement)
        printf("\n___Exiting scope...\n\n");
}

void cleanUp() {
    if (scopeStack.empty())
        return;
    else {
        scopeStack.pop();
        cleanUp();
    }
}

TYPE_INFO findEntryInAnyScope(const string the_name) {
    TYPE_INFO defaultType;
    if (scopeStack.empty())
    {    
        defaultType = {NOT_APPLICABLE, NOT_APPLICABLE, NOT_APPLICABLE};
        return(defaultType);
    }
    TYPE_INFO found = scopeStack.top().findEntry(the_name);
    if (found.type != NOT_APPLICABLE)
        return(found);
    else {
        SYMBOL_TABLE symbolTable = scopeStack.top();
        scopeStack.pop();
        found = findEntryInAnyScope(the_name);
        scopeStack.push(symbolTable); // restore stack to original state
        return(found);
    }
}

int main() 
{
    beginScope();
    do {
        yyparse();
    } while (!feof(yyin));

    cleanUp();

    return 0;
}
