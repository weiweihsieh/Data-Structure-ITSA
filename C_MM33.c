#include <stdio.h>

int isPerfectNum(int num);

int main()
{
    int i, n, np;
    int perfect[10];

    scanf("%d", &n);

    np = 0;
    for(i=1; i<=n; i++)
    {
        if(isPerfectNum(i) == 0)
        {
            perfect[np++] = i;
        }
    }

    for(i=0; i<np; i++)
    {
        if(i == np-1)
            printf("%d\n", perfect[i]);
        else
            printf("%d ", perfect[i]);
    }

    return 0;
}

int isPerfectNum(int num)
{
    int sum, k, factor;

    sum = 0;
    k = 1;
    while(k*k <= num)
    {
        if(num % k == 0)
        {
            sum += k;

            factor = num/k;

            if(factor != num && factor != k)
                sum += factor;
        }

        k++;
    }

    if(sum == num && sum != 1) //num is perfect number
        return 0;

    return 1;
}
