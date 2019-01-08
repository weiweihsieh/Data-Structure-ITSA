#include <stdio.h>
#include <stdlib.h>
#define MAX 10000

int main()
{
	int i, j, num, min, minIndex, difference;
	int A[MAX], result[MAX];

	scanf("%d", &num);

	for(i=0;i<num;i++)
	{
		scanf("%d", &A[i]);
	}

	for(i=0;i<num;i++)
	{
		min = MAX;
		for(j=0; j<num; j++)
        {
            difference = abs(A[i] - A[j]);
            if(difference <= min && difference != 0)
            {
                min = difference;
                minIndex = j;
            }
        }

		result[i] = minIndex + 1;
	}

	for(i=0;i<num;i++)
	{
		if(i == 0)
		{
			printf("%d", result[i]);
		}
		else
		{
			printf(" %d", result[i]);
		}
	}
	printf("\n");

	return 0;
}
