#include <stdio.h>

double round(double n);

int main()
{
    int minute;
    double price;

    while(scanf("%d", &minute) != EOF)
    {
        if(minute <= 800)
        {
            price = round(minute*0.9);
        }
        else if(minute > 800 && minute < 1500)
        {
            price = round(minute*0.9*0.9);
        }
        else if(minute >= 1500)
        {
            price = round(minute*0.9*0.79);
        }

        printf("%.1lf\n", price);
    }



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
