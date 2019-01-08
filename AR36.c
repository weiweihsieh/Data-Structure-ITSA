#include<stdio.h>

int main()
{
	int A[10][11], B[10][10], result[10][10];
	int row, col, c, i, j;

	scanf("%d%d%d", &row, &col, &c);

 	for(i=0;i<row;i++)
 	{
		for(j=0;j<col;j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

 	for(i=0;i<row;i++)
 	{
		for(j=0;j<col;j++)
		{
			scanf("%d", &B[i][j]);
		}
	}

	for(i=0;i<row;i++)
 	{
		for(j=0;j<col;j++)
		{
			result[i][j] = (A[i][j]+B[i][j])*c;
		}
	}

	for(j=0;j<col;j++)
 	{
		for(i=0;i<row;i++)
		{
			if(i == 0)
				printf("%d", result[i][j]);
			else
				printf(" %d", result[i][j]);
		}
		printf("\n");
	}

	return 0;
}
