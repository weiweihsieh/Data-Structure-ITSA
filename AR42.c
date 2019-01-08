#include <stdio.h>
#define MAX 10

void insertionSort(int num[], int n);

int main()
{
	int num[MAX], i;

	//input
	for(i=0;i<MAX;i++)
	{
		scanf("%d", &num[i]);
	}

    //sorting
	insertionSort(num, MAX);

	printf("Largest number = %d\n", num[MAX-1]);
	printf("Smallest number = %d\n", num[0]);

	return 0;
}

void insertionSort(int num[], int n)
{
    int i, j, key;

    for(j=1; j<n; j++)
    {
        key = num[j];

        i = j-1;
        while(i >= 0 && num[i] > key)
        {
            num[i+1] = num[i];
            i--;
        }

        num[i+1] = key;
    }
}
