#include <stdio.h>

int main()
{
    int i, n, num;

    scanf("%d", &n);

    num = n/35;

    for(i=1; i<=num; i++)
    {
        if(i == num)
            printf("%d\n", 35*i);
        else
            printf("%d ", 35*i);
    }

    return 0;
}
