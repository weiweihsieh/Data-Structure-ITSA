#include<stdio.h>
#define Max 100

int main()
{
	int i, n, p, q, row, col, sum, k;
	int A[Max][Max], B[Max][Max], result[Max][Max];

	scanf("%d", &n);

	for(i=0;i<n;i++)
	{
		scanf("%d%d", &p, &q);

		//p*q matrix
		for(row=0;row<p;row++)
			for(col=0;col<q;col++)
			{
				scanf("%d", &A[row][col]);
			}

        //q*p matrix
		for(row=0;row<q;row++)
        {
			for(col=0;col<p;col++)
			{
				scanf("%d", &B[row][col]);
			}
        }

        //multiplication
		for(row=0; row<p; row++)
        {
			for(col=0; col<p; col++)
			{
				sum = 0;
				for(k=0; k<q; k++)
                {
                    sum += A[row][k]*B[k][col];
                }

				result[row][col]= sum;
			}
        }

        //print result: p*p matrix
		for(row=0;row<p;row++)
		{
			for(col=0;col<p;col++)
			{
				if(col == 0)
					printf("%d", result[row][col]);
				else
					printf(" %d", result[row][col]);
			}
			printf("\n");
		}

		if(i != n-1)
			printf("\n");
	}

	return 0;
}
