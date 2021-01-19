//Loops test

int main()
{
	int i = 2, j = 1,k = 0;
	char c[41][1];
	int x = 4, y = 10;
	int sum = 8;
	float a[10];

	int iter=233;
	while(iter)
	{
		iter /= 20;
		j += iter;
	}

	while(sum > 1)
	{
		a[i] = a[i-1] + 1.2*a[i];
		sum = sum - 1;
	}
	
	for(i = k; i < sum; i++)
	{
		a[i] = i;
		x++;
	}
	
	sum=0;
	do {
		x = x + 1;
		sum++;
	} while(x<23 && sum<7);


}
