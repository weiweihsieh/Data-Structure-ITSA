#include<stdio.h>

int main()
{
	int i, j, row, col;
	int A[100][100], B[100][100];

	scanf("%d", &row);
	scanf("%d", &col);

	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d", &A[i][j]);

	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d", &B[i][j]);

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			B[i][j] += A[i][j];

			if(j == 0)
				printf("%d", B[i][j]);
			else
				printf(" %d", B[i][j]);
		}
		printf("\n");
	}

	return 0;
}
