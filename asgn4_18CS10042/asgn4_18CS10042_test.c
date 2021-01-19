//PRITAM MALLICK
//18CS10042
//ASSIGNMENT 4

/* 

	TEST FILE
	You can make appropiate changes to observe
	the behaviour of encoded rules.

*/

int function(int x, int y)
{

	//Calculates the product of two numbers.
	return x * y;

}

int main()
{
	
	int a = 32;
	int Sequence[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	float b = 23.45;
	char c = 'x';
	char String[] = "This is a string. This string is amde to test the compiler.";

	int i;
	for(i=0;i<a;++i)
	{

		if( i < 15 )
			printf("%d ",Sequence[i]);
		else
			printf("%c ",String[i-15]);

	}

	int len = sizeof(Sequence)/sizeof(Sequence[0]);
	printf("%d\n",len);

	printf("Find sum of two numbers\n");
	int x,y;
	scanf("%d %d",&x,&y);
	int sum = x + y;

	printf("Sum of %d and %d is: %d\n",x,y,sum);

	printf("Find division of two numbers\n");
	scanf("%d %d",&x,&y);
	float div = x / y;

	printf("Division of %d and %d is: %d\n",x,y,div);

	int prod = function(x,y);
	printf("Product of %d and %d is: %d\n",x,y,prod);

	return 0;

}