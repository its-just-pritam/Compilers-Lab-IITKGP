/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 249 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
