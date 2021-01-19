// Program to handle pointers

int main()
{
	printStr("Handling pointers: \n");
	char c = 'B';
	char *d;
	d = &c;
	*d = 'J';
	if(c != 'J')
	{
		printStr("NO\n");
	}
	else
	{
		printStr("YES\n");
	}
	int *p;
	int i = 4;
	p = &i;
	*p = 2;
	printInt(i);
	printStr("\n");
	int *q = p;
	*q = 4;
	printInt(i);
	printStr("\n");

	return 0;
}
