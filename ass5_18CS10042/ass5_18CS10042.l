%{
#include "ass5_18CS10042_translator.h"
#include<cstring>
#include "y.tab.h"
extern void yyerror(const char *);
%}

%option noyywrap

/* KEYWORDS */
BREAK		"break"
ENUM		"enum"
CASE		"case"
CHAR		"char"
CONST		"const"
CONTINUE	"continue"
DEFAULT		"default"
DO			"do"
ELSE		"else"
RESTRICT	"restrict"
DOUBLE		"double"
EXTERN		"extern"
VOLATILE	"volatile"
FOR			"for"
WHILE		"while"
GOTO		"goto"
SIZEOF		"sizeof"
IF			"if"
RETURN		"return"
_BOOL		"_Bool"
VOID		"void"
FLOAT		"float"
SHORT		"short"
STATIC		"static"
INLINE		"inline"
STRUCT		"struct"
INT			"int"
SWITCH		"switch"
LONG		"long"
TYPEDEF		"typedef"
UNION		"union"

/* IDENTIFIERS */
DIGIT						[0-9]
IDENTIFIER_NONDIGIT			[a-zA-Z_]+
IDENTIFIER 					{IDENTIFIER_NONDIGIT}({IDENTIFIER_NONDIGIT}|{DIGIT})*

/* PUNCTUATORS */
PUNCTUATOR_A				"["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"
PUNCTUATOR_B				"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"
PUNCTUATOR_C				"?"|":"|";"|"..."|","|"#"|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="	
PUNCTUATOR 	    			{PUNCTUATOR_A}|{PUNCTUATOR_B}|{PUNCTUATOR_C}

/* CONSTANTS */

DIGIT_SEQUENCE				[0-9]DIGIT
NONZERO_DIGIT				[1-9]
NONZERO_INT_CONST 			{NONZERO_DIGIT}({NONZERO_DIGIT}|{DIGIT})*
INTEGER_CONSTANT			{NONZERO_INT_CONST}|"0"
FLOATING_CONSTANT			({FRACTIONAL_PART}{EXPONENT_PART}?)|({DIGIT_SEQUENCE}{EXPONENT_PART})
SIGN 						"+"|"-"
EXPONENT_PART				("e"{SIGN}?{DIGIT_SEQUENCE})|("E"{SIGN}?{DIGIT_SEQUENCE})
FRACTIONAL_PART	    		({DIGIT_SEQUENCE}?"."{DIGIT_SEQUENCE})|({DIGIT_SEQUENCE}".")
ENUMERATION_CONSTANT 		{IDENTIFIER}

C_CHAR 						{ESCAPE_SEQUENCE}|[^("\'"|"\\"|"\n")]
C_CHAR_SEQUENCE				{C_CHAR}+
CHARACTER_CONSTANT			'(\\[vrnafbt\\]|[^\\'])'
ESCAPE_SEQUENCE				"\'"|"\""|"\?"|"\\"|"\a"|"\b"|"\f"|"\n"|"\r"|"\t"|"\v"


CONSTANT 					{INTEGER_CONSTANT}|{FLOATING_CONSTANT}|{CHARACTER_CONSTANT}


/*STRING_LITERALS*/
S_CHAR  					{ESCAPE_SEQUENCE}|[^("\""|"\\"|"\n")]
S_CHAR_SEQUENCE				{S_CHAR}+
STRING_LITERAL 				\"([^\\\"]|\\.)*\"

/*COMMENTS*/
SINGLE_COMMENT [/][/].*
MULTI_END [\*]+[/]
MULTI_START [/][\*]+
NON_STAR (([^\*]).*)
NON_FS ([^/].*)
AVOID_MULTI_END (NON_STAR|([\*]{NON_FS}))
MULTI_COMMENT ({MULTI_START}(([^\*])|((\*)+[^/\*]))*{MULTI_END})
COMMENT {SINGLE_COMMENT}|{MULTI_COMMENT}


/* WHITESPACE */
WS 			[ \t\n]

%%

{RESTRICT}	    { return RESTRICT; }
{BREAK}		    { return BREAK; }
{EXTERN}	    { return EXTERN; }
{RETURN}	    { return RETURN; }
{VOID}	     	{ return VOID; }
{CASE}	     	{ return CASE; }
{FLOAT}	       	{ return FLOAT; }
{SHORT}		    { return SHORT; }
{VOLATILE}	    { return VOLATILE; }
{CHAR}		    { return CHAR; }
{FOR}		    { return FOR; }
{WHILE}		    { return WHILE; }
{ENUM}		    { return ENUM; }
{CONST}		    { return CONST; }
{GOTO}		    { return GOTO; }
{SIZEOF}	    { return SIZEOF; }
{_BOOL}		    { return _BOOL; }
{CONTINUE}	    { return CONTINUE; }
{IF}		    { return IF; }
{STATIC}		{ return STATIC; }
{DEFAULT}		{ return DEFAULT; }
{INLINE}		{ return INLINE; }
{STRUCT}		{ return STRUCT; }
{DO}	       	{ return DO; }
{INT}		    { return INT; }
{SWITCH}    	{ return SWITCH; }
{DOUBLE}    	{ return DOUBLE; }
{LONG}		    { return LONG; }
{TYPEDEF}	    { return TYPEDEF; }
{ELSE}	     	{ return ELSE; }
{UNION}		    { return UNION; }

{IDENTIFIER}		              { yylval.Idl.name = new string(yytext); return IDENTIFIER; }
{STRING_LITERAL} 		          { return STRING_LITERAL; }
{CHARACTER_CONSTANT}              { yylval.charval = yytext[1]; return CHARACTER_CONSTANT; }
{INTEGER_CONSTANT}		          { yylval.intval = atoi(yytext); return INTEGER_CONSTANT; }
{FLOATING_CONSTANT}		          { yylval.floatval = atof(yytext); return FLOATING_CONSTANT; }
{PUNCTUATOR} {
	if(strcmp(yytext,"++") == 0) return INC;
	if(strcmp(yytext,"--") == 0) return DEC;
	if(strcmp(yytext,"&") == 0) return AMP;
	if(strcmp(yytext,"*") == 0) return MUL;
	if(strcmp(yytext,"+") == 0) return ADD;
	if(strcmp(yytext,"-") == 0) return SUB;
	if(strcmp(yytext,"~") == 0) return NEG;
	if(strcmp(yytext,"!") == 0) return EXCLAIMATION;
	if(strcmp(yytext,"|") == 0) return BITOR;
	if(strcmp(yytext,"?") == 0) return QUESTION;
	if(strcmp(yytext,":") == 0) return COLON;
	if(strcmp(yytext,";") == 0) return SEMICOLON;
	if(strcmp(yytext,"...") == 0) return DOTS;
	if(strcmp(yytext,"=") == 0) return ASSIGN;
	if(strcmp(yytext,"*=") == 0) return STAR_EQ;
	if(strcmp(yytext,"/=") == 0) return DIV_EQ;
	if(strcmp(yytext,"%=") == 0) return MOD_EQ;
	if(strcmp(yytext,"+=") == 0) return PLUS_EQ;
	if(strcmp(yytext,"-=") == 0) return MINUS_EQ;
	if(strcmp(yytext,"<<=") == 0) return SHIFT_LEQ;
	if(strcmp(yytext,"/") == 0) return DIV;
	if(strcmp(yytext,"%") == 0) return MODULO;
	if(strcmp(yytext,"<<") == 0) return SHIFT_L;
	if(strcmp(yytext,">>=") == 0) return SHIFT_REQ;
	if(strcmp(yytext,"&=") == 0) return BIN_AND_EQ;
	if(strcmp(yytext,"^=") == 0) return BIN_XOR_EQ;
	if(strcmp(yytext,"!=") == 0) return NEQ;
	if(strcmp(yytext,"^")==0)return BITXOR;
	if(strcmp(yytext,"&&") == 0) return AND;
	if(strcmp(yytext,"||") == 0) return OR;
	if(strcmp(yytext,">") == 0) return BIT_SHIFT_R;
	if(strcmp(yytext,"<=") == 0) return LTE;
	if(strcmp(yytext,">=") == 0) return GTE;
	if(strcmp(yytext,"==") == 0) return EQ;
	if(strcmp(yytext,"|=") == 0) return BIN_OR_EQ;
	if(strcmp(yytext,",") == 0) return COMMA;
	if(strcmp(yytext,"#") == 0) return HASH;
	if(strcmp(yytext,"<<=") == 0) return SHIFT_LEQ;
	if(strcmp(yytext,">>=") == 0) return SHIFT_REQ;
	if(strcmp(yytext,"&=") == 0) return BIN_AND_EQ;
	if(strcmp(yytext,"[") == 0) return SQ_BRACKET_OP;
	if(strcmp(yytext,"]") == 0) return SQ_BRACKET_CL;
	if(strcmp(yytext,"(") == 0) return RO_BRACKET_OP;
	if(strcmp(yytext,")") == 0) return RO_BRACKET_CL;
	if(strcmp(yytext,"{") == 0) return CUR_BRACKET_OP;
	if(strcmp(yytext,"}") == 0) return CUR_BRACKET_CL;
	if(strcmp(yytext,".") == 0) return DOT;
	if(strcmp(yytext,"->") == 0) return ACC;
	if(strcmp(yytext,">>") == 0) return SHIFT_R;
	if(strcmp(yytext,"<") == 0) return BIT_SHIFT_L;
}

{COMMENT}	{}

{WS}		{}
%%
