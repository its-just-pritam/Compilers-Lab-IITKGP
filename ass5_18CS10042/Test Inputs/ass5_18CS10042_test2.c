//Type declaration test

float test_1(float a,int b)
{
	float ans;
	ans = a * b;
	return ans;
}

void test_2(int a,double b)
{
	double dl =b;
	char *p=&c;
	int i=a+b;
}

int main()
{
	double d = 12.3;
	int b = 3, c=9;
	char a = 'z';
	char *d=&a;
	int k = 12;
	int l = k;
	int  i = 150, *p = &l;
	float f = 1.33;
	test_1(f,c);
	test_2(b, d);
}
