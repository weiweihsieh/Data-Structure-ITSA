#include <stdio.h>

int main()
{
    double a, b, h, area;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &h);

    area = (a + b)*h / 2;

    printf("Trapezoid area:%.1lf\n", area);

    return 0;
}
