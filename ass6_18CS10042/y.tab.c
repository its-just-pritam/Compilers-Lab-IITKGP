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
#line 1 "ass6_18CS10042.y"

	/* C Declarations and Definitions */
	#include "ass6_18CS10042_translator.h"
	extern int yylex(void);
	void yyerror(const char *s);

#line 77 "y.tab.c"

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
    CHAR = 258,
    SHORT = 259,
    INT = 260,
    LONG = 261,
    SIGNED = 262,
    UNSIGNED = 263,
    FLOAT = 264,
    DOUBLE = 265,
    CONST = 266,
    VOLATILE = 267,
    VOID = 268,
    _BOOL = 269,
    _COMPLEX = 270,
    _IMAGINARY = 271,
    INC = 272,
    DEC = 273,
    ARROW = 274,
    AMP = 275,
    OR = 276,
    LTE = 277,
    GTE = 278,
    EQUAL = 279,
    NOT_EQUAL = 280,
    PUNCTUATOR = 281,
    SINGLE_COMMENT = 282,
    MULTI_COMMENT = 283,
    DIV_ASSIGN = 284,
    MOD_ASSIGN = 285,
    BIT_AND_ASSIGN = 286,
    BIT_XOR_ASSIGN = 287,
    BIT_OR_ASSIGN = 288,
    SHIFT_R = 289,
    SHIFT_L = 290,
    SQ_OPEN = 291,
    SQ_CLOSE = 292,
    RND_OPEN = 293,
    RND_CLOSE = 294,
    CUR_OPEN = 295,
    CUR_CLOSE = 296,
    DOTS = 297,
    SHIFT_R_ASSIGN = 298,
    SHIFT_L_ASSIGN = 299,
    ADD_ASSIGN = 300,
    SUB_ASSIGN = 301,
    MUL_ASSIGN = 302,
    BIT_OR = 303,
    BIT_XOR = 304,
    STRUCT = 305,
    UNION = 306,
    ENUM = 307,
    BREAK = 308,
    CASE = 309,
    CONTINUE = 310,
    DEFAULT = 311,
    DO = 312,
    IF = 313,
    ELSE = 314,
    FOR = 315,
    GOTO = 316,
    WHILE = 317,
    SWITCH = 318,
    SIZEOF = 319,
    DOT = 320,
    MUL = 321,
    ADD = 322,
    SUB = 323,
    NEG = 324,
    EXC = 325,
    DIV = 326,
    MOD = 327,
    LT = 328,
    GT = 329,
    QUES = 330,
    AND = 331,
    COLON = 332,
    SEMICOLON = 333,
    ASSIGN = 334,
    COMMA = 335,
    HASH = 336,
    TYPEDEF = 337,
    EXTERN = 338,
    STATIC = 339,
    AUTO = 340,
    REGISTER = 341,
    INLINE = 342,
    RESTRICT = 343,
    RETURN = 344,
    STRING_LITERAL = 345,
    IDENTIFIER = 346,
    ENUMERATION_CONSTANT = 347,
    FLOATING_CONSTANT = 348,
    CHARACTER_CONSTANT = 349,
    INTEGER_CONSTANT = 350,
    UNARY = 351,
    IF_CONFLICT = 352
  };
#endif
/* Tokens.  */
#define CHAR 258
#define SHORT 259
#define INT 260
#define LONG 261
#define SIGNED 262
#define UNSIGNED 263
#define FLOAT 264
#define DOUBLE 265
#define CONST 266
#define VOLATILE 267
#define VOID 268
#define _BOOL 269
#define _COMPLEX 270
#define _IMAGINARY 271
#define INC 272
#define DEC 273
#define ARROW 274
#define AMP 275
#define OR 276
#define LTE 277
#define GTE 278
#define EQUAL 279
#define NOT_EQUAL 280
#define PUNCTUATOR 281
#define SINGLE_COMMENT 282
#define MULTI_COMMENT 283
#define DIV_ASSIGN 284
#define MOD_ASSIGN 285
#define BIT_AND_ASSIGN 286
#define BIT_XOR_ASSIGN 287
#define BIT_OR_ASSIGN 288
#define SHIFT_R 289
#define SHIFT_L 290
#define SQ_OPEN 291
#define SQ_CLOSE 292
#define RND_OPEN 293
#define RND_CLOSE 294
#define CUR_OPEN 295
#define CUR_CLOSE 296
#define DOTS 297
#define SHIFT_R_ASSIGN 298
#define SHIFT_L_ASSIGN 299
#define ADD_ASSIGN 300
#define SUB_ASSIGN 301
#define MUL_ASSIGN 302
#define BIT_OR 303
#define BIT_XOR 304
#define STRUCT 305
#define UNION 306
#define ENUM 307
#define BREAK 308
#define CASE 309
#define CONTINUE 310
#define DEFAULT 311
#define DO 312
#define IF 313
#define ELSE 314
#define FOR 315
#define GOTO 316
#define WHILE 317
#define SWITCH 318
#define SIZEOF 319
#define DOT 320
#define MUL 321
#define ADD 322
#define SUB 323
#define NEG 324
#define EXC 325
#define DIV 326
#define MOD 327
#define LT 328
#define GT 329
#define QUES 330
#define AND 331
#define COLON 332
#define SEMICOLON 333
#define ASSIGN 334
#define COMMA 335
#define HASH 336
#define TYPEDEF 337
#define EXTERN 338
#define STATIC 339
#define AUTO 340
#define REGISTER 341
#define INLINE 342
#define RESTRICT 343
#define RETURN 344
#define STRING_LITERAL 345
#define IDENTIFIER 346
#define ENUMERATION_CONSTANT 347
#define FLOATING_CONSTANT 348
#define CHARACTER_CONSTANT 349
#define INTEGER_CONSTANT 350
#define UNARY 351
#define IF_CONFLICT 352

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "ass6_18CS10042.y"

		idStr idl;
		char charval;
		float floatval;
		int intval;
		expresn expon;
		decStr decl;
		arglistStr argsl;
		int instr;
		list *nextlist;		//for N -> epsilon
		string *strval;
	

#line 337 "y.tab.c"

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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1129

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  103
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  352

#define YYUNDEFTOK  2
#define YYMAXUTOK   352


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
       2,     2,     2,     2,     2,     2,     2,   100,     2,     2,
       2,     2,    98,    96,     2,    97,     2,    99,     2,     2,
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
      95,   101,   102
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    61,    61,    68,    76,   116,   128,   140,   152,   163,
     168,   170,   195,   196,   258,   260,   262,   285,   309,   311,
     317,   323,   329,   338,   340,   364,   387,   440,   442,   448,
     449,   450,   451,   452,   453,   458,   483,   489,   491,   498,
     505,   516,   518,   525,   535,   537,   543,   552,   554,   563,
     571,   579,   592,   594,   603,   615,   617,   626,   628,   637,
     639,   648,   650,   667,   669,   683,   684,   705,   707,   732,
     734,   735,   736,   737,   738,   739,   740,   741,   742,   743,
     748,   750,   756,   763,   777,   783,   787,   789,   790,   792,
     798,   799,   804,   806,   811,   817,   855,   856,   858,   859,
     866,   867,   868,   870,   871,   873,   874,   875,   876,   877,
     878,   880,   881,   888,   890,   896,   898,   902,   903,   904,
     909,   914,   918,   920,   925,   927,   932,   933,   935,   940,
     946,   987,   989,   993,  1003,  1004,  1033,  1035,  1036,  1154,
    1228,  1230,  1234,  1236,  1240,  1241,  1247,  1248,  1253,  1255,
    1261,  1263,  1268,  1269,  1274,  1276,  1281,  1282,  1287,  1293,
    1294,  1296,  1301,  1303,  1304,  1306,  1311,  1317,  1318,  1323,
    1325,  1331,  1333,  1334,  1335,  1336,  1337,  1342,  1344,  1345,
    1350,  1352,  1357,  1358,  1367,  1368,  1376,  1382,  1386,  1391,
    1401,  1415,  1421,  1431,  1439,  1453,  1455,  1456,  1459,  1478,
    1479,  1484,  1485,  1526,  1558,  1559,  1563,  1564
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CHAR", "SHORT", "INT", "LONG", "SIGNED",
  "UNSIGNED", "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "_BOOL",
  "_COMPLEX", "_IMAGINARY", "INC", "DEC", "ARROW", "AMP", "OR", "LTE",
  "GTE", "EQUAL", "NOT_EQUAL", "PUNCTUATOR", "SINGLE_COMMENT",
  "MULTI_COMMENT", "DIV_ASSIGN", "MOD_ASSIGN", "BIT_AND_ASSIGN",
  "BIT_XOR_ASSIGN", "BIT_OR_ASSIGN", "SHIFT_R", "SHIFT_L", "SQ_OPEN",
  "SQ_CLOSE", "RND_OPEN", "RND_CLOSE", "CUR_OPEN", "CUR_CLOSE", "DOTS",
  "SHIFT_R_ASSIGN", "SHIFT_L_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "MUL_ASSIGN", "BIT_OR", "BIT_XOR", "STRUCT", "UNION", "ENUM", "BREAK",
  "CASE", "CONTINUE", "DEFAULT", "DO", "IF", "ELSE", "FOR", "GOTO",
  "WHILE", "SWITCH", "SIZEOF", "DOT", "MUL", "ADD", "SUB", "NEG", "EXC",
  "DIV", "MOD", "LT", "GT", "QUES", "AND", "COLON", "SEMICOLON", "ASSIGN",
  "COMMA", "HASH", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER",
  "INLINE", "RESTRICT", "RETURN", "STRING_LITERAL", "IDENTIFIER",
  "ENUMERATION_CONSTANT", "FLOATING_CONSTANT", "CHARACTER_CONSTANT",
  "INTEGER_CONSTANT", "'+'", "'-'", "'*'", "'/'", "'%'", "UNARY",
  "IF_CONFLICT", "$accept", "M", "N", "primary_expression",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "IDENTIFIER_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "pointer_opt", "direct_declarator", "identifier_list_opt",
  "type_qualifier_list_opt", "assignment_expression_opt", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "expression_opt", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list_opt", "declaration_list", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,    43,    45,    42,    47,
      37,   351,   352
};
# endif

#define YYPACT_NINF (-282)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-206)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     675,  -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,
    -282,  -282,  -282,  -282,  -282,   -55,  -282,  -282,  -282,  -282,
    -282,  -282,  -282,   -34,   675,   675,  -282,   675,   675,   475,
    -282,  -282,    -1,     2,    10,   -28,   -27,  -282,   575,   -22,
    -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,    36,  -282,
      38,    10,  -282,    38,   872,  -282,   -34,    62,   675,    38,
    -282,   -11,    65,   -17,  -282,  -282,  -282,  -282,    69,   966,
     966,  -282,   456,   814,   973,  -282,  -282,  -282,  -282,  -282,
    -282,  -282,  -282,  -282,  -282,  -282,   145,   170,   980,  -282,
      35,    12,   112,    63,   131,   121,   104,   128,    84,   -13,
    -282,  -282,  -282,   270,  -282,  -282,   138,     3,   525,   980,
    -282,   -23,   456,  -282,  -282,  -282,    -2,   689,  -282,   689,
     139,   980,    91,  -282,    49,   872,   -24,  -282,   456,  -282,
    -282,  -282,    94,   980,   879,    96,  -282,  -282,  -282,  -282,
    -282,  -282,  -282,  -282,  -282,  -282,  -282,   980,  -282,  -282,
     980,   980,   980,   980,   980,   980,   980,   980,   980,   980,
     980,   980,   980,   980,   980,   980,  -282,  -282,   113,  -282,
     117,   980,   118,   120,  -282,   160,   166,   114,   168,   169,
     980,   134,   140,  -282,  -282,  -282,  -282,   180,  -282,  -282,
     144,  -282,  -282,  -282,  -282,    10,  1034,  -282,   -20,   185,
     186,   150,  -282,   153,  -282,  -282,  -282,  -282,   195,  -282,
     980,  -282,  -282,  -282,   912,   199,  -282,  -282,   772,  -282,
    -282,  -282,   198,  -282,   -14,  -282,   200,   158,  -282,  -282,
    -282,  -282,  -282,  -282,    35,    35,    12,    12,   112,   112,
     112,   112,    63,    63,   131,   121,   104,   980,   980,  -282,
    -282,   163,  -282,   712,   712,   980,   980,   167,  -282,   980,
     172,   712,  -282,   363,  -282,   980,   204,  -282,   207,  -282,
    -282,  -282,   589,   155,   211,  -282,   814,  -282,  -282,  -282,
    -282,   872,   211,  -282,  -282,   980,   128,    84,   980,   712,
    -282,   191,   140,   176,  -282,   980,     8,  -282,  -282,  -282,
     210,  -282,  -282,  -282,  -282,  -282,    58,  -282,  -282,   140,
    -282,   217,   218,  -282,   140,   712,  -282,  -282,   779,   179,
    -282,  -282,   980,   220,  -282,  -282,  -282,   980,   712,  -282,
    -282,   980,   140,   201,   184,   712,  -282,   228,   209,  -282,
    -282,   192,  -282,   980,  -282,   712,  -282,  -282,   230,  -282,
     712,  -282
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   106,   107,   103,   104,   101,   108,   105,   100,   126,
     127,   102,   109,   110,   111,   121,    96,    97,    98,    99,
     129,   128,   202,   132,    91,    91,   112,    91,    91,     0,
     199,   201,   119,     0,   143,     0,    84,    92,    94,     0,
     131,    90,    86,    87,    88,    89,     1,   200,     0,   148,
     146,   142,    83,   132,     0,   206,   132,     0,   204,   132,
     133,   130,   124,     0,   122,   147,   149,    93,    94,     0,
       0,    29,     0,     0,     0,    30,    31,    32,    33,    34,
       8,     4,     6,     7,     5,    10,    23,    35,     0,    37,
      41,    44,    47,    52,    55,    57,    59,    61,    63,    65,
      67,   159,    95,   188,   203,   207,     0,   143,   141,     0,
     117,     0,     0,    24,    25,    80,     0,   116,   158,   116,
       0,     0,     0,   162,     0,     0,     0,   167,     0,    27,
      16,    17,     0,     0,     0,     0,    70,    74,    72,    73,
      79,    77,    76,    75,    78,    71,    69,     0,    35,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     2,     0,   180,
       0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
     188,     4,   187,   184,   185,   171,   172,     2,   182,   173,
       0,   174,   175,   176,   134,   143,   144,   156,   132,     0,
       0,   150,   152,   140,    82,   125,   118,   123,     0,     9,
       0,   115,   113,   114,     0,     0,   170,   160,     0,   163,
     166,   168,     0,    15,     0,    12,     0,    20,    21,    14,
      68,    38,    39,    40,    42,    43,    46,    45,    50,    51,
      48,    49,    53,    54,    56,    58,    60,     0,     0,     2,
     197,     0,   196,   188,   188,     0,   188,     0,     2,     0,
       0,   188,   181,   188,   186,     0,    30,   145,     0,   154,
     139,   138,     0,     0,     0,    81,     0,    36,   169,   161,
     164,     0,    28,    11,    13,     0,    62,    64,     0,   188,
     179,     0,     3,     0,   195,     0,     0,   198,   177,   183,
       0,   137,   135,   151,   153,   157,     0,   165,    22,     3,
     178,     0,     0,     2,     3,   188,   136,    18,     0,     0,
       2,     2,   188,     0,   191,    19,     2,     0,   188,     3,
       2,     0,     3,   189,     0,   188,    66,     0,     0,     2,
     192,     0,     2,   188,   193,   188,     3,   190,     0,     2,
     188,   194
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -282,   -78,  -281,  -282,  -282,  -282,  -282,   -39,  -282,   -75,
       5,    13,    34,    11,   126,   127,   129,    46,    47,  -282,
    -104,   -53,  -282,   -69,   -87,   -32,  -282,     0,   106,  -282,
     243,  -282,    33,   -63,   178,  -282,  -282,  -282,   187,    23,
    -282,   -19,  -282,  -282,  -282,   -98,  -282,   249,  -282,  -282,
    -282,    28,  -282,   -67,   -52,    25,  -208,  -282,   177,  -161,
    -282,   245,  -282,    41,  -282,  -173,  -282,  -282,  -282,  -282,
     276,  -282,  -282,  -282
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   247,   168,    85,    86,   226,   227,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   115,   147,   182,   205,    22,    35,    41,    42,    36,
      37,    24,    25,   118,   212,    26,    33,    63,    64,    27,
      28,    68,    39,    61,   199,    50,   268,    40,    51,   200,
     201,   202,   203,   120,   123,   124,   125,   126,   127,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,    29,
      30,    31,    57,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   101,   102,   116,    38,   204,    55,   260,   167,   196,
     281,   312,   121,   149,     9,    10,    59,   204,   206,  -155,
     101,     9,    10,   283,   110,   107,   105,   108,   319,    23,
     113,   114,    34,   323,   215,   129,    32,   209,    56,  -120,
     106,   122,    48,   116,   -85,   208,    34,   315,   334,   148,
      52,   337,   338,    53,   211,   220,   211,    49,    56,   116,
    -155,   222,    -3,   111,   224,   348,   210,   204,    62,    60,
     148,   183,   101,   219,    66,   231,   232,   233,   210,   153,
     154,   228,   148,   293,   251,   157,   158,   195,   210,   248,
     217,    21,   290,   291,   230,   119,   254,   265,    21,   317,
     298,   150,   103,    56,    34,   117,   151,   152,   198,   263,
     281,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,    62,   310,   218,
      49,    43,   148,    44,    45,   119,   159,   160,   318,   277,
     119,   163,   119,   267,   109,   117,   155,   156,    54,   329,
     117,   119,   117,   164,   324,   161,   162,   275,   234,   235,
     166,   117,   130,   131,   132,   101,   280,   333,   236,   237,
     346,   288,   242,   243,   340,   148,   165,   194,   214,   269,
     295,   133,   216,   134,   347,   223,   292,   229,   249,   351,
     296,   238,   239,   240,   241,   250,   252,   253,   255,   136,
     137,   138,   139,   140,   256,   257,   258,   259,   148,   148,
     135,   261,   300,   141,   142,   143,   144,   145,    49,   309,
     210,   262,   264,   101,   270,   271,   314,   336,   101,   307,
     272,   183,   308,   273,   274,   322,   278,   282,   285,   284,
     289,   301,   327,   328,   302,   294,   305,   316,   331,   146,
     297,   276,   335,   311,   313,   320,   326,   321,   332,   330,
      -3,   343,   339,    56,   345,   101,   280,   341,   342,   349,
     344,   350,   198,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    69,    70,   244,
      71,   245,   148,   286,   246,   287,    67,   213,   207,    65,
     304,   306,   104,   221,   299,    47,     0,     0,    72,     0,
     103,   169,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,   170,   171,   172,   173,   174,   175,     0,
     176,   177,   178,   179,    74,     0,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,    17,    18,    19,    20,    21,   180,
      80,   181,     0,    82,    83,    84,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      69,    70,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,     0,   103,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    15,   170,   171,   172,   173,
     174,   175,     0,   176,   177,   178,   179,    74,     0,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    16,    17,    18,    19,
      20,    21,   180,    80,   181,     0,    82,    83,    84,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    69,    70,    46,    71,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,     0,    75,    76,    77,    78,    79,    15,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,    21,     0,    80,    81,     0,    82,
      83,    84,     0,     0,     0,     0,     0,     0,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     0,     0,    16,    17,
      18,    19,    20,    21,     0,  -205,   197,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,     0,     0,
       0,   303,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,     0,     0,     0,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,    16,    17,    18,    19,    20,    21,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,     0,    69,
      70,     0,    71,     0,     0,     0,     0,     0,     0,     0,
       0,    15,     0,     0,     0,     0,     0,     0,     0,     0,
      72,     0,   103,     0,     0,     0,     0,     0,    16,    17,
      18,    19,    20,    21,     0,   170,   171,   172,   173,   174,
     175,     0,   176,   177,   178,   179,    74,    21,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,     0,    69,
      70,     0,    71,     0,     0,     0,    69,    70,     0,    71,
       0,   180,    80,   181,     0,    82,    83,    84,   121,     0,
      72,     0,    73,   279,     0,   121,     0,    72,     0,    73,
     325,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,    70,     0,    71,     0,    74,   122,    75,    76,
      77,    78,    79,    74,   122,    75,    76,    77,    78,    79,
     121,     0,    72,     0,    73,     0,     0,     0,     0,     0,
       0,     0,    80,    81,     0,    82,    83,    84,     0,    80,
      81,     0,    82,    83,    84,     0,     0,     0,    74,   122,
      75,    76,    77,    78,    79,     0,     0,     0,     0,    69,
      70,     0,    71,     0,     0,     0,    69,    70,     0,    71,
       0,     0,     0,     0,    80,    81,     0,    82,    83,    84,
      72,     0,    73,     0,     0,     0,     0,    72,   225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    69,
      70,     0,    71,     0,     0,     0,    74,     0,    75,    76,
      77,    78,    79,    74,     0,    75,    76,    77,    78,    79,
      72,     0,   276,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,    81,     0,    82,    83,    84,     0,    80,
      81,     0,    82,    83,    84,     0,    74,     0,    75,    76,
      77,    78,    79,    69,    70,     0,    71,     0,     0,     0,
      69,    70,     0,    71,     0,     0,     0,    69,    70,     0,
      71,     0,    80,    81,   112,    82,    83,    84,     0,     0,
       0,   128,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,     0,    75,    76,    77,    78,    79,    74,     0,    75,
      76,    77,    78,    79,    74,     0,    75,    76,    77,    78,
      79,    69,    70,     0,    71,     0,    80,    81,     0,    82,
      83,    84,     0,    80,    81,     0,    82,    83,    84,     0,
      80,    81,    72,    82,    83,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,     0,
     266,    76,    77,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,    81,     0,    82,    83,    84
};

static const yytype_int16 yycheck[] =
{
       0,    54,    54,    72,    23,   109,    38,   180,    21,   107,
     218,   292,    36,    88,    11,    12,    38,   121,    41,    39,
      73,    11,    12,    37,    41,    36,    58,    38,   309,    29,
      69,    70,    66,   314,   121,    74,    91,    39,    38,    40,
      59,    65,    40,   112,    78,   112,    66,    39,   329,    88,
      78,   332,   333,    80,   117,    79,   119,    34,    58,   128,
      80,   128,    75,    80,   133,   346,    80,   171,    91,    91,
     109,   103,   125,   125,    51,   150,   151,   152,    80,    67,
      68,   134,   121,   256,   171,    22,    23,    84,    80,   167,
      41,    88,   253,   254,   147,    72,   174,   195,    88,    41,
     261,    66,    40,   103,    66,    72,    71,    72,   108,   187,
     318,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,    91,   289,    80,
     107,    25,   171,    27,    28,   112,    73,    74,    80,   214,
     117,    20,   119,   196,    79,   112,    34,    35,    79,   322,
     117,   128,   119,    49,   315,    24,    25,   210,   153,   154,
      76,   128,    17,    18,    19,   218,   218,   328,   155,   156,
     343,   249,   161,   162,   335,   214,    48,    39,    39,   198,
     258,    36,    91,    38,   345,    91,   255,    91,    75,   350,
     259,   157,   158,   159,   160,    78,    78,    77,    38,    29,
      30,    31,    32,    33,    38,    91,    38,    38,   247,   248,
      65,    77,   265,    43,    44,    45,    46,    47,   195,   288,
      80,    41,    78,   276,    39,    39,   295,   331,   281,   281,
      80,   263,   285,    80,    39,   313,    37,    39,    80,    39,
      77,    37,   320,   321,    37,    78,    91,    37,   326,    79,
      78,    40,   330,    62,    78,    38,    77,    39,   327,    39,
      59,   339,    78,   263,   342,   318,   318,    39,    59,    39,
      78,   349,   272,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   163,
      20,   164,   331,   247,   165,   248,    53,   119,   111,    50,
     272,   276,    57,   126,   263,    29,    -1,    -1,    38,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,    93,    94,    95,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    -1,    60,    61,    62,    63,    64,    -1,    66,
      67,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    93,    94,    95,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     0,    20,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    66,    67,    68,    69,    70,    52,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    88,    -1,    90,    91,    -1,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    83,    84,
      85,    86,    87,    88,    -1,    40,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    17,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    -1,    53,    54,    55,    56,    57,
      58,    -1,    60,    61,    62,    63,    64,    88,    66,    67,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    20,    -1,    -1,    -1,    17,    18,    -1,    20,
      -1,    89,    90,    91,    -1,    93,    94,    95,    36,    -1,
      38,    -1,    40,    41,    -1,    36,    -1,    38,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    -1,    20,    -1,    64,    65,    66,    67,
      68,    69,    70,    64,    65,    66,    67,    68,    69,    70,
      36,    -1,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    -1,    93,    94,    95,    -1,    90,
      91,    -1,    93,    94,    95,    -1,    -1,    -1,    64,    65,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,    17,
      18,    -1,    20,    -1,    -1,    -1,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    90,    91,    -1,    93,    94,    95,
      38,    -1,    40,    -1,    -1,    -1,    -1,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    -1,    20,    -1,    -1,    -1,    64,    -1,    66,    67,
      68,    69,    70,    64,    -1,    66,    67,    68,    69,    70,
      38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    -1,    93,    94,    95,    -1,    90,
      91,    -1,    93,    94,    95,    -1,    64,    -1,    66,    67,
      68,    69,    70,    17,    18,    -1,    20,    -1,    -1,    -1,
      17,    18,    -1,    20,    -1,    -1,    -1,    17,    18,    -1,
      20,    -1,    90,    91,    38,    93,    94,    95,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    66,    67,    68,    69,    70,    64,    -1,    66,
      67,    68,    69,    70,    64,    -1,    66,    67,    68,    69,
      70,    17,    18,    -1,    20,    -1,    90,    91,    -1,    93,
      94,    95,    -1,    90,    91,    -1,    93,    94,    95,    -1,
      90,    91,    38,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    91,    -1,    93,    94,    95
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    52,    83,    84,    85,    86,
      87,    88,   128,   130,   134,   135,   138,   142,   143,   172,
     173,   174,    91,   139,    66,   129,   132,   133,   144,   145,
     150,   130,   131,   131,   131,   131,     0,   173,    40,   142,
     148,   151,    78,    80,    79,   128,   130,   175,   176,    38,
      91,   146,    91,   140,   141,   150,   142,   133,   144,    17,
      18,    20,    38,    40,    64,    66,    67,    68,    69,    70,
      90,    91,    93,    94,    95,   106,   107,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   157,    40,   164,   128,   144,    36,    38,    79,
      41,    80,    38,   110,   110,   124,   126,   135,   136,   142,
     156,    36,    65,   157,   158,   159,   160,   161,    38,   110,
      17,    18,    19,    36,    38,    65,    29,    30,    31,    32,
      33,    43,    44,    45,    46,    47,    79,   125,   110,   112,
      66,    71,    72,    67,    68,    34,    35,    22,    23,    73,
      74,    24,    25,    20,    49,    48,    76,    21,   105,    41,
      53,    54,    55,    56,    57,    58,    60,    61,    62,    63,
      89,    91,   126,   128,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,    39,    84,   148,    91,   130,   147,
     152,   153,   154,   155,   123,   127,    41,   141,   156,    39,
      80,   136,   137,   137,    39,   127,    91,    41,    80,   157,
      79,   161,   156,    91,   126,    39,   108,   109,   124,    91,
     124,   112,   112,   112,   113,   113,   114,   114,   115,   115,
     115,   115,   116,   116,   117,   118,   119,   104,   104,    75,
      78,   127,    78,    77,   104,    38,    38,    91,    38,    38,
     168,    77,    41,   104,    78,   148,    66,   124,   149,   144,
      39,    39,    80,    80,    39,   124,    40,   112,    37,    41,
     157,   159,    39,    37,    39,    80,   120,   121,   104,    77,
     162,   162,   126,   168,    78,   104,   126,    78,   162,   166,
     124,    37,    37,    42,   154,    91,   158,   157,   124,   126,
     162,    62,   105,    78,   126,    39,    37,    41,    80,   105,
      38,    39,   104,   105,   162,    41,    77,   104,   104,   168,
      39,   104,   126,   162,   105,   104,   123,   105,   105,    78,
     162,    39,    59,   104,    78,   104,   168,   162,   105,    39,
     104,   162
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   103,   104,   105,   106,   106,   106,   106,   106,   106,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     108,   109,   109,   110,   110,   110,   110,   110,   110,   111,
     111,   111,   111,   111,   111,   112,   112,   113,   113,   113,
     113,   114,   114,   114,   115,   115,   115,   116,   116,   116,
     116,   116,   117,   117,   117,   118,   118,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   124,   124,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     126,   126,   127,   128,   129,   129,   130,   130,   130,   130,
     131,   131,   132,   132,   133,   133,   134,   134,   134,   134,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   136,   136,   137,   137,   138,   138,   138,
     139,   139,   140,   140,   141,   141,   142,   142,   142,   143,
     144,   145,   145,   146,   146,   146,   146,   146,   146,   146,
     147,   147,   148,   148,   149,   149,   150,   150,   151,   151,
     152,   152,   153,   153,   154,   154,   155,   155,   156,   157,
     157,   157,   158,   158,   158,   158,   159,   160,   160,   161,
     161,   162,   162,   162,   162,   162,   162,   163,   163,   163,
     164,   164,   165,   165,   166,   166,   167,   168,   168,   169,
     169,   169,   170,   170,   170,   171,   171,   171,   171,   172,
     172,   173,   173,   174,   175,   175,   176,   176
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     1,     1,     3,
       1,     4,     3,     4,     3,     3,     2,     2,     6,     7,
       1,     1,     3,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     4,     1,     4,     1,     9,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     0,     2,     2,     2,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     0,     5,     6,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       2,     1,     0,     1,     3,     5,     6,     5,     4,     4,
       1,     0,     1,     0,     0,     1,     2,     3,     1,     2,
       1,     3,     1,     3,     2,     1,     1,     3,     1,     1,
       3,     4,     1,     2,     3,     4,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     3,     1,     3,     1,     1,     2,     1,     0,     7,
      11,     5,     8,    10,    14,     3,     2,     2,     3,     1,
       2,     1,     1,     4,     1,     0,     1,     2
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
#line 61 "ass6_18CS10042.y"
                  {
		int temp;
		(yyval.instr) = next_instr;

	}
#line 1964 "y.tab.c"
    break;

  case 3:
#line 68 "ass6_18CS10042.y"
                  {
		int temp=0;
		(yyval.nextlist) = makelist(next_instr);
		glob_quad.emit(Q_GOTO, -1);temp++;
	}
#line 1974 "y.tab.c"
    break;

  case 4:
#line 76 "ass6_18CS10042.y"
                     {
		//Check whether its a function
		int temp,counter;
		symdata * check_func = glob_st->search(*(yyvsp[0].idl).name);
		if(check_func == NULL)
		{
			temp++;
			(yyval.expon).loc  =  curr_st->lookup_global(*(yyvsp[0].idl).name);
			if((yyval.expon).loc->tp_n != NULL && (yyval.expon).loc->tp_n->basetp == tp_arr)
			{
				temp=temp+1;
				//array
				(yyval.expon).arr = (yyval.expon).loc;
				(yyval.expon).loc = curr_st->gentemp(new type_n(tp_int));counter++;
				(yyval.expon).loc->i_val.int_val = 0;
				(yyval.expon).loc->isInitialized = true;temp=counter;
				glob_quad.emit(Q_ASSIGN,0,(yyval.expon).loc->name);
				(yyval.expon).type = (yyval.expon).arr->tp_n;
				temp++;
				(yyval.expon).poss_array = (yyval.expon).arr;
			}
			else
			{
				// not an array
				counter++;
				(yyval.expon).type = (yyval.expon).loc->tp_n;
				(yyval.expon).arr = NULL; temp++;
				(yyval.expon).isPointer = false;
			}
		}
		else
		{
			// function
			counter++;
			(yyval.expon).loc = check_func;
			(yyval.expon).type = check_func->tp_n;temp--;
			(yyval.expon).arr = NULL;
			(yyval.expon).isPointer = false;counter=temp;
		}
	}
#line 2019 "y.tab.c"
    break;

  case 5:
#line 116 "ass6_18CS10042.y"
                           {
		// Declare and initialize the temp val as int
		int temp;
		(yyval.expon).loc  = curr_st->gentemp(new type_n(tp_int));
		(yyval.expon).type = (yyval.expon).loc->tp_n;temp++;
		(yyval.expon).loc->i_val.int_val = (yyvsp[0].intval);
		(yyval.expon).loc->isInitialized = true;
		for(temp=0;temp<-1;temp++)
		{printf("sanity check");}
		(yyval.expon).arr = NULL;
		glob_quad.emit(Q_ASSIGN, (yyvsp[0].intval), (yyval.expon).loc->name);temp=0;
	}
#line 2036 "y.tab.c"
    break;

  case 6:
#line 128 "ass6_18CS10042.y"
                            {
		// Declare and initialize the temp val as float
		int temp;
		(yyval.expon).loc  = curr_st->gentemp(new type_n(tp_float));
		(yyval.expon).type = (yyval.expon).loc->tp_n;temp++;
		(yyval.expon).loc->i_val.float_val = (yyvsp[0].floatval);
		(yyval.expon).loc->isInitialized = true;
			for(temp=0;temp<-1;temp++)
		{printf("sanity check");}
		(yyval.expon).arr = NULL;
		glob_quad.emit(Q_ASSIGN, (yyvsp[0].floatval), (yyval.expon).loc->name);temp=0;
	}
#line 2053 "y.tab.c"
    break;

  case 7:
#line 140 "ass6_18CS10042.y"
                             {
		// Declare and initialize the temp val as char
		int temp;
		(yyval.expon).loc  = curr_st->gentemp(new type_n(tp_char));
		(yyval.expon).type = (yyval.expon).loc->tp_n;temp++;
		(yyval.expon).loc->i_val.char_val = (yyvsp[0].charval);
		(yyval.expon).loc->isInitialized = true;
			for(temp=0;temp<-1;temp++)
		{printf("sanity check");}
		(yyval.expon).arr = NULL;
		glob_quad.emit(Q_ASSIGN, (yyvsp[0].charval), (yyval.expon).loc->name);temp=0;
	}
#line 2070 "y.tab.c"
    break;

  case 8:
#line 152 "ass6_18CS10042.y"
                         {
		int temp;
		strings_label.push_back(*(yyvsp[0].strval));
		(yyval.expon).loc = NULL; temp++;
		(yyval.expon).isString = true;
		(yyval.expon).ind_str = strings_label.size()-1;
		for(temp=0;temp<-1;temp++)
		{printf("sanity check");}
		(yyval.expon).arr = NULL;
		(yyval.expon).isPointer = false;temp=0;
	}
#line 2086 "y.tab.c"
    break;

  case 9:
#line 163 "ass6_18CS10042.y"
                                        { (yyval.expon) = (yyvsp[-1].expon); }
#line 2092 "y.tab.c"
    break;

  case 10:
#line 168 "ass6_18CS10042.y"
                             {	for(int temp=0;temp<-1;temp++)
		{printf("sanity check");}(yyval.expon) = (yyvsp[0].expon); }
#line 2099 "y.tab.c"
    break;

  case 11:
#line 170 "ass6_18CS10042.y"
                                                         {
		//Explanation of Array handling
		int temp2,counter;
		(yyval.expon).loc = curr_st->gentemp(new type_n(tp_int));
		temp2++;
		symdata* temporary = curr_st->gentemp(new type_n(tp_int));
		counter=temp2;
		char temp[10];
		counter++;
		sprintf(temp,"%d",(yyvsp[-3].expon).type->next->getSize());
		temp2=temp2+1;
		glob_quad.emit(Q_MULT,(yyvsp[-1].expon).loc->name,temp,temporary->name);
		glob_quad.emit(Q_PLUS,(yyvsp[-3].expon).loc->name,temporary->name,(yyval.expon).loc->name);
		temp2=counter;
		// new size will be calculated and the temporary variable storing the size will be passed on as $$.loc
		counter=counter+temp2;
		//$$.arr is base pointer
		(yyval.expon).arr = (yyvsp[-3].expon).arr;
		temp2++;
		//$$.type is basetp(arr)
		(yyval.expon).type = (yyvsp[-3].expon).type->next;
		(yyval.expon).poss_array = NULL;
		counter++;
		//$$.arr->tp_n type of the arr and is used for size calculations
	}
#line 2129 "y.tab.c"
    break;

  case 12:
#line 195 "ass6_18CS10042.y"
                                                {int temp;}
#line 2135 "y.tab.c"
    break;

  case 13:
#line 196 "ass6_18CS10042.y"
                                                                             {
			//Explanation of Function Handling
			if(!(yyvsp[-3].expon).isPointer && !(yyvsp[-3].expon).isString && ((yyvsp[-3].expon).type) && ((yyvsp[-3].expon).type->basetp==tp_void))
			{for(int temp=0;temp<-1;temp++)
		{printf("sanity check");}}
				else
				//temporary is created
				(yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[-3].expon).type));
				char str[10]; int temp;
				if((yyvsp[-1].argsl).arguments == NULL)
				{
					//No function Parameters
					temp=0;
					sprintf(str,"0");
					if((yyvsp[-3].expon).type->basetp!=tp_void)
					{
						temp=1;
						glob_quad.emit(Q_CALL,(yyvsp[-3].expon).loc->name,str,(yyval.expon).loc->name);
					}
					else
					{
						temp=2;
						glob_quad.emit2(Q_CALL,(yyvsp[-3].expon).loc->name,str);
					}
				}
				else
				{
					if((*(yyvsp[-1].argsl).arguments)[0]->isString)
					{
						temp++;
						str[0] = '_';
						sprintf(str+1,"%d",(*(yyvsp[-1].argsl).arguments)[0]->ind_str);temp--;
						glob_quad.emit(Q_PARAM,str);
						glob_quad.emit(Q_CALL,(yyvsp[-3].expon).loc->name,"1",(yyval.expon).loc->name);temp=0;
					}
					else
					{
						temp++;
						for(int i=0;i<(yyvsp[-1].argsl).arguments->size();i++)
						{
							// To print the parameters
							if((*(yyvsp[-1].argsl).arguments)[i]->poss_array != NULL && (yyvsp[-3].expon).loc->name != "printInt")
							{
								glob_quad.emit(Q_PARAM,(*(yyvsp[-1].argsl).arguments)[i]->poss_array->name);temp--;
							}
							else
							glob_quad.emit(Q_PARAM,(*(yyvsp[-1].argsl).arguments)[i]->loc->name);
							temp=0;
						}
						sprintf(str,"%ld",(yyvsp[-1].argsl).arguments->size());
						//printf("function %s-->%d\n",$1.loc->name.c_str(),$1.type->basetp);
						if((yyvsp[-3].expon).type->basetp!=tp_void){
						glob_quad.emit(Q_CALL,(yyvsp[-3].expon).loc->name,str,(yyval.expon).loc->name);temp++;}
						else
						glob_quad.emit2(Q_CALL,(yyvsp[-3].expon).loc->name,str);
						temp=0;
					}
				}

				(yyval.expon).arr = NULL;temp=0;
				(yyval.expon).type = (yyval.expon).loc->tp_n;
			}
#line 2202 "y.tab.c"
    break;

  case 14:
#line 258 "ass6_18CS10042.y"
                                            {for(int temp=0;temp<-1;temp++)
		{printf("sanity check");}}
#line 2209 "y.tab.c"
    break;

  case 15:
#line 260 "ass6_18CS10042.y"
                                              {for(int temp=0;temp<-1;temp++)
		{printf("sanity check");}}
#line 2216 "y.tab.c"
    break;

  case 16:
#line 262 "ass6_18CS10042.y"
                                 {
						(yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[-1].expon).type));
						for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}
						int temp,counter;
						if((yyvsp[-1].expon).arr != NULL)
						{
							// Post increment of an array element
							symdata * temp_elem = curr_st->gentemp(CopyType((yyvsp[-1].expon).type));temp++;
							glob_quad.emit(Q_RINDEX,(yyvsp[-1].expon).arr->name,(yyvsp[-1].expon).loc->name,(yyval.expon).loc->name);
							glob_quad.emit(Q_RINDEX,(yyvsp[-1].expon).arr->name,(yyvsp[-1].expon).loc->name,temp_elem->name);temp=temp+1;
							glob_quad.emit(Q_PLUS,temp_elem->name,"1",temp_elem->name);
							glob_quad.emit(Q_LINDEX,(yyvsp[-1].expon).loc->name,temp_elem->name,(yyvsp[-1].expon).arr->name);temp++;
							(yyval.expon).arr = NULL;temp=0;
						}
						else
						{
							//post increment of an simple element
							glob_quad.emit(Q_ASSIGN,(yyvsp[-1].expon).loc->name,(yyval.expon).loc->name);counter++;
							glob_quad.emit(Q_PLUS,(yyvsp[-1].expon).loc->name,"1",(yyvsp[-1].expon).loc->name);counter=temp;
						}
						(yyval.expon).type = (yyval.expon).loc->tp_n;temp=0;
					}
#line 2244 "y.tab.c"
    break;

  case 17:
#line 285 "ass6_18CS10042.y"
                                 {
						int temp,counter;
						(yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[-1].expon).type));
						if((yyvsp[-1].expon).arr != NULL)
						{
							// Post decrement of an array element
							symdata * temp_elem = curr_st->gentemp(CopyType((yyvsp[-1].expon).type));temp=0;
							glob_quad.emit(Q_RINDEX,(yyvsp[-1].expon).arr->name,(yyvsp[-1].expon).loc->name,(yyval.expon).loc->name);
							glob_quad.emit(Q_RINDEX,(yyvsp[-1].expon).arr->name,(yyvsp[-1].expon).loc->name,temp_elem->name);counter=temp;
							glob_quad.emit(Q_MINUS,temp_elem->name,"1",temp_elem->name);
							glob_quad.emit(Q_LINDEX,(yyvsp[-1].expon).loc->name,temp_elem->name,(yyvsp[-1].expon).arr->name);
							counter=0;
							(yyval.expon).arr = NULL;
						}
						else
						{
							//post decrement of an simple element
							glob_quad.emit(Q_ASSIGN,(yyvsp[-1].expon).loc->name,(yyval.expon).loc->name);
								for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}
							glob_quad.emit(Q_MINUS,(yyvsp[-1].expon).loc->name,"1",(yyvsp[-1].expon).loc->name);
						}
						(yyval.expon).type = (yyval.expon).loc->tp_n;temp++;
					}
#line 2273 "y.tab.c"
    break;

  case 18:
#line 309 "ass6_18CS10042.y"
                                                                                {	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 2280 "y.tab.c"
    break;

  case 19:
#line 311 "ass6_18CS10042.y"
                                                                                        {	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 2287 "y.tab.c"
    break;

  case 20:
#line 317 "ass6_18CS10042.y"
                                   { (yyval.argsl) = (yyvsp[0].argsl);	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");} }
#line 2294 "y.tab.c"
    break;

  case 21:
#line 323 "ass6_18CS10042.y"
                                {
		int temp;
		(yyval.argsl).arguments = new vector<expresn*>;
		expresn * tex = new expresn((yyvsp[0].expon));temp++;
		(yyval.argsl).arguments->push_back(tex);temp=0;
	}
#line 2305 "y.tab.c"
    break;

  case 22:
#line 329 "ass6_18CS10042.y"
                                                               {
								int temp;
								expresn * tex = new expresn((yyvsp[0].expon));
								(yyval.argsl).arguments->push_back(tex);temp++;
							}
#line 2315 "y.tab.c"
    break;

  case 23:
#line 338 "ass6_18CS10042.y"
                                { (yyval.expon) = (yyvsp[0].expon); 	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 2322 "y.tab.c"
    break;

  case 24:
#line 340 "ass6_18CS10042.y"
                               {
								int temp,counter;
								(yyval.expon).loc = curr_st->gentemp((yyvsp[0].expon).type);
								if((yyvsp[0].expon).arr != NULL)
								{
									// pre increment of an Array element
									symdata * temp_elem = curr_st->gentemp(CopyType((yyvsp[0].expon).type));temp++;
									glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).arr->name,(yyvsp[0].expon).loc->name,temp_elem->name);counter=temp;
									glob_quad.emit(Q_PLUS,temp_elem->name,"1",temp_elem->name);
									glob_quad.emit(Q_LINDEX,(yyvsp[0].expon).loc->name,temp_elem->name,(yyvsp[0].expon).arr->name);counter++;
									glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).arr->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
									temp++;
									(yyval.expon).arr = NULL;
								}
								else
								{
									// pre increment
									glob_quad.emit(Q_PLUS,(yyvsp[0].expon).loc->name,"1",(yyvsp[0].expon).loc->name);
										for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}
									glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
								}
								(yyval.expon).type = (yyval.expon).loc->tp_n;temp=0;
							}
#line 2351 "y.tab.c"
    break;

  case 25:
#line 364 "ass6_18CS10042.y"
                               {
								(yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));int temp;
								if((yyvsp[0].expon).arr != NULL)
								{
									//pre decrement of  Array Element
									symdata * temp_elem = curr_st->gentemp(CopyType((yyvsp[0].expon).type));temp++;
									glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).arr->name,(yyvsp[0].expon).loc->name,temp_elem->name);
									glob_quad.emit(Q_MINUS,temp_elem->name,"1",temp_elem->name);
									glob_quad.emit(Q_LINDEX,(yyvsp[0].expon).loc->name,temp_elem->name,(yyvsp[0].expon).arr->name);temp=0;
									glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).arr->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
									temp=1;
									(yyval.expon).arr = NULL;
								}
								else
								{
									// pre decrement
									glob_quad.emit(Q_MINUS,(yyvsp[0].expon).loc->name,"1",(yyvsp[0].expon).loc->name);
									for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}
									glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
								}
								(yyval.expon).type = (yyval.expon).loc->tp_n;temp=0;
							}
#line 2379 "y.tab.c"
    break;

  case 26:
#line 387 "ass6_18CS10042.y"
                                         {
								type_n * temp_type;
								int temp;
								switch((yyvsp[-1].charval))
								{
									case '&':
									//create a temporary type store the type
									temp++;
									temp_type = new type_n(tp_ptr,1,(yyvsp[0].expon).type);
									(yyval.expon).loc = curr_st->gentemp(CopyType(temp_type));temp++;
									(yyval.expon).type = (yyval.expon).loc->tp_n;
									glob_quad.emit(Q_ADDR,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);temp=0;
									(yyval.expon).arr = NULL;
									break;
									case '*':
									temp=0;
									(yyval.expon).isPointer = true;
									(yyval.expon).type = (yyvsp[0].expon).loc->tp_n->next;temp++;
									(yyval.expon).loc = (yyvsp[0].expon).loc;
									(yyval.expon).arr = NULL;temp--;
									break;
									case '+':
									temp++;
									(yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
									(yyval.expon).type = (yyval.expon).loc->tp_n;temp++;
									glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
									break;
									case '-':
									temp=0;
									(yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
									(yyval.expon).type = (yyval.expon).loc->tp_n;temp++;
									glob_quad.emit(Q_UNARY_MINUS,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
									temp=0;
									break;
									case '~':
									temp=0;
									/*Bitwise Not to be implemented Later on*/
									(yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
									(yyval.expon).type = (yyval.expon).loc->tp_n;temp++;
									glob_quad.emit(Q_NOT,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
									temp=0;
									break;
									case '!':
									(yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));temp++;
									(yyval.expon).type = (yyval.expon).loc->tp_n;
									(yyval.expon).truelist = (yyvsp[0].expon).falselist;temp++;
									(yyval.expon).falselist = (yyvsp[0].expon).truelist;
									temp=0;
									break;
									default:
									break;
								}
							}
#line 2437 "y.tab.c"
    break;

  case 27:
#line 440 "ass6_18CS10042.y"
                                        {	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 2444 "y.tab.c"
    break;

  case 28:
#line 442 "ass6_18CS10042.y"
                                                {	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 2451 "y.tab.c"
    break;

  case 29:
#line 448 "ass6_18CS10042.y"
                { (yyval.charval) = '&'; }
#line 2457 "y.tab.c"
    break;

  case 30:
#line 449 "ass6_18CS10042.y"
                { (yyval.charval) = '*'; int temp;}
#line 2463 "y.tab.c"
    break;

  case 31:
#line 450 "ass6_18CS10042.y"
                { (yyval.charval) = '+'; }
#line 2469 "y.tab.c"
    break;

  case 32:
#line 451 "ass6_18CS10042.y"
                { (yyval.charval) = '-'; }
#line 2475 "y.tab.c"
    break;

  case 33:
#line 452 "ass6_18CS10042.y"
                { (yyval.charval) = '~'; int temp; }
#line 2481 "y.tab.c"
    break;

  case 34:
#line 453 "ass6_18CS10042.y"
                { (yyval.charval) = '!'; }
#line 2487 "y.tab.c"
    break;

  case 35:
#line 458 "ass6_18CS10042.y"
                           {
										int temp,counter;
										if((yyvsp[0].expon).arr != NULL && (yyvsp[0].expon).arr->tp_n != NULL&& (yyvsp[0].expon).poss_array==NULL)
										{
											temp++;
											//Right Indexing of an array element as unary expression is converted into cast expression
											(yyval.expon).loc = curr_st->gentemp(new type_n((yyvsp[0].expon).type->basetp));temp++;
											glob_quad.emit(Q_RINDEX,(yyvsp[0].expon).arr->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
											(yyval.expon).arr = NULL;temp=0;
											(yyval.expon).type = (yyval.expon).loc->tp_n;
										}
										else if((yyvsp[0].expon).isPointer == true)
										{
											counter++;
											//Dereferencing as its a pointer
											(yyval.expon).loc = curr_st->gentemp(CopyType((yyvsp[0].expon).type));
											(yyval.expon).isPointer = false;counter++;
											glob_quad.emit(Q_RDEREF,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
										}
										else
										{
											temp=0;
											(yyval.expon) = (yyvsp[0].expon);
										}
									}
#line 2517 "y.tab.c"
    break;

  case 36:
#line 483 "ass6_18CS10042.y"
                                                        {	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 2524 "y.tab.c"
    break;

  case 37:
#line 489 "ass6_18CS10042.y"
                                { (yyval.expon) = (yyvsp[0].expon);	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");} }
#line 2531 "y.tab.c"
    break;

  case 38:
#line 491 "ass6_18CS10042.y"
                                                        {
											int temp;
											typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
											(yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);temp++;
											(yyval.expon).type = (yyval.expon).loc->tp_n;
											glob_quad.emit(Q_MULT,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);temp=0;
										}
#line 2543 "y.tab.c"
    break;

  case 39:
#line 498 "ass6_18CS10042.y"
                                                        {
											int temp;
											typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
											(yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);temp++;
											(yyval.expon).type = (yyval.expon).loc->tp_n;
											glob_quad.emit(Q_DIVIDE,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);temp=0;
										}
#line 2555 "y.tab.c"
    break;

  case 40:
#line 505 "ass6_18CS10042.y"
                                                        {
											int temp;
											typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
											(yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);temp++;
											(yyval.expon).type = (yyval.expon).loc->tp_n;
											glob_quad.emit(Q_MODULO,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);temp=0;
										}
#line 2567 "y.tab.c"
    break;

  case 41:
#line 516 "ass6_18CS10042.y"
                                    { (yyval.expon) = (yyvsp[0].expon); 	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 2574 "y.tab.c"
    break;

  case 42:
#line 518 "ass6_18CS10042.y"
                                                            {
											int temp;
											typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
											(yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);temp++;
											(yyval.expon).type = (yyval.expon).loc->tp_n;
											glob_quad.emit(Q_PLUS,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);temp=0;
										}
#line 2586 "y.tab.c"
    break;

  case 43:
#line 525 "ass6_18CS10042.y"
                                                            {int temp;
											typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
											(yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);temp++;
											(yyval.expon).type = (yyval.expon).loc->tp_n;
											glob_quad.emit(Q_MINUS,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);temp=0;
										}
#line 2597 "y.tab.c"
    break;

  case 44:
#line 535 "ass6_18CS10042.y"
                              { (yyval.expon) = (yyvsp[0].expon);	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");} }
#line 2604 "y.tab.c"
    break;

  case 45:
#line 537 "ass6_18CS10042.y"
                                                       {
											int temp;
											(yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
											(yyval.expon).type = (yyval.expon).loc->tp_n;temp++;
											glob_quad.emit(Q_LEFT_OP,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);temp=0;
										}
#line 2615 "y.tab.c"
    break;

  case 46:
#line 543 "ass6_18CS10042.y"
                                                       {int temp;
											(yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
											(yyval.expon).type = (yyval.expon).loc->tp_n;temp++;
											glob_quad.emit(Q_RIGHT_OP,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);temp=0;
										}
#line 2625 "y.tab.c"
    break;

  case 47:
#line 552 "ass6_18CS10042.y"
                           { (yyval.expon) = (yyvsp[0].expon);	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");} }
#line 2632 "y.tab.c"
    break;

  case 48:
#line 554 "ass6_18CS10042.y"
                                                    {
											int temp;
											typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
											(yyval.expon).type = new type_n(tp_bool);
											(yyval.expon).truelist = makelist(next_instr);temp++;
											(yyval.expon).falselist = makelist(next_instr+1);
											glob_quad.emit(Q_IF_LESS,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");temp++;
											glob_quad.emit(Q_GOTO,"-1");temp=0;
										}
#line 2646 "y.tab.c"
    break;

  case 49:
#line 563 "ass6_18CS10042.y"
                                                    {int temp;
											typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
											(yyval.expon).type = new type_n(tp_bool); temp++;
											(yyval.expon).truelist = makelist(next_instr);
											(yyval.expon).falselist = makelist(next_instr+1);temp++;
											glob_quad.emit(Q_IF_GREATER,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
											glob_quad.emit(Q_GOTO,"-1");temp=0;
										}
#line 2659 "y.tab.c"
    break;

  case 50:
#line 571 "ass6_18CS10042.y"
                                                     {int temp;
											typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
											(yyval.expon).type = new type_n(tp_bool);temp++;
											(yyval.expon).truelist = makelist(next_instr);
											(yyval.expon).falselist = makelist(next_instr+1);
											glob_quad.emit(Q_IF_LESS_OR_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");temp=0;
											glob_quad.emit(Q_GOTO,"-1");
										}
#line 2672 "y.tab.c"
    break;

  case 51:
#line 579 "ass6_18CS10042.y"
                                                     {
											int temp;
											typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
											(yyval.expon).type = new type_n(tp_bool);temp++;
											(yyval.expon).truelist = makelist(next_instr);
											(yyval.expon).falselist = makelist(next_instr+1);temp++;
											glob_quad.emit(Q_IF_GREATER_OR_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
											glob_quad.emit(Q_GOTO,"-1");temp=0;
										}
#line 2686 "y.tab.c"
    break;

  case 52:
#line 592 "ass6_18CS10042.y"
                                { (yyval.expon) = (yyvsp[0].expon);	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");} }
#line 2693 "y.tab.c"
    break;

  case 53:
#line 594 "ass6_18CS10042.y"
                                                          {
											int temp;
											typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
											(yyval.expon).type = new type_n(tp_bool);temp++;
											(yyval.expon).truelist = makelist(next_instr);
											(yyval.expon).falselist = makelist(next_instr+1);temp++;
											glob_quad.emit(Q_IF_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
											glob_quad.emit(Q_GOTO,"-1");temp=0;
										}
#line 2707 "y.tab.c"
    break;

  case 54:
#line 603 "ass6_18CS10042.y"
                                                              {int temp;
											typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon));
											(yyval.expon).type = new type_n(tp_bool);temp++;
											(yyval.expon).truelist = makelist(next_instr);
											(yyval.expon).falselist = makelist(next_instr+1);temp++;
											glob_quad.emit(Q_IF_NOT_EQUAL,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,"-1");
											glob_quad.emit(Q_GOTO,"-1");temp=0;
										}
#line 2720 "y.tab.c"
    break;

  case 55:
#line 615 "ass6_18CS10042.y"
                              { (yyval.expon) = (yyvsp[0].expon); 	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 2727 "y.tab.c"
    break;

  case 56:
#line 617 "ass6_18CS10042.y"
                                                 {int temp;
											(yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
											(yyval.expon).type = (yyval.expon).loc->tp_n;temp++;
											glob_quad.emit(Q_LOG_AND,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);temp=0;
										}
#line 2737 "y.tab.c"
    break;

  case 57:
#line 626 "ass6_18CS10042.y"
                         { (yyval.expon) = (yyvsp[0].expon);	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");} }
#line 2744 "y.tab.c"
    break;

  case 58:
#line 628 "ass6_18CS10042.y"
                                                         {int temp;
											(yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
											(yyval.expon).type = (yyval.expon).loc->tp_n;temp++;
											glob_quad.emit(Q_XOR,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);temp=0;
										}
#line 2754 "y.tab.c"
    break;

  case 59:
#line 637 "ass6_18CS10042.y"
                                  { (yyval.expon) = (yyvsp[0].expon); 	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 2761 "y.tab.c"
    break;

  case 60:
#line 639 "ass6_18CS10042.y"
                                                                 {int temp;
											(yyval.expon).loc = curr_st->gentemp((yyvsp[-2].expon).type);
											(yyval.expon).type = (yyval.expon).loc->tp_n;temp++;
											glob_quad.emit(Q_LOG_OR,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
										}
#line 2771 "y.tab.c"
    break;

  case 61:
#line 648 "ass6_18CS10042.y"
                                  { 	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}(yyval.expon) = (yyvsp[0].expon); }
#line 2778 "y.tab.c"
    break;

  case 62:
#line 650 "ass6_18CS10042.y"
                                                               {
											int temp;
											if((yyvsp[-3].expon).type->basetp != tp_bool)
											conv2Bool(&(yyvsp[-3].expon));
											temp++;
											if((yyvsp[0].expon).type->basetp != tp_bool)
											conv2Bool(&(yyvsp[0].expon));
											temp++;
											backpatch((yyvsp[-3].expon).truelist,(yyvsp[-1].instr));
											(yyval.expon).type = new type_n(tp_bool);
											(yyval.expon).falselist = merge((yyvsp[-3].expon).falselist,(yyvsp[0].expon).falselist);temp=0;
											(yyval.expon).truelist = (yyvsp[0].expon).truelist;
										}
#line 2796 "y.tab.c"
    break;

  case 63:
#line 667 "ass6_18CS10042.y"
                                 { (yyval.expon) = (yyvsp[0].expon); 	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 2803 "y.tab.c"
    break;

  case 64:
#line 669 "ass6_18CS10042.y"
                                                            {int temp;
											if((yyvsp[-3].expon).type->basetp != tp_bool)
											conv2Bool(&(yyvsp[-3].expon));temp++;
											if((yyvsp[0].expon).type->basetp != tp_bool)
											conv2Bool(&(yyvsp[0].expon));temp++;
											backpatch((yyvsp[-3].expon).falselist,(yyvsp[-1].instr));
											(yyval.expon).type = new type_n(tp_bool);temp++;
											(yyval.expon).truelist = merge((yyvsp[-3].expon).truelist,(yyvsp[0].expon).truelist);
											(yyval.expon).falselist = (yyvsp[0].expon).falselist;temp=0;
										}
#line 2818 "y.tab.c"
    break;

  case 66:
#line 684 "ass6_18CS10042.y"
                                                                                     {
											int temp;int counter; 
											(yyval.expon).loc = curr_st->gentemp((yyvsp[-4].expon).type);
											(yyval.expon).type = (yyval.expon).loc->tp_n;temp++;
											glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
											list* TEMP_LIST = makelist(next_instr);temp=temp+counter;
											glob_quad.emit(Q_GOTO,"-1");
											backpatch((yyvsp[-3].nextlist),next_instr);
											glob_quad.emit(Q_ASSIGN,(yyvsp[-4].expon).loc->name,(yyval.expon).loc->name);temp++;
											TEMP_LIST = merge(TEMP_LIST,makelist(next_instr));
											glob_quad.emit(Q_GOTO,"-1");counter++;
											backpatch((yyvsp[-7].nextlist),next_instr);
											conv2Bool(&(yyvsp[-8].expon));
											backpatch((yyvsp[-8].expon).truelist,(yyvsp[-5].instr));temp++;
											backpatch((yyvsp[-8].expon).falselist,(yyvsp[-1].instr));
											backpatch(TEMP_LIST,next_instr);temp=0;
										}
#line 2840 "y.tab.c"
    break;

  case 67:
#line 705 "ass6_18CS10042.y"
                                 { (yyval.expon) = (yyvsp[0].expon); 	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 2847 "y.tab.c"
    break;

  case 68:
#line 707 "ass6_18CS10042.y"
                                                                     {int temp;
											//LDereferencing
											if((yyvsp[-2].expon).isPointer)
											{
												temp=0;
												glob_quad.emit(Q_LDEREF,(yyvsp[0].expon).loc->name,(yyvsp[-2].expon).loc->name);
											}
											typecheck(&(yyvsp[-2].expon),&(yyvsp[0].expon),true);
											temp=1;
											if((yyvsp[-2].expon).arr != NULL)
											{
												temp=0;
												glob_quad.emit(Q_LINDEX,(yyvsp[-2].expon).loc->name,(yyvsp[0].expon).loc->name,(yyvsp[-2].expon).arr->name);
											}
											else if(!(yyvsp[-2].expon).isPointer)
											glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyvsp[-2].expon).loc->name);temp++;
											(yyval.expon).loc = curr_st->gentemp((yyvsp[0].expon).type);
											(yyval.expon).type = (yyval.expon).loc->tp_n;temp++;
											glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyval.expon).loc->name);
											temp=0;
										}
#line 2873 "y.tab.c"
    break;

  case 80:
#line 748 "ass6_18CS10042.y"
                                { 	for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}(yyval.expon) = (yyvsp[0].expon); }
#line 2880 "y.tab.c"
    break;

  case 81:
#line 750 "ass6_18CS10042.y"
                                                 {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");} (yyval.expon) = (yyvsp[0].expon); }
#line 2887 "y.tab.c"
    break;

  case 82:
#line 756 "ass6_18CS10042.y"
                                 { for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}(yyval.expon) = (yyvsp[0].expon); }
#line 2894 "y.tab.c"
    break;

  case 83:
#line 763 "ass6_18CS10042.y"
                                                                    {int temp;
		if((yyvsp[-1].expon).loc != NULL && (yyvsp[-1].expon).type != NULL && (yyvsp[-1].expon).type->basetp == tp_func)
		{
			/*Delete curr_st*/
			temp=0;
			curr_st = new symtab();
		}
		temp=1;
	}
#line 2908 "y.tab.c"
    break;

  case 84:
#line 777 "ass6_18CS10042.y"
                              {int temp;
		if((yyvsp[0].expon).type != NULL && (yyvsp[0].expon).type->basetp == tp_func)
		{
			(yyval.expon) = (yyvsp[0].expon);temp++;
		}temp=0;
	}
#line 2919 "y.tab.c"
    break;

  case 85:
#line 783 "ass6_18CS10042.y"
                 { int temp;(yyval.expon).loc = NULL; }
#line 2925 "y.tab.c"
    break;

  case 86:
#line 787 "ass6_18CS10042.y"
                                                             {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 2932 "y.tab.c"
    break;

  case 88:
#line 790 "ass6_18CS10042.y"
                                                    {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 2939 "y.tab.c"
    break;

  case 89:
#line 792 "ass6_18CS10042.y"
                                                        {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 2946 "y.tab.c"
    break;

  case 92:
#line 804 "ass6_18CS10042.y"
                          { for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}(yyval.expon) = (yyvsp[0].expon); }
#line 2953 "y.tab.c"
    break;

  case 94:
#line 811 "ass6_18CS10042.y"
                     {int temp;
		if((yyvsp[0].expon).type != NULL && (yyvsp[0].expon).type->basetp == tp_func)
		{
			(yyval.expon) = (yyvsp[0].expon);temp++;
		}temp=0;
	}
#line 2964 "y.tab.c"
    break;

  case 95:
#line 817 "ass6_18CS10042.y"
                                        {int temp;
		//initializations of declarators
		if((yyvsp[0].expon).type!=NULL)
		{
			if((yyvsp[0].expon).type->basetp==tp_int)
			{
				temp++;(yyvsp[-2].expon).loc->i_val.int_val= (yyvsp[0].expon).loc->i_val.int_val;
				(yyvsp[-2].expon).loc->isInitialized = true;
				symdata *temp_ver=curr_st->search((yyvsp[-2].expon).loc->name);temp++;
				if(temp_ver!=NULL)
				{
					//printf("po %s = %s\n",$1.loc->name.c_str(),$3.loc->name.c_str());
					temp_ver->i_val.int_val= (yyvsp[0].expon).loc->i_val.int_val;temp=0;
					temp_ver->isInitialized = true;
				}
				temp=0;
			}
			else if((yyvsp[0].expon).type->basetp==tp_char)
			{
				(yyvsp[-2].expon).loc->i_val.char_val= (yyvsp[0].expon).loc->i_val.char_val;temp++;
				(yyvsp[-2].expon).loc->isInitialized = true;
				symdata *temp_ver=curr_st->search((yyvsp[-2].expon).loc->name);
				if(temp_ver!=NULL)
				{temp_ver->i_val.char_val= (yyvsp[0].expon).loc->i_val.char_val;temp=2;
					temp_ver->isInitialized = true;
				}temp=0;
			}

		}
		//printf("%s = %s\n",$1.loc->name.c_str(),$3.loc->name.c_str());
		//typecheck(&$1,&$3,true);
		glob_quad.emit(Q_ASSIGN,(yyvsp[0].expon).loc->name,(yyvsp[-2].expon).loc->name);
		temp=0;
	}
#line 3003 "y.tab.c"
    break;

  case 96:
#line 855 "ass6_18CS10042.y"
                 {}
#line 3009 "y.tab.c"
    break;

  case 97:
#line 856 "ass6_18CS10042.y"
                 {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3016 "y.tab.c"
    break;

  case 98:
#line 858 "ass6_18CS10042.y"
               {}
#line 3022 "y.tab.c"
    break;

  case 99:
#line 859 "ass6_18CS10042.y"
                   {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3029 "y.tab.c"
    break;

  case 100:
#line 866 "ass6_18CS10042.y"
                 { glob_type = new type_n(tp_float); }
#line 3035 "y.tab.c"
    break;

  case 101:
#line 867 "ass6_18CS10042.y"
                 { glob_type = new type_n(tp_int); }
#line 3041 "y.tab.c"
    break;

  case 102:
#line 868 "ass6_18CS10042.y"
               { glob_type = new type_n(tp_void); }
#line 3047 "y.tab.c"
    break;

  case 103:
#line 870 "ass6_18CS10042.y"
              { glob_type = new type_n(tp_int); }
#line 3053 "y.tab.c"
    break;

  case 104:
#line 871 "ass6_18CS10042.y"
               { glob_type = new type_n(tp_int); for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3060 "y.tab.c"
    break;

  case 105:
#line 873 "ass6_18CS10042.y"
                {  glob_type = new type_n(tp_float); }
#line 3066 "y.tab.c"
    break;

  case 106:
#line 874 "ass6_18CS10042.y"
               { glob_type = new type_n(tp_char); }
#line 3072 "y.tab.c"
    break;

  case 107:
#line 875 "ass6_18CS10042.y"
                { glob_type = new type_n(tp_int); }
#line 3078 "y.tab.c"
    break;

  case 108:
#line 876 "ass6_18CS10042.y"
                   { glob_type = new type_n(tp_int); }
#line 3084 "y.tab.c"
    break;

  case 109:
#line 877 "ass6_18CS10042.y"
                {}
#line 3090 "y.tab.c"
    break;

  case 110:
#line 878 "ass6_18CS10042.y"
                   {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3097 "y.tab.c"
    break;

  case 111:
#line 880 "ass6_18CS10042.y"
                     {}
#line 3103 "y.tab.c"
    break;

  case 112:
#line 881 "ass6_18CS10042.y"
                         {}
#line 3109 "y.tab.c"
    break;

  case 113:
#line 888 "ass6_18CS10042.y"
                                                      {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3116 "y.tab.c"
    break;

  case 114:
#line 890 "ass6_18CS10042.y"
                                                      {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3123 "y.tab.c"
    break;

  case 115:
#line 896 "ass6_18CS10042.y"
                                  {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3130 "y.tab.c"
    break;

  case 116:
#line 898 "ass6_18CS10042.y"
                         {}
#line 3136 "y.tab.c"
    break;

  case 117:
#line 902 "ass6_18CS10042.y"
                                                                 {int temp;}
#line 3142 "y.tab.c"
    break;

  case 118:
#line 903 "ass6_18CS10042.y"
                                                                       {int temp;}
#line 3148 "y.tab.c"
    break;

  case 120:
#line 909 "ass6_18CS10042.y"
                     {
		int temp;
		(yyval.expon).loc  = curr_st->lookup(*(yyvsp[0].idl).name);
		(yyval.expon).type = new type_n(glob_type->basetp);temp++;
	}
#line 3158 "y.tab.c"
    break;

  case 121:
#line 914 "ass6_18CS10042.y"
                 {}
#line 3164 "y.tab.c"
    break;

  case 122:
#line 918 "ass6_18CS10042.y"
                     {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3171 "y.tab.c"
    break;

  case 123:
#line 920 "ass6_18CS10042.y"
                                           {int temp;}
#line 3177 "y.tab.c"
    break;

  case 124:
#line 925 "ass6_18CS10042.y"
                     {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3184 "y.tab.c"
    break;

  case 125:
#line 927 "ass6_18CS10042.y"
                                                {int temp;}
#line 3190 "y.tab.c"
    break;

  case 126:
#line 932 "ass6_18CS10042.y"
                {}
#line 3196 "y.tab.c"
    break;

  case 127:
#line 933 "ass6_18CS10042.y"
                   {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3203 "y.tab.c"
    break;

  case 128:
#line 935 "ass6_18CS10042.y"
                   {}
#line 3209 "y.tab.c"
    break;

  case 129:
#line 940 "ass6_18CS10042.y"
                 {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3216 "y.tab.c"
    break;

  case 130:
#line 946 "ass6_18CS10042.y"
                                        {
		if((yyvsp[-1].decl).type == NULL)
		{
			int temp;/*--------------*/
		}
		else
		{
			if((yyvsp[0].expon).loc->tp_n->basetp != tp_ptr)
			{
				int temp;
				type_n * test = (yyvsp[-1].decl).type;
				while(test->next != NULL)
				{
					test = test->next;
					temp++;
				}
				test->next = (yyvsp[0].expon).loc->tp_n;temp++;
				(yyvsp[0].expon).loc->tp_n = (yyvsp[-1].decl).type;temp=0;
			}
		}

		if((yyvsp[0].expon).type != NULL && (yyvsp[0].expon).type->basetp == tp_func)
		{
			(yyval.expon) = (yyvsp[0].expon);for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}
		}
		else
		{
			int temp;
			//its not a function
			(yyvsp[0].expon).loc->size = (yyvsp[0].expon).loc->tp_n->getSize();
			(yyvsp[0].expon).loc->offset = curr_st->offset;temp++;
			curr_st->offset += (yyvsp[0].expon).loc->size;
			(yyval.expon) = (yyvsp[0].expon);temp=0;
			(yyval.expon).type = (yyval.expon).loc->tp_n;
		}
	}
#line 3258 "y.tab.c"
    break;

  case 131:
#line 987 "ass6_18CS10042.y"
                 { (yyval.decl) = (yyvsp[0].decl); for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3265 "y.tab.c"
    break;

  case 132:
#line 989 "ass6_18CS10042.y"
                 { (yyval.decl).type = NULL; }
#line 3271 "y.tab.c"
    break;

  case 133:
#line 993 "ass6_18CS10042.y"
                     {int temp;
		(yyval.expon).loc = curr_st->lookup(*(yyvsp[0].idl).name);
		if((yyval.expon).loc->var_type == "")
		{
			//Type initialization
			(yyval.expon).loc->var_type = "local";temp++;
			(yyval.expon).loc->tp_n = new type_n(glob_type->basetp);temp=0;
		}
		(yyval.expon).type = (yyval.expon).loc->tp_n;temp=0;
	}
#line 3286 "y.tab.c"
    break;

  case 134:
#line 1003 "ass6_18CS10042.y"
                                        { (yyval.expon) = (yyvsp[-1].expon);int temp=0; }
#line 3292 "y.tab.c"
    break;

  case 135:
#line 1004 "ass6_18CS10042.y"
                                                                                                {int temp;
		if((yyvsp[-4].expon).type->basetp == tp_arr)
		{
			/*if type is already an arr*/
			temp=0;
			type_n * typ1 = (yyvsp[-4].expon).type,*typ = (yyvsp[-4].expon).type;
			typ1 = typ1->next; temp++;
			while(typ1->next != NULL)
			{
				typ1 = typ1->next;temp=0;
				typ = typ->next;
			}
			typ->next = new type_n(tp_arr,(yyvsp[-1].expon).loc->i_val.int_val,typ1);temp=0;
		}
		else
		{
			//add the type of array to list
			if((yyvsp[-1].expon).loc == NULL)
			{
				(yyvsp[-4].expon).type = new type_n(tp_arr,-1,(yyvsp[-4].expon).type);temp=0;
			}
			else
			{
				(yyvsp[-4].expon).type = new type_n(tp_arr,(yyvsp[-1].expon).loc->i_val.int_val,(yyvsp[-4].expon).type);temp=0;
			}
		}
		(yyval.expon) = (yyvsp[-4].expon);temp++;
		(yyval.expon).loc->tp_n = (yyval.expon).type;
	}
#line 3326 "y.tab.c"
    break;

  case 136:
#line 1033 "ass6_18CS10042.y"
                                                                                                  {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3333 "y.tab.c"
    break;

  case 137:
#line 1035 "ass6_18CS10042.y"
                                                                         {int temp;}
#line 3339 "y.tab.c"
    break;

  case 138:
#line 1036 "ass6_18CS10042.y"
                                                                   {int temp;
						int params_no=curr_st->no_params;
						//printf("no.ofparameters-->%d\n",params_no);
						curr_st->no_params=0;temp++;
						int dec_params=0;
						int over_params=params_no;temp++;
						for(int i=curr_st->symbol_tab.size()-1;i>=0;i--)
						{
							//printf("mazaknaminST-->%s\n",curr_st->symbol_tab[i]->name.c_str());
							temp=0;
							string detect=curr_st->symbol_tab[i]->name;
							if(over_params==0)
							{
								temp=1;
								break;
							}
							if(detect.size()==4)
							{
								temp=4;
								if(detect[0]=='t')
								{
									temp++;
									if('0'<=detect[1]&&detect[1]<='9')
									{
										temp=8;
										if('0'<=detect[2]&&detect[2]<='9')
										{
											temp++;
											if('0'<=detect[3]&&detect[3]<='9')
											dec_params++;
										}
									}
								}
							}
							else
							over_params--;
							temp=0;

						}
						params_no+=dec_params;temp++;
						//printf("no.ofparameters-->%d\n",params_no);
						int temp_i=curr_st->symbol_tab.size()-params_no;
						symdata * new_func = glob_st->search(curr_st->symbol_tab[temp_i-1]->name);temp++;for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}
						//printf("Hello1\n");
						//printf("%s\n",curr_st->symbol_tab[0]->name.c_str());
						//printf("no. of params-> %d\n",curr_st->no_params);
						if(new_func == NULL)
						{
							temp=0;
							new_func = glob_st->lookup(curr_st->symbol_tab[temp_i-1]->name);
							(yyval.expon).loc = curr_st->symbol_tab[temp_i-1];temp++;
							for(int i=0;i<(temp_i-1);i++)
							{
								curr_st->symbol_tab[i]->ispresent=false;temp=-1;
								if(curr_st->symbol_tab[i]->var_type=="local"||curr_st->symbol_tab[i]->var_type=="temp")
								{
									symdata *glob_var=glob_st->search(curr_st->symbol_tab[i]->name);temp++;
									if(glob_var==NULL)
									{
										//printf("glob_var-->%s\n",curr_st->symbol_tab[i]->name.c_str());
										glob_var=glob_st->lookup(curr_st->symbol_tab[i]->name);temp=0;
										int t_size=curr_st->symbol_tab[i]->tp_n->getSize();
										glob_var->offset=glob_st->offset;
										glob_var->size=t_size;temp++;
										glob_st->offset+=t_size;
										glob_var->nest_tab=glob_st;temp++;
										glob_var->var_type=curr_st->symbol_tab[i]->var_type;
										glob_var->tp_n=curr_st->symbol_tab[i]->tp_n;temp=0;
										if(curr_st->symbol_tab[i]->isInitialized)
										{
											glob_var->isInitialized=curr_st->symbol_tab[i]->isInitialized;temp=0;
											glob_var->i_val=curr_st->symbol_tab[i]->i_val;
										}

									}
								}
							}
							temp=0;
							if(new_func->var_type == "")
							{
								// Declaration of the function for the first time
								new_func->tp_n = CopyType(curr_st->symbol_tab[temp_i-1]->tp_n);temp++;
								new_func->var_type = "func";
								new_func->isInitialized = false;temp++;
								new_func->nest_tab = curr_st;
								curr_st->name = curr_st->symbol_tab[temp_i-1]->name;
								//printf("naminST-->%s\n",curr_st->symbol_tab[temp_i-1]->name.c_str());
								//printf("oye\n");
								/*for(int i=0;i<curr_st->symbol_tab.size();i++)
								{
								printf("naminST-->%s\n",curr_st->symbol_tab[i]->name.c_str());
								}*/
								curr_st->symbol_tab[temp_i-1]->name = "retVal";temp=0;
								curr_st->symbol_tab[temp_i-1]->var_type = "return";
								curr_st->symbol_tab[temp_i-1]->size = curr_st->symbol_tab[temp_i-1]->tp_n->getSize();temp++;
								curr_st->symbol_tab[temp_i-1]->offset = 0;
								curr_st->offset = 16;temp++;
								int count=0;
								for(int i=(curr_st->symbol_tab.size())-params_no;i<curr_st->symbol_tab.size();i++)
								{
									//printf("%s -> %s\n",curr_st->symbol_tab[i]->name.c_str(),curr_st->symbol_tab[i]->var_type.c_str());
									curr_st->symbol_tab[i]->var_type = "param";temp++;
									curr_st->symbol_tab[i]->offset = count- curr_st->symbol_tab[i]->size;temp=0;
									count=count-curr_st->symbol_tab[i]->size;
								}
							}
						}
						else
						{
							temp=0;
							curr_st = new_func->nest_tab;
						}
						curr_st->start_quad = next_instr;
						temp++;
						(yyval.expon).loc = new_func;
						(yyval.expon).type = new type_n(tp_func);temp=0;
					}
#line 3462 "y.tab.c"
    break;

  case 139:
#line 1154 "ass6_18CS10042.y"
                                                                    {int temp;
				int temp_i=curr_st->symbol_tab.size();
				symdata * new_func = glob_st->search(curr_st->symbol_tab[temp_i-1]->name);
				//printf("Hello3\n");
				//printf("glob_st %s\n",curr_st->symbol_tab[temp_i-1]->name.c_str());
				//printf("symbol_tabsize %d\n",curr_st->symbol_tab.size());
				/*if(curr_st->symbol_tab.size()>2)
				{
				//printf("Namestarted\n");
				printf("%s\n",curr_st->symbol_tab[0]->name.c_str());
				printf("%s\n",curr_st->symbol_tab[1]->name.c_str());temp++;
				printf("%s\n",curr_st->symbol_tab[2]->name.c_str());
				}*/
				if(new_func == NULL)
				{
					temp=0;
					new_func = glob_st->lookup(curr_st->symbol_tab[temp_i-1]->name);
					(yyval.expon).loc = curr_st->symbol_tab[temp_i-1];temp++;
					for(int i=0;i<temp_i-1;i++)
					{
						curr_st->symbol_tab[i]->ispresent=false;temp++;
						if(curr_st->symbol_tab[i]->var_type=="local"||curr_st->symbol_tab[i]->var_type=="temp")
						{
							temp=0;symdata *glob_var=glob_st->search(curr_st->symbol_tab[i]->name);
							if(glob_var==NULL)
							{
								//printf("glob_var-->%s\n",curr_st->symbol_tab[i]->name.c_str());
								glob_var=glob_st->lookup(curr_st->symbol_tab[i]->name);
								int t_size=curr_st->symbol_tab[i]->tp_n->getSize();temp++;
								glob_var->offset=glob_st->offset;
								glob_var->size=t_size;temp++;
								glob_st->offset+=t_size;
								glob_var->nest_tab=glob_st;
								glob_var->var_type=curr_st->symbol_tab[i]->var_type;temp++;
								glob_var->tp_n=curr_st->symbol_tab[i]->tp_n;
								if(curr_st->symbol_tab[i]->isInitialized)
								{
									temp=0;glob_var->isInitialized=curr_st->symbol_tab[i]->isInitialized;
									glob_var->i_val=curr_st->symbol_tab[i]->i_val;temp++;
								}
							}
						}
					}
					if(new_func->var_type == "")
					{
						/*Function is being declared here for the first time*/
						new_func->tp_n = CopyType(curr_st->symbol_tab[temp_i-1]->tp_n);temp++;
						new_func->var_type = "func";
						new_func->isInitialized = false;temp++;
						new_func->nest_tab = curr_st;
						/*Change the first element to retval and change the rest to param*/
						curr_st->name = curr_st->symbol_tab[temp_i-1]->name;
						curr_st->symbol_tab[temp_i-1]->name = "retVal";temp++;
						curr_st->symbol_tab[temp_i-1]->var_type = "return";
						curr_st->symbol_tab[temp_i-1]->size = curr_st->symbol_tab[0]->tp_n->getSize();temp++;
						curr_st->symbol_tab[temp_i-1]->offset = 0;
						curr_st->offset = 16;temp=0;
					}
				}
				else
				{
					// Already declared function. Therefore drop the new table and connect current symbol table pointer to the previously created funciton symbol table
					int counter;
					curr_st = new_func->nest_tab;
				}
				curr_st->start_quad = next_instr;
				(yyval.expon).loc = new_func;temp=0;
				(yyval.expon).type = new type_n(tp_func);
			}
#line 3536 "y.tab.c"
    break;

  case 140:
#line 1228 "ass6_18CS10042.y"
                         {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3543 "y.tab.c"
    break;

  case 141:
#line 1230 "ass6_18CS10042.y"
                 {}
#line 3549 "y.tab.c"
    break;

  case 142:
#line 1234 "ass6_18CS10042.y"
                              {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3556 "y.tab.c"
    break;

  case 143:
#line 1236 "ass6_18CS10042.y"
                         {}
#line 3562 "y.tab.c"
    break;

  case 144:
#line 1240 "ass6_18CS10042.y"
                                 {}
#line 3568 "y.tab.c"
    break;

  case 145:
#line 1241 "ass6_18CS10042.y"
                                                        {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3575 "y.tab.c"
    break;

  case 146:
#line 1247 "ass6_18CS10042.y"
                                                                      { (yyval.decl).type = new type_n(tp_ptr);int temp=0; }
#line 3581 "y.tab.c"
    break;

  case 147:
#line 1248 "ass6_18CS10042.y"
                                                                              { (yyval.decl).type = new type_n(tp_ptr,1,(yyvsp[0].decl).type); int temp=0;}
#line 3587 "y.tab.c"
    break;

  case 148:
#line 1253 "ass6_18CS10042.y"
                                                         {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3594 "y.tab.c"
    break;

  case 149:
#line 1255 "ass6_18CS10042.y"
                                                                                     {int temp;}
#line 3600 "y.tab.c"
    break;

  case 150:
#line 1261 "ass6_18CS10042.y"
                         {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3607 "y.tab.c"
    break;

  case 151:
#line 1263 "ass6_18CS10042.y"
                                    {}
#line 3613 "y.tab.c"
    break;

  case 152:
#line 1268 "ass6_18CS10042.y"
                                {int temp=0;(curr_st->no_params)++;}
#line 3619 "y.tab.c"
    break;

  case 153:
#line 1269 "ass6_18CS10042.y"
                                                     {(curr_st->no_params)++;}
#line 3625 "y.tab.c"
    break;

  case 154:
#line 1274 "ass6_18CS10042.y"
                                            {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3632 "y.tab.c"
    break;

  case 155:
#line 1276 "ass6_18CS10042.y"
                                 {}
#line 3638 "y.tab.c"
    break;

  case 156:
#line 1281 "ass6_18CS10042.y"
                     {int temp;}
#line 3644 "y.tab.c"
    break;

  case 157:
#line 1282 "ass6_18CS10042.y"
                                           {}
#line 3650 "y.tab.c"
    break;

  case 158:
#line 1287 "ass6_18CS10042.y"
                                   {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3657 "y.tab.c"
    break;

  case 159:
#line 1293 "ass6_18CS10042.y"
                                { int temp;(yyval.expon) = (yyvsp[0].expon); }
#line 3663 "y.tab.c"
    break;

  case 160:
#line 1294 "ass6_18CS10042.y"
                                              {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3670 "y.tab.c"
    break;

  case 161:
#line 1296 "ass6_18CS10042.y"
                                                            {}
#line 3676 "y.tab.c"
    break;

  case 162:
#line 1301 "ass6_18CS10042.y"
                      {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3683 "y.tab.c"
    break;

  case 163:
#line 1303 "ass6_18CS10042.y"
                                  {}
#line 3689 "y.tab.c"
    break;

  case 164:
#line 1304 "ass6_18CS10042.y"
                                             {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3696 "y.tab.c"
    break;

  case 165:
#line 1306 "ass6_18CS10042.y"
                                                          {}
#line 3702 "y.tab.c"
    break;

  case 166:
#line 1311 "ass6_18CS10042.y"
                                 {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3709 "y.tab.c"
    break;

  case 167:
#line 1317 "ass6_18CS10042.y"
                     {int temp;}
#line 3715 "y.tab.c"
    break;

  case 168:
#line 1318 "ass6_18CS10042.y"
                                     {int temp;}
#line 3721 "y.tab.c"
    break;

  case 169:
#line 1323 "ass6_18CS10042.y"
                                               {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3728 "y.tab.c"
    break;

  case 170:
#line 1325 "ass6_18CS10042.y"
                         {}
#line 3734 "y.tab.c"
    break;

  case 171:
#line 1331 "ass6_18CS10042.y"
                            {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3741 "y.tab.c"
    break;

  case 172:
#line 1333 "ass6_18CS10042.y"
                                     { (yyval.nextlist) = (yyvsp[0].nextlist); int temp; }
#line 3747 "y.tab.c"
    break;

  case 173:
#line 1334 "ass6_18CS10042.y"
                                       { (yyval.nextlist) = NULL; }
#line 3753 "y.tab.c"
    break;

  case 174:
#line 1335 "ass6_18CS10042.y"
                                      { (yyval.nextlist) = (yyvsp[0].nextlist); }
#line 3759 "y.tab.c"
    break;

  case 175:
#line 1336 "ass6_18CS10042.y"
                                      { int temp;(yyval.nextlist) = (yyvsp[0].nextlist); }
#line 3765 "y.tab.c"
    break;

  case 176:
#line 1337 "ass6_18CS10042.y"
                                 { (yyval.nextlist) = (yyvsp[0].nextlist); }
#line 3771 "y.tab.c"
    break;

  case 177:
#line 1342 "ass6_18CS10042.y"
                                             {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3778 "y.tab.c"
    break;

  case 178:
#line 1344 "ass6_18CS10042.y"
                                                                   {}
#line 3784 "y.tab.c"
    break;

  case 179:
#line 1345 "ass6_18CS10042.y"
                                                          {int temp;}
#line 3790 "y.tab.c"
    break;

  case 180:
#line 1350 "ass6_18CS10042.y"
                                                             { for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}(yyval.nextlist) = NULL; }
#line 3797 "y.tab.c"
    break;

  case 181:
#line 1352 "ass6_18CS10042.y"
                                                                             { (yyval.nextlist) = (yyvsp[-1].nextlist); }
#line 3803 "y.tab.c"
    break;

  case 182:
#line 1357 "ass6_18CS10042.y"
                                                     { (yyval.nextlist) = (yyvsp[0].nextlist); int temp; }
#line 3809 "y.tab.c"
    break;

  case 183:
#line 1358 "ass6_18CS10042.y"
                                                                       {
						int temp;
						backpatch((yyvsp[-2].nextlist),(yyvsp[-1].instr));
						(yyval.nextlist) = (yyvsp[0].nextlist);temp--;
					}
#line 3819 "y.tab.c"
    break;

  case 184:
#line 1367 "ass6_18CS10042.y"
                                                      { (yyval.nextlist) = NULL; }
#line 3825 "y.tab.c"
    break;

  case 185:
#line 1368 "ass6_18CS10042.y"
                                                    { (yyval.nextlist) = (yyvsp[0].nextlist);for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");} }
#line 3832 "y.tab.c"
    break;

  case 187:
#line 1382 "ass6_18CS10042.y"
                    {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}
		(yyval.expon) = (yyvsp[0].expon);
	}
#line 3841 "y.tab.c"
    break;

  case 188:
#line 1386 "ass6_18CS10042.y"
                 { (yyval.expon).loc = NULL; }
#line 3847 "y.tab.c"
    break;

  case 189:
#line 1391 "ass6_18CS10042.y"
                                                                          {
		/*N (B.falselist), M (B.truelist)*/
		int temp;
		(yyvsp[0].nextlist) = merge((yyvsp[0].nextlist),makelist(next_instr));
		glob_quad.emit(Q_GOTO,"-1");temp++;
		backpatch((yyvsp[-3].nextlist),next_instr);
		conv2Bool(&(yyvsp[-4].expon));
		backpatch((yyvsp[-4].expon).truelist,(yyvsp[-1].instr));temp++;
		(yyval.nextlist) = merge((yyvsp[0].nextlist),(yyvsp[-4].expon).falselist);temp=0;
	}
#line 3862 "y.tab.c"
    break;

  case 190:
#line 1401 "ass6_18CS10042.y"
                                                                            {
		/*N1 (B.falselist), M1 (B.truelist), N2 prevents fall through, M2 is used for falselist of expression*/
		int temp;
		(yyvsp[-4].nextlist) = merge((yyvsp[-4].nextlist),(yyvsp[-3].nextlist));
		(yyvsp[0].nextlist) = merge((yyvsp[0].nextlist),makelist(next_instr));temp++;
		glob_quad.emit(Q_GOTO,"-1");
		backpatch((yyvsp[-7].nextlist),next_instr);
		temp++;
		conv2Bool(&(yyvsp[-8].expon));

		backpatch((yyvsp[-8].expon).truelist,(yyvsp[-5].instr));temp++;
		backpatch((yyvsp[-8].expon).falselist,(yyvsp[-1].instr));
		(yyval.nextlist) = merge((yyvsp[-4].nextlist),(yyvsp[0].nextlist));temp=0;
	}
#line 3881 "y.tab.c"
    break;

  case 191:
#line 1415 "ass6_18CS10042.y"
                                                         {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3888 "y.tab.c"
    break;

  case 192:
#line 1421 "ass6_18CS10042.y"
                                                                      {
			/*M1 (label for condition check) .'N' (generates goto for break condition). M2 (label for start of body of loop)*/
			int temp;
			glob_quad.emit(Q_GOTO,(yyvsp[-5].instr));
			backpatch((yyvsp[0].nextlist),(yyvsp[-5].instr)); temp++;          /*S.nextlist to M1.instr*/
			backpatch((yyvsp[-3].nextlist),next_instr);    /*N1.nextlist to next_instr*/
			conv2Bool(&(yyvsp[-4].expon));
			backpatch((yyvsp[-4].expon).truelist,(yyvsp[-1].instr));temp++;
			(yyval.nextlist) = (yyvsp[-4].expon).falselist;temp=0;
		}
#line 3903 "y.tab.c"
    break;

  case 193:
#line 1431 "ass6_18CS10042.y"
                                                                                   {int temp;
			/*M1 (B.truelist). M2 i(label for condition checking statement). N prevents fall through*/
			backpatch((yyvsp[-2].nextlist),next_instr);
			backpatch((yyvsp[-7].nextlist),(yyvsp[-4].instr));temp++;           /*S1.nextlist to M2.instr*/
			conv2Bool(&(yyvsp[-3].expon));
			backpatch((yyvsp[-3].expon).truelist,(yyvsp[-8].instr));  /*B.truelist to M1.instr*/
			temp=0;(yyval.nextlist) = (yyvsp[-3].expon).falselist;
		}
#line 3916 "y.tab.c"
    break;

  case 194:
#line 1439 "ass6_18CS10042.y"
                                                                                                                              {int temp;
			/*M1 (label to check expresion). N1 (generates goto EXIT). M2 (S.nextlist) N2 (generates jump for checking condition) and M3 (B.truelist)*/
			backpatch((yyvsp[-3].nextlist),(yyvsp[-9].instr));          /*N2.nextlist to M1.instr*/
			backpatch((yyvsp[0].nextlist),(yyvsp[-5].instr));  temp++;        /*S.nextlist to M2.instr*/
			glob_quad.emit(Q_GOTO,(yyvsp[-5].instr));
			backpatch((yyvsp[-7].nextlist),next_instr);    /*N1.nextlist to next_instr*/
			conv2Bool(&(yyvsp[-8].expon));temp--;
			backpatch((yyvsp[-8].expon).truelist,(yyvsp[-1].instr));
			(yyval.nextlist) = (yyvsp[-8].expon).falselist;temp=0;
		}
#line 3931 "y.tab.c"
    break;

  case 195:
#line 1453 "ass6_18CS10042.y"
                                            {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3938 "y.tab.c"
    break;

  case 196:
#line 1455 "ass6_18CS10042.y"
                                             {}
#line 3944 "y.tab.c"
    break;

  case 197:
#line 1456 "ass6_18CS10042.y"
                                                  {for(int temp2=0;temp2<-1;temp2++)
						{printf("sanity check");}}
#line 3951 "y.tab.c"
    break;

  case 198:
#line 1459 "ass6_18CS10042.y"
                                                                          {int temp;
						if((yyvsp[-1].expon).loc == NULL)
						glob_quad.emit(Q_RETURN);
						else
						{
							temp=0;
							expresn * dummy = new expresn();
							dummy->loc = curr_st->symbol_tab[0];
							dummy->type = dummy->loc->tp_n;temp++;
							typecheck(dummy,&(yyvsp[-1].expon),true);
							delete dummy;temp++;
							glob_quad.emit(Q_RETURN,(yyvsp[-1].expon).loc->name);
						}temp=0;
						(yyval.nextlist) = NULL;
					}
#line 3971 "y.tab.c"
    break;

  case 202:
#line 1485 "ass6_18CS10042.y"
                                                      {int temp;

						for(int i=0;i<curr_st->symbol_tab.size();i++)
						{
							//if(curr_st->symbol_tab[i]->ispresent==true&&curr_st->symbol_tab[i]->offset==-1)
							//{
							temp++;
							if(curr_st->symbol_tab[i]->nest_tab==NULL)
							{
								//printf("global --> %s\n",curr_st->symbol_tab[i]->name.c_str());
								if(curr_st->symbol_tab[i]->var_type=="local"||curr_st->symbol_tab[i]->var_type=="temp")
								{
									temp++;
									symdata *glob_var=glob_st->search(curr_st->symbol_tab[i]->name);
									if(glob_var==NULL)
									{
										temp++;
										glob_var=glob_st->lookup(curr_st->symbol_tab[i]->name);
										//printf("glob_var-->%s\n",curr_st->symbol_tab[i]->name.c_str());
										int t_size=curr_st->symbol_tab[i]->tp_n->getSize();
										glob_var->offset=glob_st->offset;temp++;
										glob_var->size=t_size;
										glob_st->offset+=t_size;temp++;
										glob_var->nest_tab=glob_st;
										glob_var->var_type=curr_st->symbol_tab[i]->var_type;
										glob_var->tp_n=curr_st->symbol_tab[i]->tp_n;temp=0;
										if(curr_st->symbol_tab[i]->isInitialized)
										{
											temp=0;glob_var->isInitialized=curr_st->symbol_tab[i]->isInitialized;temp++;
											glob_var->i_val=curr_st->symbol_tab[i]->i_val;
										}
									}
								}
							}
						}

					}
#line 4013 "y.tab.c"
    break;

  case 203:
#line 1526 "ass6_18CS10042.y"
                                                                                    {
		symdata * func = glob_st->lookup((yyvsp[-2].expon).loc->name);
		int temp;
		func->nest_tab->symbol_tab[0]->tp_n = CopyType(func->tp_n);
		func->nest_tab->symbol_tab[0]->name = "retVal";temp++;
		func->nest_tab->symbol_tab[0]->offset = 0;
		//change offset if return pointer
		if(func->nest_tab->symbol_tab[0]->tp_n->basetp == tp_ptr)
		{
			temp=0;
			int diff = size_pointer - func->nest_tab->symbol_tab[0]->size;
			func->nest_tab->symbol_tab[0]->size = size_pointer;temp++;
			for(int i=1;i<func->nest_tab->symbol_tab.size();i++)
			{
				temp=0;
				func->nest_tab->symbol_tab[i]->offset += diff;
			}
		}
		int offset_size = 0;temp++;
		for(int i=0;i<func->nest_tab->symbol_tab.size();i++)
		{
			temp=0;
			offset_size += func->nest_tab->symbol_tab[i]->size;
		}
		func->nest_tab->end_quad = next_instr-1;temp++;
		//Create a new Current Symbol Table
		curr_st = new symtab();temp=0;
	}
#line 4046 "y.tab.c"
    break;


#line 4050 "y.tab.c"

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
#line 1568 "ass6_18CS10042.y"

	void yyerror(const char *s) {
		int temp=0;
		printf ("\nERROR: %s\n",s);
	}
