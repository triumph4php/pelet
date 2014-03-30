/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         php54_resource_parse
#define yylex           php54_resource_lex
#define yyerror         php54_resource_error
#define yylval          php54_resource_lval
#define yychar          php54_resource_char
#define yydebug         php54_resource_debug
#define yynerrs         php54_resource_nerrs


/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"


/**
 * This software is released under the terms of the MIT License
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * @copyright  2012 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */	
#include <pelet/LexicalAnalyzerClass.h>
#include <pelet/ResourceParserObserverClass.h>
#include <pelet/LintParserFunctions.h>
#include <pelet/TokenClass.h>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
#define YYSTYPE pelet::ResourceParserTypeClass

// so that both bison parses call the same lex function
#define php54_resource_lex pelet::ResourceLex

// so that both bison parses call the same error function
#define php54_resource_error pelet::ResourceGrammarError



/* Line 268 of yacc.c  */
#line 125 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_END = 0,
     T_REQUIRE_ONCE = 605,
     T_REQUIRE = 604,
     T_EVAL = 549,
     T_INCLUDE_ONCE = 565,
     T_INCLUDE = 564,
     T_LOGICAL_OR = 582,
     T_LOGICAL_XOR = 583,
     T_LOGICAL_AND = 581,
     T_PRINT = 600,
     T_SR_EQUAL = 610,
     T_SL_EQUAL = 608,
     T_XOR_EQUAL = 628,
     T_OR_EQUAL = 597,
     T_AND_EQUAL = 503,
     T_MOD_EQUAL = 586,
     T_CONCAT_EQUAL = 521,
     T_DIV_EQUAL = 530,
     T_MUL_EQUAL = 587,
     T_MINUS_EQUAL = 585,
     T_PLUS_EQUAL = 599,
     T_BOOLEAN_OR = 510,
     T_BOOLEAN_AND = 509,
     T_IS_NOT_IDENTICAL = 575,
     T_IS_IDENTICAL = 573,
     T_IS_NOT_EQUAL = 574,
     T_IS_EQUAL = 571,
     T_IS_GREATER_OR_EQUAL = 572,
     T_IS_SMALLER_OR_EQUAL = 577,
     T_SR = 609,
     T_SL = 607,
     T_INSTANCEOF = 567,
     T_UNSET_CAST = 622,
     T_BOOL_CAST = 508,
     T_OBJECT_CAST = 593,
     T_ARRAY_CAST = 505,
     T_STRING_CAST = 614,
     T_DOUBLE_CAST = 536,
     T_INT_CAST = 569,
     T_DEC = 526,
     T_INC = 563,
     T_CLONE = 518,
     T_NEW = 589,
     T_ELSEIF = 539,
     T_ELSE = 538,
     T_ENDIF = 546,
     T_PUBLIC = 603,
     T_PROTECTED = 602,
     T_PRIVATE = 601,
     T_FINAL = 553,
     T_ABSTRACT = 502,
     T_STATIC = 612,
     T_ARRAY = 504,
     T_AS = 506,
     T_BAD_CHARACTER = 507,
     T_BREAK = 511,
     T_CALLABLE = 512,
     T_CASE = 513,
     T_CATCH = 514,
     T_CHARACTER = 515,
     T_CLASS = 516,
     T_CLASS_C = 517,
     T_CLOSE_TAG = 519,
     T_COMMENT = 520,
     T_CONST = 522,
     T_CONSTANT_ENCAPSED_STRING = 523,
     T_CONTINUE = 524,
     T_CURLY_OPEN = 525,
     T_DECLARE = 527,
     T_DEFAULT = 528,
     T_DIR = 529,
     T_DNUMBER = 531,
     T_DO = 532,
     T_DOC_COMMENT = 533,
     T_DOLLAR_OPEN_CURLY_BRACES = 534,
     T_DOUBLE_ARROW = 535,
     T_ECHO = 537,
     T_EMPTY = 540,
     T_ENCAPSED_AND_WHITESPACE = 541,
     T_ENDDECLARE = 542,
     T_ENDFOR = 543,
     T_ENDFOREACH = 544,
     T_END_HEREDOC = 545,
     T_ENDSWITCH = 547,
     T_ENDWHILE = 548,
     T_EXIT = 550,
     T_EXTENDS = 551,
     T_FILE = 552,
     T_FOR = 554,
     T_FOREACH = 555,
     T_FUNC_C = 556,
     T_FUNCTION = 557,
     T_GLOBAL = 558,
     T_GOTO = 559,
     T_HALT_COMPILER = 560,
     T_IF = 561,
     T_IMPLEMENTS = 562,
     T_INLINE_HTML = 566,
     T_INSTEADOF = 568,
     T_INTERFACE = 570,
     T_ISSET = 576,
     T_LINE = 578,
     T_LIST = 579,
     T_LNUMBER = 580,
     T_METHOD_C = 584,
     T_NAMESPACE = 588,
     T_NS_C = 590,
     T_NS_SEPARATOR = 591,
     T_NUM_STRING = 592,
     T_OBJECT_OPERATOR = 594,
     T_OPEN_TAG = 595,
     T_OPEN_TAG_WITH_ECHO = 596,
     T_PAAMAYIM_NEKUDOTAYIM = 598,
     T_RETURN = 606,
     T_START_HEREDOC = 611,
     T_STRING = 613,
     T_STRING_VARNAME = 615,
     T_SWITCH = 616,
     T_THROW = 617,
     T_TRAIT = 618,
     T_TRAIT_C = 619,
     T_TRY = 620,
     T_UNSET = 621,
     T_USE = 623,
     T_VAR = 624,
     T_VARIABLE = 625,
     T_WHILE = 626,
     T_WHITESPACE = 627
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 296 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.cpp"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7842

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  147
/* YYNRULES -- Number of rules.  */
#define YYNRULES  457
/* YYNRULES -- Number of states.  */
#define YYNSTATES  924

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   629

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   156,     2,   155,    47,    31,     2,
     151,   152,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   153,
      36,    13,    37,    25,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   157,    30,     2,   154,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   149,    29,   150,    50,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
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
       2,     2,    71,    18,    73,    54,    74,    75,    52,    28,
      27,    76,    77,    78,    79,    80,    81,    82,    62,    83,
      84,    20,    85,    86,    87,    88,    58,    89,    90,    91,
      21,    92,    93,    94,    95,    96,    56,    97,    65,    64,
      98,    99,   100,   101,   102,   103,    66,   104,   105,     5,
     106,   107,   108,    70,   109,   110,   111,   112,   113,   114,
     115,   116,   117,    59,     7,     6,   118,    49,   119,    57,
     120,    35,    38,    33,    34,    32,   121,    39,   122,   123,
     124,    11,     9,    10,   125,    23,    19,    22,   126,    63,
     127,   128,   129,    53,   130,   131,   132,    17,   133,    24,
      12,    69,    68,    67,     4,     3,   134,    41,    15,    40,
      14,   135,    72,   136,    55,   137,   138,   139,   140,   141,
     142,   143,    51,   144,   145,   146,   147,   148,    16,     2
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    15,    17,    19,
      21,    26,    30,    31,    38,    39,    45,    49,    52,    56,
      58,    60,    64,    67,    72,    78,    83,    86,    87,    89,
      91,    93,    98,   100,   103,   107,   115,   126,   132,   140,
     150,   156,   159,   163,   166,   170,   173,   177,   181,   185,
     189,   193,   195,   198,   204,   213,   222,   228,   230,   244,
     248,   252,   254,   255,   257,   260,   269,   271,   275,   277,
     279,   281,   282,   284,   285,   296,   297,   306,   307,   315,
     317,   320,   322,   325,   326,   329,   331,   332,   335,   336,
     339,   341,   345,   346,   349,   351,   354,   356,   361,   363,
     368,   370,   375,   379,   385,   389,   394,   399,   405,   406,
     412,   417,   419,   421,   423,   428,   429,   436,   437,   445,
     446,   449,   450,   454,   456,   457,   460,   464,   470,   475,
     480,   486,   494,   501,   502,   504,   506,   508,   510,   511,
     513,   515,   518,   522,   526,   531,   535,   537,   539,   542,
     547,   551,   557,   559,   563,   566,   567,   571,   574,   576,
     577,   587,   591,   593,   597,   599,   603,   604,   606,   608,
     611,   614,   617,   621,   623,   627,   629,   631,   635,   640,
     644,   645,   647,   649,   653,   655,   657,   658,   660,   662,
     665,   667,   669,   671,   673,   675,   677,   681,   687,   689,
     693,   699,   704,   708,   710,   711,   713,   717,   719,   722,
     724,   729,   733,   736,   738,   740,   741,   743,   747,   754,
     758,   763,   770,   773,   777,   781,   785,   789,   793,   797,
     801,   805,   809,   813,   817,   820,   823,   826,   829,   833,
     837,   841,   845,   849,   853,   857,   861,   865,   869,   873,
     877,   881,   885,   889,   893,   896,   899,   902,   905,   909,
     913,   917,   921,   925,   929,   933,   937,   941,   945,   947,
     952,   958,   963,   965,   968,   971,   974,   977,   980,   983,
     986,   989,   992,   994,   999,  1003,  1007,  1010,  1020,  1031,
    1033,  1034,  1039,  1043,  1048,  1050,  1053,  1054,  1060,  1067,
    1068,  1075,  1082,  1089,  1096,  1103,  1108,  1110,  1112,  1116,
    1119,  1121,  1125,  1128,  1130,  1132,  1137,  1139,  1142,  1143,
    1146,  1147,  1150,  1154,  1155,  1157,  1159,  1160,  1164,  1166,
    1168,  1170,  1172,  1174,  1176,  1178,  1180,  1182,  1184,  1188,
    1191,  1193,  1195,  1199,  1202,  1205,  1208,  1213,  1215,  1219,
    1221,  1225,  1227,  1229,  1231,  1235,  1238,  1240,  1244,  1248,
    1250,  1251,  1254,  1255,  1257,  1263,  1267,  1271,  1273,  1275,
    1277,  1279,  1281,  1283,  1284,  1285,  1293,  1295,  1298,  1299,
    1303,  1308,  1313,  1317,  1319,  1321,  1322,  1324,  1327,  1331,
    1335,  1337,  1342,  1347,  1349,  1351,  1353,  1355,  1358,  1360,
    1365,  1370,  1372,  1374,  1379,  1380,  1382,  1384,  1386,  1391,
    1396,  1398,  1400,  1404,  1406,  1409,  1413,  1415,  1417,  1422,
    1423,  1424,  1427,  1433,  1437,  1441,  1443,  1450,  1455,  1460,
    1463,  1466,  1469,  1471,  1474,  1476,  1481,  1485,  1489,  1496,
    1500,  1502,  1504,  1506,  1511,  1516,  1517,  1521,  1522,  1526,
    1531,  1532,  1536,  1537,  1541,  1543,  1547,  1551
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     159,     0,    -1,   160,    -1,   160,   162,    -1,    -1,   136,
      -1,   161,   128,   136,    -1,   170,    -1,   177,    -1,   178,
      -1,   115,   151,   152,   153,    -1,   126,   161,   153,    -1,
      -1,   126,   161,   149,   163,   160,   150,    -1,    -1,   126,
     149,   164,   160,   150,    -1,   144,   165,   153,    -1,   167,
     153,    -1,   165,     8,   166,    -1,   166,    -1,   161,    -1,
     161,    74,   136,    -1,   128,   161,    -1,   128,   161,    74,
     136,    -1,   167,     8,   136,    13,   260,    -1,    85,   136,
      13,   260,    -1,   168,   169,    -1,    -1,   170,    -1,   177,
      -1,   178,    -1,   115,   151,   152,   153,    -1,   171,    -1,
     136,    26,    -1,   149,   168,   150,    -1,   116,   151,   266,
     152,   170,   201,   203,    -1,   116,   151,   266,   152,    26,
     168,   202,   204,    66,   153,    -1,   147,   151,   266,   152,
     200,    -1,    93,   170,   147,   151,   266,   152,   153,    -1,
     109,   151,   236,   153,   236,   153,   236,   152,   193,    -1,
     138,   151,   266,   152,   197,    -1,    76,   153,    -1,    76,
     266,   153,    -1,    87,   153,    -1,    87,   266,   153,    -1,
     134,   153,    -1,   134,   243,   153,    -1,   134,   270,   153,
      -1,   113,   210,   153,    -1,    72,   212,   153,    -1,    97,
     235,   153,    -1,   118,    -1,   266,   153,    -1,   143,   151,
     175,   152,   153,    -1,   110,   151,   270,    74,   192,   191,
     152,   194,    -1,   110,   151,   243,    74,   270,   191,   152,
     194,    -1,    89,   151,   196,   152,   195,    -1,   153,    -1,
     142,   149,   168,   150,    79,   151,   251,   146,   152,   149,
     168,   150,   172,    -1,   139,   266,   153,    -1,   114,   136,
     153,    -1,   173,    -1,    -1,   174,    -1,   173,   174,    -1,
      79,   151,   251,   146,   152,   149,   168,   150,    -1,   176,
      -1,   175,     8,   176,    -1,   270,    -1,   180,    -1,   182,
      -1,    -1,    31,    -1,    -1,   244,   179,   136,   151,   205,
     152,   181,   149,   168,   150,    -1,    -1,   185,   136,   186,
     189,   183,   149,   213,   150,    -1,    -1,   187,   136,   188,
     184,   149,   213,   150,    -1,    81,    -1,    71,    81,    -1,
     140,    -1,    70,    81,    -1,    -1,   107,   251,    -1,   120,
      -1,    -1,   107,   190,    -1,    -1,   117,   190,    -1,   251,
      -1,   190,     8,   251,    -1,    -1,    96,   192,    -1,   270,
      -1,    31,   270,    -1,   170,    -1,    26,   168,   101,   153,
      -1,   170,    -1,    26,   168,   102,   153,    -1,   170,    -1,
      26,   168,   100,   153,    -1,   136,    13,   260,    -1,   196,
       8,   136,    13,   260,    -1,   149,   198,   150,    -1,   149,
     153,   198,   150,    -1,    26,   198,   104,   153,    -1,    26,
     153,   198,   104,   153,    -1,    -1,   198,    78,   266,   199,
     168,    -1,   198,    90,   199,   168,    -1,    26,    -1,   153,
      -1,   170,    -1,    26,   168,   105,   153,    -1,    -1,   201,
      64,   151,   266,   152,   170,    -1,    -1,   202,    64,   151,
     266,   152,    26,   168,    -1,    -1,    65,   170,    -1,    -1,
      65,    26,   168,    -1,   206,    -1,    -1,   207,   146,    -1,
     207,    31,   146,    -1,   207,    31,   146,    13,   260,    -1,
     207,   146,    13,   260,    -1,   206,     8,   207,   146,    -1,
     206,     8,   207,    31,   146,    -1,   206,     8,   207,    31,
     146,    13,   260,    -1,   206,     8,   207,   146,    13,   260,
      -1,    -1,   251,    -1,    73,    -1,    77,    -1,   209,    -1,
      -1,   243,    -1,   270,    -1,    31,   268,    -1,   209,     8,
     243,    -1,   209,     8,   270,    -1,   209,     8,    31,   268,
      -1,   210,     8,   211,    -1,   211,    -1,   146,    -1,   155,
     267,    -1,   155,   149,   266,   150,    -1,   212,     8,   146,
      -1,   212,     8,   146,    13,   260,    -1,   146,    -1,   146,
      13,   260,    -1,   213,   214,    -1,    -1,   229,   233,   153,
      -1,   234,   153,    -1,   216,    -1,    -1,   230,   244,   179,
     136,   151,   205,   152,   215,   228,    -1,   144,   217,   218,
      -1,   251,    -1,   217,     8,   251,    -1,   153,    -1,   149,
     219,   150,    -1,    -1,   220,    -1,   221,    -1,   220,   221,
      -1,   222,   153,    -1,   226,   153,    -1,   225,   119,   223,
      -1,   251,    -1,   223,     8,   251,    -1,   136,    -1,   225,
      -1,   251,   133,   136,    -1,   224,    74,   227,   136,    -1,
     224,    74,   232,    -1,    -1,   232,    -1,   153,    -1,   149,
     168,   150,    -1,   231,    -1,   145,    -1,    -1,   231,    -1,
     232,    -1,   231,   232,    -1,    67,    -1,    68,    -1,    69,
      -1,    72,    -1,    71,    -1,    70,    -1,   233,     8,   146,
      -1,   233,     8,   146,    13,   260,    -1,   146,    -1,   146,
      13,   260,    -1,   234,     8,   136,    13,   260,    -1,    85,
     136,    13,   260,    -1,   235,     8,   266,    -1,   266,    -1,
      -1,   237,    -1,   237,     8,   266,    -1,   266,    -1,   238,
     274,    -1,   274,    -1,   239,    61,   286,   157,    -1,    61,
     286,   157,    -1,   239,   238,    -1,   239,    -1,   238,    -1,
      -1,   240,    -1,    63,   252,   258,    -1,   123,   151,   291,
     152,    13,   266,    -1,   270,    13,   266,    -1,   270,    13,
      31,   270,    -1,   270,    13,    31,    63,   252,   258,    -1,
      62,   266,    -1,   270,    24,   266,    -1,   270,    23,   266,
      -1,   270,    22,   266,    -1,   270,    21,   266,    -1,   270,
      20,   266,    -1,   270,    19,   266,    -1,   270,    18,   266,
      -1,   270,    17,   266,    -1,   270,    16,   266,    -1,   270,
      15,   266,    -1,   270,    14,   266,    -1,   269,    59,    -1,
      59,   269,    -1,   269,    58,    -1,    58,   269,    -1,   266,
      27,   266,    -1,   266,    28,   266,    -1,   266,     9,   266,
      -1,   266,    11,   266,    -1,   266,    10,   266,    -1,   266,
      29,   266,    -1,   266,    31,   266,    -1,   266,    30,   266,
      -1,   266,    44,   266,    -1,   266,    42,   266,    -1,   266,
      43,   266,    -1,   266,    45,   266,    -1,   266,    46,   266,
      -1,   266,    47,   266,    -1,   266,    41,   266,    -1,   266,
      40,   266,    -1,    42,   266,    -1,    43,   266,    -1,    48,
     266,    -1,    50,   266,    -1,   266,    33,   266,    -1,   266,
      32,   266,    -1,   266,    35,   266,    -1,   266,    34,   266,
      -1,   266,    36,   266,    -1,   266,    39,   266,    -1,   266,
      37,   266,    -1,   266,    38,   266,    -1,   266,    49,   252,
      -1,   151,   266,   152,    -1,   242,    -1,   151,   242,   152,
     241,    -1,   266,    25,   266,    26,   266,    -1,   266,    25,
      26,   266,    -1,   298,    -1,    57,   266,    -1,    56,   266,
      -1,    55,   266,    -1,    54,   266,    -1,    53,   266,    -1,
      52,   266,    -1,    51,   266,    -1,   106,   256,    -1,    60,
     266,    -1,   262,    -1,    73,   151,   293,   152,    -1,    61,
     293,   157,    -1,   154,   257,   154,    -1,    12,   266,    -1,
     244,   179,   151,   205,   152,   245,   149,   168,   150,    -1,
      72,   244,   179,   151,   205,   152,   245,   149,   168,   150,
      -1,   112,    -1,    -1,   144,   151,   246,   152,    -1,   246,
       8,   146,    -1,   246,     8,    31,   146,    -1,   146,    -1,
      31,   146,    -1,    -1,   161,   151,   248,   208,   152,    -1,
     126,   128,   161,   151,   208,   152,    -1,    -1,   128,   161,
     151,   249,   208,   152,    -1,   250,   133,   289,   151,   208,
     152,    -1,   250,   133,   278,   151,   208,   152,    -1,   280,
     133,   289,   151,   208,   152,    -1,   280,   133,   278,   151,
     208,   152,    -1,   278,   151,   208,   152,    -1,    72,    -1,
     161,    -1,   126,   128,   161,    -1,   128,   161,    -1,   161,
      -1,   126,   128,   161,    -1,   128,   161,    -1,   250,    -1,
     253,    -1,   283,   130,   287,   254,    -1,   283,    -1,   254,
     255,    -1,    -1,   130,   287,    -1,    -1,   151,   152,    -1,
     151,   266,   152,    -1,    -1,    99,    -1,   295,    -1,    -1,
     151,   208,   152,    -1,   124,    -1,    92,    -1,    86,    -1,
     122,    -1,   108,    -1,    91,    -1,   141,    -1,   125,    -1,
     111,    -1,   127,    -1,   135,    99,   103,    -1,   135,   103,
      -1,   259,    -1,   161,    -1,   126,   128,   161,    -1,   128,
     161,    -1,    42,   260,    -1,    43,   260,    -1,    73,   151,
     263,   152,    -1,   261,    -1,    61,   263,   157,    -1,    82,
      -1,   250,   133,   136,    -1,   137,    -1,   304,    -1,   161,
      -1,   126,   128,   161,    -1,   128,   161,    -1,   259,    -1,
     156,   295,   156,    -1,   135,   295,   103,    -1,    82,    -1,
      -1,   265,   264,    -1,    -1,     8,    -1,   265,     8,   260,
      96,   260,    -1,   265,     8,   260,    -1,   260,    96,   260,
      -1,   260,    -1,   267,    -1,   243,    -1,   270,    -1,   270,
      -1,   270,    -1,    -1,    -1,   282,   271,   130,   287,   277,
     272,   273,    -1,   282,    -1,   273,   274,    -1,    -1,   130,
     287,   277,    -1,   275,    61,   286,   157,    -1,   276,    61,
     286,   157,    -1,   151,   208,   152,    -1,   276,    -1,   275,
      -1,    -1,   284,    -1,   290,   284,    -1,   250,   133,   278,
      -1,   280,   133,   278,    -1,   284,    -1,   281,    61,   286,
     157,    -1,   247,    61,   286,   157,    -1,   283,    -1,   281,
      -1,   247,    -1,   284,    -1,   290,   284,    -1,   279,    -1,
     284,    61,   286,   157,    -1,   284,   149,   266,   150,    -1,
     285,    -1,   146,    -1,   155,   149,   266,   150,    -1,    -1,
     266,    -1,   288,    -1,   278,    -1,   288,    61,   286,   157,
      -1,   288,   149,   266,   150,    -1,   289,    -1,   136,    -1,
     149,   266,   150,    -1,   155,    -1,   290,   155,    -1,   291,
       8,   292,    -1,   292,    -1,   270,    -1,   123,   151,   291,
     152,    -1,    -1,    -1,   294,   264,    -1,   294,     8,   266,
      96,   266,    -1,   294,     8,   266,    -1,   266,    96,   266,
      -1,   266,    -1,   294,     8,   266,    96,    31,   268,    -1,
     294,     8,    31,   268,    -1,   266,    96,    31,   268,    -1,
      31,   268,    -1,   295,   296,    -1,   295,    99,    -1,   296,
      -1,    99,   296,    -1,   146,    -1,   146,    61,   297,   157,
      -1,   146,   130,   136,    -1,    95,   266,   150,    -1,    95,
     137,    61,   266,   157,   150,    -1,    88,   270,   150,    -1,
     136,    -1,   129,    -1,   146,    -1,   121,   151,   303,   152,
      -1,    98,   151,   270,   152,    -1,    -1,     7,   299,   266,
      -1,    -1,     6,   300,   266,    -1,     5,   151,   266,   152,
      -1,    -1,     4,   301,   266,    -1,    -1,     3,   302,   266,
      -1,   270,    -1,   303,     8,   270,    -1,   250,   133,   136,
      -1,   280,   133,   136,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   360,   360,   364,   365,   369,   370,   374,   375,   376,
     377,   378,   383,   383,   388,   388,   394,   395,   399,   401,
     405,   408,   411,   414,   420,   426,   435,   436,   440,   441,
     442,   443,   447,   448,   452,   453,   457,   461,   462,   463,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   489,   492,   493,   494,   500,
     501,   505,   506,   510,   511,   515,   520,   521,   525,   529,
     533,   537,   538,   543,   542,   556,   555,   575,   574,   585,
     586,   587,   588,   592,   593,   600,   604,   605,   610,   611,
     616,   619,   623,   624,   628,   629,   633,   634,   638,   639,
     643,   644,   648,   649,   653,   654,   655,   656,   660,   661,
     662,   666,   667,   671,   672,   676,   677,   683,   684,   690,
     691,   695,   696,   700,   701,   705,   706,   707,   708,   709,
     710,   711,   712,   716,   717,   718,   719,   723,   724,   728,
     735,   742,   749,   750,   751,   755,   756,   760,   761,   762,
     766,   767,   768,   769,   773,   774,   778,   779,   780,   782,
     781,   795,   800,   801,   806,   807,   811,   812,   816,   817,
     821,   822,   826,   831,   832,   836,   839,   843,   849,   850,
     854,   855,   859,   860,   864,   865,   871,   872,   876,   877,
     881,   882,   883,   884,   885,   886,   890,   896,   902,   908,
     917,   924,   933,   934,   938,   939,   943,   944,   948,   949,
     953,   954,   958,   959,   960,   964,   965,   969,   973,   974,
     987,   992,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,
    1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
    1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,
    1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,
    1045,  1048,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,
    1058,  1059,  1060,  1061,  1062,  1063,  1064,  1065,  1067,  1072,
    1076,  1077,  1081,  1082,  1083,  1084,  1088,  1088,  1105,  1108,
    1108,  1125,  1127,  1129,  1131,  1133,  1138,  1139,  1140,  1141,
    1145,  1146,  1147,  1151,  1152,  1156,  1158,  1162,  1163,  1167,
    1171,  1172,  1173,  1177,  1178,  1179,  1183,  1184,  1188,  1197,
    1206,  1215,  1216,  1217,  1218,  1219,  1220,  1221,  1222,  1223,
    1227,  1228,  1229,  1230,  1231,  1232,  1233,  1234,  1235,  1236,
    1240,  1244,  1245,  1246,  1247,  1248,  1249,  1250,  1251,  1252,
    1256,  1257,  1261,  1262,  1266,  1267,  1268,  1269,  1273,  1274,
    1278,  1282,  1286,  1290,  1295,  1290,  1308,  1312,  1313,  1317,
    1321,  1322,  1326,  1330,  1331,  1332,  1336,  1337,  1341,  1342,
    1346,  1350,  1351,  1355,  1365,  1366,  1371,  1372,  1373,  1377,
    1378,  1379,  1383,  1384,  1388,  1389,  1393,  1394,  1398,  1399,
    1400,  1404,  1405,  1409,  1410,  1414,  1415,  1419,  1420,  1421,
    1425,  1426,  1430,  1431,  1432,  1433,  1434,  1435,  1436,  1437,
    1441,  1442,  1443,  1444,  1448,  1449,  1450,  1451,  1452,  1453,
    1457,  1458,  1459,  1463,  1464,  1465,  1465,  1471,  1471,  1477,
    1478,  1478,  1484,  1484,  1492,  1493,  1497,  1498
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "T_END", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE", "T_EVAL",
  "T_INCLUDE_ONCE", "T_INCLUDE", "','", "T_LOGICAL_OR", "T_LOGICAL_XOR",
  "T_LOGICAL_AND", "T_PRINT", "'='", "T_SR_EQUAL", "T_SL_EQUAL",
  "T_XOR_EQUAL", "T_OR_EQUAL", "T_AND_EQUAL", "T_MOD_EQUAL",
  "T_CONCAT_EQUAL", "T_DIV_EQUAL", "T_MUL_EQUAL", "T_MINUS_EQUAL",
  "T_PLUS_EQUAL", "'?'", "':'", "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'",
  "'^'", "'&'", "T_IS_NOT_IDENTICAL", "T_IS_IDENTICAL", "T_IS_NOT_EQUAL",
  "T_IS_EQUAL", "'<'", "'>'", "T_IS_GREATER_OR_EQUAL",
  "T_IS_SMALLER_OR_EQUAL", "T_SR", "T_SL", "'+'", "'-'", "'.'", "'*'",
  "'/'", "'%'", "'!'", "T_INSTANCEOF", "'~'", "T_UNSET_CAST",
  "T_BOOL_CAST", "T_OBJECT_CAST", "T_ARRAY_CAST", "T_STRING_CAST",
  "T_DOUBLE_CAST", "T_INT_CAST", "T_DEC", "T_INC", "'@'", "'['", "T_CLONE",
  "T_NEW", "T_ELSEIF", "T_ELSE", "T_ENDIF", "T_PUBLIC", "T_PROTECTED",
  "T_PRIVATE", "T_FINAL", "T_ABSTRACT", "T_STATIC", "T_ARRAY", "T_AS",
  "T_BAD_CHARACTER", "T_BREAK", "T_CALLABLE", "T_CASE", "T_CATCH",
  "T_CHARACTER", "T_CLASS", "T_CLASS_C", "T_CLOSE_TAG", "T_COMMENT",
  "T_CONST", "T_CONSTANT_ENCAPSED_STRING", "T_CONTINUE", "T_CURLY_OPEN",
  "T_DECLARE", "T_DEFAULT", "T_DIR", "T_DNUMBER", "T_DO", "T_DOC_COMMENT",
  "T_DOLLAR_OPEN_CURLY_BRACES", "T_DOUBLE_ARROW", "T_ECHO", "T_EMPTY",
  "T_ENCAPSED_AND_WHITESPACE", "T_ENDDECLARE", "T_ENDFOR", "T_ENDFOREACH",
  "T_END_HEREDOC", "T_ENDSWITCH", "T_ENDWHILE", "T_EXIT", "T_EXTENDS",
  "T_FILE", "T_FOR", "T_FOREACH", "T_FUNC_C", "T_FUNCTION", "T_GLOBAL",
  "T_GOTO", "T_HALT_COMPILER", "T_IF", "T_IMPLEMENTS", "T_INLINE_HTML",
  "T_INSTEADOF", "T_INTERFACE", "T_ISSET", "T_LINE", "T_LIST", "T_LNUMBER",
  "T_METHOD_C", "T_NAMESPACE", "T_NS_C", "T_NS_SEPARATOR", "T_NUM_STRING",
  "T_OBJECT_OPERATOR", "T_OPEN_TAG", "T_OPEN_TAG_WITH_ECHO",
  "T_PAAMAYIM_NEKUDOTAYIM", "T_RETURN", "T_START_HEREDOC", "T_STRING",
  "T_STRING_VARNAME", "T_SWITCH", "T_THROW", "T_TRAIT", "T_TRAIT_C",
  "T_TRY", "T_UNSET", "T_USE", "T_VAR", "T_VARIABLE", "T_WHILE",
  "T_WHITESPACE", "'{'", "'}'", "'('", "')'", "';'", "'`'", "'$'", "'\"'",
  "']'", "$accept", "start", "top_statement_list", "namespace_name",
  "top_statement", "$@1", "$@2", "use_declarations", "use_declaration",
  "constant_declaration", "inner_statement_list", "inner_statement",
  "statement", "unticked_statement", "additional_catches",
  "non_empty_additional_catches", "additional_catch", "unset_variables",
  "unset_variable", "function_declaration_statement",
  "class_declaration_statement", "is_reference",
  "unticked_function_declaration_statement", "$@3",
  "unticked_class_declaration_statement", "$@4", "$@5", "class_entry_type",
  "extends_from", "interface_entry", "interface_extends_list",
  "implements_list", "interface_list", "foreach_optional_arg",
  "foreach_variable", "for_statement", "foreach_statement",
  "declare_statement", "declare_list", "switch_case_list", "case_list",
  "case_separator", "while_statement", "elseif_list", "new_elseif_list",
  "else_single", "new_else_single", "parameter_list",
  "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "$@6", "trait_use_statement",
  "trait_list", "trait_adaptations", "trait_adaptation_list",
  "non_empty_trait_adaptation_list", "trait_adaptation_statement",
  "trait_precedence", "trait_reference_list", "trait_method_reference",
  "trait_method_reference_fully_qualified", "trait_alias",
  "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr",
  "chaining_method_or_property", "chaining_dereference",
  "chaining_instance_call", "instance_call", "new_expr",
  "expr_without_variable", "function", "lexical_vars", "lexical_var_list",
  "function_call", "$@7", "$@8", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@9", "$@10",
  "variable_properties", "variable_property", "array_method_dereference",
  "method", "method_or_not", "variable_without_objects", "static_member",
  "variable_class_name", "array_function_dereference",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var",
  "encaps_var_offset", "internal_functions_in_yacc", "$@11", "$@12",
  "$@13", "$@14", "isset_variables", "class_constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   629,   605,   604,   549,   565,   564,    44,   582,
     583,   581,   600,    61,   610,   608,   628,   597,   503,   586,
     521,   530,   587,   585,   599,    63,    58,   510,   509,   124,
      94,    38,   575,   573,   574,   571,    60,    62,   572,   577,
     609,   607,    43,    45,    46,    42,    47,    37,    33,   567,
     126,   622,   508,   593,   505,   614,   536,   569,   526,   563,
      64,    91,   518,   589,   539,   538,   546,   603,   602,   601,
     553,   502,   612,   504,   506,   507,   511,   512,   513,   514,
     515,   516,   517,   519,   520,   522,   523,   524,   525,   527,
     528,   529,   531,   532,   533,   534,   535,   537,   540,   541,
     542,   543,   544,   545,   547,   548,   550,   551,   552,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   566,   568,
     570,   576,   578,   579,   580,   584,   588,   590,   591,   592,
     594,   595,   596,   598,   606,   611,   613,   615,   616,   617,
     618,   619,   620,   621,   623,   624,   625,   626,   627,   123,
     125,    40,    41,    59,    96,    36,    34,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   158,   159,   160,   160,   161,   161,   162,   162,   162,
     162,   162,   163,   162,   164,   162,   162,   162,   165,   165,
     166,   166,   166,   166,   167,   167,   168,   168,   169,   169,
     169,   169,   170,   170,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   172,   172,   173,   173,   174,   175,   175,   176,   177,
     178,   179,   179,   181,   180,   183,   182,   184,   182,   185,
     185,   185,   185,   186,   186,   187,   188,   188,   189,   189,
     190,   190,   191,   191,   192,   192,   193,   193,   194,   194,
     195,   195,   196,   196,   197,   197,   197,   197,   198,   198,
     198,   199,   199,   200,   200,   201,   201,   202,   202,   203,
     203,   204,   204,   205,   205,   206,   206,   206,   206,   206,
     206,   206,   206,   207,   207,   207,   207,   208,   208,   209,
     209,   209,   209,   209,   209,   210,   210,   211,   211,   211,
     212,   212,   212,   212,   213,   213,   214,   214,   214,   215,
     214,   216,   217,   217,   218,   218,   219,   219,   220,   220,
     221,   221,   222,   223,   223,   224,   224,   225,   226,   226,
     227,   227,   228,   228,   229,   229,   230,   230,   231,   231,
     232,   232,   232,   232,   232,   232,   233,   233,   233,   233,
     234,   234,   235,   235,   236,   236,   237,   237,   238,   238,
     239,   239,   240,   240,   240,   241,   241,   242,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   244,
     245,   245,   246,   246,   246,   246,   248,   247,   247,   249,
     247,   247,   247,   247,   247,   247,   250,   250,   250,   250,
     251,   251,   251,   252,   252,   253,   253,   254,   254,   255,
     256,   256,   256,   257,   257,   257,   258,   258,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     261,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     263,   263,   264,   264,   265,   265,   265,   265,   266,   266,
     267,   268,   269,   271,   272,   270,   270,   273,   273,   274,
     275,   275,   276,   277,   277,   277,   278,   278,   279,   279,
     280,   281,   281,   282,   282,   282,   283,   283,   283,   284,
     284,   284,   285,   285,   286,   286,   287,   287,   288,   288,
     288,   289,   289,   290,   290,   291,   291,   292,   292,   292,
     293,   293,   294,   294,   294,   294,   294,   294,   294,   294,
     295,   295,   295,   295,   296,   296,   296,   296,   296,   296,
     297,   297,   297,   298,   298,   299,   298,   300,   298,   298,
     301,   298,   302,   298,   303,   303,   304,   304
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     3,     1,     1,     1,
       4,     3,     0,     6,     0,     5,     3,     2,     3,     1,
       1,     3,     2,     4,     5,     4,     2,     0,     1,     1,
       1,     4,     1,     2,     3,     7,    10,     5,     7,     9,
       5,     2,     3,     2,     3,     2,     3,     3,     3,     3,
       3,     1,     2,     5,     8,     8,     5,     1,    13,     3,
       3,     1,     0,     1,     2,     8,     1,     3,     1,     1,
       1,     0,     1,     0,    10,     0,     8,     0,     7,     1,
       2,     1,     2,     0,     2,     1,     0,     2,     0,     2,
       1,     3,     0,     2,     1,     2,     1,     4,     1,     4,
       1,     4,     3,     5,     3,     4,     4,     5,     0,     5,
       4,     1,     1,     1,     4,     0,     6,     0,     7,     0,
       2,     0,     3,     1,     0,     2,     3,     5,     4,     4,
       5,     7,     6,     0,     1,     1,     1,     1,     0,     1,
       1,     2,     3,     3,     4,     3,     1,     1,     2,     4,
       3,     5,     1,     3,     2,     0,     3,     2,     1,     0,
       9,     3,     1,     3,     1,     3,     0,     1,     1,     2,
       2,     2,     3,     1,     3,     1,     1,     3,     4,     3,
       0,     1,     1,     3,     1,     1,     0,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     3,     5,     1,     3,
       5,     4,     3,     1,     0,     1,     3,     1,     2,     1,
       4,     3,     2,     1,     1,     0,     1,     3,     6,     3,
       4,     6,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     4,
       5,     4,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     4,     3,     3,     2,     9,    10,     1,
       0,     4,     3,     4,     1,     2,     0,     5,     6,     0,
       6,     6,     6,     6,     6,     4,     1,     1,     3,     2,
       1,     3,     2,     1,     1,     4,     1,     2,     0,     2,
       0,     2,     3,     0,     1,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     1,     3,     2,     2,     2,     4,     1,     3,     1,
       3,     1,     1,     1,     3,     2,     1,     3,     3,     1,
       0,     2,     0,     1,     5,     3,     3,     1,     1,     1,
       1,     1,     1,     0,     0,     7,     1,     2,     0,     3,
       4,     4,     3,     1,     1,     0,     1,     2,     3,     3,
       1,     4,     4,     1,     1,     1,     1,     2,     1,     4,
       4,     1,     1,     4,     0,     1,     1,     1,     4,     4,
       1,     1,     3,     1,     2,     3,     1,     1,     4,     0,
       0,     2,     5,     3,     3,     1,     6,     4,     4,     2,
       2,     2,     1,     2,     1,     4,     3,     3,     6,     3,
       1,     1,     1,     4,     4,     0,     3,     0,     3,     4,
       0,     3,     0,     3,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,   452,   450,     0,   447,   445,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   420,     0,     0,     0,     0,   306,
       0,     0,    79,   359,     0,   330,     0,     0,   333,   329,
       0,     0,     0,   320,   332,     0,     0,   336,   289,     0,
       0,     0,     0,    51,    85,     0,   331,     0,   328,   335,
       0,   337,     0,     0,     0,     5,   351,     0,     0,    81,
     334,     0,     0,     0,   402,     0,    27,     0,    57,   323,
     413,     0,   353,     3,     0,     7,    32,     8,     9,    69,
      70,     0,     0,   268,   369,    71,   395,     0,   356,   282,
       0,   368,     0,   370,     0,   398,     0,   394,   376,   393,
     396,   401,     0,   272,   352,     0,     0,     0,     0,     0,
     306,     0,     5,    71,   286,   254,   255,   256,   257,   279,
     278,   277,   276,   275,   274,   273,   306,     0,     0,   307,
       0,   237,   372,     0,   235,   281,     0,   425,     0,   362,
     222,     0,     0,   307,   313,   326,   314,     0,   316,   396,
       0,    82,    80,   152,     0,    71,   420,    41,     0,     0,
      43,     0,     0,     0,     0,   203,     0,     0,   280,   204,
       0,   147,     0,     0,   146,     0,     0,     0,     0,   419,
       0,    14,     0,   355,    45,   369,     0,   370,     0,     0,
       0,   339,   434,     0,   432,    33,     0,     0,    27,     0,
       0,    20,     0,    19,     0,     0,   268,     0,   324,     0,
     325,     0,     0,     0,     0,   296,     0,    17,    83,    86,
      72,     0,   404,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,   236,   234,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,     0,   404,     0,   404,
       0,   414,   397,   453,   451,     0,   448,   446,     0,     0,
     309,     0,     0,   429,   371,     0,   284,   363,   421,     0,
     309,     0,   138,   217,     0,     0,   397,     0,     0,    49,
       0,     0,    42,     0,    44,     0,     0,     0,     0,    50,
       0,   321,     0,     0,   205,   207,   369,   370,     0,   148,
     370,     0,    48,    60,     0,     0,   454,     0,     0,   417,
       0,   416,   354,     4,    12,    11,   299,    46,    47,     0,
     351,     0,   338,   433,     0,     0,   431,   358,   430,     0,
      59,     0,     0,    66,    68,    22,     0,     0,    16,     0,
       0,    34,    26,    28,    29,    30,   215,   267,   285,     0,
     357,     6,   138,     0,     0,    88,     0,    77,     0,   133,
     405,     0,   456,     0,   388,   386,     0,     0,   240,   242,
     241,     0,     0,   238,   239,   243,   245,   244,   259,   258,
     261,   260,   262,   264,   265,   263,   253,   252,   247,   248,
     246,   249,   250,   251,   266,     0,   219,   233,   232,   231,
     230,   229,   228,   227,   226,   225,   224,   223,     0,     0,
     137,   369,   370,   457,   389,     0,     0,     0,     0,     0,
     449,   308,   411,     0,   424,     0,   423,   308,   388,     0,
     389,   407,   318,   406,   410,     0,     0,   360,     0,   349,
       0,     0,     0,   341,     0,   340,   153,   347,   150,   133,
     283,    25,     0,     0,     0,     0,   202,   444,   322,   204,
       0,     0,     0,     0,   145,    10,     0,     0,   443,   419,
     419,     0,   138,     0,     4,   138,   439,     0,   437,   441,
     440,   442,     0,   436,     0,     0,     0,     0,     0,    21,
      18,     0,     0,   404,     0,   214,   213,   216,   269,   209,
     403,     0,     0,     0,     0,   310,    84,     0,    75,    87,
      90,     0,   133,   135,   136,     0,   123,     0,   134,   392,
       0,   138,   138,   387,   271,     0,     0,   220,   141,   305,
       0,   138,   138,   391,   385,   399,   400,   428,   427,     0,
     327,   315,   404,     0,   344,   345,   367,     0,   362,   360,
       0,   343,     0,     0,     0,     0,   102,     0,    27,   100,
      56,     0,     0,   206,    92,     0,    92,    94,   149,    27,
     115,   455,     0,   415,     0,     0,    15,     0,     0,     0,
     435,   108,   108,    40,     0,    67,    53,    23,    27,   113,
      37,     0,     0,   385,   208,   404,   212,   297,    24,     0,
     312,    89,     0,     0,   155,     0,   290,   133,     0,   125,
     412,     0,     0,   270,   326,     0,   369,   370,     0,     0,
     138,   384,   383,   374,     0,   422,     0,   317,     0,     0,
       0,   348,   363,   361,     0,   342,   350,   151,   290,     0,
       0,     0,   204,     0,     0,    95,     0,   117,   119,   418,
     218,   298,    13,   300,     0,   108,     0,   108,     0,     0,
       0,    31,   211,   379,     0,   311,   155,    91,   186,    73,
       0,     0,     0,   126,     0,   302,   301,   221,   144,   304,
     303,     0,   404,   404,   378,   426,   319,   408,   409,   366,
     365,   346,     0,   103,     0,    38,     0,    93,     0,     0,
     121,     0,     0,    35,   438,     0,     0,     0,     0,     0,
     104,     0,     0,   210,   186,   190,   191,   192,   195,   194,
     193,     0,     0,   185,    78,   154,   158,     0,     0,   184,
     188,     0,     0,     0,    27,     0,   129,     0,   128,   382,
       0,     0,   375,     0,    27,   101,     0,    27,    98,    55,
      54,     0,     0,     0,     0,   120,     0,     0,   111,   112,
      27,   106,   105,     0,   114,    76,     0,     0,   162,   198,
       0,    71,   189,     0,   157,    27,     0,   294,     0,     0,
     130,     0,   127,   380,   381,   377,   364,     0,    27,    96,
      39,     0,     0,    27,     0,     0,   107,    27,   110,     0,
       0,     0,   166,   164,   161,     0,     0,   156,     0,     0,
       0,   295,     0,   291,   287,     0,   132,   288,     0,     0,
       0,   122,    36,     0,   109,    27,   201,   163,     5,     0,
     167,   168,     0,     0,   176,     0,     0,   199,   196,     0,
       0,    74,     0,   292,   131,     0,    99,     0,   116,     0,
     165,   169,   170,   180,     0,   171,     0,     0,   133,   200,
     293,    97,    27,    62,     0,   179,   172,   173,   177,   197,
       0,   118,     0,    58,    61,    63,   178,     0,   159,     0,
      64,   174,     0,     0,    27,   182,   160,     0,     0,     0,
     183,    27,     0,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    82,    83,   504,   343,   212,   213,    84,
     215,   372,   373,    86,   903,   904,   905,   362,   363,   374,
     375,   231,    89,   762,    90,   632,   541,    91,   385,    92,
     387,   538,   539,   674,   596,   820,   779,   590,   316,   613,
     686,   790,   620,   678,   730,   733,   783,   545,   546,   547,
     439,   440,   183,   184,   164,   698,   755,   912,   756,   797,
     834,   859,   860,   861,   862,   896,   863,   864,   865,   894,
     916,   757,   758,   759,   760,   800,   761,   174,   323,   324,
     525,   526,   527,   528,    93,    94,   123,   701,   808,    96,
     382,   505,    97,   548,   155,   156,   571,   657,   178,   219,
     303,    98,   576,   477,    99,   577,   298,   578,   100,   101,
     293,   102,   103,   278,   714,   772,   529,   651,   652,   653,
     104,   105,   106,   107,   108,   109,   110,   111,   391,   462,
     463,   464,   112,   340,   341,   148,   149,   203,   204,   512,
     113,   119,   118,   116,   115,   337,   114
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -739
static const yytype_int16 yypact[] =
{
    -739,    58,  1941,  -739,  -739,  -739,   -82,  -739,  -739,  6534,
    6534,  6534,  6534,  6534,  6534,  6534,  6534,  6534,  6534,  6534,
    6534,   189,   189,  6534,  5021,  6534,   290,    43,   130,   -70,
      63,  5147,  -739,  -739,     3,  -739,  5273,    80,  -739,  -739,
    4867,  6534,    90,   108,  -739,   121,   133,  -739,  -739,   -75,
     151,   149,   155,  -739,  -739,   162,  -739,   165,  -739,  -739,
     101,  -739,   198,  5399,   248,   320,  -739,   201,  6534,  -739,
    -739,   206,   238,   110,  -739,   240,  -739,  6534,  -739,   309,
     230,   379,    77,  -739,    21,  -739,  -739,  -739,  -739,  -739,
    -739,   257,   266,  -739,  -739,   364,   344,   276,  -739,  -739,
    6793,  -739,    68,   973,   273,  -739,   292,   367,   300,  -739,
     -21,  -739,   -74,  -739,  -739,  6534,  6534,  6534,  6534,  6534,
     321,   304,  -739,   364,  1773,  -739,  -739,   385,  -739,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739,   316,   198,   -67,
     313,  -739,  -739,   318,  -739,  -739,   189,  7591,   297,   441,
    -739,   330,   198,   333,   338,   322,  -739,   347,   351,    60,
     -74,  -739,  -739,   470,    23,   364,  5021,  -739,  6834,   480,
    -739,  6875,   359,   352,    25,  7716,   189,  5525,  -739,  6534,
    6534,  -739,   252,    27,  -739,   354,   348,  6534,   189,   -17,
     198,  -739,   -49,   102,  -739,   357,  7716,   353,   189,  6660,
     389,  -739,     7,   311,  -739,  -739,  6534,  6920,  -739,   189,
     198,   -14,    29,  -739,  6534,  2095,   365,  6961,   159,   366,
     424,  6534,   159,   137,   369,  -739,   375,  -739,   411,   417,
    -739,   -29,  6534,   336,  6534,  6534,  6534,  5652,  6534,  6534,
    6534,  6534,  6534,  6534,  6534,  6534,  6534,  6534,  6534,  6534,
    6534,  6534,  6534,  6534,  6534,  6534,  6534,  6534,  6534,   290,
    -739,  -739,  -739,  5778,  6534,  6534,  6534,  6534,  6534,  6534,
    6534,  6534,  6534,  6534,  6534,  5904,   439,  6534,   396,  6534,
    6534,   230,    -5,  7716,  7716,  7002,  7716,  7716,   377,   198,
     -20,   455,   455,  -739,  -739,  6030,  -739,  6156,  -739,   198,
     333,   -45,  5904,  -739,   -45,   455,    52,   957,   384,  -739,
     381,   386,  -739,   957,  -739,   520,    17,   390,  6534,  -739,
     391,  -739,  7047,   397,   534,  7716,   475,   874,  6534,  -739,
    -739,   -75,  -739,  -739,   398,  7089,  -739,    20,   393,  -739,
      36,  -739,   106,  -739,  -739,  -739,  -739,  -739,  -739,   402,
     504,  7341,  -739,  -739,   193,   432,  -739,  -739,  -739,  7130,
    -739,  2249,    37,  -739,  -739,     8,   436,   110,  -739,  7173,
     427,  -739,  -739,  -739,  -739,  -739,    12,  -739,  -739,  7382,
    -739,  -739,  5904,   566,   256,   463,   256,  -739,   435,   -11,
    7716,   426,   438,  6534,   442,    52,   444,   -74,  7756,  7793,
    1773,  6534,  7675,  1521,  2079,  1544,  2231,  2384,  2538,  2538,
    2538,  2538,  1211,  1260,  1260,  1260,   708,   708,   517,   517,
     517,   385,   385,   385,  -739,   202,  1773,  1773,  1773,  1773,
    1773,  1773,  1773,  1773,  1773,  1773,  1773,  1773,   189,   446,
     588,    39,    75,   438,   449,   452,   454,   455,   457,  7425,
    -739,    94,  -739,   189,  7716,   189,  7632,   333,  -739,   460,
    -739,  -739,  -739,    59,  -739,   957,   957,   957,   458,  -739,
     478,   198,   170,   181,   483,  -739,  -739,  -739,   604,   -11,
    -739,  -739,   957,   482,  4097,  6534,  7716,  -739,  -739,  6534,
    6534,   189,   195,  7467,  -739,  -739,  4251,   189,  -739,   -17,
     -17,   606,  5904,  1633,  -739,  5904,  -739,  6534,  -739,  -739,
    -739,  -739,   464,  -739,    28,   543,   189,   472,   487,  -739,
    -739,  4405,   476,  6534,   455,   497,    86,  -739,  -739,  -739,
    -739,   477,   957,   503,   198,   333,  -739,   256,  -739,   629,
    -739,   490,   -11,  -739,  -739,   493,   639,     5,  -739,  -739,
    7508,  5904,  5904,    52,  1927,  6534,   290,  -739,  -739,  -739,
    6282,  5904,  5904,  -739,   498,  -739,  -739,  -739,  -739,  6408,
    -739,   518,  6534,  6534,  -739,  -739,   554,   496,   646,   957,
     198,   212,   552,   522,   957,   509,  -739,   643,  -739,  -739,
    -739,  7215,   510,  7716,   568,   189,   568,  -739,  -739,  -739,
    -739,  -739,    40,  -739,  6534,   513,  -739,  1787,   515,  1357,
    -739,   516,   519,  -739,   511,  -739,  -739,  -739,  -739,  -739,
    -739,   521,   514,   498,  -739,  6534,   497,  -739,  -739,   198,
     333,   629,   528,   256,  -739,   526,   548,   142,   551,   681,
    -739,   546,   547,  1927,   322,   189,    42,   140,   553,   557,
    5904,   642,   649,  -739,   189,  7716,   455,  -739,   555,  7549,
     957,  -739,   957,  -739,   561,   228,  -739,  -739,   548,   957,
    2403,   563,  6534,   195,   562,  -739,   565,  3943,   139,  -739,
    1773,  -739,  -739,  -739,   569,  -739,   173,  -739,   -27,   256,
    2557,  -739,  -739,  -739,   564,   333,  -739,  -739,   371,  -739,
     571,   575,    44,   691,   957,  -739,  -739,  -739,  -739,  -739,
    -739,   574,  6534,  6534,  -739,  -739,  -739,  -739,  -739,  -739,
     624,  -739,   578,  -739,   576,  -739,   579,  -739,  4559,  4559,
     254,   577,  4867,  -739,  -739,   259,  6534,    15,   580,    62,
    -739,   594,   595,  -739,   488,  -739,  -739,  -739,  -739,  -739,
    -739,   605,   256,  -739,  -739,  -739,  -739,   612,   321,   613,
    -739,    30,   611,    54,  -739,   615,   749,   957,  -739,  -739,
     608,   609,   497,   957,  -739,  -739,  4713,  -739,  -739,  -739,
    -739,   616,   737,   705,  6534,  -739,   619,  1445,  -739,  -739,
    -739,  -739,  -739,   623,  -739,  -739,   765,    18,  -739,   766,
      31,   364,  -739,   644,  -739,  -739,   635,  -739,    45,  2711,
     777,   957,  -739,  -739,  -739,  -739,  -739,  2865,  -739,  -739,
    -739,  3019,  6534,  -739,   638,  7256,  -739,  -739,  3943,   645,
     957,   256,   291,  -739,  -739,   957,   650,  -739,   656,   782,
    3173,  -739,    56,  -739,  -739,   957,  -739,  -739,  3327,   647,
    7299,  3943,  -739,  4867,  3943,  -739,  -739,  -739,   723,   651,
     291,  -739,   652,   725,   683,   653,   670,  -739,   791,   659,
     957,  -739,   665,  -739,  -739,   660,  -739,   786,  -739,  3481,
    -739,  -739,  -739,   716,   256,  -739,   678,   957,   -11,  -739,
    -739,  -739,  -739,   739,   680,   685,   814,  -739,  -739,  -739,
     671,  3943,   673,  -739,   739,  -739,  -739,   256,  -739,   256,
    -739,  -739,   205,   684,  -739,  -739,  -739,   679,  3635,   687,
    -739,  -739,  3789,  -739
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -739,  -739,  -323,    -3,  -739,  -739,  -739,  -739,   467,  -739,
    -203,  -739,     6,  -739,  -739,  -739,   -65,  -739,   324,     0,
       1,  -122,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,   306,   245,   164,  -739,   115,  -739,  -739,  -739,
    -582,    61,  -739,  -739,  -739,  -739,  -739,  -475,  -739,   208,
    -250,  -739,  -739,   523,  -739,   154,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,   -13,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,  -739,  -738,  -739,  -739,  -739,  -476,  -739,
     325,  -739,  -739,  -739,   776,   185,    -2,   187,  -739,  -739,
    -739,  -739,   277,  -362,  -248,  -739,  -739,  -739,  -739,  -739,
     214,   241,   762,  -739,  -739,   281,   284,  -739,   944,   682,
    -421,   399,   858,  -739,  -739,  -739,  -510,  -739,  -739,   242,
    -227,  -739,   144,  -739,  -739,   -19,   -10,  -739,  -265,  -438,
    -739,   -12,   -16,   370,   363,   700,  -739,   163,   473,  -739,
    -739,  -739,  -739,  -739,  -739,  -739,  -739
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -412
static const yytype_int16 yytable[] =
{
      95,   288,    87,    88,   585,   361,   394,   158,    85,   564,
     160,   424,   446,   592,   448,   624,   159,   558,   139,   139,
     503,   802,   536,   153,   540,   483,   831,   165,   497,   226,
     688,   308,   567,   318,   568,   331,   638,   367,   803,   836,
     279,   788,    48,   310,   500,   516,   173,  -139,   500,   444,
    -142,   736,   459,   842,   611,   136,   279,   192,     3,   193,
     366,   224,   543,   737,   394,   444,   544,   635,   354,   117,
     211,   181,    74,   523,   458,   765,   163,   460,   461,   224,
     182,   281,   518,  -140,   225,   806,   623,   872,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     344,    74,   282,   735,   345,   739,   338,   388,   224,   137,
      80,   138,  -390,   279,   224,   533,   624,   534,   165,   122,
     572,   279,   389,   740,   161,   122,   261,   262,   280,    74,
    -386,   346,   531,  -372,  -372,   290,   224,   355,    80,   169,
     736,  -124,   524,   139,   280,   895,  -387,   625,  -143,   300,
     306,   639,   737,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   143,   143,   832,   789,   484,
     157,   833,   498,   139,   227,   540,   309,   612,   319,   139,
     332,   607,   368,   804,   837,   139,   139,   342,   501,   517,
     766,  -139,   679,  -390,  -142,   139,   726,   843,  -372,  -372,
     807,   280,   873,   731,   732,   224,   139,   365,   573,   280,
    -307,   162,   792,    95,   166,   543,   524,   397,   716,   544,
     461,   396,   224,   395,   708,   198,   595,  -140,   225,   190,
     224,   172,   199,   715,   224,  -309,   356,   122,   210,  -308,
     158,   176,   220,   160,   223,   502,   122,   198,   195,   159,
     191,   736,   605,   346,   199,   608,   153,   502,   622,   177,
     397,   136,   815,   737,   445,   556,   395,   136,   533,   582,
     534,   697,   179,   201,   136,   397,   397,   738,   122,   396,
     445,   395,   395,   202,   180,   397,   451,   185,   397,   397,
     143,   395,  -143,   380,   395,   395,   457,   461,   140,   140,
     186,   641,   642,   154,   473,   202,   187,   658,   644,   224,
     473,   648,   649,   188,  -307,   137,   189,   138,   781,   782,
     143,   137,   509,   138,   136,   122,   143,   741,   137,   510,
     138,   122,   143,   143,   122,    74,   198,   736,   122,   511,
     224,    74,   143,   199,    80,  -309,   205,   200,    74,   737,
      80,   201,   206,   143,   914,   208,   224,    80,   915,    95,
     694,  -308,   136,   786,   211,   326,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   137,   221,
     138,   535,   533,   535,   534,   670,   535,   553,   122,   209,
     798,   214,   122,   228,   202,   230,   677,   198,    74,   198,
     711,   328,   229,   157,   199,   232,   199,    80,   218,   233,
     356,  -372,  -372,   900,   357,   690,   151,   533,   152,   534,
     141,   144,   139,   140,   275,   276,   122,   858,   277,   461,
    -373,   397,   190,    48,   259,   139,    74,   395,   745,   746,
     747,   748,   749,   750,   289,    80,   291,   770,   771,   297,
     139,   292,   139,   140,   296,   202,   751,   202,   299,   140,
     441,   224,   473,   473,   473,   140,   140,   198,   581,   857,
     866,   301,   392,   302,   199,   140,   535,   198,   222,   473,
     304,   305,    74,   307,   199,   393,   140,   441,   139,   139,
     589,    80,   352,   313,   139,   315,   139,   139,   866,   317,
     334,    95,   600,    87,    88,   381,   348,   333,   397,    85,
     347,   383,   198,   139,   395,   752,   753,   376,   384,   199,
     378,   754,   897,   356,   386,   202,   447,   619,   389,   473,
     478,   630,   479,   482,   535,   202,   154,   158,   480,   535,
     160,   485,   490,   487,   499,   911,   159,   913,   475,   491,
     489,   495,   506,   153,   475,   745,   746,   747,   748,   749,
     750,   809,   256,   257,   258,   507,   259,   441,   513,   143,
     202,   817,   519,   751,   821,   443,   473,   665,   522,   532,
     537,   473,   143,   549,   474,    74,   542,   828,   393,  -411,
     474,   452,   139,   551,    80,   552,   560,   143,   559,   143,
     561,    74,   840,   562,   393,    95,   580,    87,    88,   579,
      80,   563,   570,    85,   565,   848,   583,   584,   587,   604,
     851,   610,   614,   617,   854,   616,   695,   524,   621,   627,
     535,   629,   752,   753,   535,   143,   143,   633,   795,   634,
     397,   143,   139,   143,   143,   636,   395,   637,   656,   650,
     660,   139,   879,   661,   662,   352,   669,   473,   666,   473,
     143,   668,   689,   672,   673,   681,   473,   683,    95,   685,
     139,   692,   687,   353,   691,    95,   358,   696,   699,   838,
     745,   746,   747,   748,   749,   750,   535,   441,    95,   901,
     441,   353,   700,   358,   704,   353,   358,   703,   705,   706,
     157,   473,   140,   712,   767,   709,   475,   475,   475,   710,
     713,   918,   717,   721,   728,   140,   725,   729,   922,   734,
     773,   743,   763,   475,   764,  -187,   769,   774,   784,   775,
     140,   776,   140,   791,   778,   778,   441,   441,   785,   143,
     793,   796,   474,   474,   474,   646,   441,   441,   794,   535,
     253,   254,   255,   256,   257,   258,   801,   259,   799,   474,
     805,   810,   811,   823,   473,   813,   814,   822,   140,   140,
     473,   824,   826,   475,   140,   829,   140,   140,   830,   835,
     839,   841,   819,   745,   746,   747,   748,   749,   750,   143,
     845,   852,   869,   140,   855,   870,   868,  -175,   143,   883,
     876,   880,   884,   886,   887,   882,   885,    95,   473,   474,
     888,   890,   892,   891,   898,    95,   906,   143,   902,    95,
     475,  -181,   907,   908,   909,   475,    95,   473,   535,   535,
     917,   919,   473,   154,   520,   441,   921,   727,    95,   910,
     615,   676,   473,   631,   780,   702,    95,   881,   827,    95,
     744,   626,    95,   216,   494,   722,   474,   535,   707,   878,
     664,   474,   663,   603,   329,   693,   311,   473,     0,   602,
       0,     0,   140,     0,     0,     0,     0,    95,     0,   142,
     142,   535,     0,     0,   473,   535,     0,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,    95,
       0,   475,     0,   475,   535,     0,   535,     0,     0,     0,
     475,     0,     0,     0,     0,     0,    95,     0,     0,     0,
      95,   197,   140,     0,     0,     0,     0,     0,     0,     0,
       0,   140,  -372,  -372,     0,     0,     0,   474,     0,   474,
       0,     0,     0,     0,     0,   475,   474,     0,   492,     0,
     140,     0,     0,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,     0,     0,   145,   147,   150,
       0,     0,     0,     0,     0,   168,     0,     0,     0,     0,
     171,   474,     0,     0,     0,   175,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,     0,   465,
     466,     0,     0,     0,   294,     0,     0,   196,   475,     0,
       0,     0,   207,     0,   475,     0,     0,     0,   467,     0,
       0,   217,     0,     0,     0,     0,     0,     0,     0,   136,
     468,  -372,  -372,     0,   320,     0,     0,     0,   327,   469,
     330,     0,     0,    35,   474,     0,   336,   339,    38,    39,
     474,     0,   475,     0,     0,     0,   349,     0,     0,   283,
     284,   285,   286,   287,     0,    44,     0,   364,    47,   476,
       0,   475,     0,     0,     0,   481,   475,     0,     0,    56,
       0,    58,    59,   470,    61,   471,   475,     0,   474,     0,
       0,     0,   472,   122,     0,     0,     0,     0,    70,     0,
       0,     0,     0,     0,     0,     0,     0,   474,     0,     0,
     147,   475,   474,     0,     0,     0,     0,     0,     0,     0,
       0,   322,   474,   325,   196,     0,     0,     0,   475,     0,
       0,   335,     0,   442,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   351,     0,     0,     0,   474,     0,     0,
     359,     0,     0,     0,     0,     0,     0,     0,   369,     0,
     442,     0,     0,     0,   474,   379,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   390,     0,   398,   399,
     400,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,     0,     0,     0,     0,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   196,
       0,   390,     0,   390,   449,     0,     0,   574,   575,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   454,
     442,   456,     0,     0,   586,     0,   196,  -412,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,     0,   486,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   493,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   557,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   628,     0,   294,  -412,  -412,  -412,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,   294,     0,   294,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   196,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   550,     0,     0,
       0,     0,     0,     0,     0,   554,   667,     0,     0,   594,
     597,     0,     0,     0,     0,   601,     0,   339,   339,     0,
     442,     0,     0,   442,     0,     0,   234,   235,   236,     0,
       0,     0,     0,     0,   364,     0,     0,     0,     0,     0,
       0,     0,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,     0,   442,
     442,     0,     0,     0,     0,     0,     0,     0,   647,   442,
     442,     0,   719,     0,   720,     0,     0,     0,     0,   591,
       0,   723,     0,   325,   593,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   196,     0,     0,   196,
       0,   609,     0,   675,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   768,   390,     0,     0,
     237,   788,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   196,   196,     0,     0,   643,
       0,     0,     0,   294,   196,   196,   196,     0,   442,     0,
       0,     0,   294,   655,   684,     0,   390,   659,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   812,
       0,   597,     0,     0,     0,   816,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   680,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   390,
     259,     0,     0,   846,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   856,   259,   196,     0,     0,   867,   789,     0,
       0,     0,     0,     0,     0,     0,     0,   874,     0,     0,
       0,     0,     0,     0,     0,     0,   325,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   889,     0,     0,     0,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,   899,
       0,     0,     0,     0,     0,     0,   390,   390,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
     787,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,     0,     0,    31,
       0,     0,     0,     0,    32,    33,     0,     0,    34,    35,
      36,     0,    37,     0,    38,    39,    40,     0,   825,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,   850,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     0,    74,
      75,     0,    76,   606,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,   237,     9,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,     0,     0,    31,     0,     0,     0,     0,    32,    33,
       0,     0,    34,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,    53,     0,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,     0,    74,    75,     0,    76,   682,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     0,     0,    31,     0,     0,
       0,     0,    32,    33,     0,     0,    34,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,    74,    75,     0,
      76,     0,    77,     0,    78,    79,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,     0,
       0,    31,     0,     0,     0,     0,    32,    33,     0,     0,
       0,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
     370,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,   121,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,    75,     0,    76,   371,    77,     0,    78,    79,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   370,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   121,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,   515,
      77,     0,    78,    79,    80,    81,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,     0,     0,    31,
       0,     0,     0,     0,    32,    33,     0,     0,     0,    35,
      36,     0,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,   724,     0,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,   370,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,   121,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,    74,
      75,     0,    76,     0,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
    -412,  -412,  -412,  -412,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,     0,     0,    31,     0,     0,     0,     0,    32,    33,
       0,     0,     0,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,     0,   742,    43,     0,    44,    45,    46,    47,    48,
      49,    50,   370,    52,     0,    53,     0,    54,    55,    56,
      57,    58,    59,   121,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,    74,    75,     0,    76,     0,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     0,     0,    31,     0,     0,
       0,     0,    32,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,   370,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,   121,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,    74,    75,     0,
      76,   844,    77,     0,    78,    79,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,     0,
       0,    31,     0,     0,     0,     0,    32,    33,     0,     0,
       0,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
     370,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,   121,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,    75,     0,    76,   847,    77,     0,    78,    79,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,   849,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   370,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   121,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
      77,     0,    78,    79,    80,    81,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,     0,     0,    31,
       0,     0,     0,     0,    32,    33,     0,     0,     0,    35,
      36,     0,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,   370,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,   121,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,    74,
      75,     0,    76,   871,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,    27,    28,    29,
      30,     0,     0,    31,     0,     0,     0,     0,    32,    33,
       0,     0,     0,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,   875,     0,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,   370,    52,     0,    53,     0,    54,    55,    56,
      57,    58,    59,   121,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,    74,    75,     0,    76,     0,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,    27,    28,    29,    30,     0,     0,    31,     0,     0,
       0,     0,    32,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,   370,    52,     0,    53,
       0,    54,    55,    56,    57,    58,    59,   121,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,    74,    75,     0,
      76,   893,    77,     0,    78,    79,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,     0,
       0,    31,     0,     0,     0,     0,    32,    33,     0,     0,
       0,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
     370,    52,     0,    53,     0,    54,    55,    56,    57,    58,
      59,   121,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    74,    75,     0,    76,   920,    77,     0,    78,    79,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,    30,     0,     0,    31,     0,     0,     0,     0,
      32,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,   370,    52,     0,    53,     0,    54,
      55,    56,    57,    58,    59,   121,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,    74,    75,     0,    76,   923,
      77,     0,    78,    79,    80,    81,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,    27,    28,    29,    30,     0,     0,    31,
       0,     0,     0,     0,    32,    33,     0,     0,     0,    35,
      36,     0,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,   370,    52,
       0,    53,     0,    54,    55,    56,    57,    58,    59,   121,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,    74,
      75,     0,    76,     0,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   588,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,    29,
      30,     0,     0,    31,     0,     0,     0,     0,     0,    33,
       0,     0,     0,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,     0,    52,     0,    53,     0,     0,    55,    56,
      57,    58,    59,   121,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,     0,    70,    71,
      72,     0,     0,    74,    75,     0,    76,     0,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   599,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,    29,    30,     0,     0,    31,     0,     0,
       0,     0,     0,    33,     0,     0,     0,    35,    36,     0,
      37,     0,    38,    39,    40,     0,     0,     0,    41,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
      45,    46,    47,    48,    49,    50,     0,    52,     0,    53,
       0,     0,    55,    56,    57,    58,    59,   121,    61,    62,
       0,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,     0,    70,    71,    72,     0,     0,    74,    75,     0,
      76,     0,    77,     0,    78,    79,    80,    81,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   618,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30,     0,
       0,    31,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    35,    36,     0,    37,     0,    38,    39,    40,     0,
       0,     0,    41,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,    45,    46,    47,    48,    49,    50,
       0,    52,     0,    53,     0,     0,    55,    56,    57,    58,
      59,   121,    61,    62,     0,     0,     0,     0,     0,    63,
      64,    65,    66,    67,    68,     0,    70,    71,    72,     0,
       0,    74,    75,     0,    76,     0,    77,     0,    78,    79,
      80,    81,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   777,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    30,     0,     0,    31,     0,     0,     0,     0,
       0,    33,     0,     0,     0,    35,    36,     0,    37,     0,
      38,    39,    40,     0,     0,     0,    41,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,     0,    52,     0,    53,     0,     0,
      55,    56,    57,    58,    59,   121,    61,    62,     0,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,     0,
      70,    71,    72,     0,     0,    74,    75,     0,    76,     0,
      77,     0,    78,    79,    80,    81,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   818,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    30,     0,     0,    31,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    35,
      36,     0,    37,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,     0,    52,
       0,    53,     0,     0,    55,    56,    57,    58,    59,   121,
      61,    62,     0,     0,     0,     0,     0,    63,    64,    65,
      66,    67,    68,     0,    70,    71,    72,     0,     0,    74,
      75,     0,    76,     0,    77,     0,    78,    79,    80,    81,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,    29,
      30,     0,     0,    31,     0,     0,     0,     0,     0,    33,
       0,     0,     0,    35,    36,     0,    37,     0,    38,    39,
      40,     0,     0,     0,    41,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,     0,    52,     0,    53,     0,     0,    55,    56,
      57,    58,    59,   121,    61,    62,     0,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,     0,    70,    71,
      72,     0,     0,    74,    75,     0,    76,     0,    77,     0,
      78,    79,    80,    81,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,   120,    30,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     0,     0,     0,    35,     0,     0,
       0,     0,    38,    39,     0,     0,     0,     0,     0,    42,
       0,     0,     0,     0,     0,     0,     0,    43,     0,    44,
       0,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,    55,    56,    57,    58,    59,   121,    61,    62,
       4,     5,     6,     7,     8,     0,    64,   122,    66,     9,
       0,     0,    70,     0,     0,     0,     0,    74,     0,     0,
       0,     0,    77,     0,     0,    79,    80,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,     0,     0,     0,     0,     0,     0,     0,     0,   120,
      30,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,    35,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,    43,     0,    44,     0,     0,    47,    48,
       0,     0,     0,     0,     0,     0,     0,     0,    55,    56,
      57,    58,    59,   121,    61,    62,     4,     5,     6,     7,
       8,     0,    64,   122,    66,     9,     0,     0,    70,     0,
       0,     0,     0,    74,     0,     0,     0,     0,    77,     0,
     167,    79,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,     0,
       0,     0,     0,     0,     0,   120,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,    35,
       0,     0,     0,     0,    38,    39,     0,     0,     0,     0,
       0,    42,     0,     0,     0,     0,     0,     0,     0,    43,
       0,    44,     0,     0,    47,    48,     0,     0,     0,     0,
       0,     0,     0,     0,    55,    56,    57,    58,    59,   121,
      61,    62,     4,     5,     6,     7,     8,     0,    64,   122,
      66,     9,     0,     0,    70,     0,     0,     0,     0,    74,
       0,     0,     0,     0,    77,     0,   170,    79,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,   120,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    33,     0,     0,     0,    35,     0,     0,     0,     0,
      38,    39,     0,     0,     0,     0,     0,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,    44,     0,     0,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
      55,    56,    57,    58,    59,   121,    61,    62,     4,     5,
       6,     7,     8,     0,    64,   122,    66,     9,     0,     0,
      70,     0,     0,     0,     0,    74,     0,     0,     0,     0,
      77,     0,   194,    79,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,     0,     0,     0,     0,     0,   120,    30,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,     0,
       0,    35,     0,     0,     0,     0,    38,    39,     0,     0,
       0,     0,     0,    42,     0,     0,     0,     0,     0,     0,
       0,    43,     0,    44,     0,     0,    47,    48,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    56,    57,    58,
      59,   121,    61,    62,     0,     4,     5,     6,     7,     8,
      64,   122,    66,     0,     9,     0,    70,     0,     0,     0,
       0,    74,     0,     0,     0,     0,    77,   321,   401,    79,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,   120,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    33,     0,     0,     0,    35,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
      42,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,     0,     0,    47,    48,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,   121,    61,
      62,     4,     5,     6,     7,     8,     0,    64,   122,    66,
       9,     0,     0,    70,     0,     0,     0,     0,    74,     0,
       0,     0,     0,    77,     0,     0,    79,    80,    81,   425,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
     120,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,    35,     0,     0,     0,     0,    38,
      39,     0,     0,     0,     0,     0,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,     0,     0,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,   121,    61,    62,     4,     5,     6,
       7,     8,     0,    64,   122,    66,     9,     0,     0,    70,
       0,     0,     0,     0,    74,     0,     0,     0,     0,    77,
       0,     0,    79,    80,    81,   438,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,   120,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
      35,     0,     0,     0,     0,    38,    39,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,     0,     0,    47,    48,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
     121,    61,    62,     4,     5,     6,     7,     8,     0,    64,
     122,    66,     9,     0,     0,    70,     0,     0,     0,     0,
      74,     0,     0,     0,     0,    77,     0,     0,    79,    80,
      81,   453,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,   120,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,    35,     0,     0,     0,
       0,    38,    39,     0,     0,     0,     0,     0,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,     0,
       0,    47,    48,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,   121,    61,    62,     4,
       5,     6,     7,     8,     0,    64,   122,    66,     9,     0,
       0,    70,     0,     0,     0,     0,    74,     0,     0,     0,
       0,    77,     0,     0,    79,    80,    81,   455,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,   120,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     0,
       0,     0,    35,     0,     0,     0,     0,    38,    39,     0,
       0,     0,     0,     0,    42,     0,     0,     0,     0,     0,
       0,     0,    43,     0,    44,     0,     0,    47,    48,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    57,
      58,    59,   121,    61,    62,     4,     5,     6,     7,     8,
       0,    64,   122,    66,     9,     0,     0,    70,     0,     0,
       0,     0,    74,     0,     0,     0,     0,    77,     0,     0,
      79,    80,    81,   645,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,   120,    30,     0,     0,     0,     0,
       0,     0,     0,     0,    33,     0,     0,     0,    35,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
      42,     0,     0,     0,     0,     0,     0,     0,    43,     0,
      44,     0,     0,    47,    48,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    56,    57,    58,    59,   121,    61,
      62,     4,     5,     6,     7,     8,     0,    64,   122,    66,
       9,     0,     0,    70,     0,     0,     0,     0,    74,     0,
       0,     0,     0,    77,     0,     0,    79,    80,    81,   654,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
     120,    30,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,    35,     0,     0,     0,     0,    38,
      39,     0,     0,     0,     0,     0,    42,     0,     0,     0,
       0,     0,     0,     0,    43,     0,    44,     0,     0,    47,
      48,     0,     0,     0,     0,     0,     0,     0,     0,    55,
      56,    57,    58,    59,   121,    61,    62,     4,     5,     6,
       7,     8,     0,    64,   122,    66,     9,     0,     0,    70,
       0,     0,     0,     0,    74,     0,     0,     0,     0,    77,
       0,     0,    79,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,   120,    30,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
      35,     0,     0,     0,     0,    38,    39,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
      43,     0,    44,     0,     0,    47,    48,     0,     0,     0,
       0,     0,     0,     0,     0,    55,    56,    57,    58,    59,
     121,    61,    62,     4,     5,     6,     7,     8,     0,    64,
     122,    66,     9,     0,     0,    70,     0,     0,     0,     0,
      74,     0,     0,     0,     0,    77,     0,     0,    79,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,   120,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,    35,     0,     0,     0,
       0,    38,    39,     0,     0,     0,     0,     0,    42,     0,
       0,     0,     0,     0,     0,     0,    43,     0,    44,     0,
       0,    47,    48,     0,     0,     0,     0,     0,     0,     0,
       0,    55,    56,    57,    58,    59,   121,    61,    62,     0,
       0,     0,     0,     0,     0,    64,   122,   350,     0,     0,
       0,    70,   234,   235,   236,     0,    74,     0,     0,     0,
       0,    77,     0,     0,    79,    80,    81,     0,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,   234,   235,   236,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
       0,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,     0,   259,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,     0,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,     0,     0,     0,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,   260,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   312,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   314,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,     0,     0,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   237,   360,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,     0,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   377,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   450,   237,     0,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,     0,   259,
       0,     0,   234,   235,   236,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   488,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259,     0,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   496,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   234,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,   514,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,     0,     0,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   521,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   671,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   853,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,   234,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     237,   877,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,     0,   234,   235,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   508,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,     0,   259,   234,   235,   236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   530,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,     0,   259,   234,   235,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   237,   566,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,     0,   259,     0,
     234,   235,   236,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   237,   598,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,     0,
     259,   234,   235,   236,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   237,   640,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
       0,   259,     0,     0,   234,   235,   236,   295,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   718,
     237,   555,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,     0,   259,   234,   235,   236,   569,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,     0,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,     0,   259,   235,   236,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   237,     0,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   236,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,     0,   259
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-739))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-412))

static const yytype_int16 yycheck[] =
{
       2,   123,     2,     2,   479,   208,   233,    26,     2,   447,
      26,   259,   277,   489,   279,   525,    26,   438,    21,    22,
     343,   759,   384,    26,   386,     8,     8,    29,     8,     8,
     612,     8,   453,     8,   455,     8,    31,     8,     8,     8,
      61,    26,   112,   165,     8,     8,    40,     8,     8,   276,
       8,    78,   302,     8,    26,    72,    61,    60,     0,    62,
      74,   128,    73,    90,   291,   292,    77,   542,    61,   151,
      73,   146,   146,    61,   301,    31,   146,   304,   305,   128,
     155,   155,    74,     8,   151,    31,   524,    31,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     149,   146,   112,   685,   153,   687,   123,   136,   128,   126,
     155,   128,   133,    61,   128,   126,   626,   128,   120,   136,
      61,    61,   151,   150,    81,   136,    58,    59,   149,   146,
     151,   151,   382,    58,    59,   138,   128,   130,   155,   136,
      78,   152,   130,   146,   149,   883,   151,    61,     8,   152,
     160,   146,    90,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    21,    22,   149,   153,   152,
      26,   153,   152,   176,   153,   537,   153,   149,   153,   182,
     153,   504,   153,   153,   153,   188,   189,   190,   152,   152,
     146,   152,   152,   133,   152,   198,   672,   152,    58,    59,
     146,   149,   146,    64,    65,   128,   209,   210,   149,   149,
     133,    81,   150,   215,   151,    73,   130,   233,   656,    77,
     447,   233,   128,   233,   645,    88,    31,   152,   151,   128,
     128,   151,    95,   654,   128,   133,    99,   136,   128,   133,
     259,   151,    79,   259,    81,   151,   136,    88,    63,   259,
     149,    78,   502,   151,    95,   505,   259,   151,   523,   151,
     276,    72,   772,    90,   276,    63,   276,    72,   126,    99,
     128,   633,   151,   103,    72,   291,   292,   104,   136,   291,
     292,   291,   292,   146,   151,   301,   289,   136,   304,   305,
     146,   301,   152,   156,   304,   305,   299,   524,    21,    22,
     151,   551,   552,    26,   307,   146,   151,   572,   556,   128,
     313,   561,   562,   151,   133,   126,   151,   128,    64,    65,
     176,   126,   129,   128,    72,   136,   182,   689,   126,   136,
     128,   136,   188,   189,   136,   146,    88,    78,   136,   146,
     128,   146,   198,    95,   155,   133,    26,    99,   146,    90,
     155,   103,   151,   209,   149,   149,   128,   155,   153,   361,
     625,   133,    72,   104,   367,   180,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   126,   149,
     128,   384,   126,   386,   128,   588,   389,   397,   136,   151,
     752,   151,   136,   136,   146,    31,   599,    88,   146,    88,
     650,   149,   136,   259,    95,    61,    95,   155,    99,   133,
      99,    58,    59,   888,   103,   618,   126,   126,   128,   128,
      21,    22,   425,   146,   151,   133,   136,   136,    61,   656,
     130,   447,   128,   112,    49,   438,   146,   447,    67,    68,
      69,    70,    71,    72,   128,   155,   133,   712,   713,     8,
     453,   133,   455,   176,   157,   146,    85,   146,   128,   182,
     275,   128,   465,   466,   467,   188,   189,    88,   471,   831,
     832,   133,   136,   151,    95,   198,   479,    88,    99,   482,
     133,   130,   146,    13,    95,   149,   209,   302,   491,   492,
     484,   155,   103,    13,   497,   136,   499,   500,   860,   147,
     152,   503,   496,   503,   503,   136,   153,   153,   524,   503,
     153,   136,    88,   516,   524,   144,   145,   152,   107,    95,
     154,   150,   884,    99,   107,   146,   130,   521,   151,   532,
     146,   534,   151,    13,   537,   146,   259,   556,   152,   542,
     556,   151,     8,   152,   151,   907,   556,   909,   307,    74,
     153,   153,   150,   556,   313,    67,    68,    69,    70,    71,
      72,   764,    45,    46,    47,    61,    49,   382,   136,   425,
     146,   774,   136,    85,   777,   136,   579,   580,   151,    13,
     117,   584,   438,   157,   307,   146,   151,   790,   149,   151,
     313,   136,   595,   151,   155,   151,     8,   453,   152,   455,
     151,   146,   805,   151,   149,   607,   128,   607,   607,   151,
     155,   157,   152,   607,   157,   818,   133,    13,   136,    13,
     823,   157,    79,   136,   827,   153,   629,   130,   152,   152,
     633,   128,   144,   145,   637,   491,   492,     8,   150,   149,
     656,   497,   645,   499,   500,   152,   656,     8,   130,   151,
      96,   654,   855,   157,     8,   103,    13,   660,   136,   662,
     516,   152,   151,   153,    96,   152,   669,   152,   670,   153,
     673,   157,   153,   200,   153,   677,   203,   149,   152,   801,
      67,    68,    69,    70,    71,    72,   689,   502,   690,   892,
     505,   218,   144,   220,    13,   222,   223,   146,   152,   152,
     556,   704,   425,    61,    13,   152,   465,   466,   467,   152,
      61,   914,   157,   152,   152,   438,   153,   152,   921,   150,
      96,   157,   151,   482,   149,   112,   152,   149,   151,   153,
     453,   152,   455,   153,   728,   729,   551,   552,   732,   595,
     146,   136,   465,   466,   467,   560,   561,   562,   153,   752,
      42,    43,    44,    45,    46,    47,   758,    49,   146,   482,
     149,   146,    13,    26,   767,   157,   157,   151,   491,   492,
     773,    66,   153,   532,   497,   152,   499,   500,    13,    13,
     136,   146,   776,    67,    68,    69,    70,    71,    72,   645,
      13,   153,   136,   516,   149,    13,   146,    74,   654,    74,
     153,   150,   119,   133,    13,   153,   153,   809,   811,   532,
     151,   146,    26,   153,   136,   817,   136,   673,    79,   821,
     579,   136,     8,   152,   151,   584,   828,   830,   831,   832,
     146,   152,   835,   556,   367,   650,   149,   673,   840,   904,
     516,   596,   845,   537,   729,   637,   848,   860,   787,   851,
     696,   526,   854,    77,   331,   668,   579,   860,   644,   853,
     579,   584,   578,   500,   182,   623,   166,   870,    -1,   499,
      -1,    -1,   595,    -1,    -1,    -1,    -1,   879,    -1,    21,
      22,   884,    -1,    -1,   887,   888,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   901,
      -1,   660,    -1,   662,   907,    -1,   909,    -1,    -1,    -1,
     669,    -1,    -1,    -1,    -1,    -1,   918,    -1,    -1,    -1,
     922,    63,   645,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   654,    58,    59,    -1,    -1,    -1,   660,    -1,   662,
      -1,    -1,    -1,    -1,    -1,   704,   669,    -1,    74,    -1,
     673,    -1,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      36,   704,    -1,    -1,    -1,    41,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    -1,    42,
      43,    -1,    -1,    -1,   146,    -1,    -1,    63,   767,    -1,
      -1,    -1,    68,    -1,   773,    -1,    -1,    -1,    61,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    58,    59,    -1,   176,    -1,    -1,    -1,   180,    82,
     182,    -1,    -1,    86,   767,    -1,   188,   189,    91,    92,
     773,    -1,   811,    -1,    -1,    -1,   198,    -1,    -1,   115,
     116,   117,   118,   119,    -1,   108,    -1,   209,   111,   307,
      -1,   830,    -1,    -1,    -1,   313,   835,    -1,    -1,   122,
      -1,   124,   125,   126,   127,   128,   845,    -1,   811,    -1,
      -1,    -1,   135,   136,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   830,    -1,    -1,
     166,   870,   835,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   177,   845,   179,   180,    -1,    -1,    -1,   887,    -1,
      -1,   187,    -1,   275,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   199,    -1,    -1,    -1,   870,    -1,    -1,
     206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,
     302,    -1,    -1,    -1,   887,   221,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,    -1,    -1,    -1,    -1,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
      -1,   277,    -1,   279,   280,    -1,    -1,   465,   466,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   295,
     382,   297,    -1,    -1,   482,    -1,   302,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,   318,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   328,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   425,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   532,    -1,   438,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,   453,    -1,   455,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   382,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   393,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   401,   584,    -1,    -1,   491,
     492,    -1,    -1,    -1,    -1,   497,    -1,   499,   500,    -1,
     502,    -1,    -1,   505,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,   516,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,   551,
     552,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   560,   561,
     562,    -1,   660,    -1,   662,    -1,    -1,    -1,    -1,   485,
      -1,   669,    -1,   489,   490,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   502,    -1,    -1,   505,
      -1,   507,    -1,   595,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   704,   523,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,   551,   552,    -1,    -1,   555,
      -1,    -1,    -1,   645,   560,   561,   562,    -1,   650,    -1,
      -1,    -1,   654,   569,   157,    -1,   572,   573,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   767,
      -1,   673,    -1,    -1,    -1,   773,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   604,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   625,
      49,    -1,    -1,   811,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,   830,    49,   650,    -1,    -1,   835,   153,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   845,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   672,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   870,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,   887,
      -1,    -1,    -1,    -1,    -1,    -1,   712,   713,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
     736,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    85,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,   784,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,   822,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,    -1,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    25,    12,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    85,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,    -1,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    85,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,    -1,   146,   147,    -1,
     149,    -1,   151,    -1,   153,   154,   155,   156,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
      -1,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,   100,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    -1,    -1,   146,
     147,    -1,   149,    -1,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,    -1,    -1,   146,   147,    -1,
     149,   150,   151,    -1,   153,   154,   155,   156,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
      -1,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,   102,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    -1,    -1,   146,
     147,    -1,   149,   150,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,   101,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,    -1,    -1,   146,   147,    -1,
     149,   150,   151,    -1,   153,   154,   155,   156,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,    -1,
      -1,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,    -1,    -1,   146,
     147,    -1,   149,    -1,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,    -1,   116,    -1,   118,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,    -1,   141,   142,
     143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,    -1,   118,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,    -1,   141,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,    -1,   153,   154,   155,   156,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,    -1,   118,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,    -1,   141,   142,   143,    -1,
      -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
      -1,   118,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,    -1,   141,   142,   143,    -1,    -1,   146,
     147,    -1,   149,    -1,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,    -1,   116,    -1,   118,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,    -1,   141,   142,
     143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
      -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
       3,     4,     5,     6,     7,    -1,   135,   136,   137,    12,
      -1,    -1,   141,    -1,    -1,    -1,    -1,   146,    -1,    -1,
      -1,    -1,   151,    -1,    -1,   154,   155,   156,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,     3,     4,     5,     6,
       7,    -1,   135,   136,   137,    12,    -1,    -1,   141,    -1,
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    -1,
     153,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,     3,     4,     5,     6,     7,    -1,   135,   136,
     137,    12,    -1,    -1,   141,    -1,    -1,    -1,    -1,   146,
      -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,   156,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,
     111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,     3,     4,
       5,     6,     7,    -1,   135,   136,   137,    12,    -1,    -1,
     141,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,
     151,    -1,   153,   154,   155,   156,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,     3,     4,     5,     6,     7,
     135,   136,   137,    -1,    12,    -1,   141,    -1,    -1,    -1,
      -1,   146,    -1,    -1,    -1,    -1,   151,   152,    26,   154,
     155,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,     3,     4,     5,     6,     7,    -1,   135,   136,   137,
      12,    -1,    -1,   141,    -1,    -1,    -1,    -1,   146,    -1,
      -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,     3,     4,     5,
       6,     7,    -1,   135,   136,   137,    12,    -1,    -1,   141,
      -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,   154,   155,   156,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,     3,     4,     5,     6,     7,    -1,   135,
     136,   137,    12,    -1,    -1,   141,    -1,    -1,    -1,    -1,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,
     156,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,
      -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,     3,
       4,     5,     6,     7,    -1,   135,   136,   137,    12,    -1,
      -1,   141,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,
      -1,   151,    -1,    -1,   154,   155,   156,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,     3,     4,     5,     6,     7,
      -1,   135,   136,   137,    12,    -1,    -1,   141,    -1,    -1,
      -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,
     154,   155,   156,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,     3,     4,     5,     6,     7,    -1,   135,   136,   137,
      12,    -1,    -1,   141,    -1,    -1,    -1,    -1,   146,    -1,
      -1,    -1,    -1,   151,    -1,    -1,   154,   155,   156,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,     3,     4,     5,
       6,     7,    -1,   135,   136,   137,    12,    -1,    -1,   141,
      -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,
      -1,    -1,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,     3,     4,     5,     6,     7,    -1,   135,
     136,   137,    12,    -1,    -1,   141,    -1,    -1,    -1,    -1,
     146,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,   155,
     156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,    -1,
      -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,    -1,    -1,
      -1,   141,     9,    10,    11,    -1,   146,    -1,    -1,    -1,
      -1,   151,    -1,    -1,   154,   155,   156,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   153,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   153,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   153,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   153,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   152,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   152,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   152,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   152,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   150,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   150,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   150,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,     9,    10,    11,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    11,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   159,   160,     0,     3,     4,     5,     6,     7,    12,
      42,    43,    48,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    70,    71,    72,
      73,    76,    81,    82,    85,    86,    87,    89,    91,    92,
      93,    97,    98,   106,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   118,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   146,   147,   149,   151,   153,   154,
     155,   156,   161,   162,   167,   170,   171,   177,   178,   180,
     182,   185,   187,   242,   243,   244,   247,   250,   259,   262,
     266,   267,   269,   270,   278,   279,   280,   281,   282,   283,
     284,   285,   290,   298,   304,   302,   301,   151,   300,   299,
      72,   126,   136,   244,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,    72,   126,   128,   161,
     250,   269,   270,   280,   269,   266,    31,   266,   293,   294,
     266,   126,   128,   161,   250,   252,   253,   280,   283,   284,
     290,    81,    81,   146,   212,   244,   151,   153,   266,   136,
     153,   266,   151,   170,   235,   266,   151,   151,   256,   151,
     151,   146,   155,   210,   211,   136,   151,   151,   151,   151,
     128,   149,   161,   161,   153,   243,   266,   270,    88,    95,
      99,   103,   146,   295,   296,    26,   151,   266,   149,   151,
     128,   161,   165,   166,   151,   168,   242,   266,    99,   257,
     295,   149,    99,   295,   128,   151,     8,   153,   136,   136,
      31,   179,    61,   133,     9,    10,    11,    25,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    49,
     153,    58,    59,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   151,   133,    61,   271,    61,
     149,   155,   284,   266,   266,   266,   266,   266,   179,   128,
     161,   133,   133,   268,   270,    96,   157,     8,   264,   128,
     161,   133,   151,   258,   133,   130,   284,    13,     8,   153,
     179,   293,   153,    13,   153,   136,   196,   147,     8,   153,
     270,   152,   266,   236,   237,   266,   243,   270,   149,   267,
     270,     8,   153,   153,   152,   266,   270,   303,   123,   270,
     291,   292,   161,   164,   149,   153,   151,   153,   153,   270,
     137,   266,   103,   296,    61,   130,    99,   103,   296,   266,
     153,   168,   175,   176,   270,   161,    74,     8,   153,   266,
     115,   150,   169,   170,   177,   178,   152,   152,   154,   266,
     156,   136,   248,   136,   107,   186,   107,   188,   136,   151,
     266,   286,   136,   149,   278,   284,   289,   290,   266,   266,
     266,    26,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   252,    31,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,    31,   208,
     209,   243,   270,   136,   278,   289,   286,   130,   286,   266,
     152,   161,   136,    31,   266,    31,   266,   161,   278,   208,
     278,   278,   287,   288,   289,    42,    43,    61,    73,    82,
     126,   128,   135,   161,   250,   259,   260,   261,   146,   151,
     152,   260,    13,     8,   152,   151,   266,   152,   152,   153,
       8,    74,    74,   266,   211,   153,   152,     8,   152,   151,
       8,   152,   151,   160,   163,   249,   150,    61,   150,   129,
     136,   146,   297,   136,   152,   150,     8,   152,    74,   136,
     166,   152,   151,    61,   130,   238,   239,   240,   241,   274,
     150,   208,    13,   126,   128,   161,   251,   117,   189,   190,
     251,   184,   151,    73,    77,   205,   206,   207,   251,   157,
     266,   151,   151,   284,   266,    26,    63,   270,   268,   152,
       8,   151,   151,   157,   287,   157,   150,   268,   268,    96,
     152,   254,    61,   149,   260,   260,   260,   263,   265,   151,
     128,   161,    99,   133,    13,   205,   260,   136,    26,   170,
     195,   266,   236,   266,   270,    31,   192,   270,   150,    26,
     170,   270,   291,   292,    13,   208,   150,   160,   208,   266,
     157,    26,   149,   197,    79,   176,   153,   136,    26,   170,
     200,   152,   286,   287,   274,    61,   238,   152,   260,   128,
     161,   190,   183,     8,   149,   205,   152,     8,    31,   146,
     150,   208,   208,   266,   252,    31,   243,   270,   208,   208,
     151,   275,   276,   277,    31,   266,   130,   255,   286,   266,
      96,   157,     8,   264,   263,   161,   136,   260,   152,    13,
     168,   152,   153,    96,   191,   270,   191,   168,   201,   152,
     266,   152,   150,   152,   157,   153,   198,   153,   198,   151,
     168,   153,   157,   277,   286,   161,   149,   251,   213,   152,
     144,   245,   207,   146,    13,   152,   152,   258,   268,   152,
     152,   208,    61,    61,   272,   268,   287,   157,   150,   260,
     260,   152,   245,   260,   100,   153,   236,   192,   152,   152,
     202,    64,    65,   203,   150,   198,    78,    90,   104,   198,
     150,   251,   105,   157,   213,    67,    68,    69,    70,    71,
      72,    85,   144,   145,   150,   214,   216,   229,   230,   231,
     232,   234,   181,   151,   149,    31,   146,    13,   260,   152,
     286,   286,   273,    96,   149,   153,   152,    26,   170,   194,
     194,    64,    65,   204,   151,   170,   104,   266,    26,   153,
     199,   153,   150,   146,   153,   150,   136,   217,   251,   146,
     233,   244,   232,     8,   153,   149,    31,   146,   246,   168,
     146,    13,   260,   157,   157,   274,   260,   168,    26,   170,
     193,   168,   151,    26,    66,   266,   153,   199,   168,   152,
      13,     8,   149,   153,   218,    13,     8,   153,   179,   136,
     168,   146,     8,   152,   150,    13,   260,   150,   168,   102,
     266,   168,   153,   152,   168,   149,   260,   251,   136,   219,
     220,   221,   222,   224,   225,   226,   251,   260,   146,   136,
      13,   150,    31,   146,   260,   101,   153,   152,   170,   168,
     150,   221,   153,    74,   119,   153,   133,    13,   151,   260,
     146,   153,    26,   150,   227,   232,   223,   251,   136,   260,
     205,   168,    79,   172,   173,   174,   136,     8,   152,   151,
     174,   251,   215,   251,   149,   153,   228,   146,   168,   152,
     150,   149,   168,   150
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (analyzer, observers, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, analyzer, observers)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, analyzer, observers); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, analyzer, observers)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ResourceParserObserverClass &observers;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (analyzer);
  YYUSE (observers);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, analyzer, observers)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ResourceParserObserverClass &observers;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, analyzer, observers);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers)
#else
static void
yy_reduce_print (yyvsp, yyrule, analyzer, observers)
    YYSTYPE *yyvsp;
    int yyrule;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ResourceParserObserverClass &observers;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , analyzer, observers);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, analyzer, observers); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, analyzer, observers)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ResourceParserObserverClass &observers;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (analyzer);
  YYUSE (observers);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (pelet::LexicalAnalyzerClass &analyzer, pelet::ResourceParserObserverClass &observers)
#else
int
yyparse (analyzer, observers)
    pelet::LexicalAnalyzerClass &analyzer;
    pelet::ResourceParserObserverClass &observers;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
      yychar = YYLEX;
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1806 of yacc.c  */
#line 360 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.MakeAst((yyvsp[(1) - (1)].statementList)); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 364 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->PushAll((yyvsp[(2) - (2)].statementList)); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 365 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 369 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, (yyvsp[(1) - (1)].lexeme)); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 370 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (3)].qualifiedName)->AppendName((yyvsp[(3) - (3)].lexeme)); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 374 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 375 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 376 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 377 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 378 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(2) - (3)].qualifiedName), (yyvsp[(1) - (3)].token));  
												  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, decl);
												  observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); 
												}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 383 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.SetDeclaredNamespace((yyvsp[(2) - (3)].qualifiedName)); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 384 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(2) - (6)].qualifiedName), (yyvsp[(1) - (6)].token));
												  (yyval.statementList) = (yyvsp[(5) - (6)].statementList)->PushFront(decl);
												}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 388 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.SetDeclaredNamespace(NULL); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 389 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { 
												  pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(1) - (5)].token));
												  (yyval.statementList) = (yyvsp[(4) - (5)].statementList)->PushFront(decl);
												}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 394 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = pelet::NamespaceUseClass::SetStartingPos((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].token)); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 395 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (2)].statementList)); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 400 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].namespaceUse)); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 401 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].namespaceUse)); }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 405 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(1) - (1)].qualifiedName), NULL); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 408 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].lexeme)); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 411 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(2) - (2)].qualifiedName), NULL); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 414 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(2) - (4)].qualifiedName), (yyvsp[(4) - (4)].lexeme)); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																}
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 420 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																	(yyvsp[(3) - (5)].lexeme), analyzer.GetLineNumber(), 
																	observers.GetDeclaredNamespace());
																  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(constStmt);
																}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 426 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																    (yyvsp[(2) - (4)].lexeme), analyzer.GetLineNumber(),
																    observers.GetDeclaredNamespace());
																  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, constStmt);																	
																}
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 435 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->PushAll((yyvsp[(2) - (2)].statementList)); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 436 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 443 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 447 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 448 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 452 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 453 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(5) - (7)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(6) - (7)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(7) - (7)].statementList));
																									}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 457 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(6) - (10)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(7) - (10)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(8) - (10)].statementList));
																									}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 461 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 462 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (7)].statementList); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 471 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(9) - (9)].statementList); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 472 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 473 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 474 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 475 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 476 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 477 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 478 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 479 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 480 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 481 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 482 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 483 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 484 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (2)].statement)); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 485 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 488 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(8) - (8)].statementList); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 491 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(8) - (8)].statementList); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 492 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 493 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 497 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(3) - (13)].statementList), (yyvsp[(11) - (13)].statementList));
																									  AST_PUSH_ALL_MERGE((yyval.statementList), (yyval.statementList), (yyvsp[(13) - (13)].statementList));
																									}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 500 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(2) - (3)].statement)); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 501 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 505 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 506 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 510 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 511 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 516 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) =  (yyvsp[(7) - (8)].statementList); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 520 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 521 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 525 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 537 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.isReference) = false; }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 538 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.isReference) = true; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 543 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.SetCurrentClassName(NULL); observers.SetCurrentMemberName((yyvsp[(3) - (6)].lexeme)); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 544 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* member;
											  AST_INIT(member, pelet::ClassMemberSymbolClass);
											  member->MakeFunction((yyvsp[(3) - (10)].lexeme), (yyvsp[(2) - (10)].isReference), (yyvsp[(1) - (10)].lexeme), (yyvsp[(5) - (10)].parametersList), (yyvsp[(8) - (10)].token), (yyvsp[(10) - (10)].token),
												observers.GetScope(), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(9) - (10)].statementList);
											  (yyval.statementList)->PushFront(member);
											  observers.SetCurrentMemberName(NULL);
											}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 556 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].lexeme)); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 557 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll((yyvsp[(2) - (8)].lexeme), (yyvsp[(1) - (8)].classSymbol), (yyvsp[(3) - (8)].classSymbol), (yyvsp[(4) - (8)].classSymbol), (yyvsp[(8) - (8)].token), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(7) - (8)].statementList)->PushFront(clazz);
											  
											  /* at the end of a class, see if any assigned properties were not explicitly
											   * defined and it so make them as defined
											   *  very important to use $$ as we want the returned to list to be modified
											   */
											  observers.DeclareAssignedProperties((yyval.statementList));
											  
											  /*
											   * parse out property and method PHP docs
											   */
											  observers.CreateMagicMethodsAndProperties((yyval.statementList), clazz);
											  observers.SetCurrentClassName(NULL);
											}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 575 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (3)].lexeme)); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 576 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll((yyvsp[(2) - (7)].lexeme), (yyvsp[(1) - (7)].classSymbol), NULL, (yyvsp[(3) - (7)].classSymbol), (yyvsp[(7) - (7)].token), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(6) - (7)].statementList)->PushFront(clazz);
											  observers.SetCurrentClassName(NULL);
											}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 585 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, false, false); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 586 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (2)].lexeme), true, false, false, false); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 587 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, false, true); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 588 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (2)].lexeme), false, true, false, false); }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 592 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.classSymbol) = 0; }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 594 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass);
										  (yyval.classSymbol)->SetExtends((yyvsp[(2) - (2)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); 
										}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 600 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, true, false); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 604 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.classSymbol) = 0; }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 606 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 610 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags(NULL, false, false, false, false); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 612 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 616 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); 
															  (yyval.classSymbol)->AddToImplements((yyvsp[(1) - (1)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); 
															}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 619 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.classSymbol) = (yyvsp[(1) - (3)].classSymbol)->AddToImplements((yyvsp[(3) - (3)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 623 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 624 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 628 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 629 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (2)].statement); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 633 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 634 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 638 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 639 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 643 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 644 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 648 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 649 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 653 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 654 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 655 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 656 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (5)].statementList); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 660 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 661 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 662 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(4) - (4)].statementList); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 666 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 667 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 671 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 672 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 676 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 677 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass);
															  (yyval.statementList)->PushAll((yyvsp[(1) - (6)].statementList))->Push((yyvsp[(4) - (6)].statement))->PushAll((yyvsp[(6) - (6)].statementList));
															}
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 683 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 684 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass);
																				  (yyval.statementList)->PushAll((yyvsp[(1) - (7)].statementList))->Push((yyvsp[(4) - (7)].statement))->PushAll((yyvsp[(7) - (7)].statementList));
																			  	}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 690 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 691 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (2)].statementList); }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 695 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 696 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList); }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 700 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 701 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.parametersList) = 0; }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 705 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (2)].qualifiedName), (yyvsp[(2) - (2)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 706 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 707 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (5)].qualifiedName), (yyvsp[(3) - (5)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 708 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (4)].qualifiedName), (yyvsp[(2) - (4)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 709 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (4)].parametersList)->Append((yyvsp[(3) - (4)].qualifiedName), (yyvsp[(4) - (4)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 710 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (5)].parametersList)->Append((yyvsp[(3) - (5)].qualifiedName), (yyvsp[(5) - (5)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 711 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (7)].parametersList)->Append((yyvsp[(3) - (7)].qualifiedName), (yyvsp[(5) - (7)].lexeme), true, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 712 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.parametersList) = (yyvsp[(1) - (6)].parametersList)->Append((yyvsp[(3) - (6)].qualifiedName), (yyvsp[(4) - (6)].lexeme), false, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 716 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = 0; }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 717 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 718 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, UNICODE_STRING_SIMPLE("array")); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 719 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, UNICODE_STRING_SIMPLE("callable")); }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 723 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 724 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) =  0; }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 728 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if (observers.DoCaptureCallArguments) {
																				AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement));
																			  }
																			  else {
																				(yyval.statementList) = 0;
																			  }
																			}
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 735 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if (observers.DoCaptureCallArguments) {
																				AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement));
																			  }
																			  else {
																				(yyval.statementList) = 0;
																			  } 
																			}
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 742 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if (observers.DoCaptureCallArguments) {
																				AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(2) - (2)].statement));
																			  }
																			  else {
																				(yyval.statementList) = 0;
																			  }
																			}
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 749 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList) ? (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)) : 0; }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 750 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList) ? (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)) : 0; }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 751 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (4)].statementList) ? (yyvsp[(1) - (4)].statementList)->Push((yyvsp[(4) - (4)].statement)) : 0; }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 760 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 761 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 762 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 766 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 767 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 768 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 769 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 773 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 774 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 778 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = pelet::ClassMemberSymbolClass::MakeVariables((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].classMemberSymbol), observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 779 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 780 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 782 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.SetCurrentMemberName((yyvsp[(4) - (7)].lexeme)); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 783 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
															  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
															  memberSymbol->MakeMethod((yyvsp[(4) - (9)].lexeme), (yyvsp[(1) - (9)].classMemberSymbol), (yyvsp[(3) - (9)].isReference), (yyvsp[(2) - (9)].lexeme), (yyvsp[(6) - (9)].parametersList), (yyvsp[(9) - (9)].classMemberSymbol),
															    observers.GetScope(), observers.GetDeclaredNamespace()); 
															  AST_INIT((yyval.statementList), pelet::StatementListClass);
															  (yyval.statementList)->PushFront(memberSymbol);
															  (yyval.statementList)->PushAll(&((yyvsp[(9) - (9)].classMemberSymbol)->MethodStatements));
															  observers.SetCurrentMemberName(NULL);
															}
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 796 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList)->PushFront((yyvsp[(2) - (3)].traitUse)); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 800 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.traitUse), pelet::TraitUseClass, (yyvsp[(1) - (1)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 802 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.traitUse) = (yyvsp[(1) - (3)].traitUse)->AppendUse((yyvsp[(3) - (3)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 806 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 807 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 811 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 812 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 816 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 817 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->Push((yyvsp[(2) - (2)].statement)); }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 821 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (2)].traitInsteadOf); }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 822 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (2)].traitAlias); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 827 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.traitInsteadOf) = (yyvsp[(3) - (3)].traitInsteadOf)->SetMethodReference((yyvsp[(1) - (3)].traitAlias)); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 831 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.traitInsteadOf), pelet::TraitInsteadOfClass, (yyvsp[(1) - (1)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 832 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.traitInsteadOf) = (yyvsp[(1) - (3)].traitInsteadOf)->AppendInsteadOf((yyvsp[(3) - (3)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 836 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.traitAlias), pelet::TraitAliasClass); 
														  (yyval.traitAlias)->SetMethodReference((yyvsp[(1) - (1)].lexeme), NULL, observers.GetScope(), observers.GetDeclaredNamespace()); 
														}
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 839 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (1)].traitAlias); }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 843 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.traitAlias), pelet::TraitAliasClass); 
																	  (yyval.traitAlias)->SetMethodReference((yyvsp[(3) - (3)].lexeme), (yyvsp[(1) - (3)].qualifiedName), observers.GetScope(), observers.GetDeclaredNamespace());
																	}
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 849 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (4)].traitAlias)->SetModifiers((yyvsp[(3) - (4)].lexeme))->SetAlias((yyvsp[(4) - (4)].lexeme))->SetScope(observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 850 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.traitAlias) = (yyvsp[(1) - (3)].traitAlias)->SetModifiers((yyvsp[(3) - (3)].lexeme))->SetScope(observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 854 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = 0; }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 855 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 859 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->MakeBody(0, (yyvsp[(1) - (1)].token), (yyvsp[(1) - (1)].token)); }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 860 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->MakeBody((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].token), (yyvsp[(3) - (3)].token)); }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 864 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 865 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass);
										  (yyval.classMemberSymbol)->MakeAsPublicVariable((yyvsp[(1) - (1)].lexeme), observers.GetScope(), observers.GetDeclaredNamespace()); 
										}
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 871 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->Make(NULL, observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 872 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 876 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->Make((yyvsp[(1) - (1)].lexeme), observers.GetScope(), observers.GetDeclaredNamespace()); }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 877 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (2)].classMemberSymbol)->SetModifier((yyvsp[(2) - (2)].lexeme)); }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 890 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(3) - (3)].lexeme), (yyvsp[(3) - (3)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push(memberSymbol);
																		}
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 896 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(3) - (5)].lexeme), (yyvsp[(3) - (5)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(memberSymbol);
																		}
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 902 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(1) - (1)].lexeme), (yyvsp[(1) - (1)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
																		}
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 908 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(1) - (3)].lexeme), (yyvsp[(1) - (3)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetDeclaredNamespace());
																		  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
																		}
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 918 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable((yyvsp[(3) - (5)].lexeme), (yyvsp[(3) - (5)].lexeme), true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetDeclaredNamespace());
											  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(memberSymbol);
											}
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 924 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable((yyvsp[(2) - (4)].lexeme), (yyvsp[(1) - (4)].lexeme), true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetDeclaredNamespace());
											  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
											}
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 933 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 934 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 938 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 939 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 943 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 944 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 949 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 954 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 964 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 965 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 969 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 973 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(6) - (6)].statement); }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 974 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    {
																			  /* 
																			   * since this parser only looks for defines or property assignments
																			   * and there could never be both in one expression we can return
																			   * just one
																			   */
																			  if ((yyvsp[(1) - (3)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (3)].statement)->Type) {
																				(yyval.statement) = (yyvsp[(1) - (3)].statement);
																			  }
																			  else {
																				(yyval.statement) = (yyvsp[(3) - (3)].statement);
																			  } 
																			}
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 987 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; 
																			  if ((yyvsp[(1) - (4)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (4)].statement)->Type) {
																				(yyval.statement) = (yyvsp[(1) - (4)].statement);
																			  }
																			}
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 992 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; 
																			  if ((yyvsp[(1) - (6)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (6)].statement)->Type) {
																				(yyval.statement) = (yyvsp[(1) - (6)].statement);
																			  }
																			}
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 997 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 998 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 999 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 1000 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 1001 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 1002 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 1003 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 1004 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 1005 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 1006 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 1007 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 1008 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 1009 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 1010 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 1011 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 1012 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 1013 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 1014 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 1015 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 1016 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 1017 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 1018 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 1019 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 1020 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 1021 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 1022 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 1023 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 1024 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 1025 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 1026 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 1027 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 1028 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 1029 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 1030 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 1031 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 1032 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 1033 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 1034 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 1035 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 1036 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 1037 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 1038 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 1039 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 1040 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 1041 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 1042 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (3)].statement); }
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 1043 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 1044 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 1047 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 1049 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 1050 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 1051 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 1052 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 1053 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 1054 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 1055 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 1056 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 1057 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 1058 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 1059 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(2) - (2)].statement); }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 1060 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 1061 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 1062 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 1063 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 1064 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 1066 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 1068 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 1076 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 1077 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 1081 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 1082 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 1083 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 1084 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 1088 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if ((yyvsp[(1) - (2)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) { 
																							observers.DoCaptureScalars = true;
																							observers.DoCaptureCallArguments = true; 
																						  }
																						}
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 1093 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { /* this parser is only interested in calls to the define function */
																						  if ((yyvsp[(1) - (5)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) {
																							pelet::ConstantStatementClass* constStmt;
																							AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, (yyvsp[(1) - (5)].qualifiedName), (yyvsp[(4) - (5)].statementList), analyzer.GetLineNumber());
																							(yyval.statement) = constStmt;
																						  }
																						  else {
																							(yyval.statement) = 0;
																						  }
																						  observers.DoCaptureScalars = false;	
																						  observers.DoCaptureCallArguments = false; 
																						}
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 1107 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 1108 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if ((yyvsp[(2) - (3)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) { 
																							observers.DoCaptureScalars = true; 
																							observers.DoCaptureCallArguments = true; 
																						  }
																						}
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 1113 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { /* this parser is only interested in calls to the define function */
																						  if ((yyvsp[(2) - (6)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) {
																							pelet::ConstantStatementClass* constStmt;
																							AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, (yyvsp[(2) - (6)].qualifiedName), (yyvsp[(5) - (6)].statementList), analyzer.GetLineNumber());
																							(yyval.statement) = constStmt;
																						  }
																						  else {
																							(yyval.statement) = 0;
																						  }	
																						  observers.DoCaptureScalars = false;
																						  observers.DoCaptureCallArguments = false; 
																						}
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 1126 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 1128 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 1130 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 1132 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 1134 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 1138 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = 0; }
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 1139 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 1140 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(3) - (3)].qualifiedName)->MakeFromDeclaredNamespace(&observers.GetDeclaredNamespace()); }
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 1141 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(2) - (2)].qualifiedName)->MakeAbsolute(); }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 1145 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 1146 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(3) - (3)].qualifiedName)->MakeFromDeclaredNamespace(&observers.GetDeclaredNamespace()); }
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 1147 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(2) - (2)].qualifiedName)->MakeAbsolute(); }
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 1151 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 314:

/* Line 1806 of yacc.c  */
#line 1152 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); }
    break;

  case 315:

/* Line 1806 of yacc.c  */
#line 1157 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = 0; }
    break;

  case 316:

/* Line 1806 of yacc.c  */
#line 1158 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.qualifiedName) = 0; }
    break;

  case 317:

/* Line 1806 of yacc.c  */
#line 1162 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 318:

/* Line 1806 of yacc.c  */
#line 1163 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 319:

/* Line 1806 of yacc.c  */
#line 1167 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 1171 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 1172 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 1173 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 1177 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 1178 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 1179 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 326:

/* Line 1806 of yacc.c  */
#line 1183 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 1184 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 328:

/* Line 1806 of yacc.c  */
#line 1188 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if (observers.DoCaptureScalars) {
																				pelet::ScalarExpressionClass* scalarExpr;
																				AST_INIT_ARGS(scalarExpr, pelet::ScalarExpressionClass, (yyvsp[(1) - (1)].lexeme));
																				(yyval.statement) = scalarExpr;
																			  }
																			  else { 
																			    (yyval.statement) = 0; 
																			  }
																			}
    break;

  case 329:

/* Line 1806 of yacc.c  */
#line 1197 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if (observers.DoCaptureScalars) {
																				pelet::ScalarExpressionClass* scalarExpr;
																				AST_INIT_ARGS(scalarExpr, pelet::ScalarExpressionClass, (yyvsp[(1) - (1)].lexeme));
																				(yyval.statement) = scalarExpr;
																			  }
																			  else { 
																			    (yyval.statement) = 0; 
																			  }
																			}
    break;

  case 330:

/* Line 1806 of yacc.c  */
#line 1206 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if (observers.DoCaptureScalars) {
																				pelet::ScalarExpressionClass* scalarExpr;
																				AST_INIT_ARGS(scalarExpr, pelet::ScalarExpressionClass, (yyvsp[(1) - (1)].lexeme));
																				(yyval.statement) = scalarExpr;
																			  }
																			  else { 
																			    (yyval.statement) = 0; 
																			  }
																			}
    break;

  case 331:

/* Line 1806 of yacc.c  */
#line 1215 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 332:

/* Line 1806 of yacc.c  */
#line 1216 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 333:

/* Line 1806 of yacc.c  */
#line 1217 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 334:

/* Line 1806 of yacc.c  */
#line 1218 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 335:

/* Line 1806 of yacc.c  */
#line 1219 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 336:

/* Line 1806 of yacc.c  */
#line 1220 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 337:

/* Line 1806 of yacc.c  */
#line 1221 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 338:

/* Line 1806 of yacc.c  */
#line 1222 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 339:

/* Line 1806 of yacc.c  */
#line 1223 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 340:

/* Line 1806 of yacc.c  */
#line 1227 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 1228 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 1229 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 343:

/* Line 1806 of yacc.c  */
#line 1230 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 344:

/* Line 1806 of yacc.c  */
#line 1231 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 345:

/* Line 1806 of yacc.c  */
#line 1232 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 346:

/* Line 1806 of yacc.c  */
#line 1233 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 347:

/* Line 1806 of yacc.c  */
#line 1234 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 348:

/* Line 1806 of yacc.c  */
#line 1235 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 349:

/* Line 1806 of yacc.c  */
#line 1236 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 350:

/* Line 1806 of yacc.c  */
#line 1240 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 1244 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 352:

/* Line 1806 of yacc.c  */
#line 1245 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 353:

/* Line 1806 of yacc.c  */
#line 1246 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 354:

/* Line 1806 of yacc.c  */
#line 1247 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 355:

/* Line 1806 of yacc.c  */
#line 1248 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 356:

/* Line 1806 of yacc.c  */
#line 1249 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 1250 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 1251 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 1252 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 1256 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 1257 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 1261 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.isComma) = 0; }
    break;

  case 363:

/* Line 1806 of yacc.c  */
#line 1262 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.isComma) = 0; }
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 1273 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 1274 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 1290 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if ((yyvsp[(1) - (1)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (1)].statement)->Type) {
													observers.DoCaptureProperties = true;	
												  }
												}
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 1295 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.DoCaptureProperties = false; }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 1296 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { 
													if ((yyvsp[(1) - (7)].statement) && pelet::StatementClass::PROPERTY_DECLARATION == (yyvsp[(1) - (7)].statement)->Type && (yyvsp[(4) - (7)].lexeme) && !(yyvsp[(5) - (7)].isMethod)) {
														AST_INIT((yyval.statement), pelet::ClassMemberSymbolClass);
														
														/* need to cast because we are returning a statement pointer from this rule */
														(( pelet::ClassMemberSymbolClass*)(yyval.statement))->MakeVariable((yyvsp[(4) - (7)].lexeme), (yyvsp[(4) - (7)].lexeme), false, (yyvsp[(4) - (7)].lexeme)->Pos, 
														observers.GetScope(), observers.GetDeclaredNamespace());
													}
													else {
														(yyval.statement) = 0; 
													}													
												}
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 1308 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 1312 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 1313 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 1317 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 380:

/* Line 1806 of yacc.c  */
#line 1321 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (4)].statement); }
    break;

  case 381:

/* Line 1806 of yacc.c  */
#line 1322 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (4)].statement); }
    break;

  case 382:

/* Line 1806 of yacc.c  */
#line 1326 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 1330 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.isMethod) = 1; }
    break;

  case 384:

/* Line 1806 of yacc.c  */
#line 1331 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.isMethod) = 0; }
    break;

  case 385:

/* Line 1806 of yacc.c  */
#line 1332 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.isMethod) = 0; }
    break;

  case 387:

/* Line 1806 of yacc.c  */
#line 1337 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = 0; }
    break;

  case 388:

/* Line 1806 of yacc.c  */
#line 1341 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 1342 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 1346 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 1355 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { if ((yyvsp[(1) - (1)].lexeme) && (yyvsp[(1) - (1)].lexeme)->Lexeme.caseCompare(UNICODE_STRING_SIMPLE("$this"), 0) == 0) {
										AST_INIT((yyval.statement), pelet::ClassMemberSymbolClass);
										
										/* need to cast because we are returning a statement pointer from this rule */
										(( pelet::ClassMemberSymbolClass*)(yyval.statement))->MakeAsPublicVariable((yyvsp[(1) - (1)].lexeme), observers.GetScope(), observers.GetDeclaredNamespace());
									  }
									  else {
										(yyval.statement) = 0; 
									  }
									}
    break;

  case 394:

/* Line 1806 of yacc.c  */
#line 1365 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 395:

/* Line 1806 of yacc.c  */
#line 1366 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); }
    break;

  case 396:

/* Line 1806 of yacc.c  */
#line 1371 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); }
    break;

  case 397:

/* Line 1806 of yacc.c  */
#line 1372 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = 0; }
    break;

  case 398:

/* Line 1806 of yacc.c  */
#line 1373 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = 0; }
    break;

  case 399:

/* Line 1806 of yacc.c  */
#line 1377 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); }
    break;

  case 400:

/* Line 1806 of yacc.c  */
#line 1378 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); }
    break;

  case 401:

/* Line 1806 of yacc.c  */
#line 1379 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); }
    break;

  case 402:

/* Line 1806 of yacc.c  */
#line 1383 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme);	}
    break;

  case 403:

/* Line 1806 of yacc.c  */
#line 1384 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = 0; }
    break;

  case 404:

/* Line 1806 of yacc.c  */
#line 1388 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 405:

/* Line 1806 of yacc.c  */
#line 1389 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 408:

/* Line 1806 of yacc.c  */
#line 1398 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); }
    break;

  case 409:

/* Line 1806 of yacc.c  */
#line 1399 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (4)].lexeme); }
    break;

  case 410:

/* Line 1806 of yacc.c  */
#line 1400 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); }
    break;

  case 411:

/* Line 1806 of yacc.c  */
#line 1404 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = observers.DoCaptureProperties ? ((yyvsp[(1) - (1)].lexeme)) : 0; }
    break;

  case 412:

/* Line 1806 of yacc.c  */
#line 1405 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.lexeme) = 0; }
    break;

  case 413:

/* Line 1806 of yacc.c  */
#line 1409 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 414:

/* Line 1806 of yacc.c  */
#line 1410 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 417:

/* Line 1806 of yacc.c  */
#line 1419 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 418:

/* Line 1806 of yacc.c  */
#line 1420 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 419:

/* Line 1806 of yacc.c  */
#line 1421 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 420:

/* Line 1806 of yacc.c  */
#line 1425 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 421:

/* Line 1806 of yacc.c  */
#line 1426 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 422:

/* Line 1806 of yacc.c  */
#line 1430 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 423:

/* Line 1806 of yacc.c  */
#line 1431 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 424:

/* Line 1806 of yacc.c  */
#line 1432 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 425:

/* Line 1806 of yacc.c  */
#line 1433 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 426:

/* Line 1806 of yacc.c  */
#line 1434 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 427:

/* Line 1806 of yacc.c  */
#line 1435 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 428:

/* Line 1806 of yacc.c  */
#line 1436 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 429:

/* Line 1806 of yacc.c  */
#line 1437 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statementList) = 0; }
    break;

  case 430:

/* Line 1806 of yacc.c  */
#line 1441 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 431:

/* Line 1806 of yacc.c  */
#line 1442 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 432:

/* Line 1806 of yacc.c  */
#line 1443 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 433:

/* Line 1806 of yacc.c  */
#line 1444 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 434:

/* Line 1806 of yacc.c  */
#line 1448 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 435:

/* Line 1806 of yacc.c  */
#line 1449 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 436:

/* Line 1806 of yacc.c  */
#line 1450 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 437:

/* Line 1806 of yacc.c  */
#line 1451 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 438:

/* Line 1806 of yacc.c  */
#line 1452 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 439:

/* Line 1806 of yacc.c  */
#line 1453 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 440:

/* Line 1806 of yacc.c  */
#line 1457 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 441:

/* Line 1806 of yacc.c  */
#line 1458 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 442:

/* Line 1806 of yacc.c  */
#line 1459 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 443:

/* Line 1806 of yacc.c  */
#line 1463 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 444:

/* Line 1806 of yacc.c  */
#line 1464 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 445:

/* Line 1806 of yacc.c  */
#line 1465 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.DoCaptureScalars = true; }
    break;

  case 446:

/* Line 1806 of yacc.c  */
#line 1466 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::IncludeExpressionClass* includeExpr;
												  AST_INIT_CARGS(includeExpr, pelet::IncludeExpressionClass, observers.GetScope(), (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeExpr;
												  observers.DoCaptureScalars = false;  
												}
    break;

  case 447:

/* Line 1806 of yacc.c  */
#line 1471 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.DoCaptureScalars = true; }
    break;

  case 448:

/* Line 1806 of yacc.c  */
#line 1472 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::IncludeExpressionClass* includeExpr;
												  AST_INIT_CARGS(includeExpr, pelet::IncludeExpressionClass, observers.GetScope(), (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeExpr;
												  observers.DoCaptureScalars = false;  
												}
    break;

  case 449:

/* Line 1806 of yacc.c  */
#line 1477 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.statement) = 0; }
    break;

  case 450:

/* Line 1806 of yacc.c  */
#line 1478 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.DoCaptureScalars = true; }
    break;

  case 451:

/* Line 1806 of yacc.c  */
#line 1479 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::IncludeExpressionClass* includeExpr;
												  AST_INIT_CARGS(includeExpr, pelet::IncludeExpressionClass, observers.GetScope(), (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeExpr;
												  observers.DoCaptureScalars = false;  
												}
    break;

  case 452:

/* Line 1806 of yacc.c  */
#line 1484 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { observers.DoCaptureScalars = true; }
    break;

  case 453:

/* Line 1806 of yacc.c  */
#line 1485 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { pelet::IncludeExpressionClass* includeExpr;
												  AST_INIT_CARGS(includeExpr, pelet::IncludeExpressionClass, observers.GetScope(), (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeExpr;
												  observers.DoCaptureScalars = false;  
												}
    break;

  case 454:

/* Line 1806 of yacc.c  */
#line 1492 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 455:

/* Line 1806 of yacc.c  */
#line 1493 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 456:

/* Line 1806 of yacc.c  */
#line 1497 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;

  case 457:

/* Line 1806 of yacc.c  */
#line 1498 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"
    { (yyval.unused) = 0; }
    break;



/* Line 1806 of yacc.c  */
#line 7062 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.cpp"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (analyzer, observers, YY_("syntax error"));
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
        yyerror (analyzer, observers, yymsgp);
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
		      yytoken, &yylval, analyzer, observers);
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
		  yystos[yystate], yyvsp, analyzer, observers);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (analyzer, observers, YY_("memory exhausted"));
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
                  yytoken, &yylval, analyzer, observers);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, analyzer, observers);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 1501 "/home/roberto/workspace/triumph4php/lib/pelet/src/Php54ResourceParser.y"

