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
#line 1 "p1.y" /* yacc.c:339  */

#include "symboltable.h"

// #define YYSTYPE char*
#include "lex.yy.c"


#line 74 "y.tab.c" /* yacc.c:339  */

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
    IF = 258,
    ELSE = 259,
    INT = 260,
    CHAR = 261,
    VOID = 262,
    MAIN = 263,
    FOR = 264,
    RETURN = 265,
    STRING_CONSTANT = 266,
    INTEGER_CONSTANT = 267,
    FLOAT_CONSTANT = 268,
    IDENTIFIER = 269,
    INC = 270,
    DEC = 271,
    PLUSEQ = 272,
    IfwithoutElse = 273
  };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define INT 260
#define CHAR 261
#define VOID 262
#define MAIN 263
#define FOR 264
#define RETURN 265
#define STRING_CONSTANT 266
#define INTEGER_CONSTANT 267
#define FLOAT_CONSTANT 268
#define IDENTIFIER 269
#define INC 270
#define DEC 271
#define PLUSEQ 272
#define IfwithoutElse 273

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 8 "p1.y" /* yacc.c:355  */

    char *str;
    int intval;


#line 156 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 173 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   287

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  156

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   273

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    25,     2,     2,
      28,    29,    23,    21,    30,    22,     2,    24,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    27,
      19,    20,    18,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    31,     2,    32,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,    34,     2,     2,     2,     2,
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
      15,    16,    17,    26
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    31,    31,    32,    33,    34,    38,    39,    43,    47,
      50,    54,    55,    56,    57,    58,    59,    63,    64,    65,
      66,    67,    68,    69,    70,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    88,    89,    90,    91,
      92,    93,    94,    95,    96,   100,   101,   105,   106,   110,
     111,   112,   116,   117,   118,   119,   123,   123,   130,   131,
     132,   136,   137,   138,   139,   140,   141,   145,   146,   147,
     148,   149,   150,   155,   156,   157,   158,   162,   163,   167,
     168,   172,   173
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "INT", "CHAR", "VOID",
  "MAIN", "FOR", "RETURN", "STRING_CONSTANT", "INTEGER_CONSTANT",
  "FLOAT_CONSTANT", "IDENTIFIER", "INC", "DEC", "PLUSEQ", "'>'", "'<'",
  "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "IfwithoutElse", "';'", "'('",
  "')'", "','", "'['", "']'", "'{'", "'}'", "$accept", "Global",
  "func_dec", "ParenthesisOpen", "ParenthesisClose", "var_dec", "var_list",
  "Const_Expression", "Expression", "Term", "Param_list", "ListOfParams",
  "data_type", "func_def", "Compound_stat", "$@1", "stat_list",
  "single_stat", "if_stat", "forstat", "returnstat", "funcCall",
  "arg_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    62,    60,
      61,    43,    45,    42,    47,    37,   273,    59,    40,    41,
      44,    91,    93,   123,   125
};
# endif

#define YYPACT_NINF -85

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-85)))

#define YYTABLE_NINF -52

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     127,   -85,   -85,   -85,     2,   127,   -22,    65,   127,   -85,
     -85,   127,   -18,     4,   -85,   -85,   -85,   -85,    10,   130,
       9,    21,    10,    24,   -85,   -20,    11,   -85,    39,   -85,
     -85,   -85,    73,    43,    58,   130,   144,   -85,   -85,    -1,
     -85,   -85,   132,    47,    11,   -85,   -85,   -20,    45,   -85,
     -85,   130,    55,   -85,   -85,   164,   130,   130,   130,   130,
     130,   130,   130,   130,     9,    21,    21,    21,    21,    21,
      21,    21,    62,   -85,   -85,    71,    49,   -85,   127,    88,
     -85,   154,    70,   -85,    88,    88,    88,   259,   259,   -85,
     -85,   -85,   -85,   256,   256,   262,   262,   -85,   -85,   -85,
       9,   -85,   -85,    72,    75,   130,   -85,    80,   200,     9,
      49,    83,    49,   -85,   -85,    87,   -85,   130,   -85,   -85,
     130,   124,   244,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     173,    91,   211,    49,   130,   130,   117,   119,   222,   233,
      49,    49,   130,   130,   -85,   -85,   -85,   -85,   182,   191,
      49,    49,   -85,   -85,   -85,   -85
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,    49,    50,    51,     0,     5,     0,     0,     5,     1,
       2,     5,     0,    11,    10,     3,     4,     8,     0,     0,
       0,     0,     0,    45,     9,     0,     0,    46,     0,    39,
      37,    38,    36,     0,     0,     0,    14,    25,    40,    11,
      12,    17,     0,     0,     0,    56,    55,     0,    48,    42,
      43,     0,     0,    41,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     7,    54,     0,    60,    53,     0,    33,
      80,    82,     0,    35,    34,    27,    26,    28,    29,    30,
      31,    32,    13,    23,    24,    18,    19,    20,    21,    22,
       0,     6,    52,     0,     0,    78,    65,     0,     0,     0,
      60,     0,    60,    66,    63,     0,    47,     0,    79,    16,
       0,     0,    77,    62,    61,    59,    57,    58,    64,    81,
       0,     0,     0,     0,     0,     0,    67,    68,     0,     0,
       0,     0,     0,     0,    69,    71,    70,    72,     0,     0,
       0,     0,    73,    75,    74,    76
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,    86,   -85,   111,     5,     1,   -13,   205,   -15,   -85,
     125,    81,     3,   -85,   -25,   -85,   -84,   -55,   -85,   -85,
     -85,   -85,    31
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,    18,    25,   107,    14,    42,   108,    37,
      26,    27,   109,     8,   110,    76,   111,   112,   113,   114,
     115,    38,    82
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,     6,     9,     7,    36,    11,     6,    40,     7,     6,
      17,     7,     6,    45,     7,     1,     2,    23,    74,    19,
      55,    28,    77,    39,    19,    28,   125,    43,   127,    20,
      21,    47,    17,    41,    20,    21,    79,    81,   -51,    24,
      24,    84,    85,    86,    87,    88,    89,    90,    91,    75,
     102,    92,   103,    48,     1,     2,     3,    53,   104,   105,
      29,    30,    31,    32,    33,    34,    29,    30,    31,    32,
      33,    34,    54,    12,    73,    78,   106,    35,   137,    13,
      45,    28,    45,    35,    80,   145,   147,   119,    49,    50,
     122,    10,   100,    51,    15,   153,   155,    16,   101,   118,
     120,    52,    81,   121,    45,   130,   132,   123,   136,    59,
      60,    61,    62,    63,   128,   144,   146,   126,   134,   138,
     139,   140,   131,   141,    22,   152,   154,   148,   149,     1,
       2,     3,     1,     2,     3,    29,    30,    31,    32,    33,
      34,    29,    30,    31,    32,    33,    34,    44,   129,     0,
      65,    66,    35,    67,    68,    69,    70,    71,    35,   116,
       0,    56,    57,    58,    72,    59,    60,    61,    62,    63,
       0,    56,    57,    58,    64,    59,    60,    61,    62,    63,
       0,    56,    57,    58,   117,    59,    60,    61,    62,    63,
      56,    57,    58,    83,    59,    60,    61,    62,    63,    56,
      57,    58,   133,    59,    60,    61,    62,    63,    56,    57,
      58,   150,    59,    60,    61,    62,    63,    56,    57,    58,
     151,    59,    60,    61,    62,    63,     0,   124,    56,    57,
      58,     0,    59,    60,    61,    62,    63,     0,   135,    56,
      57,    58,     0,    59,    60,    61,    62,    63,     0,   142,
      56,    57,    58,     0,    59,    60,    61,    62,    63,     0,
     143,    56,    57,    58,     0,    59,    60,    61,    62,    63,
      93,    94,    95,    96,    97,    98,    99,    67,    68,    69,
      70,    71,    61,    62,    63,    69,    70,    71
};

static const yytype_int16 yycheck[] =
{
      25,     0,     0,     0,    19,    27,     5,    20,     5,     8,
      28,     8,    11,    33,    11,     5,     6,     7,    43,    20,
      35,    18,    47,    14,    20,    22,   110,    22,   112,    30,
      31,    26,    28,    12,    30,    31,    51,    52,    14,    29,
      29,    56,    57,    58,    59,    60,    61,    62,    63,    44,
      75,    64,     3,    14,     5,     6,     7,    14,     9,    10,
      11,    12,    13,    14,    15,    16,    11,    12,    13,    14,
      15,    16,    14,     8,    27,    30,    27,    28,   133,    14,
      33,    78,    33,    28,    29,   140,   141,   100,    15,    16,
     105,     5,    30,    20,     8,   150,   151,    11,    27,    29,
      28,    28,   117,    28,    33,   120,   121,    27,   133,    21,
      22,    23,    24,    25,    27,   140,   141,    34,    27,   134,
     135,     4,   121,     4,    13,   150,   151,   142,   143,     5,
       6,     7,     5,     6,     7,    11,    12,    13,    14,    15,
      16,    11,    12,    13,    14,    15,    16,    22,   117,    -1,
      18,    19,    28,    21,    22,    23,    24,    25,    28,    78,
      -1,    17,    18,    19,    32,    21,    22,    23,    24,    25,
      -1,    17,    18,    19,    30,    21,    22,    23,    24,    25,
      -1,    17,    18,    19,    30,    21,    22,    23,    24,    25,
      17,    18,    19,    29,    21,    22,    23,    24,    25,    17,
      18,    19,    29,    21,    22,    23,    24,    25,    17,    18,
      19,    29,    21,    22,    23,    24,    25,    17,    18,    19,
      29,    21,    22,    23,    24,    25,    -1,    27,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    -1,    27,    17,
      18,    19,    -1,    21,    22,    23,    24,    25,    -1,    27,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    -1,
      27,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      65,    66,    67,    68,    69,    70,    71,    21,    22,    23,
      24,    25,    23,    24,    25,    23,    24,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,    36,    37,    40,    47,    48,     0,
      36,    27,     8,    14,    41,    36,    36,    28,    38,    20,
      30,    31,    38,     7,    29,    39,    45,    46,    47,    11,
      12,    13,    14,    15,    16,    28,    43,    44,    56,    14,
      41,    12,    42,    39,    45,    33,    49,    39,    14,    15,
      16,    20,    28,    14,    14,    43,    17,    18,    19,    21,
      22,    23,    24,    25,    30,    18,    19,    21,    22,    23,
      24,    25,    32,    27,    49,    39,    50,    49,    30,    43,
      29,    43,    57,    29,    43,    43,    43,    43,    43,    43,
      43,    43,    41,    42,    42,    42,    42,    42,    42,    42,
      30,    27,    49,     3,     9,    10,    27,    40,    43,    47,
      49,    51,    52,    53,    54,    55,    46,    30,    29,    41,
      28,    28,    43,    27,    27,    51,    34,    51,    27,    57,
      43,    40,    43,    29,    27,    27,    49,    52,    43,    43,
       4,     4,    27,    27,    49,    52,    49,    52,    43,    43,
      29,    29,    49,    52,    49,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    36,    36,    36,    37,    37,    38,    39,
      40,    41,    41,    41,    41,    41,    41,    42,    42,    42,
      42,    42,    42,    42,    42,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    44,    44,    44,    44,
      44,    44,    44,    44,    44,    45,    45,    46,    46,    47,
      47,    47,    48,    48,    48,    48,    50,    49,    51,    51,
      51,    52,    52,    52,    52,    52,    52,    53,    53,    53,
      53,    53,    53,    54,    54,    54,    54,    55,    55,    56,
      56,    57,    57
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     0,     6,     5,     1,     1,
       2,     1,     3,     5,     3,     4,     6,     1,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     4,     2,     1,
       1,     1,     6,     6,     5,     5,     0,     4,     2,     2,
       0,     2,     2,     1,     2,     1,     1,     5,     5,     7,
       7,     7,     7,     9,     9,     9,     9,     2,     1,     4,
       3,     3,     1
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
        case 6:
#line 38 "p1.y" /* yacc.c:1646  */
    { redeclaration((yyvsp[-4].str)); node* t = insert((yyvsp[-4].str), (yyvsp[-5].str), yylineno, curr_scope); t->num_params = (yyvsp[-2].intval); }
#line 1380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 39 "p1.y" /* yacc.c:1646  */
    { redeclaration((yyvsp[-3].str)); node* t = insert((yyvsp[-3].str), (yyvsp[-4].str), yylineno, curr_scope); t->num_params = 0 ; }
#line 1386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 43 "p1.y" /* yacc.c:1646  */
    { curr_scope++; }
#line 1392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 47 "p1.y" /* yacc.c:1646  */
    { curr_scope--; }
#line 1398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "p1.y" /* yacc.c:1646  */
    { redeclaration((yyvsp[0].str)); insert((yyvsp[0].str),type, yylineno, curr_scope); }
#line 1404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 55 "p1.y" /* yacc.c:1646  */
    { redeclaration((yyvsp[-2].str)); insert((yyvsp[-2].str),type, yylineno, curr_scope); }
#line 1410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 56 "p1.y" /* yacc.c:1646  */
    { redeclaration((yyvsp[-4].str)); insert((yyvsp[-4].str),type, yylineno, curr_scope); }
#line 1416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 57 "p1.y" /* yacc.c:1646  */
    { redeclaration((yyvsp[-2].str)); insert((yyvsp[-2].str),type, yylineno, curr_scope); }
#line 1422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 58 "p1.y" /* yacc.c:1646  */
    { array_size_check((yyvsp[-1].intval));  redeclaration((yyvsp[-3].str)); insert((yyvsp[-3].str),type, yylineno, curr_scope); }
#line 1428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 59 "p1.y" /* yacc.c:1646  */
    { array_size_check((yyvsp[-3].intval));  redeclaration((yyvsp[-5].str)); insert((yyvsp[-5].str),type, yylineno, curr_scope); }
#line 1434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 63 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = atoi((yyvsp[0].str)); }
#line 1440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 64 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + (yyvsp[0].intval); }
#line 1446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 65 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) - (yyvsp[0].intval); }
#line 1452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 66 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) * (yyvsp[0].intval); }
#line 1458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 67 "p1.y" /* yacc.c:1646  */
    { divByZero((yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) / (yyvsp[0].intval); }
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 68 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) % (yyvsp[0].intval); }
#line 1470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 69 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) > (yyvsp[0].intval); }
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 70 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) < (yyvsp[0].intval); }
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 74 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) =0 ;}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 75 "p1.y" /* yacc.c:1646  */
    { lvalue_check((yyvsp[0].intval)); (yyval.intval)=0; }
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 76 "p1.y" /* yacc.c:1646  */
    { lvalue_check((yyvsp[0].intval)); (yyval.intval)=0; }
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 77 "p1.y" /* yacc.c:1646  */
    { lvalue_check((yyvsp[0].intval)); (yyval.intval)=0; }
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 78 "p1.y" /* yacc.c:1646  */
    { lvalue_check((yyvsp[0].intval)); (yyval.intval)=0; }
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 79 "p1.y" /* yacc.c:1646  */
    { lvalue_check((yyvsp[0].intval)); (yyval.intval)=0; }
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 80 "p1.y" /* yacc.c:1646  */
    { lvalue_check((yyvsp[0].intval)); (yyval.intval)=0; }
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 81 "p1.y" /* yacc.c:1646  */
    { lvalue_check((yyvsp[0].intval)); (yyval.intval)=0; }
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 82 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 83 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 84 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 88 "p1.y" /* yacc.c:1646  */
    { not_declared((yyvsp[0].str)); }
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 93 "p1.y" /* yacc.c:1646  */
    { not_declared((yyvsp[0].str)); }
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 94 "p1.y" /* yacc.c:1646  */
    { not_declared((yyvsp[-1].str)); }
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 95 "p1.y" /* yacc.c:1646  */
    { not_declared((yyvsp[-1].str)); }
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 96 "p1.y" /* yacc.c:1646  */
    { not_declared((yyvsp[0].str)); }
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 100 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 101 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[0].intval); }
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 105 "p1.y" /* yacc.c:1646  */
    { void_check((yyvsp[-3].str)); redeclaration((yyvsp[-2].str)); insert((yyvsp[-2].str),(yyvsp[-3].str),yylineno, curr_scope); (yyval.intval) = (yyvsp[0].intval) +1;  }
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 106 "p1.y" /* yacc.c:1646  */
    { void_check((yyvsp[-1].str)); redeclaration((yyvsp[0].str)); insert((yyvsp[0].str),(yyvsp[-1].str),yylineno, curr_scope); (yyval.intval) = 1; }
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 110 "p1.y" /* yacc.c:1646  */
    {  strcpy((yyval.str),(yyvsp[0].str)); strcpy(type,(yyvsp[0].str)); }
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 111 "p1.y" /* yacc.c:1646  */
    {  strcpy((yyval.str),(yyvsp[0].str)); strcpy(type,(yyvsp[0].str)); }
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 112 "p1.y" /* yacc.c:1646  */
    {  strcpy((yyval.str),(yyvsp[0].str)); strcpy(type,(yyvsp[0].str)); }
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 116 "p1.y" /* yacc.c:1646  */
    { redeclaration((yyvsp[-4].str)); node* t = insert((yyvsp[-4].str), (yyvsp[-5].str), yylineno, curr_scope); t->num_params = (yyvsp[-2].intval); }
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 117 "p1.y" /* yacc.c:1646  */
    { redeclaration((yyvsp[-4].str)); node* t = insert((yyvsp[-4].str), (yyvsp[-5].str), yylineno, curr_scope); t->num_params = (yyvsp[-2].intval); }
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 118 "p1.y" /* yacc.c:1646  */
    { redeclaration((yyvsp[-3].str)); node* t = insert((yyvsp[-3].str), (yyvsp[-4].str), yylineno, curr_scope); t->num_params = 0; }
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 119 "p1.y" /* yacc.c:1646  */
    { redeclaration((yyvsp[-3].str)); node* t = insert((yyvsp[-3].str), (yyvsp[-4].str), yylineno, curr_scope); t->num_params = 0; }
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 123 "p1.y" /* yacc.c:1646  */
    {   curr_scope++; }
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 124 "p1.y" /* yacc.c:1646  */
    {   while(stack[tos]->scope == curr_scope)
                                                                        tos--;
                                                                    curr_scope--;
                                                                }
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 167 "p1.y" /* yacc.c:1646  */
    { not_declared((yyvsp[-3].str)); not_function((yyvsp[-3].str)); num_params_check((yyvsp[-3].str), (yyvsp[-1].intval)); }
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 168 "p1.y" /* yacc.c:1646  */
    { not_declared((yyvsp[-2].str)); not_function((yyvsp[-2].str)); num_params_check((yyvsp[-2].str), 0); }
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 172 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[0].intval)+1; }
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 173 "p1.y" /* yacc.c:1646  */
    { (yyval.intval)= 1;}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1687 "y.tab.c" /* yacc.c:1646  */
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
#line 175 "p1.y" /* yacc.c:1906  */


void yyerror(char *s) {
 fprintf(stderr, "%s\n", s);
} 




int main()
{
    node * temp = malloc(sizeof(node));
    temp->scope =-1;
    tos++;
    stack[tos]=temp;

    yyparse();
   
    printSymbolTable();
   
    return 0;
}