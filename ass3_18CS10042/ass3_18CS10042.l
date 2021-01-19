/*PRITAM MALLICK*/
/*18CS10042*/

%{
	#include <stdio.h>
	#include <string.h>
%}

%{
	
	#define BREAK	 						1
	#define CASE							2
	#define CHAR 							3
	#define CONTINUE 						4
	#define DEFAULT 						5
	#define DO 								6
	#define DOUBLE 							7
	#define ELSE 							8
	#define EXTERN 							9
	#define FLOAT 							10
	#define FOR 							11
	#define GOTO 							12
	#define IF 								13
	#define INT								14
	#define LONG 							15
	#define RETURN 							16	
	#define SHORT 							17
	#define SIZEOF 							18
	#define STATIC							19
	#define STRUCT 							20
	#define SWITCH 							21
	#define TYPEDEF 						22
	#define UNION 							23
	#define VOID 							24
	#define WHILE 							25

	#define IDENTIFIER 						26

	#define INTEGER_CONSTANT 				27
	#define FLOATING_CONSTANT 				28
	#define CHARACTER_CONSTANT 				29
	#define STRING_LITERAL 					30

	#define SQUARE_BRACKET_OPEN 			31
	#define SQUARE_BRACKET_CLOSE 			32
	#define ROUND_BRACKET_OPEN 				33
	#define ROUND_BRACKET_CLOSE 			34
	#define CURLY_BRACKET_OPEN 				35
	#define CURLY_BRACKET_CLOSE 			36
	#define DOT 							37
	#define IMPLIES 						38
	#define INCREMENT 						39
	#define DECREMENT 						40
	#define BITWISE_AND						41
	#define MUL 							42
	#define ADD 							43
	#define SUB 							44
	#define BITWISE_NOT						45
	#define NOT 							46
	#define DIV 							47
	#define MOD 							48
	#define SHIFT_LEFT 						49
	#define SHIFT_RIGHT 					50
	#define LT	 							51
	#define GT								100
	#define LTE 							52
	#define GTE 							53
	#define EQ 								54
	#define NEQ 							55
	#define BITWISE_XOR 					56
	#define BITWISE_OR 						57
	#define AND 							58
	#define OR 								59
	#define QUESTION 						60
	#define COLON 							61
	#define SEMICOLON 						62
	#define DOTS 							63
	#define ASSIGN 							64
	#define STAR_EQ 						65
	#define DIV_EQ 							66
	#define MOD_EQ 							67
	#define ADD_EQ 							68
	#define SUB_EQ 							69
	#define LT_EQ 							70
	#define GT_EQ 							71
	#define BITWISE_AND_EQ 					72
	#define BITWISE_XOR_EQ 					73
	#define BITWISE_OR_EQ 					74
	#define COMMA 							75
	#define HASH 							76

	#define SINGLE_LINE_COMMENT				77
	#define MULTI_LINE_COMMENT	 			78
	#define CONST 							79
	#define _BOOL 							80
	#define INLINE 							81
	#define	PREPROCESSOR					82
	#define	HEADER							83


%}

PREPROCESSOR								"#""include"

KEYWORD										"auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"inline"|"int"|"long"|"register"|"restrict"|"return"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typedef"|"union"|"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"

DIGIT										[0-9]
ID_ND 										[a-zA-Z]|"_"
ID 											{ID_ND}({ID_ND}|{DIGIT})*
HEADER										{ID}".h"

NONZERO_DIGIT								[1-9]
NONZERO_INT_CONSTANT						{NONZERO_DIGIT}({NONZERO_DIGIT}|{DIGIT})*
INT_CONSTANT								{NONZERO_INT_CONSTANT}|"0"

DIGIT_SEQUENCE								{DIGIT}({DIGIT})*
FRAC_CONST									(({DIGIT}+)?\.{DIGIT}+)|(({DIGIT}+)\.)
EXP											([Ee][+-]?{DIGIT}+)
FLOAT_CONSTANT								({FRAC_CONST}{EXP}?)|({DIGIT}+{EXP})
SIGN 										"+"|"-"

C_CHAR 										[^("\'"|"\\"|"\n")]
C_CHAR_SEQUENCE								{C_CHAR}+
CHAR_CONSTANT								"\'"{C_CHAR_SEQUENCE}"\'"

CONSTANT									{INT_CONSTANT}|{FLOAT_CONSTANT}|{ENUM_CONSTANT}|{CHAR_CONSTANT}

S_CHAR  									[^("\""|"\\"|"\n")]
S_CHAR_SEQUENCE								{S_CHAR}+
STRING_LITERAL 								"\""{S_CHAR_SEQUENCE}?"\""

PUNCTUATOR 									"["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"|";"
WS  										[ \t\v\n\f]


%%

{PREPROCESSOR}				{return PREPROCESSOR;}

{HEADER}					{return HEADER;}

{KEYWORD}			{

						if(strcmp(yytext,"break") == 0 )	return BREAK;
						if(strcmp(yytext,"case") == 0 )	return CASE;
						if(strcmp(yytext,"char") == 0 ) return CHAR;
						if(strcmp(yytext,"continue") == 0 ) return CONTINUE;
						if(strcmp(yytext,"default") == 0 ) return DEFAULT;
						if(strcmp(yytext,"do") == 0 ) return DO;
						if(strcmp(yytext,"double") == 0 ) return DOUBLE;
						if(strcmp(yytext,"else") == 0 ) return ELSE;
						if(strcmp(yytext,"extern") == 0 ) return EXTERN;
						if(strcmp(yytext,"float") == 0 )	return FLOAT;
						if(strcmp(yytext,"for") == 0 ) return FOR;
						if(strcmp(yytext,"goto") == 0 ) return GOTO;
						if(strcmp(yytext,"struct") == 0 ) return STRUCT;
						if(strcmp(yytext,"return") == 0 ) return RETURN;
						if(strcmp(yytext,"while") == 0 )	return WHILE;
						if(strcmp(yytext,"sizeof") == 0 ) return SIZEOF;
						if(strcmp(yytext,"_Bool") == 0 )	return _BOOL;
						if(strcmp(yytext,"if") == 0 ) return IF;
						if(strcmp(yytext,"static") == 0 ) return STATIC;
						if(strcmp(yytext,"inline") == 0 ) return INLINE;
						if(strcmp(yytext,"int") == 0 ) return INT;
						if(strcmp(yytext,"switch") == 0 ) return SWITCH;
						if(strcmp(yytext,"long") == 0 ) return LONG;
						if(strcmp(yytext,"typedef") == 0 ) return TYPEDEF;
						if(strcmp(yytext,"union") == 0 )	return UNION;

					}


{ID}					{return IDENTIFIER;}

{INT_CONSTANT}			{return INTEGER_CONSTANT;}

{FLOAT_CONSTANT}		{return FLOATING_CONSTANT;}

{CHAR_CONSTANT} 		{return CHARACTER_CONSTANT;}

{STRING_LITERAL} 		{return STRING_LITERAL;}

{PUNCTUATOR}		{

						if(strcmp(yytext,"[") == 0) return SQUARE_BRACKET_OPEN;
						if(strcmp(yytext,"]") == 0) return SQUARE_BRACKET_CLOSE;
						if(strcmp(yytext,"(") == 0) return ROUND_BRACKET_OPEN;
						if(strcmp(yytext,")") == 0) return ROUND_BRACKET_CLOSE;
						if(strcmp(yytext,"{") == 0) return CURLY_BRACKET_OPEN;
						if(strcmp(yytext,"}") == 0) return CURLY_BRACKET_CLOSE;
						if(strcmp(yytext,".") == 0) return DOT;
						if(strcmp(yytext,"->") == 0) return IMPLIES;
						if(strcmp(yytext,"++") == 0) return INCREMENT;
						if(strcmp(yytext,"--") == 0) return DECREMENT;
						if(strcmp(yytext,"&") == 0) return BITWISE_AND;
						if(strcmp(yytext,"*") == 0) return MUL;
						if(strcmp(yytext,"+") == 0) return ADD;
						if(strcmp(yytext,"-") == 0) return SUB;
						if(strcmp(yytext,"~") == 0) return BITWISE_NOT;
						if(strcmp(yytext,"!") == 0) return NOT;
						if(strcmp(yytext,"/") == 0) return DIV;
						if(strcmp(yytext,"%") == 0) return MOD;
						if(strcmp(yytext,"<<") == 0) return SHIFT_LEFT;
						if(strcmp(yytext,">>") == 0) return SHIFT_RIGHT;
						if(strcmp(yytext,"<") == 0) return LT;
						if(strcmp(yytext,">") == 0) return GT;
						if(strcmp(yytext,"<=") == 0) return LTE;
						if(strcmp(yytext,">=") == 0) return GTE;
						if(strcmp(yytext,"==") == 0) return EQ;
						if(strcmp(yytext,"!=") == 0) return NEQ;
						if(strcmp(yytext,"^") == 0) return BITWISE_XOR;
						if(strcmp(yytext,"|") == 0) return BITWISE_OR;
						if(strcmp(yytext,"&&") == 0) return AND;
						if(strcmp(yytext,"||") == 0) return OR;
						if(strcmp(yytext,"?") == 0) return QUESTION;
						if(strcmp(yytext,":") == 0) return COLON;
						if(strcmp(yytext,";") == 0) return SEMICOLON;
						if(strcmp(yytext,"...") == 0) return DOTS;
						if(strcmp(yytext,"=") == 0) return ASSIGN;
						if(strcmp(yytext,"*=") == 0) return STAR_EQ;
						if(strcmp(yytext,"/=") == 0) return DIV_EQ;
						if(strcmp(yytext,"%=") == 0) return MOD_EQ;
						if(strcmp(yytext,"+=") == 0) return ADD_EQ;
						if(strcmp(yytext,"-=") == 0) return SUB_EQ;
						if(strcmp(yytext,"<<=") == 0) return GT_EQ;
						if(strcmp(yytext,">>=") == 0) return LT_EQ;
						if(strcmp(yytext,"&=") == 0) return BITWISE_AND_EQ;
						if(strcmp(yytext,"^=") == 0) return BITWISE_XOR_EQ;
						if(strcmp(yytext,"|=") == 0) return BITWISE_OR_EQ;
						if(strcmp(yytext,",") == 0) return COMMA;
						if(strcmp(yytext,"#") == 0) return HASH;

					}

	{WS}			{ /* whitespace separates tokens */ }

%%