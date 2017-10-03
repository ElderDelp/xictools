/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         preprocessorparse
#define yylex           preprocessorlex
#define yyerror         preprocessorerror
#define yylval          preprocessorlval
#define yychar          preprocessorchar
#define yydebug         preprocessordebug
#define yynerrs         preprocessornerrs

/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 28 "preprocessorYacc.y"


#include "admsPreprocessor.h"

#define YYDEBUG 1
#define KS(s) adms_k2strconcat(&message,s);
#define KI(i) adms_k2strconcat(&message,adms_integertostring(i));
#define K0 KS("[") KS(pproot()->cr_scanner->filename) KS(":") \
  KI(adms_preprocessor_get_line_position(pproot()->cr_scanner,0)) KS("]: ")
#define DONT_SKIPP (pproot()->skipp_text->data==INT2ADMS(0))

p_slist continuatorList=NULL;
p_slist condistrue=NULL;


/* Line 371 of yacc.c  */
#line 91 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
#ifndef YY_PREPROCESSOR_Y_TAB_H_INCLUDED
# define YY_PREPROCESSOR_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int preprocessordebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TK_PRAGMA_NAME = 258,
     TK_IDENT = 259,
     TK_STRING = 260,
     TK_NOT_IDENT = 261,
     TK_ARG = 262,
     TK_ARG_NULL = 263,
     TK_SUBSTITUTOR_NOARG = 264,
     TK_SUBSTITUTOR_NULLARG = 265,
     TK_SUBSTITUTOR_NULLARG_ALONE = 266,
     TK_SUBSTITUTOR_WITHARG = 267,
     TK_SUBSTITUTOR_WITHARG_ALONE = 268,
     TK_CONTINUATOR = 269,
     TK_NOPRAGMA_CONTINUATOR = 270,
     TK_EOL = 271,
     TK_EOF = 272,
     TK_COMMENT = 273,
     TK_INCLUDE = 274,
     TK_SPACE = 275,
     TK_ERROR_PRAGMA_DEFINITION = 276,
     TK_ERROR_PRAGMA_NOT_FOUND = 277,
     TK_ERROR_UNEXPECTED_CHAR = 278,
     TK_ERROR_FILE_OPEN = 279,
     TK_DEFINE = 280,
     TK_DEFINE_END = 281,
     TK_UNDEF = 282,
     TK_IFDEF = 283,
     TK_IFNDEF = 284,
     TK_ELSE = 285,
     TK_ENDIF = 286
   };
#endif
/* Tokens.  */
#define TK_PRAGMA_NAME 258
#define TK_IDENT 259
#define TK_STRING 260
#define TK_NOT_IDENT 261
#define TK_ARG 262
#define TK_ARG_NULL 263
#define TK_SUBSTITUTOR_NOARG 264
#define TK_SUBSTITUTOR_NULLARG 265
#define TK_SUBSTITUTOR_NULLARG_ALONE 266
#define TK_SUBSTITUTOR_WITHARG 267
#define TK_SUBSTITUTOR_WITHARG_ALONE 268
#define TK_CONTINUATOR 269
#define TK_NOPRAGMA_CONTINUATOR 270
#define TK_EOL 271
#define TK_EOF 272
#define TK_COMMENT 273
#define TK_INCLUDE 274
#define TK_SPACE 275
#define TK_ERROR_PRAGMA_DEFINITION 276
#define TK_ERROR_PRAGMA_NOT_FOUND 277
#define TK_ERROR_UNEXPECTED_CHAR 278
#define TK_ERROR_FILE_OPEN 279
#define TK_DEFINE 280
#define TK_DEFINE_END 281
#define TK_UNDEF 282
#define TK_IFDEF 283
#define TK_IFNDEF 284
#define TK_ELSE 285
#define TK_ENDIF 286



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 44 "preprocessorYacc.y"

  p_slist slist;
  char* mystr;


/* Line 387 of yacc.c  */
#line 202 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE preprocessorlval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int preprocessorparse (void *YYPARSE_PARAM);
#else
int preprocessorparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int preprocessorparse (void);
#else
int preprocessorparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_PREPROCESSOR_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 230 "y.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   432

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNRULES -- Number of states.  */
#define YYNSTATES  113

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      32,    33,     2,     2,    34,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    17,    22,    29,    34,
      36,    38,    40,    42,    44,    46,    48,    50,    53,    55,
      57,    59,    61,    63,    65,    67,    69,    71,    73,    75,
      77,    79,    81,    83,    85,    87,    89,    91,    93,    96,
     101,   103,   106,   111,   114,   116,   119,   121,   124,   126,
     130,   132,   135,   137,   141,   143,   145,   147,   149,   153,
     156,   158,   160,   162,   164,   166,   168,   170,   172,   174,
     176,   178,   180,   182,   185,   189,   193,   198,   202,   207,
     210,   212,   215,   217
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      36,     0,    -1,    37,    -1,    38,    -1,    37,    38,    -1,
      39,    41,    37,    43,    37,    44,    -1,    39,    41,    37,
      44,    -1,    40,    42,    37,    43,    37,    44,    -1,    40,
      42,    37,    44,    -1,    47,    -1,    28,    -1,    29,    -1,
       3,    -1,     3,    -1,    30,    -1,    31,    -1,    19,    -1,
      27,     3,    -1,    48,    -1,    49,    -1,    45,    -1,    60,
      -1,    46,    -1,    23,    -1,    24,    -1,    21,    -1,    51,
      -1,    15,    -1,    16,    -1,    59,    -1,    22,    -1,    51,
      -1,    14,    -1,    16,    -1,    59,    -1,    22,    -1,     9,
      -1,    11,    -1,    52,    54,    -1,    52,    32,    55,    33,
      -1,    13,    -1,    53,    54,    -1,    53,    32,    55,    33,
      -1,    10,    20,    -1,    10,    -1,    12,    20,    -1,    12,
      -1,    32,    33,    -1,    56,    -1,    55,    34,    56,    -1,
      58,    -1,    56,    58,    -1,    56,    -1,    57,    34,    56,
      -1,    20,    -1,    14,    -1,    18,    -1,    16,    -1,    32,
      57,    33,    -1,    32,    33,    -1,     4,    -1,     5,    -1,
       6,    -1,    51,    -1,    32,    -1,    33,    -1,    34,    -1,
       4,    -1,     6,    -1,     5,    -1,    20,    -1,    18,    -1,
      17,    -1,    61,    26,    -1,    61,    63,    26,    -1,    61,
       8,    26,    -1,    61,     8,    63,    26,    -1,    61,    62,
      26,    -1,    61,    62,    63,    26,    -1,    25,     3,    -1,
       7,    -1,    62,     7,    -1,    50,    -1,    63,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   122,   122,   129,   133,   141,   156,   168,   183,   195,
     202,   209,   216,   237,   259,   273,   281,   290,   297,   301,
     308,   312,   316,   321,   325,   334,   347,   351,   357,   367,
     371,   384,   388,   395,   405,   409,   422,   427,   432,   437,
     446,   456,   465,   510,   514,   521,   525,   532,   538,   542,
     550,   554,   562,   566,   575,   580,   587,   592,   600,   608,
     615,   620,   625,   630,   637,   642,   647,   652,   657,   662,
     667,   672,   677,   685,   691,   697,   703,   709,   715,   724,
     731,   735,   743,   747
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_PRAGMA_NAME", "TK_IDENT",
  "TK_STRING", "TK_NOT_IDENT", "TK_ARG", "TK_ARG_NULL",
  "TK_SUBSTITUTOR_NOARG", "TK_SUBSTITUTOR_NULLARG",
  "TK_SUBSTITUTOR_NULLARG_ALONE", "TK_SUBSTITUTOR_WITHARG",
  "TK_SUBSTITUTOR_WITHARG_ALONE", "TK_CONTINUATOR",
  "TK_NOPRAGMA_CONTINUATOR", "TK_EOL", "TK_EOF", "TK_COMMENT",
  "TK_INCLUDE", "TK_SPACE", "TK_ERROR_PRAGMA_DEFINITION",
  "TK_ERROR_PRAGMA_NOT_FOUND", "TK_ERROR_UNEXPECTED_CHAR",
  "TK_ERROR_FILE_OPEN", "TK_DEFINE", "TK_DEFINE_END", "TK_UNDEF",
  "TK_IFDEF", "TK_IFNDEF", "TK_ELSE", "TK_ENDIF", "'('", "')'", "','",
  "$accept", "R_description", "R_list_of_conditional", "R_conditional",
  "R_if", "R_ifn", "R_ifdef", "R_ifndef", "R_else", "R_endif", "R_include",
  "R_undef", "R_alternative", "R_pragma", "R_notpragma",
  "R_define_notpragma", "R_substitutor", "R_substitutor_nullarg",
  "R_substitutor_witharg", "R_arg_null", "R_substitutor_list_of_arg",
  "R_list_of_arg", "R_list_of_arg_with_comma", "R_arg", "R_other",
  "R_define_alternative", "R_define", "R_define_list_of_arg",
  "R_define_text", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    38,    38,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    47,
      48,    48,    48,    48,    48,    48,    49,    49,    49,    49,
      49,    50,    50,    50,    50,    50,    51,    51,    51,    51,
      51,    51,    51,    52,    52,    53,    53,    54,    55,    55,
      56,    56,    57,    57,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    60,    60,    60,    60,    60,    60,    61,
      62,    62,    63,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     6,     4,     6,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       1,     2,     4,     2,     1,     2,     1,     2,     1,     3,
       1,     2,     1,     3,     1,     1,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     4,     3,     4,     2,
       1,     2,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    67,    69,    68,    36,    44,    37,    46,    40,    27,
      28,    72,    71,    16,    70,    25,    30,    23,    24,     0,
       0,    10,    11,    64,    65,    66,     0,     2,     3,     0,
       0,    20,    22,     9,    18,    19,    26,     0,     0,    29,
      21,     0,    43,    45,    79,    17,     1,     4,    12,     0,
      13,     0,     0,    38,     0,    41,    80,     0,    32,    33,
      35,    73,    82,    31,    34,     0,     0,     0,     0,    60,
      61,    62,    55,    57,    56,    54,     0,    47,    63,     0,
      48,    50,     0,    75,     0,    81,    77,     0,    74,    83,
      14,    15,     0,     6,     0,     8,    59,    52,     0,    39,
       0,    51,    42,    76,    78,     0,     0,    58,     0,    49,
       5,     7,    53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    26,    27,    28,    29,    30,    49,    51,    92,    93,
      31,    32,    33,    34,    35,    62,    36,    37,    38,    53,
      79,    80,    98,    81,    39,    40,    41,    65,    66
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -77
static const yytype_int16 yypact[] =
{
     133,   -77,   -77,   -77,   -77,   -14,   -77,     2,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,    21,
      28,   -77,   -77,   -77,   -77,   -77,    32,   133,   -77,    31,
      34,   -77,   -77,   -77,   -77,   -77,   -77,     7,    13,   -77,
     -77,   164,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   133,
     -77,   133,   350,   -77,   350,   -77,   -77,   226,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   195,   257,    71,    71,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   375,   -77,   -77,   -25,
     400,   -77,   -21,   -77,   288,   -77,   -77,   319,   -77,   -77,
     -77,   -77,   133,   -77,   133,   -77,   -77,   400,    -4,   -77,
     400,   -77,   -77,   -77,   -77,   102,   102,   -77,   400,   400,
     -77,   -77,   400
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -77,   -77,   -44,   -27,   -77,   -77,   -77,   -77,   -17,   -53,
     -77,   -77,   -77,   -77,   -77,   -64,   -38,   -77,   -77,    16,
       1,   -65,   -77,   -76,   -40,   -77,   -77,   -77,   -47
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      47,    64,    89,    63,   101,    67,    42,    68,    99,   100,
      84,    97,   102,   100,    78,    95,    78,    64,    87,    63,
      89,   101,    43,    89,    44,    64,    64,    63,    63,   107,
     108,    45,    46,   101,    48,   109,   101,    50,    78,    52,
      47,    47,    78,   112,    64,    54,    63,    64,   105,    63,
     106,    94,   110,   111,    55,    82,     0,     0,     0,    78,
       0,     0,    78,     0,     0,     0,     0,     0,     0,     0,
      78,    78,     0,     0,    78,     1,     2,     3,    47,    47,
       4,     5,     6,     7,     8,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,     0,    20,    21,
      22,    90,    91,    23,    24,    25,     1,     2,     3,     0,
       0,     4,     5,     6,     7,     8,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     0,    20,
      21,    22,     0,    91,    23,    24,    25,     1,     2,     3,
       0,     0,     4,     5,     6,     7,     8,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     0,
      20,    21,    22,     0,     0,    23,    24,    25,     1,     2,
       3,    56,    57,     4,     5,     6,     7,     8,    58,     0,
      59,    11,    12,     0,    14,     0,    60,     0,     0,     0,
      61,     0,     0,     0,     0,     0,    23,    24,    25,     1,
       2,     3,    85,     0,     4,     5,     6,     7,     8,    58,
       0,    59,    11,    12,     0,    14,     0,    60,     0,     0,
       0,    86,     0,     0,     0,     0,     0,    23,    24,    25,
       1,     2,     3,     0,     0,     4,     5,     6,     7,     8,
      58,     0,    59,    11,    12,     0,    14,     0,    60,     0,
       0,     0,    83,     0,     0,     0,     0,     0,    23,    24,
      25,     1,     2,     3,     0,     0,     4,     5,     6,     7,
       8,    58,     0,    59,    11,    12,     0,    14,     0,    60,
       0,     0,     0,    88,     0,     0,     0,     0,     0,    23,
      24,    25,     1,     2,     3,     0,     0,     4,     5,     6,
       7,     8,    58,     0,    59,    11,    12,     0,    14,     0,
      60,     0,     0,     0,   103,     0,     0,     0,     0,     0,
      23,    24,    25,     1,     2,     3,     0,     0,     4,     5,
       6,     7,     8,    58,     0,    59,    11,    12,     0,    14,
       0,    60,     0,     0,     0,   104,     0,     0,     0,     0,
       0,    23,    24,    25,    69,    70,    71,     0,     0,     4,
       5,     6,     7,     8,    72,     0,    73,     0,    74,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,    69,
      70,    71,    76,    77,     4,     5,     6,     7,     8,    72,
       0,    73,     0,    74,     0,    75,     0,     0,     0,     0,
       0,     0,     0,     0,    69,    70,    71,    76,    96,     4,
       5,     6,     7,     8,    72,     0,    73,     0,    74,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-77)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
      27,    41,    66,    41,    80,    49,    20,    51,    33,    34,
      57,    76,    33,    34,    52,    68,    54,    57,    65,    57,
      84,    97,    20,    87,     3,    65,    66,    65,    66,    33,
      34,     3,     0,   109,     3,   100,   112,     3,    76,    32,
      67,    68,    80,   108,    84,    32,    84,    87,    92,    87,
      94,    68,   105,   106,    38,    54,    -1,    -1,    -1,    97,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     108,   109,    -1,    -1,   112,     4,     5,     6,   105,   106,
       9,    10,    11,    12,    13,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,     4,     5,     6,    -1,
      -1,     9,    10,    11,    12,    13,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    -1,    31,    32,    33,    34,     4,     5,     6,
      -1,    -1,     9,    10,    11,    12,    13,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    -1,    -1,    32,    33,    34,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    -1,    20,    -1,    22,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    -1,    20,    -1,    22,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    -1,    20,    -1,    22,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,     4,     5,     6,    -1,    -1,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    18,    -1,    20,    -1,    22,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,     4,     5,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    -1,    20,    -1,
      22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,     4,     5,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    -1,    20,
      -1,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,     4,     5,     6,    -1,    -1,     9,
      10,    11,    12,    13,    14,    -1,    16,    -1,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,     6,    32,    33,     9,    10,    11,    12,    13,    14,
      -1,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,     5,     6,    32,    33,     9,
      10,    11,    12,    13,    14,    -1,    16,    -1,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     9,    10,    11,    12,    13,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      27,    28,    29,    32,    33,    34,    36,    37,    38,    39,
      40,    45,    46,    47,    48,    49,    51,    52,    53,    59,
      60,    61,    20,    20,     3,     3,     0,    38,     3,    41,
       3,    42,    32,    54,    32,    54,     7,     8,    14,    16,
      22,    26,    50,    51,    59,    62,    63,    37,    37,     4,
       5,     6,    14,    16,    18,    20,    32,    33,    51,    55,
      56,    58,    55,    26,    63,     7,    26,    63,    26,    50,
      30,    31,    43,    44,    43,    44,    33,    56,    57,    33,
      34,    58,    33,    26,    26,    37,    37,    33,    34,    56,
      44,    44,    56
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
/* Line 1792 of yacc.c  */
#line 123 "preprocessorYacc.y"
    {
            pproot()->Text=(yyvsp[(1) - (1)].slist);
          }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 130 "preprocessorYacc.y"
    {
            (yyval.slist)=(yyvsp[(1) - (1)].slist);
          }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 134 "preprocessorYacc.y"
    {
            (yyval.slist)=(yyvsp[(2) - (2)].slist);
            adms_slist_concat(&((yyval.slist)),(yyvsp[(1) - (2)].slist));
          }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 142 "preprocessorYacc.y"
    {
            if(condistrue->data==INT2ADMS(1))
            {
              (yyval.slist)=(yyvsp[(6) - (6)].slist);
              adms_slist_concat(&((yyval.slist)),(yyvsp[(3) - (6)].slist));
            }
            else if(condistrue->data==INT2ADMS(0))
            {
              (yyval.slist)=(yyvsp[(5) - (6)].slist);
              adms_slist_concat(&((yyval.slist)),(yyvsp[(4) - (6)].slist));
            }
            adms_slist_pull(&pproot()->skipp_text);
            adms_slist_pull(&condistrue);
          }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 157 "preprocessorYacc.y"
    {
            if(condistrue->data==INT2ADMS(1))
            {
              (yyval.slist)=(yyvsp[(3) - (4)].slist);
              adms_slist_concat(&((yyval.slist)),(yyvsp[(1) - (4)].slist));
            }
            else if(condistrue->data==INT2ADMS(0))
              (yyval.slist)=(yyvsp[(4) - (4)].slist);
            adms_slist_pull(&pproot()->skipp_text);
            adms_slist_pull(&condistrue);
          }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 169 "preprocessorYacc.y"
    {
            if(condistrue->data==INT2ADMS(1))
            {
               (yyval.slist)=(yyvsp[(6) - (6)].slist);
               adms_slist_concat(&((yyval.slist)),(yyvsp[(3) - (6)].slist));
            }
            else if(condistrue->data==INT2ADMS(0))
            {
              (yyval.slist)=(yyvsp[(5) - (6)].slist);
              adms_slist_concat(&((yyval.slist)),(yyvsp[(4) - (6)].slist));
            }
            adms_slist_pull(&pproot()->skipp_text);
            adms_slist_pull(&condistrue);
          }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 184 "preprocessorYacc.y"
    {
            if(condistrue->data==INT2ADMS(1))
            {
              (yyval.slist)=(yyvsp[(3) - (4)].slist);
              adms_slist_concat(&((yyval.slist)),(yyvsp[(1) - (4)].slist));
            }
            else if(condistrue->data==INT2ADMS(0))
              (yyval.slist)=(yyvsp[(4) - (4)].slist);
            adms_slist_pull(&pproot()->skipp_text);
            adms_slist_pull(&condistrue);
          }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 196 "preprocessorYacc.y"
    {
            (yyval.slist)=(yyvsp[(1) - (1)].slist);
          }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 203 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 210 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 217 "preprocessorYacc.y"
    {
            (yyval.mystr)=(yyvsp[(1) - (1)].mystr);
            if(!DONT_SKIPP)
            {
              adms_slist_push(&pproot()->skipp_text,INT2ADMS(1));
              adms_slist_push(&condistrue,INT2ADMS(-1));
            }
            else if(adms_preprocessor_identifier_is_def((yyvsp[(1) - (1)].mystr)))
            {
              adms_slist_push(&condistrue,INT2ADMS(1));
              adms_slist_push(&pproot()->skipp_text,INT2ADMS(0));
            }
            else
            {
              adms_slist_push(&condistrue,INT2ADMS(0));
              adms_slist_push(&pproot()->skipp_text,INT2ADMS(1));
            }
          }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 238 "preprocessorYacc.y"
    {
            (yyval.mystr)=(yyvsp[(1) - (1)].mystr);
            if(!DONT_SKIPP)
            {
              adms_slist_push(&pproot()->skipp_text,INT2ADMS(1));
              adms_slist_push(&condistrue,INT2ADMS(-1));
            }
            else if(adms_preprocessor_identifier_is_ndef((yyvsp[(1) - (1)].mystr)))
            {
              adms_slist_push(&condistrue,INT2ADMS(1));
              adms_slist_push(&pproot()->skipp_text,INT2ADMS(0));
            }
            else
            {
              adms_slist_push(&condistrue,INT2ADMS(0));
              adms_slist_push(&pproot()->skipp_text,INT2ADMS(1));
            }
          }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 260 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_slist_new((p_adms)newtext);
            if(condistrue->data==INT2ADMS(0))
              pproot()->skipp_text->data=INT2ADMS(0);
            else if(condistrue->data==INT2ADMS(1))
              pproot()->skipp_text->data=INT2ADMS(1);
            else
              pproot()->skipp_text->data=INT2ADMS(1);
          }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 274 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 282 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext;
            newtext=adms_preprocessor_new_text_as_string((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 291 "preprocessorYacc.y"
    {
            (yyval.mystr)=(yyvsp[(2) - (2)].mystr);
          }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 298 "preprocessorYacc.y"
    {
            (yyval.slist)=(yyvsp[(1) - (1)].slist);
          }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 302 "preprocessorYacc.y"
    {
            (yyval.slist)=(yyvsp[(1) - (1)].slist);
          }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 309 "preprocessorYacc.y"
    {
            (yyval.slist)=(yyvsp[(1) - (1)].slist);
          }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 313 "preprocessorYacc.y"
    {
            (yyval.slist)=(yyvsp[(1) - (1)].slist);
          }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 317 "preprocessorYacc.y"
    {
            (yyval.slist)=NULL;
            if(DONT_SKIPP) adms_preprocessor_identifer_set_undef((yyvsp[(1) - (1)].mystr));
          }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 322 "preprocessorYacc.y"
    {
            (yyval.slist)=NULL;
          }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 326 "preprocessorYacc.y"
    {
            char*message=NULL;
            (yyval.slist)=NULL;
            K0 KS(pproot()->cr_scanner->cur_message) KS("\n") 
            adms_preprocessor_add_message(message);
            free(pproot()->cr_scanner->cur_message);
            pproot()->cr_scanner->cur_message=NULL;
          }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 335 "preprocessorYacc.y"
    {
            char*message=NULL;
            (yyval.slist)=NULL;
            K0 KS("macro ") KS(pproot()->cr_scanner->cur_message) KS(" badly formed\n")
            adms_preprocessor_add_message(message);
            pproot()->error += 1;
            free(pproot()->cr_scanner->cur_message);
            pproot()->cr_scanner->cur_message=NULL;
          }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 348 "preprocessorYacc.y"
    {
            (yyval.slist)=(yyvsp[(1) - (1)].slist);
          }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 352 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string("\n");
            adms_slist_push(&continuatorList,(p_adms)newtext);
            (yyval.slist)=NULL;
          }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 358 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string("\n");
            (yyval.slist)=adms_slist_new((p_adms)newtext);
            adms_slist_concat(&((yyval.slist)),continuatorList);
            continuatorList=NULL;
            ++pproot()->cr_scanner->cur_line_position;
            pproot()->cr_scanner->cur_char_position=1;
            pproot()->cr_scanner->cur_continuator_position=NULL;
          }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 368 "preprocessorYacc.y"
    {
            (yyval.slist)=(yyvsp[(1) - (1)].slist);
          }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 372 "preprocessorYacc.y"
    {
            char*message=NULL;
            (yyval.slist)=NULL;
            K0 KS("macro ") KS(pproot()->cr_scanner->cur_message) KS(" is undefined\n")
            adms_preprocessor_add_message(message);
            pproot()->error += 1;
            free(pproot()->cr_scanner->cur_message);
            pproot()->cr_scanner->cur_message=NULL;
          }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 385 "preprocessorYacc.y"
    {
            (yyval.slist)=(yyvsp[(1) - (1)].slist);
          }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 389 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext1=adms_preprocessor_new_text_as_string("\n");
            p_preprocessor_text newtext2=adms_preprocessor_new_text_as_string("");
            adms_slist_push(&continuatorList,(p_adms)newtext1);
            (yyval.slist)=adms_slist_new((p_adms)newtext2);
          }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 396 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_slist_new((p_adms)newtext);
            adms_slist_concat(&((yyval.slist)),continuatorList);
            continuatorList=NULL;
            ++pproot()->cr_scanner->cur_line_position;
            pproot()->cr_scanner->cur_char_position=1;
            pproot()->cr_scanner->cur_continuator_position=NULL;
          }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 406 "preprocessorYacc.y"
    {
            (yyval.slist)=(yyvsp[(1) - (1)].slist);
          }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 410 "preprocessorYacc.y"
    {
            char*message=NULL;
            (yyval.slist)=NULL;
            K0 KS("macro ") KS(pproot()->cr_scanner->cur_message) KS(" is undefined\n")
            adms_preprocessor_add_message(message);
            pproot()->error += 1;
            free(pproot()->cr_scanner->cur_message);
            pproot()->cr_scanner->cur_message=NULL;
          }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 423 "preprocessorYacc.y"
    {
            p_preprocessor_pragma_define Define=adms_preprocessor_pragma_define_exists((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_preprocessor_new_text_as_substitutor(Define,NULL);
          }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 428 "preprocessorYacc.y"
    {
            p_preprocessor_pragma_define Define=adms_preprocessor_pragma_define_exists((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_preprocessor_new_text_as_substitutor(Define,NULL);
          }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 433 "preprocessorYacc.y"
    {
            p_preprocessor_pragma_define Define=adms_preprocessor_pragma_define_exists((yyvsp[(1) - (2)].mystr));
            (yyval.slist)=adms_preprocessor_new_text_as_substitutor(Define,NULL);
          }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 438 "preprocessorYacc.y"
    {
            char*message=NULL;
            p_preprocessor_pragma_define Define=adms_preprocessor_pragma_define_exists((yyvsp[(1) - (4)].mystr));
            (yyval.slist)=adms_preprocessor_new_text_as_substitutor(Define, (yyvsp[(3) - (4)].slist));
            K0 KS("arguments given to macro `") KS( Define->name) KS("\n")
            adms_preprocessor_add_message(message);
            pproot()->error += 1;
          }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 447 "preprocessorYacc.y"
    {
            char*message=NULL;
            p_preprocessor_pragma_define Define=adms_preprocessor_pragma_define_exists((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_preprocessor_new_text_as_substitutor(Define,NULL);
            K0 KS("macro `") KS(Define->name) KS(" has no argument [") KI(adms_slist_length(Define->arg)) KS(" expected]\n")
            adms_preprocessor_add_message(message);
            pproot()->error += 1;
            adms_slist_push(&((yyval.slist)),(p_adms)(yyvsp[(1) - (1)].mystr));
          }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 457 "preprocessorYacc.y"
    {
            char*message=NULL;
            p_preprocessor_pragma_define Define=adms_preprocessor_pragma_define_exists((yyvsp[(1) - (2)].mystr));
            (yyval.slist)=adms_preprocessor_new_text_as_substitutor(Define,NULL);
            K0 KS("macro `") KS(Define->name) KS(" has no argument [") KI(adms_slist_length(Define->arg)) KS(" expected]\n")
            adms_preprocessor_add_message(message);
            pproot()->error += 1;
          }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 466 "preprocessorYacc.y"
    {
            p_preprocessor_pragma_define Define=adms_preprocessor_pragma_define_exists((yyvsp[(1) - (4)].mystr));
            {
              if(adms_slist_length((yyvsp[(3) - (4)].slist)) == adms_slist_length(Define->arg))
              {
              }
              else if(adms_slist_length((yyvsp[(3) - (4)].slist)) > adms_slist_length(Define->arg))
              {
                if(adms_slist_length((yyvsp[(3) - (4)].slist)) == 1)
                {
                  char*message=NULL;
                  K0 KS("macro `") KS(Define->name) KS(" has one argument [") KI(adms_slist_length(Define->arg)) KS(" expected]\n")
                  adms_preprocessor_add_message(message);
                }
                else
                {
                  char*message=NULL;
                  K0 KS("macro `") KS(Define->name) KS(" has too many (") KI(adms_slist_length((yyvsp[(3) - (4)].slist))) KS(") arguments\n") 
                  adms_preprocessor_add_message(message);
                }
                pproot()->error += 1;
              }
              else
              {
                if(adms_slist_length((yyvsp[(3) - (4)].slist)) == 1)
                {
                  char*message=NULL;
                  K0 KS("macro `") KS(Define->name) KS(" has one argument [") KI(adms_slist_length(Define->arg)) KS(" expected]\n")
                  adms_preprocessor_add_message(message);
                }
                else
                {
                  char*message=NULL;
                  K0 KS("macro `") KS(Define->name) KS(" has too few (") KI(adms_slist_length((yyvsp[(3) - (4)].slist))) KS(") arguments\n")
                  adms_preprocessor_add_message(message);
                }
                pproot()->error += 1;
              }
            }
            (yyval.slist)=adms_preprocessor_new_text_as_substitutor(Define, (yyvsp[(3) - (4)].slist));
          }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 511 "preprocessorYacc.y"
    {
            (yyval.mystr)=(yyvsp[(1) - (2)].mystr);
          }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 515 "preprocessorYacc.y"
    {
            (yyval.mystr)=(yyvsp[(1) - (1)].mystr);
          }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 522 "preprocessorYacc.y"
    {
            (yyval.mystr)=(yyvsp[(1) - (2)].mystr);
          }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 526 "preprocessorYacc.y"
    {
            (yyval.mystr)=(yyvsp[(1) - (1)].mystr);
          }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 533 "preprocessorYacc.y"
    {
          }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 539 "preprocessorYacc.y"
    {
            (yyval.slist)=adms_slist_new((p_adms)(yyvsp[(1) - (1)].slist));
          }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 543 "preprocessorYacc.y"
    {
            adms_slist_push(&((yyvsp[(1) - (3)].slist)),(p_adms)(yyvsp[(3) - (3)].slist));
            (yyval.slist)=(yyvsp[(1) - (3)].slist);
          }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 551 "preprocessorYacc.y"
    {
            (yyval.slist)=(yyvsp[(1) - (1)].slist);
          }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 555 "preprocessorYacc.y"
    {
            (yyval.slist)=(yyvsp[(2) - (2)].slist);
            adms_slist_concat(&((yyval.slist)),(yyvsp[(1) - (2)].slist));
          }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 563 "preprocessorYacc.y"
    {
            (yyval.slist)=(yyvsp[(1) - (1)].slist);
          }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 567 "preprocessorYacc.y"
    {
            p_preprocessor_text comma=adms_preprocessor_new_text_as_string(",");
            adms_slist_push(&((yyvsp[(1) - (3)].slist)),(p_adms)comma);
            (yyval.slist)=(yyvsp[(3) - (3)].slist);
            adms_slist_concat(&((yyval.slist)),(yyvsp[(1) - (3)].slist));
          }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 576 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 581 "preprocessorYacc.y"
    {
            /* SRW - fix bsim6.va parse problem, string macro arg broken by
             * continuator caused 'unexpected end of line' error.
             */
            (yyval.slist)=0;
          }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 588 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 593 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string("\n");
            ++pproot()->cr_scanner->cur_line_position;
            pproot()->cr_scanner->cur_char_position=1;
            pproot()->cr_scanner->cur_continuator_position=NULL;
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 601 "preprocessorYacc.y"
    {
            p_preprocessor_text lparen=adms_preprocessor_new_text_as_string("(");
            p_preprocessor_text rparen=adms_preprocessor_new_text_as_string(")");
            (yyval.slist)=(yyvsp[(2) - (3)].slist);
            adms_slist_concat(&((yyval.slist)),adms_slist_new((p_adms)lparen));
            adms_slist_push(&((yyval.slist)),(p_adms)rparen);
          }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 609 "preprocessorYacc.y"
    {
            p_preprocessor_text lparen=adms_preprocessor_new_text_as_string("(");
            p_preprocessor_text rparen=adms_preprocessor_new_text_as_string(")");
            (yyval.slist)=adms_slist_new((p_adms)lparen);
            adms_slist_push(&((yyval.slist)),(p_adms)rparen);
          }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 616 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 621 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 626 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 631 "preprocessorYacc.y"
    {
            (yyval.slist)=(yyvsp[(1) - (1)].slist);
          }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 638 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string("(");
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 643 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string(")");
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 648 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string(",");
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 653 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 658 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 663 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 668 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 673 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 678 "preprocessorYacc.y"
    {
            p_preprocessor_text newtext=adms_preprocessor_new_text_as_string((yyvsp[(1) - (1)].mystr));
            (yyval.slist)=adms_slist_new((p_adms)newtext);
          }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 686 "preprocessorYacc.y"
    {
            p_preprocessor_pragma_define Define;
            if(DONT_SKIPP) Define=adms_preprocessor_define_add((yyvsp[(1) - (2)].mystr));
            (yyval.slist)=NULL;
          }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 692 "preprocessorYacc.y"
    {
            p_preprocessor_pragma_define Define;
            if(DONT_SKIPP) Define=adms_preprocessor_define_add_with_text((yyvsp[(1) - (3)].mystr), (yyvsp[(2) - (3)].slist));
            (yyval.slist)=NULL;
          }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 698 "preprocessorYacc.y"
    {
            p_preprocessor_pragma_define Define;
            if(DONT_SKIPP) Define=adms_preprocessor_define_add_with_arg((yyvsp[(1) - (3)].mystr), NULL);
            (yyval.slist)=NULL;
          }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 704 "preprocessorYacc.y"
    {
            p_preprocessor_pragma_define Define;
            if(DONT_SKIPP) Define=adms_preprocessor_define_add_with_arg_and_text((yyvsp[(1) - (4)].mystr), NULL, (yyvsp[(3) - (4)].slist));
            (yyval.slist)=NULL;
          }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 710 "preprocessorYacc.y"
    {
            p_preprocessor_pragma_define Define;
            if(DONT_SKIPP) Define=adms_preprocessor_define_add_with_arg((yyvsp[(1) - (3)].mystr), (yyvsp[(2) - (3)].slist));
            (yyval.slist)=NULL;
          }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 716 "preprocessorYacc.y"
    {
            p_preprocessor_pragma_define Define;
            if(DONT_SKIPP) Define=adms_preprocessor_define_add_with_arg_and_text((yyvsp[(1) - (4)].mystr), (yyvsp[(2) - (4)].slist), (yyvsp[(3) - (4)].slist));
            (yyval.slist)=NULL;
          }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 725 "preprocessorYacc.y"
    {
            (yyval.mystr)=(yyvsp[(2) - (2)].mystr);
          }
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 732 "preprocessorYacc.y"
    {
            (yyval.slist)=adms_slist_new((p_adms)(yyvsp[(1) - (1)].mystr));
          }
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 736 "preprocessorYacc.y"
    {
            adms_slist_push(&((yyvsp[(1) - (2)].slist)),(p_adms)(yyvsp[(2) - (2)].mystr));
            (yyval.slist)=(yyvsp[(1) - (2)].slist);
          }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 744 "preprocessorYacc.y"
    {
            (yyval.slist)=(yyvsp[(1) - (1)].slist);
          }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 748 "preprocessorYacc.y"
    {
            (yyval.slist)=(yyvsp[(2) - (2)].slist);
            adms_slist_concat(&((yyval.slist)),(yyvsp[(1) - (2)].slist));
          }
    break;


/* Line 1792 of yacc.c  */
#line 2484 "y.tab.c"
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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 754 "preprocessorYacc.y"


int adms_preprocessor_getint_yydebug(void)
  {
    return yydebug;
  }
void adms_preprocessor_setint_yydebug(const int val)
  {
    yydebug=val;
  }