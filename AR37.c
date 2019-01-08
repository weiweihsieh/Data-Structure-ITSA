#include<stdio.h>
#define MAX 500

int isprime(int num);

int main()
{
	int n, i, j, k, a, b, min = 0;
	int prime[MAX], dis[MAX], np, nd, pos;

	scanf("%d", &n); //n test cases

	for(k=0;k<n;k++)
	{
		scanf("%d%d", &a, &b);

		np = nd = pos = 0;

        //find prime numbers
		for(j=a;j<=b;j++)
		{
			if(j == 1)
			{
				continue;
			}

			if(isprime(j) == 1)
			{
				prime[np++] = j;
			}
		}

		if(np == 0 || np == 1)
		{
			printf("Not found\n");
			continue;
		}
		else if(np == 2)
		{
			printf("%d %d\n", prime[0], prime[1]);
			continue;
		}
		else
		{
			for(i=0; i<np-1; i++)
			{
				dis[nd++] = prime[i+1] - prime[i];
			}

			//find min distance
			min = dis[0];
            for(i=0;i<nd;i++)
            {
                if(dis[i] < min)
                {
                    min = dis[i];
                    pos = i;
                }
                else if(dis[i] == min)
                {
                    continue;
                }
            }

			printf("%d %d\n", prime[pos], prime[pos+1]);
		}
	}

	return 0;
}

int isprime(int num)
{
	int i;

	for(i=2; i*i<=num; i++)
	{
		if((num/i)*i == num) //have the factor except itself
			return 0;
	}
	return 1;
}
