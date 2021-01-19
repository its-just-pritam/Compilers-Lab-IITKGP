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
#line 1 "asgn4_18CS10042.y"
 
	#include <string.h>
	#include <stdio.h>
	extern int yylex();
	void yyerror(char *ERRORS);

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
    SINGLE_COMMENT = 258,
    MULTILINE_COMMENT = 259,
    AUTO = 260,
    BREAK = 261,
    CASE = 262,
    CHAR = 263,
    CONST = 264,
    CONTINUE = 265,
    DEFAULT = 266,
    DO = 267,
    DOUBLE = 268,
    ELSE = 269,
    ENUM = 270,
    EXTERN = 271,
    REGISTER = 272,
    FLOAT = 273,
    FOR = 274,
    GOTO = 275,
    IF = 276,
    INLINE = 277,
    INT = 278,
    LONG = 279,
    RESTRICT = 280,
    RETURN = 281,
    SHORT = 282,
    SIGNED = 283,
    SIZEOF = 284,
    STATIC = 285,
    STRUCT = 286,
    SWITCH = 287,
    TYPEDEF = 288,
    UNION = 289,
    UNSIGNED = 290,
    VOID = 291,
    VOLATILE = 292,
    WHILE = 293,
    BOOL = 294,
    COMPLEX = 295,
    IMAGINARY = 296,
    SQUARE_BRACKET_OPEN = 297,
    SQUARE_BRACKET_CLOSE = 298,
    ROUND_BRACKET_OPEN = 299,
    ROUND_BRACKET_CLOSE = 300,
    CURLY_BRACKET_OPEN = 301,
    CURLY_BRACKET_CLOSE = 302,
    DOT = 303,
    IMPLIES = 304,
    INCREMENT = 305,
    DECREMENT = 306,
    BITWISE_AND = 307,
    MUL = 308,
    PLUS = 309,
    MINUS = 310,
    BITWISE_NOT = 311,
    NOT = 312,
    DIV = 313,
    MOD = 314,
    LEFT_SHIFT = 315,
    RIGHT_SHIFT = 316,
    LESS_THAN = 317,
    GREATER_THAN = 318,
    LESS_EQUAL = 319,
    GREATER_EQUAL = 320,
    EQUAL = 321,
    NOT_EQUAL = 322,
    BITWISE_XOR = 323,
    BITWISE_OR = 324,
    AND = 325,
    OR = 326,
    QUESTION = 327,
    COLON = 328,
    SEMICOLON = 329,
    ELLIPSIS = 330,
    ASSIGN = 331,
    MUL_EQUAL = 332,
    DIV_EQUAL = 333,
    MOD_EQUAL = 334,
    PLUS_EQUAL = 335,
    MINUS_EQUAL = 336,
    SHIFT_LEFT_EQUAL = 337,
    SHIFT_RIGHT_EQUAL = 338,
    BITWISE_AND_EQUAL = 339,
    BITWISE_XOR_EQUAL = 340,
    BITWISE_OR_EQUAL = 341,
    COMMA = 342,
    HASH = 343,
    IDENTIFIER = 344,
    INTEGER = 345,
    FLOATING_CONSTANT = 346,
    CHARACTER_CONSTANT = 347,
    STRING_LITERAL = 348,
    THEN = 349
  };
#endif
/* Tokens.  */
#define SINGLE_COMMENT 258
#define MULTILINE_COMMENT 259
#define AUTO 260
#define BREAK 261
#define CASE 262
#define CHAR 263
#define CONST 264
#define CONTINUE 265
#define DEFAULT 266
#define DO 267
#define DOUBLE 268
#define ELSE 269
#define ENUM 270
#define EXTERN 271
#define REGISTER 272
#define FLOAT 273
#define FOR 274
#define GOTO 275
#define IF 276
#define INLINE 277
#define INT 278
#define LONG 279
#define RESTRICT 280
#define RETURN 281
#define SHORT 282
#define SIGNED 283
#define SIZEOF 284
#define STATIC 285
#define STRUCT 286
#define SWITCH 287
#define TYPEDEF 288
#define UNION 289
#define UNSIGNED 290
#define VOID 291
#define VOLATILE 292
#define WHILE 293
#define BOOL 294
#define COMPLEX 295
#define IMAGINARY 296
#define SQUARE_BRACKET_OPEN 297
#define SQUARE_BRACKET_CLOSE 298
#define ROUND_BRACKET_OPEN 299
#define ROUND_BRACKET_CLOSE 300
#define CURLY_BRACKET_OPEN 301
#define CURLY_BRACKET_CLOSE 302
#define DOT 303
#define IMPLIES 304
#define INCREMENT 305
#define DECREMENT 306
#define BITWISE_AND 307
#define MUL 308
#define PLUS 309
#define MINUS 310
#define BITWISE_NOT 311
#define NOT 312
#define DIV 313
#define MOD 314
#define LEFT_SHIFT 315
#define RIGHT_SHIFT 316
#define LESS_THAN 317
#define GREATER_THAN 318
#define LESS_EQUAL 319
#define GREATER_EQUAL 320
#define EQUAL 321
#define NOT_EQUAL 322
#define BITWISE_XOR 323
#define BITWISE_OR 324
#define AND 325
#define OR 326
#define QUESTION 327
#define COLON 328
#define SEMICOLON 329
#define ELLIPSIS 330
#define ASSIGN 331
#define MUL_EQUAL 332
#define DIV_EQUAL 333
#define MOD_EQUAL 334
#define PLUS_EQUAL 335
#define MINUS_EQUAL 336
#define SHIFT_LEFT_EQUAL 337
#define SHIFT_RIGHT_EQUAL 338
#define BITWISE_AND_EQUAL 339
#define BITWISE_XOR_EQUAL 340
#define BITWISE_OR_EQUAL 341
#define COMMA 342
#define HASH 343
#define IDENTIFIER 344
#define INTEGER 345
#define FLOATING_CONSTANT 346
#define CHARACTER_CONSTANT 347
#define STRING_LITERAL 348
#define THEN 349

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "asgn4_18CS10042.y"

	int INTVAL;

#line 321 "y.tab.c"

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
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   774

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  191
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  316

#define YYUNDEFTOK  2
#define YYMAXUTOK   349


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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   138,   138,   138,   138,   139,   139,   139,   139,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   147,
     147,   151,   151,   151,   151,   151,   151,   155,   155,   155,
     155,   155,   155,   159,   159,   163,   163,   163,   163,   167,
     167,   167,   171,   171,   171,   175,   175,   175,   175,   175,
     179,   179,   179,   183,   183,   187,   187,   191,   191,   195,
     195,   199,   199,   203,   203,   207,   207,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   211,   215,   215,
     219,   227,   227,   231,   231,   231,   231,   231,   231,   231,
     231,   235,   235,   239,   239,   243,   243,   247,   247,   247,
     247,   247,   247,   247,   251,   251,   251,   251,   255,   255,
     255,   259,   263,   263,   267,   267,   267,   267,   267,   267,
     267,   267,   269,   269,   271,   271,   273,   273,   277,   277,
     281,   281,   285,   285,   289,   289,   293,   293,   297,   297,
     301,   305,   305,   305,   309,   309,   311,   311,   315,   319,
     319,   323,   323,   331,   331,   331,   331,   331,   331,   335,
     335,   335,   339,   341,   341,   345,   345,   349,   349,   353,
     355,   355,   359,   360,   360,   364,   364,   364,   364,   368,
     368,   368,   368,   376,   376,   380,   380,   384,   386,   386,
     390,   390
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SINGLE_COMMENT", "MULTILINE_COMMENT",
  "AUTO", "BREAK", "CASE", "CHAR", "CONST", "CONTINUE", "DEFAULT", "DO",
  "DOUBLE", "ELSE", "ENUM", "EXTERN", "REGISTER", "FLOAT", "FOR", "GOTO",
  "IF", "INLINE", "INT", "LONG", "RESTRICT", "RETURN", "SHORT", "SIGNED",
  "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED",
  "VOID", "VOLATILE", "WHILE", "BOOL", "COMPLEX", "IMAGINARY",
  "SQUARE_BRACKET_OPEN", "SQUARE_BRACKET_CLOSE", "ROUND_BRACKET_OPEN",
  "ROUND_BRACKET_CLOSE", "CURLY_BRACKET_OPEN", "CURLY_BRACKET_CLOSE",
  "DOT", "IMPLIES", "INCREMENT", "DECREMENT", "BITWISE_AND", "MUL", "PLUS",
  "MINUS", "BITWISE_NOT", "NOT", "DIV", "MOD", "LEFT_SHIFT", "RIGHT_SHIFT",
  "LESS_THAN", "GREATER_THAN", "LESS_EQUAL", "GREATER_EQUAL", "EQUAL",
  "NOT_EQUAL", "BITWISE_XOR", "BITWISE_OR", "AND", "OR", "QUESTION",
  "COLON", "SEMICOLON", "ELLIPSIS", "ASSIGN", "MUL_EQUAL", "DIV_EQUAL",
  "MOD_EQUAL", "PLUS_EQUAL", "MINUS_EQUAL", "SHIFT_LEFT_EQUAL",
  "SHIFT_RIGHT_EQUAL", "BITWISE_AND_EQUAL", "BITWISE_XOR_EQUAL",
  "BITWISE_OR_EQUAL", "COMMA", "HASH", "IDENTIFIER", "INTEGER",
  "FLOATING_CONSTANT", "CHARACTER_CONSTANT", "STRING_LITERAL", "THEN",
  "$accept", "constant", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "type_qualifier_list_opt",
  "assignment_expression_opt", "identifier_list_opt", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation_opt", "designation", "designator_list",
  "designator", "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
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
     345,   346,   347,   348,   349
};
# endif

#define YYPACT_NINF (-203)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-189)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     717,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,   -33,   717,   717,   717,   717,
     692,  -203,  -203,   -10,   114,  -203,  -203,   -39,  -203,   455,
      46,   -32,  -203,  -203,  -203,  -203,  -203,  -203,     1,  -203,
     -40,   114,  -203,   -10,   488,  -203,   -33,   -30,   717,   122,
     194,    46,  -203,  -203,  -203,  -203,   -26,   562,   405,    35,
     576,   576,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,    86,   594,   592,  -203,    87,
       9,     7,   110,    32,   -15,    24,    27,    30,    70,  -203,
    -203,  -203,   249,  -203,  -203,   114,   606,   124,  -203,   -10,
      57,    59,    40,  -203,    51,   405,  -203,  -203,   -36,   737,
    -203,   737,   117,   592,    77,   -11,   488,  -203,    13,  -203,
     405,  -203,  -203,   592,   504,    94,    99,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,
     592,  -203,  -203,   592,   592,   592,   592,   592,   592,   592,
     592,   592,   592,   592,   592,   592,   592,   592,   592,   592,
     592,   592,   120,   592,   126,   131,   305,   162,   119,   165,
     592,   167,   169,   141,   128,  -203,  -203,  -203,  -203,   175,
     249,  -203,  -203,   151,  -203,  -203,  -203,   592,   183,  -203,
     185,   592,  -203,  -203,  -203,   491,   140,   189,  -203,   592,
    -203,  -203,   518,  -203,   192,  -203,  -203,   121,  -203,  -203,
    -203,   191,   -29,  -203,   -28,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,    87,    87,     9,     9,     7,     7,     7,     7,
     110,   110,    32,   -15,    24,    27,    30,    14,  -203,   164,
    -203,   305,   201,   355,   168,   592,   170,   592,   592,   305,
    -203,  -203,  -203,   198,  -203,  -203,   200,  -203,  -203,  -203,
     199,  -203,    35,  -203,  -203,  -203,   488,   199,  -203,  -203,
     592,   592,   305,  -203,   202,   592,   173,  -203,   -21,  -203,
     -13,    -7,  -203,  -203,  -203,    -2,  -203,  -203,  -203,  -203,
     592,   176,   592,   305,   305,   305,  -203,   123,    -1,   592,
     177,   235,  -203,  -203,  -203,   179,   219,   592,   305,  -203,
     305,   221,  -203,  -203,   305,  -203
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,   108,   103,    95,   102,   111,   100,   101,   109,
      99,    96,    97,   110,   186,     0,    83,    85,    87,    89,
       0,   183,   185,     0,   122,    81,   114,     0,    91,    93,
     113,     0,    84,    86,    88,    90,     1,   184,     0,   130,
     128,   123,    82,     0,     0,   190,     0,     0,   189,   122,
     126,   112,   115,   129,   131,    92,    93,     0,     0,   147,
       0,     0,    27,    28,    29,    30,    31,    32,     5,     2,
       3,     4,     7,     6,     9,    21,    33,     0,    35,    39,
      42,    45,    50,    53,    55,    57,    59,    61,    63,    65,
     141,    94,   163,   187,   191,   122,   124,   123,   138,   137,
       0,     0,   132,   134,   127,     0,    25,    78,     0,   105,
     140,   107,     0,     0,     0,     0,     0,   146,     0,   149,
       0,    22,    23,     0,     0,     0,     0,    15,    16,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
       0,    33,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   170,     0,     0,     0,
     170,     0,     0,     5,   171,   167,   168,   153,   154,     0,
     164,   165,   155,     0,   156,   157,   158,     0,    28,   125,
       0,     0,   136,   121,   120,     0,     0,     0,     8,     0,
     104,   106,     0,    80,     0,   152,   142,   147,   144,   148,
     150,     0,     0,    11,     0,    19,    13,    14,    66,    36,
      37,    38,    40,    41,    43,    44,    46,    47,    48,    49,
      51,    52,    54,    56,    58,    60,    62,     0,   181,     0,
     180,   170,     0,   170,     0,     0,     0,     0,     0,   170,
     162,   166,   169,     0,   119,   116,     0,   133,   135,   139,
      26,    79,   147,    34,   151,   143,     0,     0,    10,    12,
       0,     0,   170,   161,     0,   170,     0,   179,     0,   182,
       0,     0,   159,   117,   118,     0,   145,    20,    64,   160,
       0,     0,   170,   170,   170,   170,    17,   147,     0,   170,
       0,   172,   174,   175,    18,     0,     0,   170,   170,   176,
     170,     0,   173,   178,   170,   177
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -203,  -203,  -203,  -203,  -203,   -38,  -203,   -73,    39,    47,
      29,    44,   132,   125,   133,   118,   129,  -203,  -111,   -43,
    -203,   -58,   127,   -23,    10,  -203,   237,  -203,   -27,   -69,
     143,  -203,    -8,   253,   -41,  -203,  -203,   252,   245,  -203,
    -203,   101,  -203,   -87,  -113,    36,  -202,  -203,  -203,   190,
    -117,  -203,   250,  -203,  -203,   130,  -203,  -149,  -203,  -203,
    -203,  -203,   287,  -203,  -203,  -203
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    73,    74,    75,   214,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,   107,
     140,   174,   204,    14,    46,    27,    28,    16,    17,   110,
      18,    19,    56,    30,    40,   190,   100,    31,    41,   101,
     102,   103,   104,   112,    91,   115,   116,   117,   118,   119,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,    20,    21,    22,    47,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     108,    90,   203,   208,   142,   266,    45,    29,    96,   198,
      15,    23,    23,    24,   268,    38,    92,   269,   197,   106,
      24,   246,   121,   122,   293,    94,    32,    33,    34,    35,
      15,   109,   294,   211,    23,    42,   206,   156,   295,   141,
     200,    25,   201,    24,   305,   296,    52,   108,    43,   242,
      44,   199,   203,   189,   187,   113,    26,    26,   199,   270,
      99,   114,   108,   146,   147,   212,   199,   148,   149,   175,
     219,   220,   221,    90,   199,   141,   207,   113,   109,    26,
     199,   215,   109,   114,   109,   297,   199,   271,    49,   209,
      50,   192,   157,   109,   276,   266,   158,   218,   154,   155,
     159,   199,   193,   237,   194,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,     2,   273,   141,   291,   195,   123,   263,
     124,     2,   282,     2,   125,   126,   127,   128,   196,     9,
     143,   160,   161,   300,   253,   144,   145,     9,   256,     9,
     306,    13,    95,   286,   191,   289,   261,   175,   311,    13,
     288,    13,   202,   113,   141,   113,   205,    39,   265,   114,
     304,   114,   150,   151,   152,   153,   301,   302,   303,   226,
     227,   228,   229,   216,    54,   222,   223,   278,   217,   280,
     281,   312,    39,   313,   238,   224,   225,   315,   230,   231,
     240,   111,     1,     2,   241,    99,   243,     3,   244,   245,
       4,   247,     5,   248,   249,   199,     6,     7,     8,     9,
     275,    10,   250,    90,    11,   252,   254,   287,   255,   259,
      12,    13,   298,   141,   260,   264,   267,   272,    39,   274,
      54,   283,   277,   284,   279,   262,   290,   292,   111,   308,
     299,   307,   111,   309,   111,   162,   163,     1,     2,   164,
     165,   166,     3,   111,   310,     4,   314,     5,   167,   168,
     169,     6,     7,     8,     9,   170,    10,   235,    57,    11,
      55,   171,   233,    98,    51,    12,    13,   172,   232,   236,
     239,   234,    53,    58,    97,    92,   258,    93,   285,    60,
      61,    62,    63,    64,    65,    66,    67,    37,   210,     0,
     251,   162,   163,     0,     0,   164,   165,   166,     0,     0,
       0,     0,     0,  -170,   167,   168,   169,     0,     0,     0,
       0,   170,     0,     0,    57,     0,     0,   171,   173,    69,
      70,    71,    72,   172,     0,     0,     0,     0,     0,    58,
       0,    92,     0,     0,     0,    60,    61,    62,    63,    64,
      65,    66,    67,     1,     2,     0,     0,     0,     3,     0,
       0,     4,     0,     5,     0,     0,     0,     6,     7,     8,
       9,     0,    10,     0,    57,    11,     0,     0,     0,     0,
       0,    12,    13,     0,   173,    69,    70,    71,    72,    58,
       0,     0,     0,     0,     0,    60,    61,    62,    63,    64,
      65,    66,    67,     1,     2,     0,     0,     0,     3,     0,
       0,     0,     0,     5,     0,     0,     0,     0,     7,     8,
       9,     0,    10,     0,    57,     0,     0,     0,     0,     0,
       0,    12,    13,     0,    68,    69,    70,    71,    72,    58,
       0,     0,     0,     0,     0,    60,    61,    62,    63,    64,
      65,    66,    67,     1,     2,     0,     0,     0,     3,     0,
       0,     4,     0,     5,     0,     0,     0,     6,     7,     8,
       9,     0,    10,     0,     0,    11,     0,     0,     0,     0,
       0,    12,    13,     0,    68,    69,    70,    71,    72,     1,
       2,  -188,     0,     0,     3,     0,     0,     4,     0,     5,
       0,     0,     0,     6,     7,     8,     9,    57,    10,     0,
       0,    11,     0,     0,     0,     0,     0,    12,    13,     0,
       0,    44,    58,    57,    59,     0,     0,     0,    60,    61,
      62,    63,    64,    65,    66,    67,     0,    57,    58,   213,
       0,     0,     0,     0,    60,    61,    62,    63,    64,    65,
      66,    67,    58,     0,   262,     0,   257,     0,    60,    61,
      62,    63,    64,    65,    66,    67,     0,    68,    69,    70,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,    68,    69,    70,    71,    72,     0,     0,
       0,     0,     0,     0,     0,    57,   105,    68,    69,    70,
      71,    72,    60,    61,    62,    63,    64,    65,    66,    67,
     120,    57,     0,     0,     0,     0,    60,    61,    62,    63,
      64,    65,    66,    67,     0,    57,    58,     0,     0,     0,
       0,     0,    60,    61,    62,    63,    64,    65,    66,    67,
      58,    68,    69,    70,    71,    72,    60,    61,    62,   188,
      64,    65,    66,    67,     0,    68,    69,    70,    71,    72,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,    36,     0,     0,    68,    69,    70,    71,    72,
       1,     2,     0,     0,     0,     3,     0,     0,     4,     0,
       5,     0,     0,     0,     6,     7,     8,     9,     0,    10,
       0,     0,    11,     0,     0,     1,     2,     0,    12,    13,
       3,     0,     0,     4,     0,     5,     0,     0,     0,     6,
       7,     8,     9,     0,    10,     1,     2,    11,     0,     0,
       3,     0,     0,    12,    13,     5,     0,     0,     0,     0,
       7,     8,     9,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13
};

static const yytype_int16 yycheck[] =
{
      58,    44,   113,   116,    77,   207,    29,    15,    49,    45,
       0,    44,    44,    53,    43,    23,    46,    45,   105,    57,
      53,   170,    60,    61,    45,    48,    16,    17,    18,    19,
      20,    58,    45,   120,    44,    74,    47,    52,    45,    77,
     109,    74,   111,    53,    45,    47,    45,   105,    87,   166,
      76,    87,   163,    96,    95,    42,    89,    89,    87,    87,
      50,    48,   120,    54,    55,   123,    87,    60,    61,    92,
     143,   144,   145,   116,    87,   113,    87,    42,   105,    89,
      87,   124,   109,    48,   111,    87,    87,    73,    42,    76,
      44,    99,    68,   120,   243,   297,    69,   140,    66,    67,
      70,    87,    45,   161,    45,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,     9,   241,   163,   275,    87,    42,   202,
      44,     9,   249,     9,    48,    49,    50,    51,    87,    25,
      53,    71,    72,   292,   187,    58,    59,    25,   191,    25,
     299,    37,    30,   266,    30,   272,   199,   180,   307,    37,
     271,    37,    45,    42,   202,    42,    89,    24,    47,    48,
      47,    48,    62,    63,    64,    65,   293,   294,   295,   150,
     151,   152,   153,    89,    41,   146,   147,   245,    89,   247,
     248,   308,    49,   310,    74,   148,   149,   314,   154,   155,
      74,    58,     8,     9,    73,   195,    44,    13,    89,    44,
      16,    44,    18,    44,    73,    87,    22,    23,    24,    25,
     243,    27,    47,   266,    30,    74,    43,   270,    43,    89,
      36,    37,   290,   271,    45,    43,    45,    73,    95,    38,
      97,    43,    74,    43,    74,    46,    44,    74,   105,    14,
      74,    74,   109,    74,   111,     6,     7,     8,     9,    10,
      11,    12,    13,   120,    45,    16,    45,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   159,    29,    30,
      43,    32,   157,    89,    31,    36,    37,    38,   156,   160,
     163,   158,    40,    44,    49,    46,   195,    47,   262,    50,
      51,    52,    53,    54,    55,    56,    57,    20,   118,    -1,
     180,     6,     7,    -1,    -1,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    74,    19,    20,    21,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    -1,    -1,    32,    89,    90,
      91,    92,    93,    38,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    -1,    29,    30,    -1,    -1,    -1,    -1,
      -1,    36,    37,    -1,    89,    90,    91,    92,    93,    44,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    23,    24,
      25,    -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    -1,    89,    90,    91,    92,    93,    44,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,     8,     9,    -1,    -1,    -1,    13,    -1,
      -1,    16,    -1,    18,    -1,    -1,    -1,    22,    23,    24,
      25,    -1,    27,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    36,    37,    -1,    89,    90,    91,    92,    93,     8,
       9,    46,    -1,    -1,    13,    -1,    -1,    16,    -1,    18,
      -1,    -1,    -1,    22,    23,    24,    25,    29,    27,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,
      -1,    76,    44,    29,    46,    -1,    -1,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    29,    44,    45,
      -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    44,    -1,    46,    -1,    75,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    89,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    89,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    44,    89,    90,    91,
      92,    93,    50,    51,    52,    53,    54,    55,    56,    57,
      44,    29,    -1,    -1,    -1,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    29,    44,    -1,    -1,    -1,
      -1,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      44,    89,    90,    91,    92,    93,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    89,    90,    91,    92,    93,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,     0,    -1,    -1,    89,    90,    91,    92,    93,
       8,     9,    -1,    -1,    -1,    13,    -1,    -1,    16,    -1,
      18,    -1,    -1,    -1,    22,    23,    24,    25,    -1,    27,
      -1,    -1,    30,    -1,    -1,     8,     9,    -1,    36,    37,
      13,    -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    22,
      23,    24,    25,    -1,    27,     8,     9,    30,    -1,    -1,
      13,    -1,    -1,    36,    37,    18,    -1,    -1,    -1,    -1,
      23,    24,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,     9,    13,    16,    18,    22,    23,    24,    25,
      27,    30,    36,    37,   118,   119,   122,   123,   125,   126,
     156,   157,   158,    44,    53,    74,    89,   120,   121,   127,
     128,   132,   119,   119,   119,   119,     0,   157,   127,   125,
     129,   133,    74,    87,    76,   118,   119,   159,   160,    42,
      44,   128,    45,   132,   125,   121,   127,    29,    44,    46,
      50,    51,    52,    53,    54,    55,    56,    57,    89,    90,
      91,    92,    93,    96,    97,    98,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   139,    46,   147,   118,    30,   129,   133,    89,   119,
     131,   134,   135,   136,   137,    44,   100,   114,   116,   123,
     124,   125,   138,    42,    48,   140,   141,   142,   143,   144,
      44,   100,   100,    42,    44,    48,    49,    50,    51,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
     115,   100,   102,    53,    58,    59,    54,    55,    60,    61,
      62,    63,    64,    65,    66,    67,    52,    68,    69,    70,
      71,    72,     6,     7,    10,    11,    12,    19,    20,    21,
      26,    32,    38,    89,   116,   118,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   129,    53,   114,
     130,    30,   127,    45,    45,    87,    87,   138,    45,    87,
     124,   124,    45,   113,   117,    89,    47,    87,   139,    76,
     144,   138,   116,    45,    99,   114,    89,    89,   114,   102,
     102,   102,   103,   103,   104,   104,   105,   105,   105,   105,
     106,   106,   107,   108,   109,   110,   111,   116,    74,   117,
      74,    73,   145,    44,    89,    44,   152,    44,    44,    73,
      47,   150,    74,   114,    43,    43,   114,    75,   136,    89,
      45,   114,    46,   102,    43,    47,   141,    45,    43,    45,
      87,    73,    73,   145,    38,   118,   152,    74,   116,    74,
     116,   116,   145,    43,    43,   140,   139,   114,   113,   145,
      44,   152,    74,    45,    45,    45,    47,    87,   116,    74,
     152,   145,   145,   145,    47,    45,   152,    74,    14,    74,
      45,   152,   145,   145,    45,   145
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    96,    96,    97,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    99,
      99,   100,   100,   100,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   102,   102,   103,   103,   103,   103,   104,
     104,   104,   105,   105,   105,   106,   106,   106,   106,   106,
     107,   107,   107,   108,   108,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   113,   114,   114,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   116,   116,
     117,   118,   118,   119,   119,   119,   119,   119,   119,   119,
     119,   120,   120,   121,   121,   122,   122,   123,   123,   123,
     123,   123,   123,   123,   124,   124,   124,   124,   125,   125,
     125,   126,   127,   127,   128,   128,   128,   128,   128,   128,
     128,   128,   129,   129,   130,   130,   131,   131,   132,   132,
     133,   133,   134,   134,   135,   135,   136,   136,   137,   137,
     138,   139,   139,   139,   140,   140,   141,   141,   142,   143,
     143,   144,   144,   145,   145,   145,   145,   145,   145,   146,
     146,   146,   147,   148,   148,   149,   149,   150,   150,   151,
     152,   152,   153,   153,   153,   154,   154,   154,   154,   155,
     155,   155,   155,   156,   156,   157,   157,   158,   159,   159,
     160,   160
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     2,     1,     1,     3,     5,     6,     6,     5,
       4,     4,     0,     1,     0,     1,     0,     1,     2,     3,
       1,     2,     1,     3,     1,     3,     2,     1,     1,     3,
       1,     1,     3,     4,     2,     4,     1,     0,     2,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     3,     0,     1,     1,     2,     1,     1,     2,
       0,     1,     5,     7,     5,     5,     7,     9,     8,     3,
       2,     2,     3,     1,     2,     1,     1,     4,     0,     1,
       1,     2
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
  case 8:
#line 139 "asgn4_18CS10042.y"
                                                                                                                { printf("PRIMARY_EXPRESSION\n");}
#line 1854 "y.tab.c"
    break;

  case 18:
#line 143 "asgn4_18CS10042.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        {printf("POSTFIX_EXPRESSION\n");}
#line 1860 "y.tab.c"
    break;

  case 20:
#line 147 "asgn4_18CS10042.y"
                                                                                                        { printf("ARGUMENT_EXPRESSION_LIST\n");}
#line 1866 "y.tab.c"
    break;

  case 26:
#line 151 "asgn4_18CS10042.y"
                                                                                                                                                                                                                     {printf("UNARY_EXPRESSION\n");}
#line 1872 "y.tab.c"
    break;

  case 32:
#line 155 "asgn4_18CS10042.y"
                                                                     {printf("UNARY_OPERATOR\n");}
#line 1878 "y.tab.c"
    break;

  case 34:
#line 159 "asgn4_18CS10042.y"
                                                                                                      {printf("CAST_EXPRESSION\n");}
#line 1884 "y.tab.c"
    break;

  case 38:
#line 163 "asgn4_18CS10042.y"
                                                                                                                                                                                            {printf("MULTIPLICATIVE_EXPRESSION\n");}
#line 1890 "y.tab.c"
    break;

  case 41:
#line 167 "asgn4_18CS10042.y"
                                                                                                                                                           {printf("ADDITIVE_EXPRESSION\n");}
#line 1896 "y.tab.c"
    break;

  case 44:
#line 171 "asgn4_18CS10042.y"
                                                                                                                                            {printf("SHIFT_EXPRESSION\n");}
#line 1902 "y.tab.c"
    break;

  case 49:
#line 175 "asgn4_18CS10042.y"
                                                                                                                                                                                                                                                             {printf("RELATIONAL_EXPRESSION\n");}
#line 1908 "y.tab.c"
    break;

  case 52:
#line 179 "asgn4_18CS10042.y"
                                                                                                                                                    {printf("EQUALITY_EXPRESSION\n");}
#line 1914 "y.tab.c"
    break;

  case 54:
#line 183 "asgn4_18CS10042.y"
                                                                                      {printf("AND_EXPRESSION\n");}
#line 1920 "y.tab.c"
    break;

  case 56:
#line 187 "asgn4_18CS10042.y"
                                                                                              {printf("EXCLUSIVE_OR_EXPRESSION \n");}
#line 1926 "y.tab.c"
    break;

  case 58:
#line 191 "asgn4_18CS10042.y"
                                                                                                               {printf("INCLUSIVE_OR_EXPRESSION\n");}
#line 1932 "y.tab.c"
    break;

  case 60:
#line 195 "asgn4_18CS10042.y"
                                                                                                      {printf("LOGICAL_AND_EXPRESSION\n");}
#line 1938 "y.tab.c"
    break;

  case 62:
#line 199 "asgn4_18CS10042.y"
                                                                                                 {printf("LOGICAL_OR_EXPRESSION \n");}
#line 1944 "y.tab.c"
    break;

  case 64:
#line 203 "asgn4_18CS10042.y"
                                                                                                                        {printf("CONDITIONAL_EXPRESSION\n");}
#line 1950 "y.tab.c"
    break;

  case 66:
#line 207 "asgn4_18CS10042.y"
                                                                                                            {printf("ASSIGNMENT_EXPRESSION\n");}
#line 1956 "y.tab.c"
    break;

  case 77:
#line 211 "asgn4_18CS10042.y"
                                                                                                                                                                                              {printf("ASSIGNMENT_OPERATOR\n");}
#line 1962 "y.tab.c"
    break;

  case 79:
#line 215 "asgn4_18CS10042.y"
                                                                            {printf("EXPRESSION\n");}
#line 1968 "y.tab.c"
    break;

  case 80:
#line 219 "asgn4_18CS10042.y"
                                             {printf("CONSTANT_EXPRESSION\n");}
#line 1974 "y.tab.c"
    break;

  case 82:
#line 227 "asgn4_18CS10042.y"
                                                                                                       {printf("DECLARATION\n");}
#line 1980 "y.tab.c"
    break;

  case 90:
#line 231 "asgn4_18CS10042.y"
                                                                                                                                                                                                                                                                                      {printf("DECLARATION_SPECIFIERS\n");}
#line 1986 "y.tab.c"
    break;

  case 92:
#line 235 "asgn4_18CS10042.y"
                                                                                    {printf("INIT_DECLARATOR_LIST\n");}
#line 1992 "y.tab.c"
    break;

  case 94:
#line 239 "asgn4_18CS10042.y"
                                                             {printf("INIT_DECLARATOR\n");}
#line 1998 "y.tab.c"
    break;

  case 96:
#line 243 "asgn4_18CS10042.y"
                                          {printf("STORAGE_CLASS_SPECIFIER\n");}
#line 2004 "y.tab.c"
    break;

  case 103:
#line 247 "asgn4_18CS10042.y"
                                                                   {printf("TYPE_SPECIFIER\n");}
#line 2010 "y.tab.c"
    break;

  case 107:
#line 251 "asgn4_18CS10042.y"
                                                                                                                                               {printf("SPECIFIER_QUALIFIER_LIST\n");}
#line 2016 "y.tab.c"
    break;

  case 110:
#line 255 "asgn4_18CS10042.y"
                                             {printf("TYPE_QUAIFIER \n");}
#line 2022 "y.tab.c"
    break;

  case 111:
#line 259 "asgn4_18CS10042.y"
                            {printf("FUNCTION_SPECIFIER\n");}
#line 2028 "y.tab.c"
    break;

  case 113:
#line 263 "asgn4_18CS10042.y"
                                                           {printf("DECLARATOR\n");}
#line 2034 "y.tab.c"
    break;

  case 121:
#line 267 "asgn4_18CS10042.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          {printf("DIRECT_DECLARATOR\n");}
#line 2040 "y.tab.c"
    break;

  case 129:
#line 277 "asgn4_18CS10042.y"
                                                                            {printf("POINTER\n");}
#line 2046 "y.tab.c"
    break;

  case 131:
#line 281 "asgn4_18CS10042.y"
                                                                          {printf("TYPE_QUALIFIER_LIST\n");}
#line 2052 "y.tab.c"
    break;

  case 133:
#line 285 "asgn4_18CS10042.y"
                                                                     {printf("PARAMETER_TYPE_LIST\n");}
#line 2058 "y.tab.c"
    break;

  case 135:
#line 289 "asgn4_18CS10042.y"
                                                                                    {printf("PARAMETER_LIST\n");}
#line 2064 "y.tab.c"
    break;

  case 137:
#line 293 "asgn4_18CS10042.y"
                                                                                   {printf("PARAMETER_DECLARATION\n");}
#line 2070 "y.tab.c"
    break;

  case 139:
#line 297 "asgn4_18CS10042.y"
                                                               {printf("IDENTIFIER_LIST\n");}
#line 2076 "y.tab.c"
    break;

  case 140:
#line 301 "asgn4_18CS10042.y"
                                     {printf("TYPE_NAME\n");}
#line 2082 "y.tab.c"
    break;

  case 143:
#line 305 "asgn4_18CS10042.y"
                                                                                                                                                              {printf("INITIALIZER\n");}
#line 2088 "y.tab.c"
    break;

  case 145:
#line 309 "asgn4_18CS10042.y"
                                                                                                    {printf("INITIALIZER_LIST\n");}
#line 2094 "y.tab.c"
    break;

  case 148:
#line 315 "asgn4_18CS10042.y"
                                     {printf("DESIGNATION\n");}
#line 2100 "y.tab.c"
    break;

  case 150:
#line 319 "asgn4_18CS10042.y"
                                                          {printf("DESIGNATOR_LIST\n");}
#line 2106 "y.tab.c"
    break;

  case 152:
#line 323 "asgn4_18CS10042.y"
                                                                                           {printf("DESIGNATOR\n");}
#line 2112 "y.tab.c"
    break;

  case 158:
#line 331 "asgn4_18CS10042.y"
                                                                                                                                       {printf("STATEMENT\n");}
#line 2118 "y.tab.c"
    break;

  case 161:
#line 335 "asgn4_18CS10042.y"
                                                                                                                    {printf("LABELED_STATMENT\n");}
#line 2124 "y.tab.c"
    break;

  case 162:
#line 339 "asgn4_18CS10042.y"
                                                                                {printf("COMPOUND_STATEMENT\n");}
#line 2130 "y.tab.c"
    break;

  case 166:
#line 345 "asgn4_18CS10042.y"
                                                          {printf("BLOCK_ITEM_LIST\n");}
#line 2136 "y.tab.c"
    break;

  case 168:
#line 349 "asgn4_18CS10042.y"
                                     {printf("BLOCK_ITEM\n");}
#line 2142 "y.tab.c"
    break;

  case 169:
#line 353 "asgn4_18CS10042.y"
                                                {printf("EXPRESSION_STATEMENT\n");}
#line 2148 "y.tab.c"
    break;

  case 174:
#line 360 "asgn4_18CS10042.y"
                                                                                                                                                     {printf("SELECTION_STATEMENT\n");}
#line 2154 "y.tab.c"
    break;

  case 178:
#line 364 "asgn4_18CS10042.y"
                                                                                                                                                                                                                                                                                                                                                                                                            {printf("ITERATION_STATEMENT\n");}
#line 2160 "y.tab.c"
    break;

  case 182:
#line 368 "asgn4_18CS10042.y"
                                                                                                                    {printf("JUMP_STATEMENT\n");}
#line 2166 "y.tab.c"
    break;

  case 184:
#line 376 "asgn4_18CS10042.y"
                                                                                {printf("TRANSLATION_UNIT\n");}
#line 2172 "y.tab.c"
    break;

  case 186:
#line 380 "asgn4_18CS10042.y"
                                                         {printf("EXTERNAL_DECLARATION\n");}
#line 2178 "y.tab.c"
    break;

  case 187:
#line 384 "asgn4_18CS10042.y"
                                                                                                {printf("FUNCTION_DEFINITION\n");}
#line 2184 "y.tab.c"
    break;

  case 191:
#line 390 "asgn4_18CS10042.y"
                                                              {printf("DECLARATION_LIST\n");}
#line 2190 "y.tab.c"
    break;


#line 2194 "y.tab.c"

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
#line 394 "asgn4_18CS10042.y"




void yyerror(char *ERRORS) {

	printf ("ERROR : %s\n",ERRORS);

}
