#include <stdio.h>

int main()
{
    int range, total, num;

    scanf("%d", &range);

    num = range/3;

    total = (3 + 3*num)*num/2;

    printf("%d\n", total);

    return 0;
}
