/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_PTX_PTX_TAB_H_INCLUDED
# define YY_PTX_PTX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
#line 30 "../src/cuda-sim/ptx.y" /* yacc.c:1909  */

  double double_value;
  float  float_value;
  int    int_value;
  char * string_value;
  void * ptr_value;

#line 222 "ptx.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE ptx_lval;

int ptx_parse (void);

#endif /* !YY_PTX_PTX_TAB_H_INCLUDED  */
