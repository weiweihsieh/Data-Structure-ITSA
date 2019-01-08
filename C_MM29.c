#include <stdio.h>

int isprime(int num);

int main()
{
    int n, i;

    scanf("%d", &n);

    for(i=n-1; i>=2; i--)
    {
        if(isprime(i) != 0)
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}

int isprime(int num)
{
	int i;

	for(i=2; i*i<=num; i++)
	{
		if((num/i)*i == num) //can be divided(have the factor except itself)
			return 0;
	}
	return 1; //is prime
}
