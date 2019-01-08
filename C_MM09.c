#include <stdio.h>

int main()
{
    int power, result;

    scanf("%d", &power);

    if(power == 0)
    {
        result = 1;
    }
    else if(power > 0 && power < 31)
    {
        result = 1 << power;
    }
    else
    {
        printf("Value of more than 31\n");
        return 0;
    }

    printf("%d\n", result);

    return 0;
}
