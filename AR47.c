#include<stdio.h>

int main()
{
	int num;
	
	scanf("%d", &num);
	
	while(num % 2 == 0)
	{
		num /= 2;
	}

	while(num % 3 == 0)
	{
		num /= 3;
	}

	while(num % 5 == 0)
	{
		num /= 5;
	}
	
	if(num == 1)
	{
		printf("Regular number!\n");
	}
	else
	{
		printf("Irregular number!\n");
	}

	return 0;
}
