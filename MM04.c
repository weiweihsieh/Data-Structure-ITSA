#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, c, factor;
    int num, sum, k;
    char n[20];

    scanf("%d", &c); //c cases

    for(i=0; i<c; i++)
    {
        scanf("%s", n);

        if(strlen(n) <= 8)
        {
            num = atoi(n);

            sum = 0;
            k = 1;
            while(k*k <= num)
            {
                if(num % k == 0)
                {
                    sum += k;

                    factor = num/k;

                    if(factor != num && factor != k)
                        sum += factor;
                }

                k++;
            }

            if(sum == num)
            {
                printf("perfect\n");
            }
            else
            {
                printf("nonperfect\n");
            }

        }
        else //too longer to count
        {
            if(strcmp(n, "8589869056") == 0 || strcmp(n, "137438691328") == 0)
            {
                printf("perfect\n");
            }
            else
            {
                printf("nonperfect\n");
            }
        }
    }

    return 0;
}
