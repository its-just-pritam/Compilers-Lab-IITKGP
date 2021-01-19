//PRITAM MALLICK
//18CS10042

#include <stdio.h>

extern char* yytext;

int main() 
{ 

  int token;

  while (token = yylex()) 
  {

    switch (token) 
    {
      case HEADER: printf("< HEADER"); 
                                break;
      case PREPROCESSOR: printf("< PREPROCESSOR"); 
                                break;
      case IDENTIFIER: printf("< IDENTIFIER"); 
                                break;
      case INTEGER_CONSTANT: printf("< INTEGER_CONSTANT"); 
                                break;
      case FLOATING_CONSTANT: printf("< FLOATING_CONSTANT"); 
                                break;
      case CHARACTER_CONSTANT: printf("< CHARACTER_CONSTANT"); 
                                break;
      case STRING_LITERAL: printf("< STRING_LITERAL"); 
                                break;

      case SQUARE_BRACKET_OPEN : printf("< SQUARE_BRACKET_OPEN"); 
                                break;
        case SQUARE_BRACKET_CLOSE: printf("< SQUARE_BRACKET_CLOSE"); 
                                break;
        case ROUND_BRACKET_OPEN : printf("< ROUND_BRACKET_OPEN"); 
                                break;
        case ROUND_BRACKET_CLOSE: printf("< ROUND_BRACKET_CLOSE"); 
                                break;
        case CURLY_BRACKET_OPEN: printf("< CURLY_BRACKET_OPEN"); 
                                break;
        case CURLY_BRACKET_CLOSE: printf("< CURLY_BRACKET_CLOSE"); 
                                break;

        case DOT: printf("< DOT"); 
                break;
        case IMPLIES: printf("< IMPLIES"); 
                break;
        case INCREMENT: printf("< INCREMENT"); 
                break;
        case DECREMENT: printf("< DECREMENT"); 
                break;
        case BITWISE_AND: printf("< BITWISE_AND"); 
                break;
        case MUL: printf("< MUL"); 
                break;
        case ADD: printf("< ADD"); 
                break;
        case SUB: printf("< SUB"); 
                break;
        case BITWISE_NOT: printf("< BITWISE_NOT"); 
                break;
        case NOT: printf("< NOT"); 
                break;
        case DIV: printf("< DIV"); 
                break;
        case MOD: printf("< MOD"); 
                break;
        case SHIFT_LEFT: printf("< SHIFT_LEFT"); 
                break;
        case SHIFT_RIGHT: printf("< SHIFT_RIGHT"); 
                break;
        case LT: printf("< LT"); 
                break;
        case GT: printf("< GT"); 
                break;
        case LTE: printf("< LTE"); 
                break;
        case GTE: printf("< GTE"); 
                break;
            case EQ: printf("< EQ"); 
                break;
        case NEQ: printf("< NEQ"); 
                break;
        case BITWISE_XOR: printf("< BITWISE_XOR"); 
                break;
        case BITWISE_OR: printf("< BITWISE_OR"); 
                break;
        case AND: printf("< AND"); 
                break;
        case OR: printf("< OR"); 
                break;
        case QUESTION: printf("< QUESTION"); 
                break;
        case COLON: printf("< COLON"); 
                break;
        case SEMICOLON: printf("< SEMICOLON"); 
                break;
        case DOTS: printf("< DOTS"); 
                break;
        case ASSIGN: printf("< ASSIGN"); 
                break;
        case STAR_EQ: printf("< STAR_EQ"); 
                break;
        case DIV_EQ: printf("< DIV_EQ"); 
                break;
        case MOD_EQ: printf("< MOD_EQ"); 
                break;
        case ADD_EQ: printf("< ADD_EQ"); 
                break;
        case SUB_EQ: printf("< SUB_EQ"); 
                break;
        case LT_EQ: printf("< LT_EQ"); 
                break;
        case GT_EQ: printf("< GT_EQ"); 
                break;
        case BITWISE_AND_EQ: printf("< BITWISE_AND_EQ"); 
                break;
        case BITWISE_XOR_EQ: printf("< BITWISE_XOR_EQ"); 
                break;
        case BITWISE_OR_EQ: printf("< BITWISE_OR_EQ"); 
                break;
        case COMMA: printf("< COMMA"); 
                break;
        case HASH: printf("< HASH"); 
                break;
      case SINGLE_LINE_COMMENT: printf("< SINGLE_LINE_COMMENT"); 
                break;
      case MULTI_LINE_COMMENT: printf("< MULTI_LINE_COMMENT"); 
                break;
      default: printf("< KEYWORD"); 
    }

        printf(", %d, %s>\n",token,yytext);

  }

}
