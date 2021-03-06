#ifndef ASS5_18CS10042_TRANSLATOR_H
#define ASS5_18CS10042_TRANSLATOR_H

#include <stdio.h>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;
extern int sizeOfInt;
extern int sizeOfFloat;
extern int sizeOfPointer;
extern int sizeOfChar;
extern int sizeOfBool;

class Type;// to store a type and its List
class Expression;// to be used for trueList,falseList and nextList
class Quad; //to define Quad so that we can further use it to make Array
class SymRec; //to enter data into symbol table
class SymTab; //usual symbol table
class QuadArray; //it stores the List of Quads for the expression and also emits the required emits
class Function;
class Array;
//void totest(string x);//to test
struct DeclStr;
struct IdStr;
struct Expression;
struct ArgListStr;
extern Type *glbType; //to store the global type for inherited attributes
extern int glbWidth; // to store the global width for inherited attributes
extern int nextInstr; //next instr for use in Quads and in different Functionion like backpatch
extern int tempCount; // count of the temporary varibles to name the new temporary variable
extern SymTab *glbSt; //Global symbol table pointer
extern SymTab *currSt; //Current Symbol table pointer
extern QuadArray quads; //to store all the Quads that will be generated by the grammar

enum types
{
	
	Tvoid = 0,
    Tbool,
    Tchar,
    Tint,
    Tfloat,
    Tptr,
    Tarray,
    Tfunc
};

typedef struct List{
	int index;
	struct List *next;
}List;

enum opcode{

	OP_ADD = 1,         //binary operators
    OP_SUB,
    OP_MULT,
    OP_DIV,
    OP_MOD,
    OP_LST,
    OP_RST,
    OP_XOR,
    OP_AND,
    OP_OR,
    OP_LOGIC_AND,
    OP_LOGIC_OR,
    OP_LTH,
    OP_LEQ,
    OP_GEQ,
    OP_GTH,
    OP_EQ,
    OP_NEQ,

    OP_UMINUS,          //unary operators
    OP_UPLUS,
    OP_NOT,
    OP_LOGIC_NOT,

    OP_LDEREF,          //pointer operators
    OP_RDEREF,
    OP_ADDREF,

    OP_RINDEX,          //array indexing
    OP_LINDEX,

    OP_ASSIGN,          //assignment operator

    OP_GOTO,

    OP_IF_EQ,           //conditional jump
    OP_IF_NEQ,
    OP_IF_EXPR,
    OP_IF_NEXPR,
    OP_IF_LTH,
    OP_IF_GTH,
    OP_IF_LEQ,
    OP_IF_GEQ,

    OP_CHAR2INT,        //type conversion
    OP_CHAR2FLT,
    OP_INT2CHAR,
    OP_FLT2CHAR,
    OP_INT2FLT,
    OP_FLT2INT,

    OP_PARAM,           //operators for function calls
    OP_CALL,
    OP_RETURN,



};

//it is the basic type that an element can have
union BasicVal{
	int int_val;
	float float_val;
	char char_val;
};

class Type{
public:
	int size;    // to save the size of the type
	types basetp; // to save the basic type of the elemnt
	Type *next; // to save next Type type for Arrays
	Type(types t,int sz=1, Type *n=NULL); //constuctor
	int getSize(); //returns the size
	types getBaseType(); //return Base type
	void printSize(); //to print the size
	void print();
};

Type *CopyType(Type *t);

class Array
{
public:

	/* Stores the Array base and the variable containing Array offset */
	string arrBase;
	types tp;
	/* Initiates Array name, offset and Array type */
	Array(string s,int sz,types t);
	/* Stores Array dimensions */
	vector<int> dims;

	/* Size of base type */
	int bsize;

	/* Number of dimensions */
	int ndims;

	/* Adds an Array index for Array accessing */
	void addIndex(int i);

};



/* To store details of Functions, its parameters and return type */
class Function
{
public:
	/* Parameter type List */
	vector<types> typelist;

	/* Return type */
	Type *rettype;

	Function(vector<types> tlist);
	/* Prints details in suitable format */
	void print();
};


//class which will be used as building element for symbol table
class SymRec{
public:
	string name;//to store the value of a varaible stored in symbol table
	int size; //to stoe the size of an element in a symbol table
	int offset;//to maintain the offset at this variable to know the position at symbol table
	BasicVal initVal;//to store the initialized value for an element stored at symbol table
	Type *recType;//for storing the type of element
	SymTab *nestedTab; //to store the pointer to the symbol table to which the current element belongs to
	Array *arr;//to store the pointer to an Array if its an Array type
	Function *funct;//to store the pointer to a Functionion if its an Functionion
	void createArray();
	string vType;//to store whether the varaible is "null=0" "local=1" "param=2" "func=3" "ret=4" "temporary=5"
	bool isInitialized; //If the value of element is initialized or not
	bool isFunction; //to know whether the current element is Functionion like Functionion pointer
	bool isArray; // to know whether the current element is ab Array it helps if we have been in grammar tree
	SymRec(string n=""); //name is initialized to null that will be used for naming temporary variables
};

class SymTab{
public:
	string name;			// name of the symbol
	int offset;				// final offset of this symbol table that will be used in the update Functionion
	vector<SymRec*> records; //maintaining a List of symbol tables
	SymTab();  //constructor
	~SymTab(); //destructor
	SymRec* lookup(string n);// Lookup Functionion searches the variable with name. If the variable is present then returns its pointer location else creates a new entry with its name and returns that pointer
	SymRec* search(string n); //it searches for the variable and returns the oiter to it if present
	SymRec* gentemp(Type *type); //gentemp creates a new element in the symbol table with the type provided at the time of constructing
	void update(SymRec *loc,Type *type,BasicVal initval, SymTab *next = NULL);//
	void print();
};

struct Expression{
	SymRec* loc;
	Type* type;
	List* truelist;
	List* falselist;
	bool isPointer;
	bool isArray;
	SymRec *arr;
};
List* makelist(int i);  //creates a List have only one element as i
List* merge(List *l1,List *l2); //merges the the two List and return a merged List
void backpatch(List *l,int i);  //to fill the dangling List of goto's l1 to i
void conv2bool(Expression *e); //to convert the given exprssion type to bool mostly used in relational operator
void typeCheck(Expression *e1,Expression *e2,bool isAss = false);
void printList(List *root);
// struct for declaration grammar
struct DeclStr
{
	Type *type;						// type of the current declaration
	int width;					// width of the variable
};

class Quad{
public:
	string arg1,result,arg2; //consist of three elements
	opcode op;
	void printArg();
	Quad(opcode,string,string,string); //constructorparameters
};

struct ArgListStr
{
	vector<Expression*> *arguments;		// A simple vector is used to store the locations of all seen arguments
};

// struct for a identifier
struct IdStr
{
	SymRec *loc;					// pointer to the symboltable
	string *name;						// name of the identifier
};

struct strstr{
	Type lop;
	string name;
};

class QuadArray{
public:
	vector<Quad> arr;//to store the List of Quads
	QuadArray();
	void emit(opcode opc, string arg1="", string arg2="", string result=""); //emit used for operations with 3 inputs
	void emit(opcode opc, int val, string operand="");  // emit for assignment of integer
	void emit(opcode opc, float val, string operand=""); //emit for assignment of float
	void emit(opcode opc, char val, string operand=""); //emit for assignment of char
	void print();  //print all the Quads
};

#endif
