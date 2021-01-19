// Global variables
int global_1 = 96;
int global_2 = 23;
int main()
{
	printStr("Program to handle global variables\n");
	int test;
	test = global_2*2;
	test++;
	test = test + global_1;
	printStr("Test = ");
	printInt(test);
	printStr("\n");

}
