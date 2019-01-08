#include <stdio.h>

int main()
{
    double t, distance, velocity;

    scanf("%lf", &distance);

    velocity = (30*2.54)/100;

    t = distance/(1 - velocity); //distance - (1-v)t = 0 (exactly difference=0)

    printf("%d\n", (int)t+1);

    return 0;
}
