
//Function declarations test

int quotient(int a,int b)
{
	int ans = a / b;
	return ans;
}

int summation(int a,int b)
{
	int ans = a + b;
	return ans;
}

int main()
{
	int x = 12, y = 7;
	int s = summation(x, y);
	int m = quotient(x, y);
	char a = 'a', b = 'b', c = 'c';
	char *d = &b;
	int k = 11;
	int l = k + 2;
	int  i = 23, *p = &l;
	int w = summation(x, y);
	int x = quotient(x, y);
	int y = summation(x, y);
	int z = quotient(x, y);
	int u = summation(x, y);
	int v = quotient(x, y);
}
