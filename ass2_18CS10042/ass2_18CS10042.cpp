//PRITAM MALLICK
//18CS10042

#include "toylib.h"

int printStringUpper(char *S)
{

	long long int len = 0;

    for(int i=0;;++i)
    {
        ++len;

        if (S[i] == 32 || S[i] == '\t' || S[i] == '\n' || S[i] == '\0')
        	break;

    }
    ++len;

    char S1[len];

    for(int i = 0; i < len; ++i)
    {
    	if(S[i] >= 'a' && S[i] <= 'z')
    	{
    		S1[i] = (S[i] - 32);
    	}
    	else
    	{
    		S1[i] = S[i];
    	}
    }

    S1[len-1] = '\n';

    //Print
    __asm__ __volatile__ (
        "movq %0, %%rsi\n\t"
        "movq %1, %%rdx\n\t"
        "movl $1, %%eax\n\t"
        "movq $1, %%rdi\n\t"
        "syscall \n\t"
        :
        :"S"(S1), "d"(len)
    );

    return len - 1;

}

//////////////////////////////////////////////////////////////////////////////

int pow(int a, int b)
{
    
    if ( b == 0 )
        return 1;

    else if ( b == 1 )
    	return a;

    else if ( b % 2 == 0 )
        return pow(a, b/2) * pow(a, b/2);

    else if ( b % 2 != 0 )
        return pow(a, b/2) * pow(a, b/2) * a;

}

int POS(char ch, char HEX[])
{

	int pos = -1;
	for(int i = 0; i<16; ++i)
	{
		if( HEX[i] == ch )
		{
			pos = i;
			break;
		}
	}

	return pos;
}

int readHexInteger(int* n)
{

	char *S = new char[500];

    long long int len = 500;

    //SCAN
    __asm__ __volatile__ (
        "movq %0, %%rsi\n\t"
        "movq %1, %%rdx\n\t"
        "movl $0, %%eax\n\t"
        "movq $0, %%rdi\n\t"
        "syscall \n\t"
        :
        :"S"(S), "d"(len)
    );

    len = 0;
    for (int i = 0;; ++i)
    {
        ++len;

        if (S[i] == 32 || S[i] == '\t' || S[i] == '\n' || S[i] == '\0')
        {
        	break;
        }

        if(S[i] >= 'a' && S[i] <= 'z')
    	{
    		S[i] -= 32;
    	}

    }

    for (int i = 0; i < len; ++i)
    {
    	if ( (S[i] >= 'G' && S[i] <= 'Z' ) || S[i] == '.' )
    		return BAD;
    }

   	char HEX[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    int neg = 1, ans = 0;

    if ( S[0] == '-' )
    	neg = -1;

    if ( neg == 1 )
    {
    	int j = 0;

    	for (int i = len - 2; i >= 0; --i)
    	{
    		ans += POS(S[i],HEX) * pow(16, j);
    		++j;
    	}

    }
    else
    {
    	int j = 0;

    	for (int i = len - 2; i >= 1; i--)
    	{
    		ans += POS(S[i],HEX) * pow(16, j);
    		++j;
    	}

    	ans *= -1;
    }

    *n = ans;

    return GOOD;

}

////////////////////////////////////////////////////////////////////////////

int printHexInteger(int n)
{

    int neg = 1;

    if(n < 0)
    {
        neg = -1;
        n *= -1;
    }

    char HEX[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    char *S = new char[500];

    for (int i = 0; i < 500; ++i)
    {
        S[i] = '\0';
    }

    for(int i=0; n>0; ++i)
    {

    	S[i] = HEX[(n%16)];
    	n = n/16;

    }

    long long int len = 0;

    for (int i = 0; i < 500; ++i)
    {
        ++len;

        if(S[i] == '\0')
        {
            break;
        }
    }

    char P[len+1];

    for (int i = 0; i < len; ++i)
    {
        P[i] = S[len-i-1];
    }

    if ( neg == -1 )
    {

        char temp[len];
        temp[0] = '-';
        for (int i = 0; i < len; ++i)
        {
            temp[i+1] = P[i];
        }
        temp[len+1] = '\n';

        //PRINT
        __asm__ __volatile__ (
            "movq %0, %%rsi\n\t"
            "movq %1, %%rdx\n\t"
            "movl $1, %%eax\n\t"
            "movq $1, %%rdi\n\t"
            "syscall \n\t"
            :
            :"S"(temp), "d"(len+2)
        );

        return len + 1;

    }
    else
    {

        P[len] = '\n';

        //PRINT
        __asm__ __volatile__ (
            "movq %0, %%rsi\n\t"
            "movq %1, %%rdx\n\t"
            "movl $1, %%eax\n\t"
            "movq $1, %%rdi\n\t"
            "syscall \n\t"
            :
            :"S"(P), "d"(len+1)
        );

        return len;

    }

}

//////////////////////////////////////////////////////////////////////

int readFloat(float *f)
{

	char *S = new char[500];
	int neg = 1;

    long long int len = 500;

    //SCAN
    __asm__ __volatile__ (
        "movq %0,%%rsi\n\t"
        "movq %1, %%rdx\n\t"
        "movl $0, %%eax\n\t"
        "movq $0, %%rdi\n\t"
        "syscall \n\t"
        :
        :"S"(S), "d"(len)
    );

    len = 0;
    for (int i = 0;; ++i)
    {

        ++len;
        if (S[i] == 32 || S[i] == '\t' || S[i] == '\n' || S[i] == '\0')
        {
        	break;
        }

    }

    int dots = 0;

    for (int i = 0; i < len; ++i)
    {
    	if ( S[i] == '.' )
    		++dots;

    	if ( S[i] >= 'a' && S[i] <= 'z' )
    		S[i] -= 32;
    }

    if (dots > 1)
    	return BAD;

    for (int i = 0; i < len; ++i)
    {
    	if (S[i] <= 'A' && S[i] >= 'Z')
    	{
    		return BAD;
    	}
    }

    if (S[0] == '-')
    	neg = -1;

    if (dots == 0)
    {

		float ans = 0;

    	if (neg == -1)
    	{
			int j = 0;
			for (int i = len - 2; i >= 1; i--)
			{
				ans += (S[i] - '0') * pow(10, j);
				j++;
			}

			*f = (-1) * ans;

			return GOOD;

		}
		else
		{

			int j = 0;
			for (int i = len - 2; i >= 0; i--)
			{
				ans += (S[i] - '0') * pow(10, j);
				j++;
			}

			*f = ans;

			return GOOD;

		}

    }
    else
    {

    	float ans = 0;

    	if (neg == -1)
    	{

    		int decimal = 0, j = 0;
    		for (int i = 0; i < len; ++i)
    		{
    			if (S[i] == '.')
    			{
    				decimal = i;
    				break;
    			}
    		}

    		for (int i = decimal-1; i >= 1; --i)
    		{
    			ans += (S[i] - '0') * (float) pow(10,j);
    			++j;
    		}

    		j = 1;

    		for (int i = decimal+1; i < len - 1; ++i)
    		{
    			ans += (S[i] - '0') * ( 1 / ((float) pow(10,j) ));
    			++j;
    		}

    		*f = (-1) * ans;

    		return GOOD;

    	}
    	else
    	{

    		int decimal = 0, j = 0;

    		for (int i = 0; i < len; i++)
    		{
    			if (S[i] == '.')
    			{
    				decimal = i;
    				break;
    			}
    		}

    		for (int i = decimal-1; i >= 0; --i)
    		{
    			ans += (S[i] - '0') * (float) pow(10,j);
    			++j;
    		}

    		j = 1;

    		for (int i = decimal+1; i < len - 1; ++i)
    		{
    			ans += (S[i] - '0') * (1 / ((float) pow(10,j)));
    			++j;
    		}

    		*f = ans;

    		return GOOD;

    	}

    }

    return BAD;

}

///////////////////////////////////////////////////////////////////////////

int printFloat(float f)
{

	int neg = 1;

	if(f < 0)
	{
		neg = -1;
		f = -f;
	}

	float value = (int)((f * 10000) + 0.5);
    f = ((float)value )/ 10000;

	float f1 = f * 10000;
	int f2 = (int) f1;
	long long int len = 0;
	int t = f2;

	for(int i=0; t > 0; ++i)
	{
		++len;
		t = t / 10;
	}

	++len;

	char *S = new char[len];

	S[len - 5] = '.';
	t = f2;
	int i = 0;

	char HEX[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

	for(int i=0; t > 0 || i != 4; ++i)
	{

		if( (t % 10) < 16 )
			S[len-i-1] = HEX[t % 10];
		else
			return BAD;

		t = t / 10;

	}

	for(int i=0; t > 0; ++i)
	{

		S[len-6-i] = HEX[t % 10];
		t = t / 10;

	}

	char *P = new char[len + 1];
	for (int i = 0; i < len; ++i)
	{
		P[i] = S[i];
	}

	if (neg == -1)
    {
        char R[len];
        R[0] = '-';

        for (int i = 0; i < len; ++i)
        {
            R[i+1] = P[i];
        }

        R[len + 1] = '\n';

        //PRINT
        __asm__ __volatile__ (
            "movq %0,%%rsi\n\t"
            "movq %1, %%rdx\n\t"
            "movl $1, %%eax\n\t"
            "movq $1, %%rdi\n\t"
            "syscall \n\t"
            :
            :"S"(R), "d"(len+2)
        );

        return len;
    }
    else
    {

        P[len] = '\n';

        //PRINT
        __asm__ __volatile__ (
            "movq %0,%%rsi\n\t"
            "movq %1, %%rdx\n\t"
            "movl $1, %%eax\n\t"
            "movq $1, %%rdi\n\t"
            "syscall \n\t"
            :
            :"S"(P), "d"(len+1)

        );

        return len;

    }

    return len;

}