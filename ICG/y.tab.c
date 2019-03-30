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

#include "ICG.h"

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
    CONTINUE = 263,
    BREAK = 264,
    MAIN = 265,
    FOR = 266,
    WHILE = 267,
    RETURN = 268,
    STRING_CONSTANT = 269,
    INTEGER_CONSTANT = 270,
    FLOAT_CONSTANT = 271,
    IDENTIFIER = 272,
    INC = 273,
    DEC = 274,
    PLUSEQ = 275,
    IfwithoutElse = 276
  };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define INT 260
#define CHAR 261
#define VOID 262
#define CONTINUE 263
#define BREAK 264
#define MAIN 265
#define FOR 266
#define WHILE 267
#define RETURN 268
#define STRING_CONSTANT 269
#define INTEGER_CONSTANT 270
#define FLOAT_CONSTANT 271
#define IDENTIFIER 272
#define INC 273
#define DEC 274
#define PLUSEQ 275
#define IfwithoutElse 276

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 8 "p1.y" /* yacc.c:355  */

    char *str;
    int intval;


#line 162 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 179 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   351

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  193

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   276

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    28,     2,     2,
      31,    32,    26,    24,    33,    25,     2,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    30,
      22,    23,    21,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    34,     2,    35,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    29
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    31,    31,    32,    33,    34,    38,    39,    43,    47,
      50,    54,    55,    56,    56,    62,    67,    68,    72,    73,
      74,    75,    76,    77,    78,    79,    83,    84,    88,    92,
      95,    98,   101,   104,   107,   114,   115,   116,   117,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   133,   134,
     138,   139,   143,   144,   145,   150,   149,   156,   155,   162,
     161,   168,   167,   179,   179,   186,   187,   188,   192,   193,
     194,   195,   196,   197,   198,   199,   208,   220,   221,   226,
     237,   262,   263,   266,   264,   272,   270,   277,   276,   282,
     281,   290,   307,   315,   315,   316,   316,   317,   317,   318,
     318,   322,   330,   343,   344,   348,   349,   353,   354
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "INT", "CHAR", "VOID",
  "CONTINUE", "BREAK", "MAIN", "FOR", "WHILE", "RETURN", "STRING_CONSTANT",
  "INTEGER_CONSTANT", "FLOAT_CONSTANT", "IDENTIFIER", "INC", "DEC",
  "PLUSEQ", "'>'", "'<'", "'='", "'+'", "'-'", "'*'", "'/'", "'%'",
  "IfwithoutElse", "';'", "'('", "')'", "','", "'['", "']'", "'{'", "'}'",
  "$accept", "Global", "func_dec", "ParenthesisOpen", "ParenthesisClose",
  "var_dec", "var_list", "$@1", "Const_Expression", "Expression", "Term",
  "Param_list", "ListOfParams", "data_type", "func_def", "$@2", "$@3",
  "$@4", "$@5", "Compound_stat", "$@6", "stat_list", "single_stat",
  "while", "while_tac_print", "while_notsat_tac_print", "if_stat", "$@7",
  "$@8", "$@9", "$@10", "if_tac_print", "else_tac_print", "forstat",
  "$@11", "$@12", "$@13", "$@14", "for_label", "for_cond_exit",
  "returnstat", "funcCall", "arg_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    62,    60,    61,    43,    45,    42,    47,    37,   276,
      59,    40,    41,    44,    91,    93,   123,   125
};
# endif

#define YYPACT_NINF -151

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-151)))

#define YYTABLE_NINF -96

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      74,  -151,  -151,  -151,     9,    74,   -17,    12,    74,  -151,
    -151,    74,    -4,    25,  -151,  -151,  -151,  -151,     0,   215,
      11,    15,     0,    20,  -151,  -151,    21,  -151,    35,  -151,
    -151,  -151,    32,    47,    60,   215,   215,   215,   268,  -151,
    -151,   -13,  -151,  -151,    48,    36,    21,    46,  -151,    81,
    -151,  -151,   215,   196,  -151,  -151,    77,    77,   223,   215,
     215,   215,   215,   215,   215,   215,   215,    84,    15,    15,
      15,    15,    15,    15,    15,    93,  -151,    46,    54,  -151,
    -151,    46,    74,   180,  -151,   122,    96,  -151,   180,   180,
     180,    77,    77,  -151,  -151,  -151,    11,   198,   198,    83,
      83,  -151,  -151,  -151,    11,  -151,  -151,    46,   151,  -151,
    -151,   215,  -151,  -151,  -151,  -151,   101,   103,   104,   107,
    -151,   215,  -151,   105,   279,    11,   151,   108,   151,  -151,
    -151,  -151,   121,  -151,   215,  -151,  -151,   178,   130,   323,
    -151,  -151,  -151,  -151,  -151,  -151,   232,   141,   290,   215,
    -151,  -151,  -151,   241,   151,   215,   215,  -151,   168,   169,
     301,   312,   151,  -151,  -151,  -151,  -151,  -151,  -151,   138,
     142,   215,   215,    46,    82,    46,    82,   250,   259,  -151,
    -151,  -151,  -151,   143,   144,    46,    82,    46,    82,  -151,
    -151,  -151,  -151
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,    52,    53,    54,     0,     5,     0,     0,     5,     1,
       2,     5,     0,    11,    10,     3,     4,     8,     0,     0,
       0,     0,     0,    48,     9,    61,     0,    49,     0,    42,
      40,    41,    39,     0,     0,     0,     0,     0,    13,    26,
      43,    11,    12,    18,     0,    59,     0,     0,    57,    51,
      45,    46,     0,     0,    44,    47,    38,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,     7,     0,    55,    63,
      62,     0,     0,    34,   106,   108,     0,    36,    35,    28,
      27,    29,    30,    31,    32,    33,     0,    24,    25,    19,
      20,    21,    22,    23,     0,    60,     6,     0,    67,    58,
      50,     0,   105,    14,    17,    56,     0,     0,     0,     0,
      79,   104,    73,     0,     0,     0,    67,     0,    67,    71,
      74,    70,     0,   107,     0,    75,    76,     0,     0,   103,
      69,    68,    66,    64,    65,    72,     0,     0,     0,     0,
      91,   101,   101,     0,     0,     0,     0,    80,    81,    82,
       0,     0,     0,    92,    92,   102,   102,    77,    78,    87,
      89,     0,     0,     0,     0,     0,     0,     0,     0,    84,
      88,    86,    90,    97,    99,     0,     0,     0,     0,    94,
      98,    96,   100
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,    57,  -151,   164,    -7,     3,   -18,  -151,    51,   -19,
    -151,   166,   109,    49,  -151,  -151,  -151,  -151,  -151,   -46,
    -151,  -103,  -150,  -151,  -151,  -151,  -151,  -151,  -151,  -151,
    -151,  -151,    22,  -151,  -151,  -151,  -151,  -151,    37,    24,
    -151,  -151,    87
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,    18,    25,   123,    14,    67,    44,   124,
      39,    26,    27,   125,     8,   107,    81,    77,    47,   126,
     108,   127,   128,   129,   138,   162,   130,   173,   175,   174,
     176,   154,   169,   131,   185,   187,   186,   188,   155,   171,
     132,    40,    86
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,    80,    42,     6,   159,     1,     2,    23,     6,     9,
      19,     6,   168,    11,     6,    45,    56,    57,    58,    48,
      20,    21,    12,   142,   180,   144,   182,    17,    41,    13,
      43,   105,    24,    83,    85,   109,   190,   -54,   192,    78,
      88,    89,    90,    91,    92,    93,    94,    95,    19,     7,
      50,    51,    49,    24,     7,    52,    17,     7,    20,    21,
       7,   115,    10,    53,    54,    15,    76,    28,    16,    68,
      69,    28,    70,    71,    72,    73,    74,    55,   113,     1,
       2,     3,    79,    75,   106,   116,   114,     1,     2,     3,
     117,   118,    85,   119,   120,   121,    29,    30,    31,    32,
      33,    34,   139,    64,    65,    66,    35,    36,   158,    72,
      73,    74,   122,    37,    82,   146,   167,    96,   148,    97,
      98,    99,   100,   101,   102,   103,   104,   179,   112,   181,
     153,    28,   134,   135,   136,   140,   160,   161,   137,   189,
     147,   191,    59,    60,    61,   143,    62,    63,    64,    65,
      66,   145,   177,   178,   116,   111,     1,     2,     3,   117,
     118,   149,   119,   120,   121,    29,    30,    31,    32,    33,
      34,   151,   163,   164,   -83,    35,    36,    22,   -85,   -93,
     -95,   122,    37,     1,     2,     3,   170,    79,    46,   156,
     172,   110,    29,    30,    31,    32,    33,    34,   133,     0,
       0,     0,    35,    36,    62,    63,    64,    65,    66,    37,
      29,    30,    31,    32,    33,    34,     0,     0,     0,     0,
      35,    36,    70,    71,    72,    73,    74,    37,    84,    29,
      30,    31,    32,    33,    34,     0,     0,     0,     0,    35,
      36,     0,     0,    59,    60,    61,    37,    62,    63,    64,
      65,    66,    59,    60,    61,    87,    62,    63,    64,    65,
      66,    59,    60,    61,   150,    62,    63,    64,    65,    66,
      59,    60,    61,   157,    62,    63,    64,    65,    66,    59,
      60,    61,   183,    62,    63,    64,    65,    66,    59,    60,
      61,   184,    62,    63,    64,    65,    66,     0,   -15,    59,
      60,    61,     0,    62,    63,    64,    65,    66,     0,   141,
      59,    60,    61,     0,    62,    63,    64,    65,    66,     0,
     152,    59,    60,    61,     0,    62,    63,    64,    65,    66,
       0,   165,    59,    60,    61,     0,    62,    63,    64,    65,
      66,     0,   166,    59,    60,    61,     0,    62,    63,    64,
      65,    66
};

static const yytype_int16 yycheck[] =
{
      19,    47,    20,     0,   154,     5,     6,     7,     5,     0,
      23,     8,   162,    30,    11,    22,    35,    36,    37,    26,
      33,    34,    10,   126,   174,   128,   176,    31,    17,    17,
      15,    77,    32,    52,    53,    81,   186,    17,   188,    46,
      59,    60,    61,    62,    63,    64,    65,    66,    23,     0,
      18,    19,    17,    32,     5,    23,    31,     8,    33,    34,
      11,   107,     5,    31,    17,     8,    30,    18,    11,    21,
      22,    22,    24,    25,    26,    27,    28,    17,    96,     5,
       6,     7,    36,    35,    30,     3,   104,     5,     6,     7,
       8,     9,   111,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   121,    26,    27,    28,    24,    25,   154,    26,
      27,    28,    30,    31,    33,   134,   162,    33,   137,    68,
      69,    70,    71,    72,    73,    74,    33,   173,    32,   175,
     149,    82,    31,    30,    30,    30,   155,   156,    31,   185,
     137,   187,    20,    21,    22,    37,    24,    25,    26,    27,
      28,    30,   171,   172,     3,    33,     5,     6,     7,     8,
       9,    31,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    30,     4,     4,    36,    24,    25,    13,    36,    36,
      36,    30,    31,     5,     6,     7,   164,    36,    22,   152,
     166,    82,    14,    15,    16,    17,    18,    19,   111,    -1,
      -1,    -1,    24,    25,    24,    25,    26,    27,    28,    31,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      24,    25,    24,    25,    26,    27,    28,    31,    32,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    20,    21,    22,    31,    24,    25,    26,
      27,    28,    20,    21,    22,    32,    24,    25,    26,    27,
      28,    20,    21,    22,    32,    24,    25,    26,    27,    28,
      20,    21,    22,    32,    24,    25,    26,    27,    28,    20,
      21,    22,    32,    24,    25,    26,    27,    28,    20,    21,
      22,    32,    24,    25,    26,    27,    28,    -1,    30,    20,
      21,    22,    -1,    24,    25,    26,    27,    28,    -1,    30,
      20,    21,    22,    -1,    24,    25,    26,    27,    28,    -1,
      30,    20,    21,    22,    -1,    24,    25,    26,    27,    28,
      -1,    30,    20,    21,    22,    -1,    24,    25,    26,    27,
      28,    -1,    30,    20,    21,    22,    -1,    24,    25,    26,
      27,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,    39,    40,    43,    51,    52,     0,
      39,    30,    10,    17,    44,    39,    39,    31,    41,    23,
      33,    34,    41,     7,    32,    42,    49,    50,    51,    14,
      15,    16,    17,    18,    19,    24,    25,    31,    47,    48,
      79,    17,    44,    15,    46,    42,    49,    56,    42,    17,
      18,    19,    23,    31,    17,    17,    47,    47,    47,    20,
      21,    22,    24,    25,    26,    27,    28,    45,    21,    22,
      24,    25,    26,    27,    28,    35,    30,    55,    42,    36,
      57,    54,    33,    47,    32,    47,    80,    32,    47,    47,
      47,    47,    47,    47,    47,    47,    33,    46,    46,    46,
      46,    46,    46,    46,    33,    57,    30,    53,    58,    57,
      50,    33,    32,    44,    44,    57,     3,     8,     9,    11,
      12,    13,    30,    43,    47,    51,    57,    59,    60,    61,
      64,    71,    78,    80,    31,    30,    30,    31,    62,    47,
      30,    30,    59,    37,    59,    30,    47,    43,    47,    31,
      32,    30,    30,    47,    69,    76,    76,    32,    57,    60,
      47,    47,    63,     4,     4,    30,    30,    57,    60,    70,
      70,    77,    77,    65,    67,    66,    68,    47,    47,    57,
      60,    57,    60,    32,    32,    72,    74,    73,    75,    57,
      60,    57,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    39,    39,    39,    40,    40,    41,    42,
      43,    44,    44,    45,    44,    44,    44,    44,    46,    46,
      46,    46,    46,    46,    46,    46,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    49,    49,
      50,    50,    51,    51,    51,    53,    52,    54,    52,    55,
      52,    56,    52,    58,    57,    59,    59,    59,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    61,    61,    62,
      63,    64,    64,    65,    64,    66,    64,    67,    64,    68,
      64,    69,    70,    72,    71,    73,    71,    74,    71,    75,
      71,    76,    77,    78,    78,    79,    79,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     0,     6,     5,     1,     1,
       2,     1,     3,     0,     6,     3,     4,     6,     1,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     1,     1,
       4,     2,     1,     1,     1,     0,     7,     0,     7,     0,
       6,     0,     6,     0,     4,     2,     2,     0,     2,     2,
       1,     1,     2,     1,     1,     2,     2,     7,     7,     0,
       0,     6,     6,     0,    10,     0,    10,     0,    10,     0,
      10,     0,     0,     0,    12,     0,    12,     0,    12,     0,
      12,     0,     0,     2,     1,     4,     3,     3,     1
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
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 39 "p1.y" /* yacc.c:1646  */
    { redeclaration((yyvsp[-3].str)); node* t = insert((yyvsp[-3].str), (yyvsp[-4].str), yylineno, curr_scope); t->num_params = 0 ; }
#line 1431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 43 "p1.y" /* yacc.c:1646  */
    { curr_scope++; }
#line 1437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 47 "p1.y" /* yacc.c:1646  */
    { curr_scope--; }
#line 1443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 54 "p1.y" /* yacc.c:1646  */
    { redeclaration((yyvsp[0].str)); insert((yyvsp[0].str),type, yylineno, curr_scope); }
#line 1449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 55 "p1.y" /* yacc.c:1646  */
    { redeclaration((yyvsp[-2].str)); insert((yyvsp[-2].str),type, yylineno, curr_scope); }
#line 1455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 56 "p1.y" /* yacc.c:1646  */
    { redeclaration((yyvsp[-2].str)); insert((yyvsp[-2].str),type, yylineno, curr_scope); 
                                                            reg_node *op1 = pop(); 
                                                            curr_buffer = get_buffer_node();
                                                            sprintf(curr_buffer->code, "%s = %s",(yyvsp[-2].str), reg_name(op1));
                                                        }
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 62 "p1.y" /* yacc.c:1646  */
    {  redeclaration((yyvsp[-2].str)); insert((yyvsp[-2].str),type, yylineno, curr_scope); 
                                                            reg_node *op1 = pop();  
                                                            curr_buffer = get_buffer_node();
                                                            sprintf(curr_buffer->code, "%s = %s",(yyvsp[-2].str), reg_name(op1));
                                                        }
#line 1475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 67 "p1.y" /* yacc.c:1646  */
    { array_size_check((yyvsp[-1].intval));  redeclaration((yyvsp[-3].str)); insert((yyvsp[-3].str),type, yylineno, curr_scope); }
#line 1481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 68 "p1.y" /* yacc.c:1646  */
    { array_size_check((yyvsp[-3].intval));  redeclaration((yyvsp[-5].str)); insert((yyvsp[-5].str),type, yylineno, curr_scope); }
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 72 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = atoi((yyvsp[0].str)); }
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 73 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + (yyvsp[0].intval); }
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 74 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) - (yyvsp[0].intval); }
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 75 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) * (yyvsp[0].intval); }
#line 1511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 76 "p1.y" /* yacc.c:1646  */
    { divByZero((yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) / (yyvsp[0].intval); }
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 77 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) % (yyvsp[0].intval); }
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 78 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) > (yyvsp[0].intval); }
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 79 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) < (yyvsp[0].intval); }
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 83 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) =0 ; }
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 84 "p1.y" /* yacc.c:1646  */
    { lvalue_check((yyvsp[0].intval)); (yyval.intval)=0; 

                                                       Expr_tac("<");
                                                     }
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 88 "p1.y" /* yacc.c:1646  */
    { lvalue_check((yyvsp[0].intval)); (yyval.intval)=0; 
                                                       Expr_tac(">");

                                                     }
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 92 "p1.y" /* yacc.c:1646  */
    { lvalue_check((yyvsp[0].intval)); (yyval.intval)=0;
                                                       Expr_tac("+");
                                                     }
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 95 "p1.y" /* yacc.c:1646  */
    { lvalue_check((yyvsp[0].intval)); (yyval.intval)=0; 
                                                      Expr_tac("-");
                                                     }
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 98 "p1.y" /* yacc.c:1646  */
    { lvalue_check((yyvsp[0].intval)); (yyval.intval)=0;
                                                       Expr_tac("*");
                                                     }
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 101 "p1.y" /* yacc.c:1646  */
    { lvalue_check((yyvsp[0].intval)); (yyval.intval)=0; 
                                                      Expr_tac("/");
                                                     }
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 104 "p1.y" /* yacc.c:1646  */
    { lvalue_check((yyvsp[0].intval)); (yyval.intval)=0; 
                                                       Expr_tac("%");
                                                     }
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 107 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; 
                                                       reg_node *op1 = pop(); 
                                                       reg_node *temp = newnode((yyvsp[-2].str),-1);
                                                       ICG_stack[++ICG_tos] = temp; 
                                                       curr_buffer = get_buffer_node();
                                                       sprintf(curr_buffer->code, "%s = %s",reg_name(temp), reg_name(op1));
                                                     }
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 114 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 115 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 116 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 117 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 121 "p1.y" /* yacc.c:1646  */
    { not_declared((yyvsp[0].str));  reg_node* temp = newnode((yyvsp[0].str),-1); ICG_stack[++ICG_tos] = temp; }
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 122 "p1.y" /* yacc.c:1646  */
    { reg_node* temp = newnode((yyvsp[0].str),-1); ICG_stack[++ICG_tos] = temp; }
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 126 "p1.y" /* yacc.c:1646  */
    { not_declared((yyvsp[0].str)); }
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 127 "p1.y" /* yacc.c:1646  */
    { not_declared((yyvsp[-1].str)); }
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 128 "p1.y" /* yacc.c:1646  */
    { not_declared((yyvsp[-1].str)); }
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 129 "p1.y" /* yacc.c:1646  */
    { not_declared((yyvsp[0].str)); }
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 133 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 134 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[0].intval); }
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 138 "p1.y" /* yacc.c:1646  */
    { void_check((yyvsp[-3].str)); redeclaration((yyvsp[-2].str)); insert((yyvsp[-2].str),(yyvsp[-3].str),yylineno, curr_scope); (yyval.intval) = (yyvsp[0].intval) +1;  }
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 139 "p1.y" /* yacc.c:1646  */
    { void_check((yyvsp[-1].str)); redeclaration((yyvsp[0].str)); insert((yyvsp[0].str),(yyvsp[-1].str),yylineno, curr_scope); (yyval.intval) = 1; }
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 143 "p1.y" /* yacc.c:1646  */
    {  strcpy((yyval.str),(yyvsp[0].str)); strcpy(type,(yyvsp[0].str)); }
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 144 "p1.y" /* yacc.c:1646  */
    {  strcpy((yyval.str),(yyvsp[0].str)); strcpy(type,(yyvsp[0].str)); }
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 145 "p1.y" /* yacc.c:1646  */
    {  strcpy((yyval.str),(yyvsp[0].str)); strcpy(type,(yyvsp[0].str)); }
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 150 "p1.y" /* yacc.c:1646  */
    {
        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "Function %s BEGIN",(yyvsp[-3].str));
    }
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 154 "p1.y" /* yacc.c:1646  */
    { curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "END %s", (yyvsp[-5].str)); redeclaration((yyvsp[-5].str)); node* t = insert((yyvsp[-5].str), (yyvsp[-6].str), yylineno, curr_scope); t->num_params = (yyvsp[-3].intval); }
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 156 "p1.y" /* yacc.c:1646  */
    {
        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "Function %s BEGIN",(yyvsp[-3].str));
    }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 160 "p1.y" /* yacc.c:1646  */
    { curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "END %s", (yyvsp[-5].str)); redeclaration((yyvsp[-5].str)); redeclaration((yyvsp[-5].str)); node* t = insert((yyvsp[-5].str), (yyvsp[-6].str), yylineno, curr_scope); t->num_params = (yyvsp[-3].intval); }
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 162 "p1.y" /* yacc.c:1646  */
    {
        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "Function %s BEGIN",(yyvsp[-2].str));
    }
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 166 "p1.y" /* yacc.c:1646  */
    { curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "END %s", (yyvsp[-4].str)); redeclaration((yyvsp[-4].str)); redeclaration((yyvsp[-4].str)); node* t = insert((yyvsp[-4].str), (yyvsp[-5].str), yylineno, curr_scope); t->num_params = 0; }
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 168 "p1.y" /* yacc.c:1646  */
    {
       
        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "Function %s BEGIN",(yyvsp[-2].str));
        
    }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 174 "p1.y" /* yacc.c:1646  */
    { curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "END %s", (yyvsp[-4].str)); redeclaration((yyvsp[-4].str)); redeclaration((yyvsp[-4].str)); node* t = insert((yyvsp[-4].str), (yyvsp[-5].str), yylineno, curr_scope); t->num_params = 0; }
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 179 "p1.y" /* yacc.c:1646  */
    {   curr_scope++; }
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 180 "p1.y" /* yacc.c:1646  */
    {   while(stack[tos]->scope == curr_scope)
                                                                        tos--;
                                                                    curr_scope--;
                                                                }
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 192 "p1.y" /* yacc.c:1646  */
    { pop(); }
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 199 "p1.y" /* yacc.c:1646  */
    {
        if(continueStack.top == -1){
            printf(" line no : %d, a continue statement may only be used within a loop\n", yylineno);
            exit(1);
        }

        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "GOTO L%d", continueStack.label[continueStack.top]);
    }
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 208 "p1.y" /* yacc.c:1646  */
    {
        if(breakStack.top == -1){
            printf(" line no : %d, a break statement may only be used within a loop\n", yylineno);
            exit(1);
        }

        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "GOTO L%d", breakStack.label[breakStack.top]);
    }
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 220 "p1.y" /* yacc.c:1646  */
    { curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "GOTO L%d",(yyvsp[-5].intval) ); curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "L%d : ",(yyvsp[-1].intval) ); }
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 221 "p1.y" /* yacc.c:1646  */
    { curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "GOTO L%d",(yyvsp[-5].intval) ); curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "L%d : ",(yyvsp[-1].intval) ); }
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 226 "p1.y" /* yacc.c:1646  */
    {

    curr_buffer = get_buffer_node(); sprintf(curr_buffer->code, "L%d : ",label_num );
    continueStack.label[++continueStack.top] = label_num;

        (yyval.intval) = label_num++;
    }
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 237 "p1.y" /* yacc.c:1646  */
    {
        reg_node* op1 = pop();
        
        reg_node* temp = newnode("t", ++t_ctr);

        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "%s = NOT %s", reg_name(temp), reg_name(op1));


        t_ctr--;

        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "IF %s GOTO L%d", reg_name(temp), label_num);
        breakStack.label[++breakStack.top] = label_num;


        (yyval.intval) = label_num;
        label_num++;
 
    }
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 262 "p1.y" /* yacc.c:1646  */
    { curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",(yyvsp[-1].intval) );}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 263 "p1.y" /* yacc.c:1646  */
    { curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",(yyvsp[-1].intval) );}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 266 "p1.y" /* yacc.c:1646  */
    {
            curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",(yyvsp[-3].intval) );
        }
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 269 "p1.y" /* yacc.c:1646  */
    { curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",(yyvsp[-2].intval) );}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 272 "p1.y" /* yacc.c:1646  */
    {
            curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",(yyvsp[-3].intval) );
        }
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 275 "p1.y" /* yacc.c:1646  */
    { curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",(yyvsp[-2].intval) );}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 277 "p1.y" /* yacc.c:1646  */
    {
            curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",(yyvsp[-3].intval) );
        }
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 280 "p1.y" /* yacc.c:1646  */
    { curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",(yyvsp[-2].intval) );}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 282 "p1.y" /* yacc.c:1646  */
    {
            curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",(yyvsp[-3].intval) );
        }
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 285 "p1.y" /* yacc.c:1646  */
    { curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"L%d : ",(yyvsp[-2].intval) );}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 290 "p1.y" /* yacc.c:1646  */
    {
        reg_node* op1 = pop();
        reg_node* temp = newnode("t", ++t_ctr);
        curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"%s = NOT %s",reg_name(temp), reg_name(op1));

        curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"IF %s GOTO L%d",reg_name(temp), label_num);
        t_ctr--;

        (yyval.intval) = label_num;
        label_num++;

    }
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 307 "p1.y" /* yacc.c:1646  */
    {
        curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"GOTO L%d",label_num);
        (yyval.intval) = label_num;
        label_num++;
    }
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 315 "p1.y" /* yacc.c:1646  */
    { tac.top++; }
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 315 "p1.y" /* yacc.c:1646  */
    { for_tac((yyvsp[-7].intval), (yyvsp[-4].intval)); }
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 316 "p1.y" /* yacc.c:1646  */
    { tac.top++; }
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 316 "p1.y" /* yacc.c:1646  */
    { for_tac((yyvsp[-7].intval), (yyvsp[-4].intval)); }
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 317 "p1.y" /* yacc.c:1646  */
    { tac.top++; }
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 317 "p1.y" /* yacc.c:1646  */
    { for_tac((yyvsp[-7].intval), (yyvsp[-4].intval)); }
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 318 "p1.y" /* yacc.c:1646  */
    { tac.top++; }
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 318 "p1.y" /* yacc.c:1646  */
    { for_tac((yyvsp[-7].intval), (yyvsp[-4].intval)); }
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 322 "p1.y" /* yacc.c:1646  */
    {
         curr_buffer = get_buffer_node();
         sprintf(curr_buffer->code, "L%d :", label_num);
         continueStack.label[++continueStack.top] = label_num; 
         (yyval.intval) = label_num++;
      }
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 330 "p1.y" /* yacc.c:1646  */
    {
        reg_node *temp = pop();
        curr_buffer = get_buffer_node();
        sprintf(curr_buffer->code, "IF NOT %s GOTO L%d", reg_name(temp), label_num);
        breakStack.label[++breakStack.top] = label_num; 

        (yyval.intval) = label_num++;
        tac.top++;

      }
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 343 "p1.y" /* yacc.c:1646  */
    { reg_node* temp = pop(); curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"RETURN %s", reg_name(temp)); }
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 344 "p1.y" /* yacc.c:1646  */
    { curr_buffer = get_buffer_node(); strcpy(curr_buffer->code,"RETURN"); }
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 348 "p1.y" /* yacc.c:1646  */
    { not_declared((yyvsp[-3].str)); not_function((yyvsp[-3].str)); num_params_check((yyvsp[-3].str), (yyvsp[-1].intval)); print_arg_list((yyvsp[-1].intval)); curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"Call %s, %d",(yyvsp[-3].str), (yyvsp[-1].intval)); }
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 349 "p1.y" /* yacc.c:1646  */
    { not_declared((yyvsp[-2].str)); not_function((yyvsp[-2].str)); num_params_check((yyvsp[-2].str), 0); curr_buffer= get_buffer_node(); sprintf(curr_buffer->code,"Call %s",(yyvsp[-2].str));  }
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 353 "p1.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[0].intval)+1; }
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 354 "p1.y" /* yacc.c:1646  */
    { (yyval.intval)= 1;}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2082 "y.tab.c" /* yacc.c:1646  */
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
#line 356 "p1.y" /* yacc.c:1906  */


void yyerror(char *s) {
 fprintf(stderr, "%s\n", s);
} 




int main()
{
    node * temp = malloc(sizeof(node));
    temp->scope =-1;
    tos++;
    stack[tos]=temp;


    tac.top = 0;
    tac.head[tac.top] = NULL;
    tac.last[tac.top] = NULL;

    breakStack.top = continueStack.top =-1;

    yyparse();
    print_tac();

//    printf("\nSymbol Table\n");

//     printSymbolTable();
   
    return 0;
}
