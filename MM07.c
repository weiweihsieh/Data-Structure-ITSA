#include <stdio.h>
#include <string.h>
#define MAX 10000

int main()
{
	int i, pos = 0, count = 0;
	char A[MAX], B[MAX];
	char *ptr1, *ptr2;
	_Bool flag = 0;

	scanf("%s", A);
	scanf("%s", B);

	ptr1 = A;
	ptr2 = B;

	while(pos != strlen(B)-strlen(A)+1) //the number to find A in B
	{
		flag = 0;
		ptr1 = A;
		ptr2 = &B[pos];

		for(i=0;i<strlen(A);i++)
		{
			if(*ptr1 == *ptr2)
			{
				ptr1++;
				ptr2++;
				continue;
			}
			else
			{
				flag = 1; //not found
				break;
			}
		}

		if(flag == 0) //found
		{
			count++;
		}

		pos++;
	}

	printf("%d\n", count);
	return 0;
}
