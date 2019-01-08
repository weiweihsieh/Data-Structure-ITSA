#include <stdio.h>

int main()
{
	int i, j, k, termNum;
	int a, b, c, d;
	int tmp[21], coef[21];

	scanf("%d%d%d%d", &a, &b, &c, &d);

	/*initialization*/
	for(i=0;i<21;i++)
	{
		coef[i] = 0;
		tmp[i] = 0;
	}

	coef[0] = c;
	coef[1] = b;
	coef[2] = a;

	if(d == 1)
    {
        printf("%d %d %d\n", a, b, c);
    }
	else
    {
        for(i=2; i<=d; i++)
        {
            termNum = 2*d - 1;

            for(k=0; k<termNum; k++)
                tmp[k] = 0;

            for(j=termNum-1; j>=0; j--)
            {
                tmp[j+2] += coef[j]*a;
                tmp[j+1] += coef[j]*b;
                tmp[j] += coef[j]*c;
            }

            for(k=0; k<termNum+2; k++)
                coef[k] = tmp[k];
        }

        //printf result
        for(i=2*d; i>=0; i--)
        {
            if(i == 2*d)
                printf("%d", coef[i]);
            else
                printf(" %d", coef[i]);
        }
        printf("\n");
    }

	return 0;
}
