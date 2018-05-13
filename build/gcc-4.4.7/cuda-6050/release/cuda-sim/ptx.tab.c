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


/* Substitute the variable and function names.  */
#define yyparse         ptx_parse
#define yylex           ptx_lex
#define yyerror         ptx_error
#define yydebug         ptx_debug
#define yynerrs         ptx_nerrs

#define yylval          ptx_lval
#define yychar          ptx_char

/* Copy the first part of user declarations.  */

#line 75 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:339  */

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
   by #include "ptx.tab.h".  */
#ifndef YY_PTX_HOME_SUN_2018_LAPERM_GPGPU_SIM_CDP_BUILD_GCC_4_4_7_CUDA_6050_RELEASE_CUDA_SIM_PTX_TAB_H_INCLUDED
# define YY_PTX_HOME_SUN_2018_LAPERM_GPGPU_SIM_CDP_BUILD_GCC_4_4_7_CUDA_6050_RELEASE_CUDA_SIM_PTX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ptx_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    STRING = 258,
    OPCODE = 259,
    ALIGN_DIRECTIVE = 260,
    BRANCHTARGETS_DIRECTIVE = 261,
    BYTE_DIRECTIVE = 262,
    CALLPROTOTYPE_DIRECTIVE = 263,
    CALLTARGETS_DIRECTIVE = 264,
    CONST_DIRECTIVE = 265,
    CONSTPTR_DIRECTIVE = 266,
    PTR_DIRECTIVE = 267,
    ENTRY_DIRECTIVE = 268,
    EXTERN_DIRECTIVE = 269,
    FILE_DIRECTIVE = 270,
    FUNC_DIRECTIVE = 271,
    GLOBAL_DIRECTIVE = 272,
    LOCAL_DIRECTIVE = 273,
    LOC_DIRECTIVE = 274,
    MAXNCTAPERSM_DIRECTIVE = 275,
    MAXNNREG_DIRECTIVE = 276,
    MAXNTID_DIRECTIVE = 277,
    MINNCTAPERSM_DIRECTIVE = 278,
    PARAM_DIRECTIVE = 279,
    PRAGMA_DIRECTIVE = 280,
    REG_DIRECTIVE = 281,
    REQNTID_DIRECTIVE = 282,
    SECTION_DIRECTIVE = 283,
    SHARED_DIRECTIVE = 284,
    SREG_DIRECTIVE = 285,
    STRUCT_DIRECTIVE = 286,
    SURF_DIRECTIVE = 287,
    TARGET_DIRECTIVE = 288,
    TEX_DIRECTIVE = 289,
    UNION_DIRECTIVE = 290,
    VERSION_DIRECTIVE = 291,
    ADDRESS_SIZE_DIRECTIVE = 292,
    VISIBLE_DIRECTIVE = 293,
    WEAK_DIRECTIVE = 294,
    IDENTIFIER = 295,
    INT_OPERAND = 296,
    FLOAT_OPERAND = 297,
    DOUBLE_OPERAND = 298,
    S8_TYPE = 299,
    S16_TYPE = 300,
    S32_TYPE = 301,
    S64_TYPE = 302,
    U8_TYPE = 303,
    U16_TYPE = 304,
    U32_TYPE = 305,
    U64_TYPE = 306,
    F16_TYPE = 307,
    F32_TYPE = 308,
    F64_TYPE = 309,
    FF64_TYPE = 310,
    B8_TYPE = 311,
    B16_TYPE = 312,
    B32_TYPE = 313,
    B64_TYPE = 314,
    BB64_TYPE = 315,
    BB128_TYPE = 316,
    PRED_TYPE = 317,
    TEXREF_TYPE = 318,
    SAMPLERREF_TYPE = 319,
    SURFREF_TYPE = 320,
    V2_TYPE = 321,
    V3_TYPE = 322,
    V4_TYPE = 323,
    COMMA = 324,
    PRED = 325,
    HALF_OPTION = 326,
    EQ_OPTION = 327,
    NE_OPTION = 328,
    LT_OPTION = 329,
    LE_OPTION = 330,
    GT_OPTION = 331,
    GE_OPTION = 332,
    LO_OPTION = 333,
    LS_OPTION = 334,
    HI_OPTION = 335,
    HS_OPTION = 336,
    EQU_OPTION = 337,
    NEU_OPTION = 338,
    LTU_OPTION = 339,
    LEU_OPTION = 340,
    GTU_OPTION = 341,
    GEU_OPTION = 342,
    NUM_OPTION = 343,
    NAN_OPTION = 344,
    CF_OPTION = 345,
    SF_OPTION = 346,
    NSF_OPTION = 347,
    LEFT_SQUARE_BRACKET = 348,
    RIGHT_SQUARE_BRACKET = 349,
    WIDE_OPTION = 350,
    SPECIAL_REGISTER = 351,
    MINUS = 352,
    PLUS = 353,
    COLON = 354,
    SEMI_COLON = 355,
    EXCLAMATION = 356,
    PIPE = 357,
    RIGHT_BRACE = 358,
    LEFT_BRACE = 359,
    EQUALS = 360,
    PERIOD = 361,
    BACKSLASH = 362,
    DIMENSION_MODIFIER = 363,
    RN_OPTION = 364,
    RZ_OPTION = 365,
    RM_OPTION = 366,
    RP_OPTION = 367,
    RNI_OPTION = 368,
    RZI_OPTION = 369,
    RMI_OPTION = 370,
    RPI_OPTION = 371,
    UNI_OPTION = 372,
    GEOM_MODIFIER_1D = 373,
    GEOM_MODIFIER_2D = 374,
    GEOM_MODIFIER_3D = 375,
    SAT_OPTION = 376,
    FTZ_OPTION = 377,
    NEG_OPTION = 378,
    SYNC_OPTION = 379,
    RED_OPTION = 380,
    ARRIVE_OPTION = 381,
    ATOMIC_POPC = 382,
    ATOMIC_AND = 383,
    ATOMIC_OR = 384,
    ATOMIC_XOR = 385,
    ATOMIC_CAS = 386,
    ATOMIC_EXCH = 387,
    ATOMIC_ADD = 388,
    ATOMIC_INC = 389,
    ATOMIC_DEC = 390,
    ATOMIC_MIN = 391,
    ATOMIC_MAX = 392,
    LEFT_ANGLE_BRACKET = 393,
    RIGHT_ANGLE_BRACKET = 394,
    LEFT_PAREN = 395,
    RIGHT_PAREN = 396,
    APPROX_OPTION = 397,
    FULL_OPTION = 398,
    ANY_OPTION = 399,
    ALL_OPTION = 400,
    BALLOT_OPTION = 401,
    GLOBAL_OPTION = 402,
    CTA_OPTION = 403,
    SYS_OPTION = 404,
    EXIT_OPTION = 405,
    ABS_OPTION = 406,
    TO_OPTION = 407,
    CA_OPTION = 408,
    CG_OPTION = 409,
    CS_OPTION = 410,
    LU_OPTION = 411,
    CV_OPTION = 412,
    WB_OPTION = 413,
    WT_OPTION = 414
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 30 "ptx.y" /* yacc.c:355  */

  double double_value;
  float  float_value;
  int    int_value;
  char * string_value;
  void * ptr_value;

#line 283 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE ptx_lval;

int ptx_parse (void);

#endif /* !YY_PTX_HOME_SUN_2018_LAPERM_GPGPU_SIM_CDP_BUILD_GCC_4_4_7_CUDA_6050_RELEASE_CUDA_SIM_PTX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 199 "ptx.y" /* yacc.c:358  */

  	#include "ptx_parser.h"
	#include <stdlib.h>
	#include <string.h>
	#include <math.h>
	void syntax_not_implemented();
	extern int g_func_decl;
	int ptx_lex(void);
	int ptx_error(const char *);

#line 308 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   579

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  160
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  278
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  385

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   414

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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   212,   212,   213,   214,   215,   218,   218,   219,   219,
     219,   222,   225,   226,   229,   230,   233,   233,   233,   234,
     234,   235,   238,   238,   238,   239,   242,   243,   244,   245,
     246,   247,   248,   251,   252,   253,   253,   255,   255,   256,
     256,   258,   259,   260,   262,   263,   264,   266,   268,   270,
     271,   272,   273,   274,   274,   275,   275,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   291,   292,
     293,   294,   297,   299,   300,   302,   303,   315,   316,   319,
     320,   322,   323,   324,   325,   326,   329,   331,   332,   333,
     336,   337,   338,   339,   340,   341,   342,   345,   346,   349,
     350,   351,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   378,   379,   381,   382,   384,   385,
     386,   388,   388,   389,   390,   391,   392,   395,   395,   396,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   413,   414,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   466,   467,   469,   470,   471,   472,   475,   476,   477,
     478,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   501,
     502,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   526,   527,   528,   529,   532,   532,   537,   538,   541,
     542,   543,   544,   545,   548,   549,   550,   551,   552,   553,
     554,   557,   558,   559,   562,   563,   564,   565,   566
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "OPCODE", "ALIGN_DIRECTIVE",
  "BRANCHTARGETS_DIRECTIVE", "BYTE_DIRECTIVE", "CALLPROTOTYPE_DIRECTIVE",
  "CALLTARGETS_DIRECTIVE", "CONST_DIRECTIVE", "CONSTPTR_DIRECTIVE",
  "PTR_DIRECTIVE", "ENTRY_DIRECTIVE", "EXTERN_DIRECTIVE", "FILE_DIRECTIVE",
  "FUNC_DIRECTIVE", "GLOBAL_DIRECTIVE", "LOCAL_DIRECTIVE", "LOC_DIRECTIVE",
  "MAXNCTAPERSM_DIRECTIVE", "MAXNNREG_DIRECTIVE", "MAXNTID_DIRECTIVE",
  "MINNCTAPERSM_DIRECTIVE", "PARAM_DIRECTIVE", "PRAGMA_DIRECTIVE",
  "REG_DIRECTIVE", "REQNTID_DIRECTIVE", "SECTION_DIRECTIVE",
  "SHARED_DIRECTIVE", "SREG_DIRECTIVE", "STRUCT_DIRECTIVE",
  "SURF_DIRECTIVE", "TARGET_DIRECTIVE", "TEX_DIRECTIVE", "UNION_DIRECTIVE",
  "VERSION_DIRECTIVE", "ADDRESS_SIZE_DIRECTIVE", "VISIBLE_DIRECTIVE",
  "WEAK_DIRECTIVE", "IDENTIFIER", "INT_OPERAND", "FLOAT_OPERAND",
  "DOUBLE_OPERAND", "S8_TYPE", "S16_TYPE", "S32_TYPE", "S64_TYPE",
  "U8_TYPE", "U16_TYPE", "U32_TYPE", "U64_TYPE", "F16_TYPE", "F32_TYPE",
  "F64_TYPE", "FF64_TYPE", "B8_TYPE", "B16_TYPE", "B32_TYPE", "B64_TYPE",
  "BB64_TYPE", "BB128_TYPE", "PRED_TYPE", "TEXREF_TYPE", "SAMPLERREF_TYPE",
  "SURFREF_TYPE", "V2_TYPE", "V3_TYPE", "V4_TYPE", "COMMA", "PRED",
  "HALF_OPTION", "EQ_OPTION", "NE_OPTION", "LT_OPTION", "LE_OPTION",
  "GT_OPTION", "GE_OPTION", "LO_OPTION", "LS_OPTION", "HI_OPTION",
  "HS_OPTION", "EQU_OPTION", "NEU_OPTION", "LTU_OPTION", "LEU_OPTION",
  "GTU_OPTION", "GEU_OPTION", "NUM_OPTION", "NAN_OPTION", "CF_OPTION",
  "SF_OPTION", "NSF_OPTION", "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET",
  "WIDE_OPTION", "SPECIAL_REGISTER", "MINUS", "PLUS", "COLON",
  "SEMI_COLON", "EXCLAMATION", "PIPE", "RIGHT_BRACE", "LEFT_BRACE",
  "EQUALS", "PERIOD", "BACKSLASH", "DIMENSION_MODIFIER", "RN_OPTION",
  "RZ_OPTION", "RM_OPTION", "RP_OPTION", "RNI_OPTION", "RZI_OPTION",
  "RMI_OPTION", "RPI_OPTION", "UNI_OPTION", "GEOM_MODIFIER_1D",
  "GEOM_MODIFIER_2D", "GEOM_MODIFIER_3D", "SAT_OPTION", "FTZ_OPTION",
  "NEG_OPTION", "SYNC_OPTION", "RED_OPTION", "ARRIVE_OPTION",
  "ATOMIC_POPC", "ATOMIC_AND", "ATOMIC_OR", "ATOMIC_XOR", "ATOMIC_CAS",
  "ATOMIC_EXCH", "ATOMIC_ADD", "ATOMIC_INC", "ATOMIC_DEC", "ATOMIC_MIN",
  "ATOMIC_MAX", "LEFT_ANGLE_BRACKET", "RIGHT_ANGLE_BRACKET", "LEFT_PAREN",
  "RIGHT_PAREN", "APPROX_OPTION", "FULL_OPTION", "ANY_OPTION",
  "ALL_OPTION", "BALLOT_OPTION", "GLOBAL_OPTION", "CTA_OPTION",
  "SYS_OPTION", "EXIT_OPTION", "ABS_OPTION", "TO_OPTION", "CA_OPTION",
  "CG_OPTION", "CS_OPTION", "LU_OPTION", "CV_OPTION", "WB_OPTION",
  "WT_OPTION", "$accept", "input", "function_defn", "$@1", "$@2", "$@3",
  "block_spec", "block_spec_list", "function_decl", "$@4", "$@5", "$@6",
  "function_ident_param", "$@7", "$@8", "function_decl_header",
  "param_list", "$@9", "param_entry", "$@10", "$@11", "ptr_spec",
  "ptr_space_spec", "ptr_align_spec", "statement_block", "statement_list",
  "$@12", "$@13", "directive_statement", "variable_declaration",
  "variable_spec", "identifier_list", "identifier_spec", "var_spec_list",
  "var_spec", "align_spec", "space_spec", "addressable_spec", "type_spec",
  "vector_spec", "scalar_type", "initializer_list", "literal_list",
  "instruction_statement", "instruction", "$@14", "opcode_spec", "$@15",
  "pred_spec", "option_list", "option", "atomic_operation_spec",
  "rounding_mode", "floating_point_rounding_mode", "integer_rounding_mode",
  "compare_spec", "operand_list", "operand", "vector_operand",
  "tex_operand", "$@16", "builtin_operand", "memory_operand",
  "twin_operand", "literal_operand", "address_expression", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414
};
# endif

#define YYPACT_NINF -280

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-280)))

#define YYTABLE_NINF -140

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -280,   339,  -280,   -22,  -280,   -13,  -280,    18,    -4,  -280,
    -280,  -280,    52,  -280,   101,  -280,  -280,  -280,  -280,   125,
    -280,   137,   127,    -5,    20,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,   -10,   -35,  -280,   102,   168,   468,  -280,  -280,  -280,
    -280,  -280,   493,  -280,  -280,   153,  -280,   222,   187,   148,
     185,   157,  -280,  -280,  -280,  -280,  -280,  -280,   162,     0,
    -280,   229,  -280,    44,   218,   174,  -280,  -280,  -280,  -280,
     254,  -280,   257,  -280,   255,  -280,   404,  -280,   261,   268,
     269,  -280,     0,    77,   196,  -280,   123,   297,   168,    57,
     239,  -280,   276,   130,   247,   -34,   248,   267,   162,  -280,
    -280,   251,   136,   343,  -280,   290,  -280,   162,  -280,  -280,
    -280,   219,   221,   272,  -280,   223,  -280,  -280,  -280,  -280,
      57,  -280,  -280,   326,   334,    -3,  -280,   487,   340,  -280,
     162,  -280,  -280,  -280,  -280,   397,    56,   271,    -2,   341,
     342,   164,  -280,   344,  -280,  -280,  -280,  -280,  -280,   310,
     370,  -280,   468,   468,  -280,  -280,  -280,  -280,   309,   -37,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,    -3,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,   300,   375,   384,   385,   118,  -280,
     332,  -280,   131,   134,   122,  -280,  -280,  -280,    94,   286,
     149,  -280,   362,   420,   168,   229,    77,  -280,   232,  -280,
    -280,   158,  -280,   345,   351,   352,  -280,   103,   106,  -280,
    -280,  -280,   394,  -280,  -280,  -280,   169,   354,   436,  -280,
    -280,   117,  -280,   410,   439,   234,   168,  -280,  -280,   -53,
    -280,  -280,   -16,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
     377,  -280,    97,   414,  -280,   346,   164,  -280,   443,  -280,
    -280,  -280,   483,  -280,  -280,  -280,  -280,   184,   154,   395,
     451,  -280,   164,  -280,  -280,  -280,    77,  -280,  -280,   210,
    -280,  -280,    98,   424,  -280,  -280,  -280,   456,  -280,   361,
     400,   164,  -280,   364,  -280
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,    90,     0,    26,    84,     0,    29,
      91,    92,     0,    93,     0,    87,    94,    88,    95,     0,
      96,     0,     0,     0,    85,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,    99,   100,   101,
       4,     5,    21,     3,     0,     0,    72,    79,    83,    81,
      89,    82,     0,    97,    86,     0,    31,     0,     0,     0,
      63,    58,    60,    27,    30,    28,    32,    67,     0,     0,
      16,     0,    57,    75,    68,    73,    84,    85,    80,    98,
       0,    64,     0,    66,     0,    59,    55,     7,     0,     0,
       0,    14,     9,     0,    25,    20,     0,     0,     0,     0,
       0,    65,    61,   137,     0,     0,     0,    53,     0,    49,
      50,     0,   136,     0,    13,     0,    12,     0,    15,    37,
      39,     0,     0,     0,    77,     0,    74,   271,   272,   273,
       0,    69,    70,     0,     0,     0,   129,   140,     0,    48,
       0,    51,    52,    56,   128,   231,     0,   258,     0,     0,
       0,     0,   135,   229,   237,   239,   236,   234,   235,     0,
       0,    10,     0,     0,    17,    23,    78,    76,     0,     0,
     126,    71,    62,   182,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   163,   203,   204,   205,   206,   207,   208,   209,
     210,   162,   170,   171,   172,   173,   174,   175,   159,   161,
     160,   191,   190,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   176,   177,   164,   165,   166,   167,   168,   169,
     178,   179,   181,   183,   184,   185,   186,   187,   188,   189,
     157,   155,   138,   153,   180,   158,   201,   202,   156,   143,
     145,   142,   144,   146,   147,   149,   148,   150,   151,   152,
     141,    54,   241,   243,     0,     0,     0,     0,   274,   278,
       0,   257,   233,     0,     0,   238,   263,   232,     0,     0,
       0,   130,     0,    41,     0,     0,    33,   125,     0,   124,
     154,   274,   271,     0,     0,     0,   240,   245,   248,   255,
     275,   276,     0,   259,   242,   244,   274,     0,     0,   254,
     131,     0,   230,   229,     0,     0,     0,    40,    18,     0,
      34,   127,     0,   262,   261,   260,   246,   247,   249,   250,
       0,   277,     0,     0,   134,     0,     0,    11,     0,    44,
      45,    46,     0,    43,    38,    35,    24,   264,     0,     0,
       0,   251,     0,   133,    47,    42,     0,   265,   266,   267,
     270,   256,     0,     0,    36,   268,   269,     0,   252,     0,
       0,     0,   253,     0,   132
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -280,  -280,  -280,  -280,  -280,  -280,   406,  -280,   505,  -280,
    -280,  -280,   214,  -280,  -280,  -280,  -280,  -280,  -279,  -280,
    -280,  -280,  -280,   159,    85,  -280,  -280,  -280,   -78,  -280,
      71,  -280,  -106,  -280,   454,  -280,  -280,  -117,  -115,  -280,
     501,   425,  -280,   449,   444,  -280,  -280,  -280,  -280,   315,
    -280,  -280,  -280,  -280,  -280,  -280,  -122,  -121,  -155,  -280,
    -280,  -280,  -149,  -280,  -105,   298
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    50,    78,    79,   127,   101,   102,   116,   103,
     295,    81,   105,   132,   296,    52,   329,   366,   131,   172,
     173,   326,   352,   353,    97,   117,   150,   118,    53,    54,
      55,    84,    85,    56,    57,    58,    59,    60,    61,    62,
      63,   141,   179,   120,   121,   343,   122,   145,   123,   252,
     253,   254,   255,   256,   257,   258,   322,   323,   164,   165,
     340,   166,   167,   303,   168,   280
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     162,   163,   136,   285,   142,   -19,   147,     4,    73,   286,
      -8,    74,    -8,    -8,    10,    11,   355,   330,   119,    64,
      98,    13,    99,   100,   357,   341,    16,    65,   250,    18,
     251,    20,   298,    75,    66,   180,    76,    67,   282,   151,
     289,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,   299,   148,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   374,   356,   358,
      77,   283,   202,    68,    -6,   284,   278,   279,   137,   138,
     139,   129,   160,   130,    69,    80,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   286,   250,   106,   251,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   155,   137,   138,
     139,   140,   317,   318,   133,    70,   360,   377,    72,   304,
    -139,  -139,  -139,  -139,   316,   279,   155,   137,   138,   139,
      71,   336,   107,   337,   338,   359,   339,   309,   327,   155,
     137,   138,   139,   331,   369,   370,   310,   319,   311,   345,
     361,   378,    82,   153,   155,   137,   138,   139,    83,   314,
     156,   315,   171,   157,   158,   283,   312,   134,   159,   284,
     354,   160,    90,  -139,   274,    91,  -139,  -139,    92,   156,
    -139,  -139,   157,   158,  -139,   271,   310,   159,   311,   348,
     160,   373,   156,   293,   294,   157,   158,   310,    93,   311,
     159,   349,   350,   160,    94,    95,   332,   156,   344,   383,
     157,   158,   367,   351,   368,   159,    96,   312,   160,   104,
    -139,   113,     3,   137,   138,   139,   161,     4,     5,   109,
       6,     7,     8,     9,    10,    11,    12,   108,   375,   321,
     376,    13,    14,    15,   110,   112,    16,    17,   111,    18,
      19,    20,   124,    21,    22,    23,    24,   114,   143,   125,
     126,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,   -22,   115,   135,     2,
     301,   302,   138,   139,     3,   144,   146,   113,    77,     4,
       5,   154,     6,     7,     8,     9,    10,    11,    12,   170,
     174,   175,   177,    13,    14,    15,   176,   181,    16,    17,
     149,    18,    19,    20,   182,    21,    22,    23,    24,   281,
     270,   287,   288,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   113,     3,
     291,   292,   297,   290,     4,     5,   306,     6,     7,     8,
       9,    10,    11,    12,   307,   308,   313,   320,    13,    14,
      15,   324,   325,    16,    17,   341,    18,    19,    20,   333,
      21,    22,    23,    24,   114,   334,   335,   274,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,     3,   115,   272,   342,   273,     4,   346,
     347,   160,    86,   362,   364,    10,    11,   363,   348,   371,
     274,   372,    13,   379,    15,   275,   380,    16,    17,   276,
      18,   381,    20,   382,   277,   384,    51,    87,   128,   328,
      88,   365,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,   259,
     260,   261,   262,    89,   263,   178,   152,   169,   300,   264,
     265,     0,   305,   266,     0,     0,     0,   267,   268,   269
};

static const yytype_int16 yycheck[] =
{
     122,   122,   108,   158,   109,    40,    40,    10,    13,   158,
      20,    16,    22,    23,    17,    18,    69,   296,    96,    41,
      20,    24,    22,    23,    40,    41,    29,    40,   145,    32,
     145,    34,    69,    13,    16,   140,    16,    41,    40,   117,
     161,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,   103,   101,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,   366,   141,   105,
     100,    93,    95,    41,   104,    97,    40,    41,    41,    42,
      43,    24,   104,    26,     3,   140,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   284,   253,    93,   253,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,    40,    41,    42,
      43,   104,    40,    69,    41,    40,    69,    69,    41,   274,
      40,    41,    42,    43,    40,    41,    40,    41,    42,    43,
      43,    78,   138,    80,    78,   340,    80,    69,   294,    40,
      41,    42,    43,   298,    40,    41,    78,   103,    80,   321,
     103,   103,   100,   118,    40,    41,    42,    43,    40,    78,
      93,    80,   127,    96,    97,    93,    98,    94,   101,    97,
     326,   104,    69,    93,    93,     3,    96,    97,    41,    93,
     100,   101,    96,    97,   104,   150,    78,   101,    80,     5,
     104,   362,    93,   172,   173,    96,    97,    78,   100,    80,
     101,    17,    18,   104,    69,    98,    98,    93,   141,   381,
      96,    97,    78,    29,    80,   101,   104,    98,   104,    40,
     140,     4,     5,    41,    42,    43,   140,    10,    11,   105,
      13,    14,    15,    16,    17,    18,    19,    69,    78,   140,
      80,    24,    25,    26,    40,    40,    29,    30,    41,    32,
      33,    34,    41,    36,    37,    38,    39,    40,    69,    41,
      41,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,   140,    70,    41,     0,
      40,    41,    42,    43,     5,    69,    99,     4,   100,    10,
      11,   100,    13,    14,    15,    16,    17,    18,    19,    69,
     141,   140,   139,    24,    25,    26,    94,    41,    29,    30,
     103,    32,    33,    34,    40,    36,    37,    38,    39,   108,
      40,    40,    40,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,     4,     5,
     100,    41,   103,    69,    10,    11,    41,    13,    14,    15,
      16,    17,    18,    19,    40,    40,    94,   141,    24,    25,
      26,    69,    12,    29,    30,    41,    32,    33,    34,    94,
      36,    37,    38,    39,    40,    94,    94,    93,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,     5,    70,    78,    40,    80,    10,    69,
      41,   104,    14,    69,    41,    17,    18,   141,     5,    94,
      93,    40,    24,    69,    26,    98,    40,    29,    30,   102,
      32,   140,    34,   103,   107,   141,     1,    39,   102,   295,
      56,   352,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    72,
      73,    74,    75,    62,    77,   140,   117,   123,   253,    82,
      83,    -1,   274,    86,    -1,    -1,    -1,    90,    91,    92
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   161,     0,     5,    10,    11,    13,    14,    15,    16,
      17,    18,    19,    24,    25,    26,    29,    30,    32,    33,
      34,    36,    37,    38,    39,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     162,   168,   175,   188,   189,   190,   193,   194,   195,   196,
     197,   198,   199,   200,    41,    40,    16,    41,    41,     3,
      40,    43,    41,    13,    16,    13,    16,   100,   163,   164,
     140,   171,   100,    40,   191,   192,    14,    39,   194,   200,
      69,     3,    41,   100,    69,    98,   104,   184,    20,    22,
      23,   166,   167,   169,    40,   172,    93,   138,    69,   105,
      40,    41,    40,     4,    40,    70,   168,   185,   187,   188,
     203,   204,   206,   208,    41,    41,    41,   165,   166,    24,
      26,   178,   173,    41,    94,    41,   192,    41,    42,    43,
     104,   201,   224,    69,    69,   207,    99,    40,   101,   103,
     186,   188,   203,   184,   100,    40,    93,    96,    97,   101,
     104,   140,   216,   217,   218,   219,   221,   222,   224,   204,
      69,   184,   179,   180,   141,   140,    94,   139,   201,   202,
     224,    41,    40,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    95,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     197,   198,   209,   210,   211,   212,   213,   214,   215,    72,
      73,    74,    75,    77,    82,    83,    86,    90,    91,    92,
      40,   184,    78,    80,    93,    98,   102,   107,    40,    41,
     225,   108,    40,    93,    97,   218,   222,    40,    40,   217,
      69,   100,    41,   190,   190,   170,   174,   103,    69,   103,
     209,    40,    41,   223,   224,   225,    41,    40,    40,    69,
      78,    80,    98,    94,    78,    80,    40,    40,    69,   103,
     141,   140,   216,   217,    69,    12,   181,   192,   172,   176,
     178,   224,    98,    94,    94,    94,    78,    80,    78,    80,
     220,    41,    40,   205,   141,   216,    69,    41,     5,    17,
      18,    29,   182,   183,   192,    69,   141,    40,   105,   218,
      69,   103,    69,   141,    41,   183,   177,    78,    80,    40,
      41,    94,    40,   217,   178,    78,    80,    69,   103,    69,
      40,   140,   103,   216,   141
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   160,   161,   161,   161,   161,   163,   162,   164,   165,
     162,   166,   166,   166,   167,   167,   169,   170,   168,   171,
     168,   168,   173,   174,   172,   172,   175,   175,   175,   175,
     175,   175,   175,   176,   176,   177,   176,   179,   178,   180,
     178,   181,   181,   181,   182,   182,   182,   183,   184,   185,
     185,   185,   185,   186,   185,   187,   185,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   189,   189,
     189,   189,   190,   191,   191,   192,   192,   192,   192,   193,
     193,   194,   194,   194,   194,   194,   195,   196,   196,   196,
     197,   197,   197,   197,   197,   197,   197,   198,   198,   199,
     199,   199,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   201,   201,   202,   202,   203,   203,
     203,   205,   204,   204,   204,   204,   204,   207,   206,   206,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   209,   209,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   212,   212,   213,   213,   213,   213,   214,   214,   214,
     214,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   216,
     216,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   218,   218,   218,   218,   220,   219,   221,   221,   222,
     222,   222,   222,   222,   223,   223,   223,   223,   223,   223,
     223,   224,   224,   224,   225,   225,   225,   225,   225
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     0,     3,     0,     0,
       5,     6,     2,     2,     1,     2,     0,     0,     7,     0,
       3,     1,     0,     0,     6,     1,     1,     2,     2,     1,
       2,     2,     2,     0,     1,     0,     4,     0,     5,     0,
       4,     0,     3,     2,     1,     1,     1,     2,     3,     1,
       1,     2,     2,     0,     3,     0,     2,     2,     2,     3,
       2,     4,     6,     2,     3,     4,     3,     2,     2,     4,
       4,     6,     1,     1,     3,     1,     4,     3,     4,     1,
       2,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     3,     2,     2,
       3,     0,    11,     6,     5,     2,     1,     0,     3,     1,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     2,     1,     1,     1,     1,     2,     1,
       3,     2,     3,     2,     3,     3,     4,     4,     3,     4,
       4,     5,     7,     9,     3,     0,     6,     2,     1,     3,
       4,     4,     4,     2,     3,     4,     4,     4,     5,     5,
       4,     1,     1,     1,     1,     2,     2,     3,     1
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
#line 218 "ptx.y" /* yacc.c:1646  */
    { set_symtab((yyvsp[0].ptr_value)); func_header(".skip"); }
#line 1774 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 218 "ptx.y" /* yacc.c:1646  */
    { end_function(); }
#line 1780 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 219 "ptx.y" /* yacc.c:1646  */
    { set_symtab((yyvsp[0].ptr_value)); }
#line 1786 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 219 "ptx.y" /* yacc.c:1646  */
    { func_header(".skip"); }
#line 1792 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 219 "ptx.y" /* yacc.c:1646  */
    { end_function(); }
#line 1798 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 222 "ptx.y" /* yacc.c:1646  */
    {func_header_info_int(".maxntid", (yyvsp[-4].int_value));
										func_header_info_int(",", (yyvsp[-2].int_value));
										func_header_info_int(",", (yyvsp[0].int_value)); }
#line 1806 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 225 "ptx.y" /* yacc.c:1646  */
    { func_header_info_int(".minnctapersm", (yyvsp[0].int_value)); printf("GPGPU-Sim: Warning: .minnctapersm ignored. \n"); }
#line 1812 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 226 "ptx.y" /* yacc.c:1646  */
    { func_header_info_int(".maxnctapersm", (yyvsp[0].int_value)); printf("GPGPU-Sim: Warning: .maxnctapersm ignored. \n"); }
#line 1818 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 233 "ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[-1].int_value)); func_header_info("(");}
#line 1824 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 233 "ptx.y" /* yacc.c:1646  */
    {func_header_info(")");}
#line 1830 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 233 "ptx.y" /* yacc.c:1646  */
    { (yyval.ptr_value) = reset_symtab(); }
#line 1836 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 234 "ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[0].int_value)); }
#line 1842 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 234 "ptx.y" /* yacc.c:1646  */
    { (yyval.ptr_value) = reset_symtab(); }
#line 1848 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 235 "ptx.y" /* yacc.c:1646  */
    { start_function((yyvsp[0].int_value)); add_function_name(""); g_func_decl=0; (yyval.ptr_value) = reset_symtab(); }
#line 1854 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 238 "ptx.y" /* yacc.c:1646  */
    { add_function_name((yyvsp[0].string_value)); }
#line 1860 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 238 "ptx.y" /* yacc.c:1646  */
    {func_header_info("(");}
#line 1866 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 238 "ptx.y" /* yacc.c:1646  */
    { g_func_decl=0; func_header_info(")"); }
#line 1872 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 239 "ptx.y" /* yacc.c:1646  */
    { add_function_name((yyvsp[0].string_value)); g_func_decl=0; }
#line 1878 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 242 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 1; g_func_decl=1; func_header(".entry"); }
#line 1884 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 243 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 1; g_func_decl=1; func_header(".entry"); }
#line 1890 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 244 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 1; g_func_decl=1; func_header(".entry"); }
#line 1896 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 245 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
#line 1902 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 246 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
#line 1908 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 247 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 2; g_func_decl=1; func_header(".func"); }
#line 1914 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 248 "ptx.y" /* yacc.c:1646  */
    { (yyval.int_value) = 0; g_func_decl=1; func_header(".func"); }
#line 1920 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 252 "ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 1926 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 253 "ptx.y" /* yacc.c:1646  */
    {func_header_info(",");}
#line 1932 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 253 "ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 1938 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 255 "ptx.y" /* yacc.c:1646  */
    { add_space_spec(param_space_unclassified,0); }
#line 1944 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 255 "ptx.y" /* yacc.c:1646  */
    { add_function_arg(); }
#line 1950 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 256 "ptx.y" /* yacc.c:1646  */
    { add_space_spec(reg_space,0); }
#line 1956 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 256 "ptx.y" /* yacc.c:1646  */
    { add_function_arg(); }
#line 1962 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 262 "ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(global_space); }
#line 1968 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 263 "ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(local_space); }
#line 1974 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 264 "ptx.y" /* yacc.c:1646  */
    { add_ptr_spec(shared_space); }
#line 1980 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 270 "ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 1986 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 271 "ptx.y" /* yacc.c:1646  */
    { add_instruction(); }
#line 1992 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 272 "ptx.y" /* yacc.c:1646  */
    { add_directive(); }
#line 1998 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 273 "ptx.y" /* yacc.c:1646  */
    { add_instruction(); }
#line 2004 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 274 "ptx.y" /* yacc.c:1646  */
    {start_inst_group();}
#line 2010 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 274 "ptx.y" /* yacc.c:1646  */
    {end_inst_group();}
#line 2016 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 275 "ptx.y" /* yacc.c:1646  */
    {start_inst_group();}
#line 2022 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 275 "ptx.y" /* yacc.c:1646  */
    {end_inst_group();}
#line 2028 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 279 "ptx.y" /* yacc.c:1646  */
    { add_version_info((yyvsp[0].double_value), 0); }
#line 2034 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 280 "ptx.y" /* yacc.c:1646  */
    { add_version_info((yyvsp[-1].double_value),1); }
#line 2040 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 281 "ptx.y" /* yacc.c:1646  */
    {/*Do nothing*/}
#line 2046 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 282 "ptx.y" /* yacc.c:1646  */
    { target_header2((yyvsp[-2].string_value),(yyvsp[0].string_value)); }
#line 2052 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 283 "ptx.y" /* yacc.c:1646  */
    { target_header3((yyvsp[-4].string_value),(yyvsp[-2].string_value),(yyvsp[0].string_value)); }
#line 2058 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 284 "ptx.y" /* yacc.c:1646  */
    { target_header((yyvsp[0].string_value)); }
#line 2064 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 285 "ptx.y" /* yacc.c:1646  */
    { add_file((yyvsp[-1].int_value),(yyvsp[0].string_value)); }
#line 2070 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 287 "ptx.y" /* yacc.c:1646  */
    { add_pragma((yyvsp[-1].string_value)); }
#line 2076 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 288 "ptx.y" /* yacc.c:1646  */
    {/*Do nothing*/}
#line 2082 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 291 "ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2088 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 292 "ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2094 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 293 "ptx.y" /* yacc.c:1646  */
    { add_variables(); }
#line 2100 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 294 "ptx.y" /* yacc.c:1646  */
    { add_constptr((yyvsp[-4].string_value), (yyvsp[-2].string_value), (yyvsp[0].int_value)); }
#line 2106 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 297 "ptx.y" /* yacc.c:1646  */
    { set_variable_type(); }
#line 2112 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 302 "ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[0].string_value),0,NON_ARRAY_IDENTIFIER); func_header_info((yyvsp[0].string_value));}
#line 2118 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 303 "ptx.y" /* yacc.c:1646  */
    { func_header_info((yyvsp[-3].string_value)); func_header_info_int("<", (yyvsp[-1].int_value)); func_header_info(">");
		int i,lbase,l;
		char *id = NULL;
		lbase = strlen((yyvsp[-3].string_value));
		for( i=0; i < (yyvsp[-1].int_value); i++ ) { 
			l = lbase + (int)log10(i+1)+10;
			id = (char*) malloc(l);
			snprintf(id,l,"%s%u",(yyvsp[-3].string_value),i);
			add_identifier(id,0,NON_ARRAY_IDENTIFIER); 
		}
		free((yyvsp[-3].string_value));
	}
#line 2135 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 315 "ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[-2].string_value),0,ARRAY_IDENTIFIER_NO_DIM); func_header_info((yyvsp[-2].string_value)); func_header_info("["); func_header_info("]");}
#line 2141 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 316 "ptx.y" /* yacc.c:1646  */
    { add_identifier((yyvsp[-3].string_value),(yyvsp[-1].int_value),ARRAY_IDENTIFIER); func_header_info((yyvsp[-3].string_value)); func_header_info_int("[",(yyvsp[-1].int_value)); func_header_info("]");}
#line 2147 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 325 "ptx.y" /* yacc.c:1646  */
    { add_extern_spec(); }
#line 2153 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 329 "ptx.y" /* yacc.c:1646  */
    { add_alignment_spec((yyvsp[0].int_value)); }
#line 2159 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 331 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(reg_space,0); }
#line 2165 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 332 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(reg_space,0); }
#line 2171 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 336 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(const_space,(yyvsp[0].int_value)); }
#line 2177 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 337 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(global_space,0); }
#line 2183 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 338 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(local_space,0); }
#line 2189 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 339 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(param_space_unclassified,0); }
#line 2195 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 340 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(shared_space,0); }
#line 2201 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 341 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(surf_space,0); }
#line 2207 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 342 "ptx.y" /* yacc.c:1646  */
    {  add_space_spec(tex_space,0); }
#line 2213 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 349 "ptx.y" /* yacc.c:1646  */
    {  add_option(V2_TYPE); func_header_info(".v2");}
#line 2219 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 350 "ptx.y" /* yacc.c:1646  */
    {  add_option(V3_TYPE); func_header_info(".v3");}
#line 2225 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 351 "ptx.y" /* yacc.c:1646  */
    {  add_option(V4_TYPE); func_header_info(".v4");}
#line 2231 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 354 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S8_TYPE ); }
#line 2237 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 355 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S16_TYPE ); }
#line 2243 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 356 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S32_TYPE ); }
#line 2249 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 357 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( S64_TYPE ); }
#line 2255 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 358 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U8_TYPE ); }
#line 2261 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 359 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U16_TYPE ); }
#line 2267 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 360 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U32_TYPE ); }
#line 2273 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 361 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( U64_TYPE ); }
#line 2279 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 362 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F16_TYPE ); }
#line 2285 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 363 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F32_TYPE ); }
#line 2291 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 364 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( F64_TYPE ); }
#line 2297 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 365 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( FF64_TYPE ); }
#line 2303 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 366 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B8_TYPE );  }
#line 2309 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 367 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B16_TYPE ); }
#line 2315 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 368 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B32_TYPE ); }
#line 2321 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 369 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( B64_TYPE ); }
#line 2327 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 370 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( BB64_TYPE ); }
#line 2333 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 371 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( BB128_TYPE ); }
#line 2339 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 372 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( PRED_TYPE ); }
#line 2345 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 373 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( TEXREF_TYPE ); }
#line 2351 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 374 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( SAMPLERREF_TYPE ); }
#line 2357 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 375 "ptx.y" /* yacc.c:1646  */
    { add_scalar_type_spec( SURFREF_TYPE ); }
#line 2363 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 378 "ptx.y" /* yacc.c:1646  */
    { add_array_initializer(); }
#line 2369 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 379 "ptx.y" /* yacc.c:1646  */
    { syntax_not_implemented(); }
#line 2375 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 385 "ptx.y" /* yacc.c:1646  */
    { add_label((yyvsp[-1].string_value)); }
#line 2381 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 388 "ptx.y" /* yacc.c:1646  */
    { set_return(); }
#line 2387 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 395 "ptx.y" /* yacc.c:1646  */
    { add_opcode((yyvsp[0].int_value)); }
#line 2393 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 396 "ptx.y" /* yacc.c:1646  */
    { add_opcode((yyvsp[0].int_value)); }
#line 2399 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 398 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[0].string_value),0, -1); }
#line 2405 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 399 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[0].string_value),1, -1); }
#line 2411 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 400 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,1); }
#line 2417 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 401 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,2); }
#line 2423 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 402 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,3); }
#line 2429 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 403 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,5); }
#line 2435 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 404 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,6); }
#line 2441 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 405 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,10); }
#line 2447 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 406 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,12); }
#line 2453 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 407 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,13); }
#line 2459 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 408 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,17); }
#line 2465 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 409 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,19); }
#line 2471 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 410 "ptx.y" /* yacc.c:1646  */
    { add_pred((yyvsp[-1].string_value),0,28); }
#line 2477 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 420 "ptx.y" /* yacc.c:1646  */
    { add_option(SYNC_OPTION); }
#line 2483 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 421 "ptx.y" /* yacc.c:1646  */
    { add_option(ARRIVE_OPTION); }
#line 2489 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 422 "ptx.y" /* yacc.c:1646  */
    { add_option(RED_OPTION); }
#line 2495 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 423 "ptx.y" /* yacc.c:1646  */
    { add_option(UNI_OPTION); }
#line 2501 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 424 "ptx.y" /* yacc.c:1646  */
    { add_option(WIDE_OPTION); }
#line 2507 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 425 "ptx.y" /* yacc.c:1646  */
    { add_option(ANY_OPTION); }
#line 2513 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 426 "ptx.y" /* yacc.c:1646  */
    { add_option(ALL_OPTION); }
#line 2519 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 427 "ptx.y" /* yacc.c:1646  */
    { add_option(BALLOT_OPTION); }
#line 2525 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 428 "ptx.y" /* yacc.c:1646  */
    { add_option(GLOBAL_OPTION); }
#line 2531 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 429 "ptx.y" /* yacc.c:1646  */
    { add_option(CTA_OPTION); }
#line 2537 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 430 "ptx.y" /* yacc.c:1646  */
    { add_option(SYS_OPTION); }
#line 2543 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 431 "ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_1D); }
#line 2549 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 432 "ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_2D); }
#line 2555 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 433 "ptx.y" /* yacc.c:1646  */
    { add_option(GEOM_MODIFIER_3D); }
#line 2561 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 434 "ptx.y" /* yacc.c:1646  */
    { add_option(SAT_OPTION); }
#line 2567 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 435 "ptx.y" /* yacc.c:1646  */
    { add_option(FTZ_OPTION); }
#line 2573 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 436 "ptx.y" /* yacc.c:1646  */
    { add_option(NEG_OPTION); }
#line 2579 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 437 "ptx.y" /* yacc.c:1646  */
    { add_option(APPROX_OPTION); }
#line 2585 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 438 "ptx.y" /* yacc.c:1646  */
    { add_option(FULL_OPTION); }
#line 2591 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 439 "ptx.y" /* yacc.c:1646  */
    { add_option(EXIT_OPTION); }
#line 2597 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 440 "ptx.y" /* yacc.c:1646  */
    { add_option(ABS_OPTION); }
#line 2603 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 442 "ptx.y" /* yacc.c:1646  */
    { add_option(TO_OPTION); }
#line 2609 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 443 "ptx.y" /* yacc.c:1646  */
    { add_option(HALF_OPTION); }
#line 2615 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 444 "ptx.y" /* yacc.c:1646  */
    { add_option(CA_OPTION); }
#line 2621 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 445 "ptx.y" /* yacc.c:1646  */
    { add_option(CG_OPTION); }
#line 2627 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 446 "ptx.y" /* yacc.c:1646  */
    { add_option(CS_OPTION); }
#line 2633 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 447 "ptx.y" /* yacc.c:1646  */
    { add_option(LU_OPTION); }
#line 2639 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 448 "ptx.y" /* yacc.c:1646  */
    { add_option(CV_OPTION); }
#line 2645 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 449 "ptx.y" /* yacc.c:1646  */
    { add_option(WB_OPTION); }
#line 2651 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 450 "ptx.y" /* yacc.c:1646  */
    { add_option(WT_OPTION); }
#line 2657 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 453 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_AND); }
#line 2663 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 454 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_POPC); }
#line 2669 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 455 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_OR); }
#line 2675 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 456 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_XOR); }
#line 2681 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 457 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_CAS); }
#line 2687 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 458 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_EXCH); }
#line 2693 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 459 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_ADD); }
#line 2699 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 460 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_INC); }
#line 2705 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 461 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_DEC); }
#line 2711 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 462 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_MIN); }
#line 2717 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 463 "ptx.y" /* yacc.c:1646  */
    { add_option(ATOMIC_MAX); }
#line 2723 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 469 "ptx.y" /* yacc.c:1646  */
    { add_option(RN_OPTION); }
#line 2729 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 470 "ptx.y" /* yacc.c:1646  */
    { add_option(RZ_OPTION); }
#line 2735 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 471 "ptx.y" /* yacc.c:1646  */
    { add_option(RM_OPTION); }
#line 2741 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 472 "ptx.y" /* yacc.c:1646  */
    { add_option(RP_OPTION); }
#line 2747 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 475 "ptx.y" /* yacc.c:1646  */
    { add_option(RNI_OPTION); }
#line 2753 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 476 "ptx.y" /* yacc.c:1646  */
    { add_option(RZI_OPTION); }
#line 2759 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 477 "ptx.y" /* yacc.c:1646  */
    { add_option(RMI_OPTION); }
#line 2765 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 478 "ptx.y" /* yacc.c:1646  */
    { add_option(RPI_OPTION); }
#line 2771 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 481 "ptx.y" /* yacc.c:1646  */
    { add_option(EQ_OPTION); }
#line 2777 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 482 "ptx.y" /* yacc.c:1646  */
    { add_option(NE_OPTION); }
#line 2783 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 483 "ptx.y" /* yacc.c:1646  */
    { add_option(LT_OPTION); }
#line 2789 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 484 "ptx.y" /* yacc.c:1646  */
    { add_option(LE_OPTION); }
#line 2795 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 485 "ptx.y" /* yacc.c:1646  */
    { add_option(GT_OPTION); }
#line 2801 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 486 "ptx.y" /* yacc.c:1646  */
    { add_option(GE_OPTION); }
#line 2807 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 487 "ptx.y" /* yacc.c:1646  */
    { add_option(LO_OPTION); }
#line 2813 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 488 "ptx.y" /* yacc.c:1646  */
    { add_option(LS_OPTION); }
#line 2819 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 489 "ptx.y" /* yacc.c:1646  */
    { add_option(HI_OPTION); }
#line 2825 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 490 "ptx.y" /* yacc.c:1646  */
    { add_option(HS_OPTION); }
#line 2831 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 491 "ptx.y" /* yacc.c:1646  */
    { add_option(EQU_OPTION); }
#line 2837 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 492 "ptx.y" /* yacc.c:1646  */
    { add_option(NEU_OPTION); }
#line 2843 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 493 "ptx.y" /* yacc.c:1646  */
    { add_option(LTU_OPTION); }
#line 2849 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 494 "ptx.y" /* yacc.c:1646  */
    { add_option(LEU_OPTION); }
#line 2855 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 495 "ptx.y" /* yacc.c:1646  */
    { add_option(GTU_OPTION); }
#line 2861 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 496 "ptx.y" /* yacc.c:1646  */
    { add_option(GEU_OPTION); }
#line 2867 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 497 "ptx.y" /* yacc.c:1646  */
    { add_option(NUM_OPTION); }
#line 2873 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 498 "ptx.y" /* yacc.c:1646  */
    { add_option(NAN_OPTION); }
#line 2879 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 504 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[0].string_value) ); }
#line 2885 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 505 "ptx.y" /* yacc.c:1646  */
    { add_neg_pred_operand( (yyvsp[0].string_value) ); }
#line 2891 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 506 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[0].string_value) ); change_operand_neg(); }
#line 2897 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 511 "ptx.y" /* yacc.c:1646  */
    { change_operand_neg(); }
#line 2903 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 513 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-2].string_value),(yyvsp[0].int_value)); }
#line 2909 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 514 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(1);}
#line 2915 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 515 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(1); change_operand_neg();}
#line 2921 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 516 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(2);}
#line 2927 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 517 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand( (yyvsp[-1].string_value) ); change_operand_lohi(2); change_operand_neg();}
#line 2933 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 518 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(-1);}
#line 2939 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 519 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-1); change_operand_lohi(1);}
#line 2945 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 520 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-1); change_operand_lohi(2);}
#line 2951 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 521 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(-3);}
#line 2957 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 522 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-3); change_operand_lohi(1);}
#line 2963 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 523 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(-3); change_operand_lohi(2);}
#line 2969 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 526 "ptx.y" /* yacc.c:1646  */
    { add_2vector_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 2975 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 527 "ptx.y" /* yacc.c:1646  */
    { add_3vector_operand((yyvsp[-5].string_value),(yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 2981 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 528 "ptx.y" /* yacc.c:1646  */
    { add_4vector_operand((yyvsp[-7].string_value),(yyvsp[-5].string_value),(yyvsp[-3].string_value),(yyvsp[-1].string_value)); }
#line 2987 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 529 "ptx.y" /* yacc.c:1646  */
    { add_1vector_operand((yyvsp[-1].string_value)); }
#line 2993 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 532 "ptx.y" /* yacc.c:1646  */
    { add_scalar_operand((yyvsp[-1].string_value)); }
#line 2999 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 537 "ptx.y" /* yacc.c:1646  */
    { add_builtin_operand((yyvsp[-1].int_value),(yyvsp[0].int_value)); }
#line 3005 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 538 "ptx.y" /* yacc.c:1646  */
    { add_builtin_operand((yyvsp[0].int_value),-1); }
#line 3011 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 541 "ptx.y" /* yacc.c:1646  */
    { add_memory_operand(); }
#line 3017 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 542 "ptx.y" /* yacc.c:1646  */
    { add_memory_operand(); change_memory_addr_space((yyvsp[-3].string_value)); }
#line 3023 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 543 "ptx.y" /* yacc.c:1646  */
    { change_memory_addr_space((yyvsp[-3].string_value)); }
#line 3029 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 544 "ptx.y" /* yacc.c:1646  */
    { change_memory_addr_space((yyvsp[-3].string_value)); add_memory_operand();}
#line 3035 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 545 "ptx.y" /* yacc.c:1646  */
    { change_operand_neg(); }
#line 3041 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 548 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-2].string_value),(yyvsp[0].string_value)); change_double_operand_type(1); }
#line 3047 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 549 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(1); change_operand_lohi(1); }
#line 3053 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 550 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[-1].string_value)); change_double_operand_type(1); change_operand_lohi(2); }
#line 3059 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 551 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-3].string_value),(yyvsp[0].string_value)); change_double_operand_type(2); }
#line 3065 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 552 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-4].string_value),(yyvsp[-1].string_value)); change_double_operand_type(2); change_operand_lohi(1); }
#line 3071 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 553 "ptx.y" /* yacc.c:1646  */
    { add_double_operand((yyvsp[-4].string_value),(yyvsp[-1].string_value)); change_double_operand_type(2); change_operand_lohi(2); }
#line 3077 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 554 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-3].string_value),(yyvsp[0].int_value)); change_double_operand_type(3); }
#line 3083 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 557 "ptx.y" /* yacc.c:1646  */
    { add_literal_int((yyvsp[0].int_value)); }
#line 3089 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 558 "ptx.y" /* yacc.c:1646  */
    { add_literal_float((yyvsp[0].float_value)); }
#line 3095 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 559 "ptx.y" /* yacc.c:1646  */
    { add_literal_double((yyvsp[0].double_value)); }
#line 3101 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 562 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[0].string_value),0); }
#line 3107 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 563 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-1].string_value),0); change_operand_lohi(1);}
#line 3113 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 564 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-1].string_value),0); change_operand_lohi(2); }
#line 3119 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 565 "ptx.y" /* yacc.c:1646  */
    { add_address_operand((yyvsp[-2].string_value),(yyvsp[0].int_value)); }
#line 3125 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 566 "ptx.y" /* yacc.c:1646  */
    { add_address_operand2((yyvsp[0].int_value)); }
#line 3131 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
    break;


#line 3135 "/home/sun/2018/LaPerm/gpgpu-sim-cdp/build/gcc-4.4.7/cuda-6050/release/cuda-sim/ptx.tab.c" /* yacc.c:1646  */
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
#line 569 "ptx.y" /* yacc.c:1906  */


extern int ptx_lineno;
extern const char *g_filename;

void syntax_not_implemented()
{
	printf("Parse error (%s:%u): this syntax is not (yet) implemented:\n",g_filename,ptx_lineno);
	ptx_error(NULL);
	abort();
}
