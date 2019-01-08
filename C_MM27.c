#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, total;

    scanf("%d", &a);
    scanf("%d", &b);

    total = (a + b) * (abs(a-b)+1) / 2;

    printf("%d\n", total);

    return 0;
}
