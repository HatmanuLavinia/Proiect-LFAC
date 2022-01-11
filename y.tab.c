/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "tema.y"

#include <stdio.h>
#include <string.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;

  char decl[1000][100];
  int n = 0;

  char declClass[1000][100];
  int n_class = 0;

  char declFunctie[1000][100];
  int n_functie = 0;

  char declGlobal[1000][1000];
  int n_global = 0;

  int valori[10000];
  char valoriStr[1000][100];
  int k_str = 0;
  int number;
  char var[30];
  char aux[30];
  char valStr[100];
  int value;
  struct table{
	char type[10];
	char nume[20];
	int valoareVar;
	char scope[10];	
	char valoareString[100];
  } obiect;

#line 106 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    ID = 258,
    INT = 259,
    BOOL = 260,
    FLOAT = 261,
    BGIN = 262,
    END = 263,
    ASSIGN = 264,
    CLASS = 265,
    ACCESS = 266,
    PLUS = 267,
    MINUS = 268,
    DIV = 269,
    MUL = 270,
    MOD = 271,
    GT = 272,
    LT = 273,
    GEQ = 274,
    LEQ = 275,
    EQ = 276,
    NEQ = 277,
    AND = 278,
    OR = 279,
    ARRAY = 280,
    STRLEN = 281,
    ASSIGN_STR = 282,
    CHAR = 283,
    IF = 284,
    ELSE = 285,
    WHILE = 286,
    FOR = 287,
    ASSIGN_BOOL = 288,
    VAL_FLOAT = 289,
    EVAL = 290,
    RETURN = 291,
    VOID = 292,
    NR = 293,
    STRING = 294,
    IFX = 295
  };
#endif
/* Tokens.  */
#define ID 258
#define INT 259
#define BOOL 260
#define FLOAT 261
#define BGIN 262
#define END 263
#define ASSIGN 264
#define CLASS 265
#define ACCESS 266
#define PLUS 267
#define MINUS 268
#define DIV 269
#define MUL 270
#define MOD 271
#define GT 272
#define LT 273
#define GEQ 274
#define LEQ 275
#define EQ 276
#define NEQ 277
#define AND 278
#define OR 279
#define ARRAY 280
#define STRLEN 281
#define ASSIGN_STR 282
#define CHAR 283
#define IF 284
#define ELSE 285
#define WHILE 286
#define FOR 287
#define ASSIGN_BOOL 288
#define VAL_FLOAT 289
#define EVAL 290
#define RETURN 291
#define VOID 292
#define NR 293
#define STRING 294
#define IFX 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 37 "tema.y"

int intval;
char *strval;

#line 243 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   392

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  274

#define YYUNDEFTOK  2
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,     2,     2,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,    41,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    46,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    57,    57,    58,    60,    61,    63,    73,    83,    93,
     103,   104,   105,   106,   107,   108,   109,   110,   112,   123,
     134,   135,   146,   157,   171,   173,   175,   176,   178,   179,
     180,   181,   182,   192,   202,   212,   222,   225,   228,   229,
     230,   233,   243,   253,   263,   273,   274,   275,   279,   283,
     287,   291,   295,   301,   302,   304,   308,   312,   316,   323,
     326,   327,   330,   331,   332,   333,   334,   344,   354,   364,
     374,   385,   386,   387,   388,   389,   392,   395,   396,   397,
     398,   399,   400,   401,   404,   415,   424,   432,   433,   436,
     437,   438,   439,   440,   443,   454,   461,   462,   467,   468,
     469,   470,   471,   472,   473,   476,   477,   478,   479,   480,
     481,   482,   483
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INT", "BOOL", "FLOAT", "BGIN",
  "END", "ASSIGN", "CLASS", "ACCESS", "PLUS", "MINUS", "DIV", "MUL", "MOD",
  "GT", "LT", "GEQ", "LEQ", "EQ", "NEQ", "AND", "OR", "ARRAY", "STRLEN",
  "ASSIGN_STR", "CHAR", "IF", "ELSE", "WHILE", "FOR", "ASSIGN_BOOL",
  "VAL_FLOAT", "EVAL", "RETURN", "VOID", "NR", "STRING", "IFX", "';'",
  "'('", "')'", "':'", "','", "'~'", "$accept", "progr", "declaratii",
  "declaratie", "decl_functie", "blocFunctie", "blocFunctieVoid",
  "list_functie", "statement_functie", "blocClass", "listClass",
  "statementClass", "lista_param", "param", "bloc", "list", "statement",
  "stmt", "blocfalse", "assignment", "assign_str", "oper_str",
  "lista_apel", "assign_exp", "aexp", "bexp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,    59,    40,    41,    58,    44,   126
};
# endif

#define YYPACT_NINF (-179)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     109,    25,   101,   113,    27,   138,    38,   155,    44,    95,
    -179,  -179,    76,    30,    -8,  -179,  -179,   135,    46,    -5,
      45,    15,    69,    98,    54,    66,   103,    83,  -179,   208,
    -179,  -179,    72,    26,    21,  -179,     9,   122,  -179,  -179,
    -179,   282,  -179,  -179,  -179,   146,  -179,  -179,  -179,   282,
    -179,   157,   164,   162,   170,   185,   149,   165,   177,   180,
     192,  -179,  -179,   174,   188,  -179,   199,  -179,  -179,  -179,
     302,  -179,  -179,  -179,    28,   286,   104,   231,   239,   250,
     261,   227,     6,  -179,  -179,    90,   167,   289,   290,   283,
     325,   326,   263,   146,   291,   116,    31,   292,   293,   294,
     295,   296,    21,    21,   327,    21,  -179,  -179,  -179,    31,
      28,    21,    21,    21,    21,    21,  -179,  -179,   285,    21,
      21,    21,    21,    21,    21,    21,    21,  -179,  -179,  -179,
    -179,  -179,    20,   282,   297,   168,   298,   270,   299,   146,
     300,   301,  -179,  -179,  -179,    33,   303,  -179,   173,  -179,
    -179,  -179,  -179,  -179,   251,   254,   333,   236,   222,   304,
     106,   106,  -179,  -179,  -179,    28,   302,   302,   302,   302,
     302,   302,  -179,  -179,   241,  -179,  -179,  -179,  -179,  -179,
      14,  -179,  -179,   282,  -179,  -179,  -179,    17,   241,  -179,
    -179,    31,   305,    32,   337,   337,    21,   307,  -179,  -179,
     306,   160,   169,   347,   348,   349,   311,   150,  -179,  -179,
     313,   314,   246,   276,   350,   277,   200,   280,  -179,  -179,
    -179,   328,  -179,  -179,   268,  -179,  -179,    31,   315,   318,
     319,   320,   321,    21,   360,  -179,  -179,  -179,    36,   323,
    -179,   324,  -179,   322,   337,    21,   281,  -179,  -179,  -179,
    -179,  -179,   242,   329,  -179,  -179,  -179,  -179,    21,  -179,
     272,   330,   331,   358,   302,   365,  -179,  -179,  -179,   364,
      21,   247,   337,  -179
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
       4,    17,     0,     0,     0,    78,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       5,     2,     0,     0,     0,     6,     0,     0,    11,    12,
       7,     0,    16,     8,    13,     0,    10,     9,    15,     0,
      14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    60,    64,     0,    97,    98,     0,    80,    96,    82,
      94,    85,    81,    84,     0,     0,    79,     0,     0,     0,
       0,     0,     0,    53,    83,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,    61,    63,     0,
       0,     0,     0,     0,     0,     0,    88,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    55,    56,    58,
      57,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    40,    46,     0,    90,    89,     0,    66,
      70,    67,    68,    69,     0,     0,     0,     0,     0,     0,
     100,   101,   102,   104,   103,     0,   107,   108,   109,   110,
     111,   112,   105,   106,     0,    18,    19,    54,    23,    41,
       0,    45,    42,     0,    43,    38,    44,     0,     0,    21,
      22,     0,     0,     0,    76,     0,     0,     0,    99,    95,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    62,    92,
      91,    73,    74,    71,     0,    65,    86,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    29,    49,     0,     0,
      51,     0,    25,     0,     0,     0,     0,    32,    36,    33,
      34,    35,     0,     0,    47,    48,    52,    50,     0,    75,
       0,     0,     0,     0,    93,     0,    28,    31,    24,     0,
       0,     0,     0,    72
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -179,  -179,  -179,   366,  -179,   131,   163,   186,  -169,  -179,
     -81,  -179,   -40,   243,  -178,  -179,   332,    24,  -179,     3,
    -179,  -103,   -98,  -179,   -32,  -100
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    11,   176,   190,   207,   208,    46,
      92,    93,    82,    83,    31,    60,    61,   209,   222,   210,
      15,   118,   148,    16,    75,    76
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,    85,   154,   155,    14,    19,    21,   159,    24,    95,
      27,   158,   143,    77,    78,    79,   221,   223,    77,    78,
      79,    77,    78,    79,    64,   172,   173,   174,    12,    71,
      22,   116,    63,    39,   146,   219,    42,    80,   235,    37,
     188,    25,    80,   174,    28,    80,    65,   235,    94,   132,
      13,   133,    81,    62,    32,    37,    44,   211,   185,    68,
     214,   175,   200,    63,    72,    73,   259,   117,    74,   147,
     220,    38,    33,   157,   189,    64,    45,   254,    34,   160,
     161,   162,   163,   164,    62,    32,    43,   166,   167,   168,
     169,   170,   171,   217,   273,    48,    94,    65,    66,     1,
       2,     3,    29,    33,    17,     4,    67,    32,    49,    34,
      68,    69,    32,     1,     2,     3,    20,    35,    36,     4,
     113,   114,   115,     5,    50,    33,    18,   125,   126,   246,
      33,    34,     6,   134,     7,   133,    34,     5,    18,    47,
     212,    23,    94,   213,    32,   260,     6,   215,     7,    26,
      86,    87,    88,   201,   202,   203,   204,    89,    26,   145,
      84,   133,    33,    18,   224,    99,    32,    97,    34,    32,
     135,    18,   228,   100,    90,    18,    40,    41,   205,    56,
      18,    57,    58,    91,    33,   206,   234,    33,   101,    98,
      34,   102,   136,    34,   229,    51,    52,    53,    54,    96,
     106,   252,   227,   201,   202,   203,   204,   103,   242,   179,
     180,    51,    52,    53,    54,   108,   192,    18,   193,   104,
      55,    56,   105,    57,    58,    18,   264,    59,   205,    56,
     109,    57,    58,    18,   127,   206,    55,    56,   271,    57,
      58,   110,   128,    59,   201,   202,   203,   204,   111,   112,
     113,   114,   115,   129,   111,   112,   113,   114,   115,   111,
     112,   113,   114,   115,   130,   198,    18,   193,   131,   205,
      56,   142,    57,    58,   125,   126,   206,   125,   126,   197,
     111,   112,   113,   114,   115,   262,    77,    78,    79,   238,
     272,   133,   137,   138,   194,   125,   126,   195,   111,   112,
     113,   114,   115,   119,   120,   121,   122,   123,   124,   245,
      80,   182,   183,   265,   111,   112,   113,   114,   115,   239,
     241,   133,   133,   243,   261,   193,   193,   139,   140,   141,
     156,   165,   144,   149,   150,   151,   152,   153,   178,   181,
     184,   186,   196,   187,    29,   191,   218,   199,   225,   226,
     230,   231,   232,   233,   236,   237,   247,   188,   244,   248,
     249,   250,   251,   253,   256,   257,   268,   258,   269,   255,
     263,   266,   267,   270,   216,    30,   177,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107
};

static const yytype_int16 yycheck[] =
{
      32,    41,   102,   103,     1,     2,     3,   110,     5,    49,
       7,   109,    93,     4,     5,     6,   194,   195,     4,     5,
       6,     4,     5,     6,     3,   125,   126,     7,     3,     3,
       3,     3,    29,    41,     3,     3,    41,    28,   207,     9,
       7,     3,    28,     7,     0,    28,    25,   216,    45,    43,
      25,    45,    43,    29,     9,     9,    41,    43,   139,    38,
      43,    41,   165,    60,    38,    39,   244,    39,    42,    38,
      38,    41,    27,   105,    41,     3,     7,    41,    33,   111,
     112,   113,   114,   115,    60,     9,    41,   119,   120,   121,
     122,   123,   124,   191,   272,    41,    93,    25,    26,     4,
       5,     6,     7,    27,     3,    10,    34,     9,    42,    33,
      38,    39,     9,     4,     5,     6,     3,    41,    42,    10,
      14,    15,    16,    28,    41,    27,    25,    23,    24,   227,
      27,    33,    37,    43,    39,    45,    33,    28,    25,    41,
     180,     3,   139,   183,     9,   245,    37,   187,    39,     3,
       4,     5,     6,     3,     4,     5,     6,    11,     3,    43,
      38,    45,    27,    25,   196,     3,     9,     3,    33,     9,
       3,    25,     3,     3,    28,    25,    41,    42,    28,    29,
      25,    31,    32,    37,    27,    35,    36,    27,     3,    25,
      33,    42,    25,    33,    25,     3,     4,     5,     6,    42,
       8,   233,    42,     3,     4,     5,     6,    42,     8,    41,
      42,     3,     4,     5,     6,    41,    43,    25,    45,    42,
      28,    29,    42,    31,    32,    25,   258,    35,    28,    29,
      42,    31,    32,    25,     3,    35,    28,    29,   270,    31,
      32,    42,     3,    35,     3,     4,     5,     6,    12,    13,
      14,    15,    16,     3,    12,    13,    14,    15,    16,    12,
      13,    14,    15,    16,     3,    43,    25,    45,    41,    28,
      29,     8,    31,    32,    23,    24,    35,    23,    24,    43,
      12,    13,    14,    15,    16,    43,     4,     5,     6,    43,
      43,    45,     3,     3,    43,    23,    24,    43,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    41,
      28,    41,    42,    41,    12,    13,    14,    15,    16,    43,
      43,    45,    45,    43,    43,    45,    45,    44,     3,     3,
       3,    46,    41,    41,    41,    41,    41,    41,    41,    41,
      41,    41,     9,    42,     7,    42,    41,    43,    41,    43,
       3,     3,     3,    42,    41,    41,    41,     7,    30,    41,
      41,    41,    41,     3,    41,    41,     8,    45,     3,   238,
      41,    41,    41,     9,   188,     9,   133,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,    10,    28,    37,    39,    48,    49,
      50,    51,     3,    25,    66,    67,    70,     3,    25,    66,
       3,    66,     3,     3,    66,     3,     3,    66,     0,     7,
      50,    61,     9,    27,    33,    41,    42,     9,    41,    41,
      41,    42,    41,    41,    41,     7,    56,    41,    41,    42,
      41,     3,     4,     5,     6,    28,    29,    31,    32,    35,
      62,    63,    64,    66,     3,    25,    26,    34,    38,    39,
      71,     3,    38,    39,    42,    71,    72,     4,     5,     6,
      28,    43,    59,    60,    38,    59,     4,     5,     6,    11,
      28,    37,    57,    58,    66,    59,    42,     3,    25,     3,
       3,     3,    42,    42,    42,    42,     8,    63,    41,    42,
      42,    12,    13,    14,    15,    16,     3,    39,    68,    17,
      18,    19,    20,    21,    22,    23,    24,     3,     3,     3,
       3,    41,    43,    45,    43,     3,    25,     3,     3,    44,
       3,     3,     8,    57,    41,    43,     3,    38,    69,    41,
      41,    41,    41,    41,    72,    72,     3,    71,    69,    68,
      71,    71,    71,    71,    71,    46,    71,    71,    71,    71,
      71,    71,    72,    72,     7,    41,    52,    60,    41,    41,
      42,    41,    41,    42,    41,    57,    41,    42,     7,    41,
      53,    42,    43,    45,    43,    43,     9,    43,    43,    43,
      68,     3,     4,     5,     6,    28,    35,    54,    55,    64,
      66,    43,    59,    59,    43,    59,    54,    69,    41,     3,
      38,    61,    65,    61,    71,    41,    43,    42,     3,    25,
       3,     3,     3,    42,    36,    55,    41,    41,    43,    43,
      53,    43,     8,    43,    30,    41,    69,    41,    41,    41,
      41,    41,    71,     3,    41,    52,    41,    41,    45,    61,
      72,    43,    43,    41,    71,    41,    41,    41,     8,     3,
       9,    71,    43,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    51,    51,
      51,    51,    51,    51,    52,    53,    54,    54,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    56,    57,    57,
      57,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    59,    59,    60,    60,    60,    60,    61,
      62,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    64,    64,    64,    64,    64,    65,    66,    66,    66,
      66,    66,    66,    66,    67,    67,    67,    68,    68,    69,
      69,    69,    69,    69,    70,    70,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    72,    72,    72,    72,    72,
      72,    72,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     6,     6,
       5,     6,     6,     6,     6,     3,     1,     2,     5,     2,
       1,     5,     3,     3,     3,     3,     3,     3,     3,     1,
       2,     3,     3,     3,     3,     3,     2,     6,     6,     5,
       6,     5,     6,     1,     3,     2,     2,     2,     2,     3,
       1,     2,     5,     2,     1,     5,     3,     3,     3,     3,
       3,     5,    13,     5,     5,     7,     0,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     7,     1,     1,     1,
       1,     3,     3,     6,     3,     6,     1,     1,     1,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 57 "tema.y"
                       {printf("program corect sintactic\n");}
#line 1618 "y.tab.c"
    break;

  case 3:
#line 58 "tema.y"
                  {printf("program corect sintactic\n");}
#line 1624 "y.tab.c"
    break;

  case 6:
#line 63 "tema.y"
                        {
							strcpy(var,(yyvsp[-1].strval));
							if (cauta(var,n_global,declGlobal) == -1) {
									strcpy(declGlobal[n_global],var);
									n_global++;
									addIntoTable(var,"int","global",-1);
							}
							else   
								yyerror("Variabila deja declarata!");	   
						}
#line 1639 "y.tab.c"
    break;

  case 7:
#line 73 "tema.y"
                         {
							strcpy(var,(yyvsp[-1].strval));
							if (cauta(var,n_global,declGlobal)==-1) {
								strcpy(declGlobal[n_global],var);
								n_global++;
								addIntoTable(var,"bool","global",-1);
							}
							else   
								yyerror("Variabila deja declarata!");	   
						 }
#line 1654 "y.tab.c"
    break;

  case 8:
#line 83 "tema.y"
                                  {
							strcpy(var,(yyvsp[-1].strval));
							if (cauta(var,n_global,declGlobal)==-1) {
								strcpy(declGlobal[n_global],var);
								n_global++;
								addIntoTable(var,"float","global",-1);
							}
							else   
								yyerror("Variabila deja declarata!");	   
						  }
#line 1669 "y.tab.c"
    break;

  case 9:
#line 93 "tema.y"
                             {
							strcpy(var,(yyvsp[-1].strval));
							if (cauta(var,n_global,declGlobal)==-1) {
								strcpy(declGlobal[n_global],var);
								n_global++;
								addIntoTable(var,"string","global",-1);
								}
							else   
								yyerror("Variabila deja declarata!");	   
						 }
#line 1684 "y.tab.c"
    break;

  case 18:
#line 112 "tema.y"
                                              {
												strcpy(var,(yyvsp[-4].strval)); 
												if (cauta(var,n_functie,declFunctie)==-1) {
												strcpy(declFunctie[n_functie],var);
												n_functie++;
												addFunction(var,"int");
												}
											else   
												yyerror("Functie deja declarata!");
												
											  }
#line 1700 "y.tab.c"
    break;

  case 19:
#line 123 "tema.y"
                                                                  {
												strcpy(var,(yyvsp[-4].strval)); 
												if (cauta(var,n_functie,declFunctie)==-1) {
												strcpy(declFunctie[n_functie],var);
												n_functie++;
												addFunction(var,"int");
												}
											else   
												yyerror("Functie deja declarata!");
												
											  }
#line 1716 "y.tab.c"
    break;

  case 21:
#line 135 "tema.y"
                                               {
												strcpy(var,(yyvsp[-4].strval)); 
												if (cauta(var,n_functie,declFunctie)==-1) {
												strcpy(declFunctie[n_functie],var);
												n_functie++;
												addFunction(var,"void");
												}
											else   
												yyerror("Functie deja declarata!");
												
											  }
#line 1732 "y.tab.c"
    break;

  case 22:
#line 146 "tema.y"
                                                                {
															strcpy(var,(yyvsp[-4].strval)); 
															if (cauta(var,n_functie,declFunctie)==-1) {
															strcpy(declFunctie[n_functie],var);
															n_functie++;
															addFunction(var,"void");
															}
														else   
															yyerror("Functie deja declarata!");
															
														}
#line 1748 "y.tab.c"
    break;

  case 23:
#line 157 "tema.y"
                                               {
												strcpy(var,(yyvsp[-4].strval)); 
												if (cauta(var,n_functie,declFunctie)==-1) {
												strcpy(declFunctie[n_functie],var);
												n_functie++;
												addFunction(var,"bool");
												}
											else   
												yyerror("Functie deja declarata!");
												
											  }
#line 1764 "y.tab.c"
    break;

  case 32:
#line 182 "tema.y"
                                   {
								strcpy(var,(yyvsp[-1].strval));
								if (cauta(var,n_functie,declFunctie)==-1) {
									strcpy(declFunctie[n_functie],var);
									n_functie++;
									addIntoTable(var,"int","inside function",-1);
									}
								else   
									yyerror("Variabila deja declarata!");	   
							   }
#line 1779 "y.tab.c"
    break;

  case 33:
#line 192 "tema.y"
                                {
								strcpy(var,(yyvsp[-1].strval));
								if (cauta(var,n_functie,declFunctie)==-1) {
									strcpy(declFunctie[n_functie],var);
									n_functie++;
									addIntoTable(var,"bool","inside function",-1);
									}
								else   
									yyerror("Variabila deja declarata!");	   
							    }
#line 1794 "y.tab.c"
    break;

  case 34:
#line 202 "tema.y"
                                                 {
								  strcpy(var,(yyvsp[-1].strval));
								  if (cauta(var,n_functie,declFunctie)==-1) {
									  strcpy(declFunctie[n_functie],var);
									  n_functie++;
									  addIntoTable(var,"float","inside function",-1);
									  }
								  else   
									  yyerror("Variabila deja declarata!");	   
							     }
#line 1809 "y.tab.c"
    break;

  case 35:
#line 212 "tema.y"
                                                {
								strcpy(var,(yyvsp[-1].strval));
								if (cauta(var,n_functie,declFunctie)==-1) {
									strcpy(declFunctie[n_functie],var);
									n_functie++;
									addIntoTable(var,"string","inside function",-1);
									}
								else   
									yyerror("Variabila deja declarata!");	   
							    }
#line 1824 "y.tab.c"
    break;

  case 41:
#line 233 "tema.y"
                             {
							 strcpy(var,(yyvsp[-1].strval));
							 if (cauta(var,n_class,declClass)==-1) {
								 strcpy(declClass[n_class],var);
								 n_class++;
								 addIntoTable(var,"int","inside class",-1);
								 }
							 else   
								 yyerror("Variabila deja declarata!");	   
						     }
#line 1839 "y.tab.c"
    break;

  case 42:
#line 243 "tema.y"
                                {
							strcpy(var,(yyvsp[-1].strval));
							if (cauta(var,n_class,declClass)==-1) {
								strcpy(declClass[n_class],var);
								n_class++;
								addIntoTable(var,"bool","inside class",-1);
								}
							else   
								yyerror("Variabila deja declarata!");	   
						}
#line 1854 "y.tab.c"
    break;

  case 43:
#line 253 "tema.y"
                                 {
							 strcpy(var,(yyvsp[-1].strval));
							 if (cauta(var,n_class,declClass)==-1) {
								 strcpy(declClass[n_class],var);
								 n_class++;
								 addIntoTable(var,"float","inside class",-1);
								 }
							 else   
								 yyerror("Variabila deja declarata!");	   
						    }
#line 1869 "y.tab.c"
    break;

  case 44:
#line 263 "tema.y"
                                        {
							strcpy(var,(yyvsp[-1].strval));
							if (cauta(var,n_class,declClass)==-1) {
								strcpy(declClass[n_class],var);
								n_class++;
								addIntoTable(var,"string","inside class",-1);
								}
							else   
								yyerror("Variabila deja declarata!");	   
						    }
#line 1884 "y.tab.c"
    break;

  case 47:
#line 275 "tema.y"
                                                   {
												strcpy(var,(yyvsp[-4].strval)); 
												addMethod(var,"int");
											   }
#line 1893 "y.tab.c"
    break;

  case 48:
#line 279 "tema.y"
                                                                   {
														strcpy(var,(yyvsp[-4].strval)); 
														addMethod(var,"int");
													   }
#line 1902 "y.tab.c"
    break;

  case 49:
#line 283 "tema.y"
                                      {
								   strcpy(var,(yyvsp[-3].strval)); 
								   addMethod(var,"int");
								  }
#line 1911 "y.tab.c"
    break;

  case 50:
#line 287 "tema.y"
                                                {
													strcpy(var,(yyvsp[-4].strval));
													addMethod(var,"void");
												}
#line 1920 "y.tab.c"
    break;

  case 51:
#line 291 "tema.y"
                                                    {
													strcpy(var,(yyvsp[-3].strval));
													addMethod(var,"void");
												}
#line 1929 "y.tab.c"
    break;

  case 52:
#line 295 "tema.y"
                                                    {
													strcpy(var,(yyvsp[-4].strval)); 
													addMethod(var,"bool");
												}
#line 1938 "y.tab.c"
    break;

  case 55:
#line 304 "tema.y"
               {
				strcpy(var,(yyvsp[0].strval)); 
				addParam(var,"int");
				}
#line 1947 "y.tab.c"
    break;

  case 56:
#line 308 "tema.y"
                    {
					strcpy(var,(yyvsp[0].strval)); 
					addParam(var,"bool");
				}
#line 1956 "y.tab.c"
    break;

  case 57:
#line 312 "tema.y"
                    {
				strcpy(var,(yyvsp[0].strval)); 
				addParam(var,"string");
				}
#line 1965 "y.tab.c"
    break;

  case 58:
#line 316 "tema.y"
                     {
				strcpy(var,(yyvsp[0].strval)); 
				addParam(var,"float");
				}
#line 1974 "y.tab.c"
    break;

  case 65:
#line 333 "tema.y"
                                     {printf("Expresia a fost evaluata si are valoarea %d\n",(yyvsp[-2].intval));}
#line 1980 "y.tab.c"
    break;

  case 66:
#line 334 "tema.y"
                          {
						strcpy(var,(yyvsp[-1].strval));
						if (cauta(var,n,decl)==-1) {
							strcpy(decl[n],var);
							n++;
							addIntoTable(var,"int","local",-1);
					    }
					  else   
						  yyerror("Variabila deja declarata!");	   
				     }
#line 1995 "y.tab.c"
    break;

  case 67:
#line 344 "tema.y"
                       {
						strcpy(var,(yyvsp[-1].strval));
						if (cauta(var,n,decl)==-1) {
							strcpy(decl[n],var);
							n++;
							addIntoTable(var,"bool","local",-1);
							}
						else   
							yyerror("Variabila deja declarata!");	   
					}
#line 2010 "y.tab.c"
    break;

  case 68:
#line 354 "tema.y"
                            {
							strcpy(var,(yyvsp[-1].strval));
							if (cauta(var,n,decl)==-1) {
								strcpy(decl[n],var);
								n++;
								addIntoTable(var,"float","local",-1);
								}
							else   
								yyerror("Variabila deja declarata!");	   
						}
#line 2025 "y.tab.c"
    break;

  case 69:
#line 364 "tema.y"
                           {
							strcpy(var,(yyvsp[-1].strval));
							if (cauta(var,n,decl)==-1) {
								strcpy(decl[n],var);
								n++;
								addIntoTable(var,"string","local",-1);
								}
							else   
								yyerror("Variabila deja declarata!");	   
						}
#line 2040 "y.tab.c"
    break;

  case 70:
#line 374 "tema.y"
                         {
							strcpy(var,(yyvsp[-1].strval));
							if (cauta(var,n,decl)==-1) {
								strcpy(decl[n],var);
								n++;
								addIntoTable(var,"array","local",-1);
								}
							else   
								yyerror("Variabila deja declarata!");	   
						}
#line 2055 "y.tab.c"
    break;

  case 81:
#line 399 "tema.y"
                                      {yyerror("Nu poti atribui unei variabile de tip string un int!");}
#line 2061 "y.tab.c"
    break;

  case 82:
#line 400 "tema.y"
                                      {yyerror("Nu poti atribui unei variabile de tip int un string!");}
#line 2067 "y.tab.c"
    break;

  case 84:
#line 404 "tema.y"
                                  {
									strcpy(var,(yyvsp[-2].strval));
									if (cauta(var,n,decl)==-1 && cauta(var,n_global,declGlobal)==-1) 
										yyerror("Nu poti atribui valoare unei variabile nedeclarate!");	
									else {
										strcpy(valStr,(yyvsp[0].strval));
										k_str = cauta(var,n,decl) + 1;
										strcpy(valoriStr[k_str],valStr);
										addValueToStrings(var,valStr);
									}
								   }
#line 2083 "y.tab.c"
    break;

  case 85:
#line 415 "tema.y"
                                  {
									strcpy(var,(yyvsp[-2].strval));
									strcpy(aux,(yyvsp[0].strval));
									int poz1 = cauta(aux,n,decl);
									int poz2 = cauta(var,n,decl);
									if (valoriStr[poz1]!=NULL)
										strcpy(valoriStr[poz2],valoriStr[poz1]);
									addValueToStrings(var,valoriStr[poz2]);
								}
#line 2097 "y.tab.c"
    break;

  case 86:
#line 424 "tema.y"
                                                             {
															strcpy(var,(yyvsp[-6].strval));
															strcpy(valStr,(yyvsp[-3].strval));
															strcat(valStr,(yyvsp[-1].strval));
															addValueToStrings(var,valStr);
													     }
#line 2108 "y.tab.c"
    break;

  case 94:
#line 443 "tema.y"
                            {
								strcpy(var,(yyvsp[-2].strval)); 
								value = (yyvsp[0].intval); 
								int poz = cauta(var,n,decl);
								if (poz == -1 && cauta(var,n_global,declGlobal)==-1)
									yyerror("Nu poti atribui valoare unei variabile nedeclarate!");
								else {
									valori[poz]=value;
									addValueToVar(var,value);
								}
							}
#line 2124 "y.tab.c"
    break;

  case 95:
#line 454 "tema.y"
                                                   {
													strcpy(var,(yyvsp[-5].strval));
													value = strlen((yyvsp[-1].strval)) - 2;
													addValueToVar(var,value);
										       }
#line 2134 "y.tab.c"
    break;

  case 97:
#line 462 "tema.y"
              {
				strcpy(var,(yyvsp[0].strval));
				int poz=cauta(var,n,decl);
				(yyval.intval)=valori[poz];
			}
#line 2144 "y.tab.c"
    break;

  case 100:
#line 469 "tema.y"
                           {(yyval.intval)=(yyvsp[-2].intval) + (yyvsp[0].intval);}
#line 2150 "y.tab.c"
    break;

  case 101:
#line 470 "tema.y"
                           {(yyval.intval)=(yyvsp[-2].intval) - (yyvsp[0].intval);}
#line 2156 "y.tab.c"
    break;

  case 102:
#line 471 "tema.y"
                         {(yyval.intval)=(yyvsp[-2].intval) / (yyvsp[0].intval);}
#line 2162 "y.tab.c"
    break;

  case 103:
#line 472 "tema.y"
                         {(yyval.intval)=(yyvsp[-2].intval) % (yyvsp[0].intval);}
#line 2168 "y.tab.c"
    break;

  case 104:
#line 473 "tema.y"
                         {(yyval.intval)=(yyvsp[-2].intval) * (yyvsp[0].intval);}
#line 2174 "y.tab.c"
    break;

  case 105:
#line 476 "tema.y"
                     { if ((yyvsp[-2].intval) && (yyvsp[0].intval)) (yyval.intval)=1; else (yyval.intval)=0;}
#line 2180 "y.tab.c"
    break;

  case 106:
#line 477 "tema.y"
                        { if ((yyvsp[-2].intval) || (yyvsp[0].intval)) (yyval.intval)=1; else (yyval.intval)=0;}
#line 2186 "y.tab.c"
    break;

  case 107:
#line 478 "tema.y"
                        { if ((yyvsp[-2].intval) > (yyvsp[0].intval)) (yyval.intval)=1; else (yyval.intval)=0;}
#line 2192 "y.tab.c"
    break;

  case 108:
#line 479 "tema.y"
                        { if ((yyvsp[-2].intval) < (yyvsp[0].intval)) (yyval.intval)=1; else (yyval.intval)=0;}
#line 2198 "y.tab.c"
    break;

  case 109:
#line 480 "tema.y"
                         { if ((yyvsp[-2].intval) >= (yyvsp[0].intval)) (yyval.intval)=1; else (yyval.intval)=0;}
#line 2204 "y.tab.c"
    break;

  case 110:
#line 481 "tema.y"
                         { if ((yyvsp[-2].intval) <= (yyvsp[0].intval)) (yyval.intval)=1; else (yyval.intval)=0;}
#line 2210 "y.tab.c"
    break;

  case 111:
#line 482 "tema.y"
                        { if ((yyvsp[-2].intval) == (yyvsp[0].intval)) (yyval.intval)=1; else (yyval.intval)=0;}
#line 2216 "y.tab.c"
    break;

  case 112:
#line 483 "tema.y"
                         { if ((yyvsp[-2].intval) != (yyvsp[0].intval)) (yyval.intval)=1; else (yyval.intval)=0;}
#line 2222 "y.tab.c"
    break;


#line 2226 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 486 "tema.y"

int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}
int addParam(char* nume, char *tip) {
	FILE *fptr;
	fptr = fopen("symbol_table_functions.txt", "a+");
	strcpy(obiect.nume,nume);
	strcpy(obiect.type, tip);
	fprintf(fptr,"- PARAMETRUL CU NUMELE %s DE TIPUL %s\n",obiect.nume,obiect.type);
	}
int addIntoTable(char* nume, char *tip, char* scop, int val) {
	FILE *fptr;
	fptr = fopen("symbol_table.txt", "a+");
	strcpy(obiect.nume,nume);
	strcpy(obiect.type, tip);
	strcpy(obiect.scope, scop);
	obiect.valoareVar = val;
	if (val == -1)
		fprintf(fptr,"\nNUME %s \nTIP %s \nSCOPE %s \nNU ARE INCA VALOARE\n", obiect.nume, obiect.type, obiect.scope); 
	close(fptr);
}
int addValueToStrings(char *nume, char* valoare) {
	FILE *fptr;
	fptr = fopen("symbol_table.txt", "a+");
	strcpy(obiect.nume,nume);
	strcpy(obiect.valoareString,valoare);
	fprintf(fptr,"\nVARIABILA %s <- VALOAREA %s\n",obiect.nume,obiect.valoareString);
	close(fptr);
}
int addValueToVar(char *nume, int valoare) {
	FILE *fptr;
	fptr = fopen("symbol_table.txt", "a+");
	strcpy(obiect.nume,nume);
	obiect.valoareVar = valoare;
	fprintf(fptr,"\nVARIABILA %s <- VALOAREA %d\n",obiect.nume, obiect.valoareVar);
	close(fptr);
}
int addFunction(char *nume, char *tip) {
	FILE *fptr;
	fptr = fopen("symbol_table_functions.txt", "a+");
	strcpy(obiect.nume,nume);
	strcpy(obiect.type,tip);
	fprintf(fptr,"\nFUNCTIA %s - TIP %s\n",obiect.nume,obiect.type);
	close(fptr);
}

int addMethod(char *nume, char *tip) {
	FILE *fptr;
	fptr = fopen("symbol_table_functions.txt","a+");
	strcpy(obiect.nume,nume);
	strcpy(obiect.type,tip);
	fprintf(fptr,"\nFUNCTIA %s - TIP %s este metoda in clasa\n",obiect.nume,obiect.type);
	close(fptr);
	}
	
int cauta(char *nume, int n, char vector[][100]) {
	int i;
	int found = 0;
	for (i=0;i<=n;i++)
		if (strcmp(vector[i],nume)==0)
			found=1;
	 if (found ==0) return -1;
		else return i;
}

int main(int argc, char** argv){
	remove("symbol_table.txt");
	remove("symbol_table_functions.txt");
	yyin=fopen(argv[1],"r");
	yyparse();
} 











