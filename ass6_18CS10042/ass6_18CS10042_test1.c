// Binomial Coefficent
int binCoeff(int n, int r)
{

    int i,j,ans;
    ans = 1;
    for(i=r+1;i<n+1;i=i+1)
    {
    	ans = ans * i;
    }

    for(j=n-r;j>1;j=j-1)
    {
    	ans = ans / j;
    }

    return ans;

}
int main()
{

	int n,r,ans;
    int err=0;
    printStr("Binomial Coefficient program: \n");
    printStr("Enter the vaule of n: \n");
    n=readInt(&err);
    printStr("Enter the vaule of r: \n");
    r=readInt(&err);

    ans = binCoeff(n,r);
    printStr("Binomial Coefficient is: ");
	printInt(ans);
	printStr("\n");
	return 0;
}
