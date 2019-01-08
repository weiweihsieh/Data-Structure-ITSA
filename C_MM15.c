#include <stdio.h>

int main()
{
    int x, y;

    while(scanf("%d", &x) != EOF)
    {
        scanf("%d", &y);

        if((x >= 0 && x <= 100) && (y >= 0 && y <= 100))
        {
            printf("inside\n");
        }
        else
            printf("outside\n");
    }

    return 0;
}
