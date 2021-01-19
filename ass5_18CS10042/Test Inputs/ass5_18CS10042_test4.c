//Common expressions test

int main()
{
	char g, h;
	g = 'a';
	h = 'b';
	
	int a = 15;
	int b = a;
	a = a % b;

	int *p1 = &a;
	int f = b << 21;

	double c = 12.0, d = 1.8;
	c = a*d;
	c = 21.3;
	d = d/c;
	c = c*111.21;

	d = a+b;
	c = d+b;
	a = a-b;
	c -= 2;
	d += 2;
	a++;
	b++;

}
