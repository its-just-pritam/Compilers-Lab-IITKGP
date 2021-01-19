%{ 
	#include <string.h>
	#include <stdio.h>
	extern int yylex();
	void yyerror(char *ERRORS);
%}


%union
{
	int INTVAL;
}

/*_______ COMMENTS ________*/

%token SINGLE_COMMENT
%token MULTILINE_COMMENT

/*_______ KEYWORDS ________*/

%token AUTO
%token BREAK
%token CASE
%token CHAR
%token CONST
%token CONTINUE
%token DEFAULT
%token DO
%token DOUBLE
%token ELSE
%token ENUM
%token EXTERN
%token REGISTER
%token FLOAT
%token FOR
%token GOTO
%token IF
%token INLINE
%token INT
%token LONG
%token RESTRICT
%token RETURN
%token SHORT
%token SIGNED
%token SIZEOF
%token STATIC
%token STRUCT
%token SWITCH
%token TYPEDEF
%token UNION
%token UNSIGNED
%token VOID
%token VOLATILE
%token WHILE
%token BOOL
%token COMPLEX
%token IMAGINARY

/*_______ PUNCTUATORS AND OPERATORS ________*/

%token SQUARE_BRACKET_OPEN
%token SQUARE_BRACKET_CLOSE
%token ROUND_BRACKET_OPEN
%token ROUND_BRACKET_CLOSE
%token CURLY_BRACKET_OPEN
%token CURLY_BRACKET_CLOSE
%token DOT
%token IMPLIES
%token INCREMENT
%token DECREMENT
%token BITWISE_AND
%token MUL
%token PLUS
%token MINUS
%token BITWISE_NOT
%token NOT
%token DIV
%token MOD
%token LEFT_SHIFT
%token RIGHT_SHIFT
%token LESS_THAN
%token GREATER_THAN
%token LESS_EQUAL
%token GREATER_EQUAL
%token EQUAL
%token NOT_EQUAL
%token BITWISE_XOR
%token BITWISE_OR
%token AND
%token OR
%token QUESTION
%token COLON
%token SEMICOLON
%token ELLIPSIS
%token ASSIGN
%token MUL_EQUAL
%token DIV_EQUAL
%token MOD_EQUAL
%token PLUS_EQUAL
%token MINUS_EQUAL
%token SHIFT_LEFT_EQUAL
%token SHIFT_RIGHT_EQUAL
%token BITWISE_AND_EQUAL
%token BITWISE_XOR_EQUAL
%token BITWISE_OR_EQUAL
%token COMMA
%token HASH

/*_______ IDENTIFIER ________*/

%token IDENTIFIER

/*_______ CONSTANTS ________*/

%token INTEGER
%token FLOATING_CONSTANT
%token CHARACTER_CONSTANT
%token STRING_LITERAL

%nonassoc THEN
%nonassoc ELSE

%start translation_unit


/*____________________________ PRODUCTION RULES ______________________________*/


%%



/*__ 1. EXPRESSIONS _______________________________________*/


/*_______ PRIMARY EXPRESSIONS ________*/

constant : INTEGER | FLOATING_CONSTANT | CHARACTER_CONSTANT ;
primary_expression : IDENTIFIER | constant | STRING_LITERAL | ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE { printf("PRIMARY_EXPRESSION\n");};

/*_______ POSTFIX EXPRESSIONS ________*/

postfix_expression : primary_expression | postfix_expression SQUARE_BRACKET_OPEN expression SQUARE_BRACKET_CLOSE | postfix_expression ROUND_BRACKET_OPEN ROUND_BRACKET_CLOSE | postfix_expression ROUND_BRACKET_OPEN argument_expression_list ROUND_BRACKET_CLOSE | postfix_expression DOT IDENTIFIER | postfix_expression IMPLIES IDENTIFIER | postfix_expression INCREMENT | postfix_expression DECREMENT | ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE | ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE {printf("POSTFIX_EXPRESSION\n");};

/*_______ ARGUMENT EXPRESSION LIST ________*/

argument_expression_list : assignment_expression | argument_expression_list COMMA assignment_expression { printf("ARGUMENT_EXPRESSION_LIST\n");};

/*_______ URNARY EXPRESSION ________*/

unary_expression : postfix_expression | INCREMENT unary_expression | DECREMENT unary_expression | unary_operator cast_expression | SIZEOF unary_expression | SIZEOF ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE {printf("UNARY_EXPRESSION\n");};

/*_______ URNARY OPERATOR ________*/

unary_operator: BITWISE_AND | MUL | PLUS | MINUS | BITWISE_NOT | NOT {printf("UNARY_OPERATOR\n");};

/*_______ CAST EXPRESSION ________*/

cast_expression : unary_expression | ROUND_BRACKET_OPEN type_name ROUND_BRACKET_CLOSE cast_expression {printf("CAST_EXPRESSION\n");};

/*_______ MULTIPLICATIVE EXPRESSION ________*/

multiplicative_expression : cast_expression | multiplicative_expression MUL cast_expression | multiplicative_expression DIV cast_expression | multiplicative_expression MOD cast_expression {printf("MULTIPLICATIVE_EXPRESSION\n");};

/*_______ ADDITIVE EXPRESSION ________*/

additive_expression : multiplicative_expression | additive_expression PLUS multiplicative_expression | additive_expression MINUS multiplicative_expression {printf("ADDITIVE_EXPRESSION\n");};

/*_______ SHIFT EXPRESSION ________*/

shift_expression : additive_expression | shift_expression LEFT_SHIFT additive_expression | shift_expression RIGHT_SHIFT additive_expression {printf("SHIFT_EXPRESSION\n");};

/*_______ RELATIONAL EXPRESSION ________*/

relational_expression : shift_expression | relational_expression LESS_THAN shift_expression | relational_expression GREATER_THAN shift_expression | relational_expression LESS_EQUAL shift_expression | relational_expression GREATER_EQUAL shift_expression {printf("RELATIONAL_EXPRESSION\n");};

/*_______ EQUALITY EXPRESSION ________*/

equality_expression : relational_expression | equality_expression EQUAL relational_expression | equality_expression NOT_EQUAL relational_expression {printf("EQUALITY_EXPRESSION\n");};

/*_______ AND EXPRESSION ________*/

and_expression : equality_expression | and_expression BITWISE_AND equality_expression {printf("AND_EXPRESSION\n");};

/*_______ EXCLUSIVE OR EXPRESSION ________*/

exclusive_or_expression : and_expression | exclusive_or_expression BITWISE_XOR and_expression {printf("EXCLUSIVE_OR_EXPRESSION \n");};

/*_______ INCLUSIVE OR EXPRESSION ________*/

inclusive_or_expression : exclusive_or_expression | inclusive_or_expression BITWISE_OR exclusive_or_expression {printf("INCLUSIVE_OR_EXPRESSION\n");};

/*_______ LOGICAL AND EXPRESSION ________*/

logical_and_expression : inclusive_or_expression | logical_and_expression AND inclusive_or_expression {printf("LOGICAL_AND_EXPRESSION\n");};

/*_______ LOGICAL OR EXPRESSION ________*/

logical_or_expression : logical_and_expression | logical_or_expression OR logical_and_expression {printf("LOGICAL_OR_EXPRESSION \n");};

/*_______ CONDITIONAL EXPRESSION ________*/

conditional_expression : logical_or_expression | logical_or_expression QUESTION expression COLON conditional_expression {printf("CONDITIONAL_EXPRESSION\n");};

/*_______ ASSIGNMENT EXPRESSION ________*/

assignment_expression : conditional_expression | unary_expression assignment_operator assignment_expression {printf("ASSIGNMENT_EXPRESSION\n");};

/*_______ ASSIGNMENT OPERATOR ________*/

assignment_operator : ASSIGN | MUL_EQUAL | DIV_EQUAL | MOD_EQUAL | PLUS_EQUAL | MINUS_EQUAL | SHIFT_LEFT_EQUAL | SHIFT_RIGHT_EQUAL | BITWISE_AND_EQUAL | BITWISE_XOR_EQUAL | BITWISE_OR_EQUAL {printf("ASSIGNMENT_OPERATOR\n");};

/*_______ EXPRESSION ________*/

expression : assignment_expression | expression COMMA assignment_expression {printf("EXPRESSION\n");};

/*_______ CONSTANT EXPRESSION ________*/

constant_expression : conditional_expression {printf("CONSTANT_EXPRESSION\n");};


/*__ 2. DECLARATIONS _______________________________________*/


/*_______ DECLARATION ________*/

declaration : declaration_specifiers SEMICOLON | declaration_specifiers init_declarator_list SEMICOLON {printf("DECLARATION\n");};

/*_______ DECLARATION SPECIFIER ________*/

declaration_specifiers : storage_class_specifier | storage_class_specifier declaration_specifiers | type_specifier | type_specifier declaration_specifiers | type_qualifier | type_qualifier declaration_specifiers | function_specifier  | function_specifier declaration_specifiers {printf("DECLARATION_SPECIFIERS\n");};

/*_______ INIT DECLARATION LIST ________*/

init_declarator_list : init_declarator | init_declarator_list COMMA init_declarator {printf("INIT_DECLARATOR_LIST\n");};

/*_______ INIT DECLARATOR ________*/

init_declarator : declarator | declarator ASSIGN initializer {printf("INIT_DECLARATOR\n");};

/*_______ STORAGE CLASS SPECIFIER ________*/

storage_class_specifier : EXTERN | STATIC {printf("STORAGE_CLASS_SPECIFIER\n");};

/*_______ TYPE SPECIFIER ________*/

type_specifier : VOID | CHAR | SHORT | INT | LONG | FLOAT | DOUBLE {printf("TYPE_SPECIFIER\n");};

/*_______ SPECIFIER QUALIFIER LIST ________*/

specifier_qualifier_list : type_specifier specifier_qualifier_list | type_specifier | type_qualifier specifier_qualifier_list | type_qualifier {printf("SPECIFIER_QUALIFIER_LIST\n");};

/*_______ TYPE QUALIFIER ________*/

type_qualifier : CONST | RESTRICT | VOLATILE {printf("TYPE_QUAIFIER \n");};

/*_______ FUNCTION SPECIFIER ________*/

function_specifier : INLINE {printf("FUNCTION_SPECIFIER\n");};

/*_______ DECLARATOR ________*/

declarator : pointer direct_declarator | direct_declarator {printf("DECLARATOR\n");};

/*_______ DIRECT DECLARATOR ________*/

direct_declarator : IDENTIFIER | ROUND_BRACKET_OPEN declarator ROUND_BRACKET_CLOSE | direct_declarator SQUARE_BRACKET_OPEN  type_qualifier_list_opt assignment_expression_opt SQUARE_BRACKET_CLOSE | direct_declarator SQUARE_BRACKET_OPEN STATIC type_qualifier_list_opt assignment_expression SQUARE_BRACKET_CLOSE | direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list STATIC assignment_expression SQUARE_BRACKET_CLOSE | direct_declarator SQUARE_BRACKET_OPEN type_qualifier_list_opt MUL SQUARE_BRACKET_CLOSE | direct_declarator ROUND_BRACKET_OPEN parameter_type_list ROUND_BRACKET_CLOSE | direct_declarator ROUND_BRACKET_OPEN identifier_list_opt ROUND_BRACKET_CLOSE {printf("DIRECT_DECLARATOR\n");};

type_qualifier_list_opt :  | type_qualifier_list

assignment_expression_opt :  | assignment_expression

identifier_list_opt :  | identifier_list

/*_______ POINTER ________*/

pointer : MUL type_qualifier_list_opt | MUL type_qualifier_list_opt pointer {printf("POINTER\n");};

/*_______ TYPE QUALIFIER LIST ________*/

type_qualifier_list : type_qualifier | type_qualifier_list type_qualifier {printf("TYPE_QUALIFIER_LIST\n");};

/*_______ PARAMETER TYPE LIST ________*/

parameter_type_list : parameter_list | parameter_list COMMA ELLIPSIS {printf("PARAMETER_TYPE_LIST\n");};

/*_______ PARAMETER LIST ________*/

parameter_list : parameter_declaration | parameter_list COMMA parameter_declaration {printf("PARAMETER_LIST\n");};

/*_______ PARAMETER DECLARATION ________*/

parameter_declaration : declaration_specifiers declarator | declaration_specifiers {printf("PARAMETER_DECLARATION\n");};

/*_______ IDENTIFIER LIST ________*/

identifier_list: IDENTIFIER | identifier_list COMMA IDENTIFIER {printf("IDENTIFIER_LIST\n");};

/*_______ TYPE NAME ________*/

type_name : specifier_qualifier_list {printf("TYPE_NAME\n");};

/*_______ INITIALIZER ________*/

initializer : assignment_expression | CURLY_BRACKET_OPEN initializer_list CURLY_BRACKET_CLOSE | CURLY_BRACKET_OPEN initializer_list COMMA CURLY_BRACKET_CLOSE {printf("INITIALIZER\n");};

/*_______ INITIALIZER LIST ________*/

initializer_list : designation_opt initializer | initializer_list COMMA designation_opt initializer {printf("INITIALIZER_LIST\n");};

designation_opt : designation | 

/*_______ DESIGNATION ________*/

designation : designator_list ASSIGN {printf("DESIGNATION\n");};

/*_______ DESIGNATOR LIST ________*/

designator_list : designator | designator_list designator {printf("DESIGNATOR_LIST\n");};

/*_______ DESIGNATOR ________*/

designator : SQUARE_BRACKET_OPEN constant_expression SQUARE_BRACKET_CLOSE | DOT IDENTIFIER {printf("DESIGNATOR\n");};


/*__ 2. STATEMENTS _______________________________________*/


/*_______ STATEMENT ________*/

statement : labeled_statement | compound_statement | expression_statement | selection_statement | iteration_statement | jump_statement {printf("STATEMENT\n");};

/*_______ LABELED STATEMENT ________*/

labeled_statement : IDENTIFIER COLON statement | CASE constant_expression COLON statement | DEFAULT COLON statement {printf("LABELED_STATMENT\n");};

/*_______ COMPOUND STATEMENT ________*/

compound_statement : CURLY_BRACKET_OPEN block_item_list_opt CURLY_BRACKET_CLOSE {printf("COMPOUND_STATEMENT\n");};

block_item_list_opt :  | block_item_list

/*_______ BLOCK ITEM LIST ________*/

block_item_list : block_item | block_item_list block_item {printf("BLOCK_ITEM_LIST\n");};

/*_______ BLOCK ITEM ________*/

block_item : declaration | statement {printf("BLOCK_ITEM\n");};

/*_______ EXPRESSION STATEMENT ________*/

expression_statement : expression_opt SEMICOLON {printf("EXPRESSION_STATEMENT\n");};

expression_opt :  | expression

/*_______ SELECTION STATEMENT ________*/

selection_statement : IF ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement 			%prec THEN
| IF ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement ELSE statement | SWITCH ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement {printf("SELECTION_STATEMENT\n");};

/*_______ ITERATION STATEMENT ________*/

iteration_statement : WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE statement | DO statement WHILE ROUND_BRACKET_OPEN expression ROUND_BRACKET_CLOSE SEMICOLON | FOR ROUND_BRACKET_OPEN expression_opt SEMICOLON expression_opt SEMICOLON expression_opt ROUND_BRACKET_CLOSE statement | FOR ROUND_BRACKET_OPEN declaration expression_opt SEMICOLON expression_opt ROUND_BRACKET_CLOSE statement {printf("ITERATION_STATEMENT\n");};

/*_______ JUMP STATEMENT ________*/

jump_statement : GOTO IDENTIFIER SEMICOLON | CONTINUE SEMICOLON | BREAK SEMICOLON | RETURN expression_opt SEMICOLON {printf("JUMP_STATEMENT\n");};



/*__ 2. EXTERNAL DEFINITIONS _______________________________________*/

/*_______ TRANSLATION UNIT ________*/

translation_unit : external_declaration | translation_unit external_declaration {printf("TRANSLATION_UNIT\n");};

/*_______ EXTERNAL DECLARATION ________*/

external_declaration : function_definition | declaration {printf("EXTERNAL_DECLARATION\n");};

/*_______ FUNCTION DEFINITION ________*/

function_definition : declaration_specifiers declarator declaration_list_opt compound_statement {printf("FUNCTION_DEFINITION\n");};

declaration_list_opt :  | declaration_list

/*_______ DECLARATION LIST ________*/

declaration_list : declaration | declaration_list declaration {printf("DECLARATION_LIST\n");};



%%



void yyerror(char *ERRORS) {

	printf ("ERROR : %s\n",ERRORS);

}