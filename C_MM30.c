#include <stdio.h>

int isprime(int num);

int main()
{
    int n;

    scanf("%d", &n);

    if(isprime(n) != 0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");

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
