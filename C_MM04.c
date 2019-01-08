#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d+%d=%d\n", a, b, a+b);
    printf("%d*%d=%d\n", a, b, a*b);
    printf("%d-%d=%d\n", a, b, a-b);

    if(a<0)
    {
        if(b<0)
            printf("%d/%d=%d...%d\n", a, b, a/b + 1, a%b-b);
        else if(b>0)
            printf("%d/%d=%d...%d\n", a, b, a/b - 1, a%b+b);
    }
    else
    {
        printf("%d/%d=%d...%d\n", a, b, a/b, a%b);

    }

    return 0;
}
