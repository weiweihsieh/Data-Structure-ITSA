#include<stdio.h>

int main()
{
    int m, n, i, j, s;
    int boy, girl, half;

    scanf("%d%d", &m, &n);

    half = (m*n)/2;
    boy = girl = 0;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &s);

            if(s == 0)
                girl++;
            else if(s == 1)
                boy++;
        }

        if(girl > half)
        {
            printf("0\n");
            return 0;
        }
        else if(boy > half)
        {
            printf("1\n");
            return 0;
        }
    }

    printf("2\n"); //girl = boy

    return 0;
}
