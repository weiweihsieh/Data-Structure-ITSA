#include <stdio.h>

double round(double n);

int main()
{
    double c, f;

    scanf("%lf", &c);

    f = (9*c/5) + 32;

    printf("%.1lf\n", f);

    return 0;
}

double round(double n) //round to one decimal place
{
    double tmp;
    int d;

    tmp = (n - (int)n)*10;
    d = (tmp - (int)tmp)*10;

    if(d >= 5)
    {
        return ((int)(n*10) + 1)/10.0;
    }
    else
    {
        return (int)(n*10)/10.0;
    }
}
