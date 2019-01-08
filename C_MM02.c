#include <stdio.h>

int main()
{
    double a, b, area;

    scanf("%lf", &a);
    scanf("%lf", &b);

    area = a * b / 2;

    printf("%.1lf\n", area);

    return 0;
}
