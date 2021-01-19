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
	

#line 265 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
