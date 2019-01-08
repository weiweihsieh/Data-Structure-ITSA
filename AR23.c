#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MaxLine 1000

int main()
{
	int i;
	char line[MaxLine];

	fgets(line, MaxLine, stdin);

	for(i=0;i<strlen(line);i++)
	{
		if(isalpha(line[i]) != 0)
		{
			if((line[i] >= 'A' && line[i] <= 'M') || (line[i] >= 'a' && line[i] <= 'm'))
			{
				line[i] = line[i]+13;
				printf("%c", line[i]);
			}
			else if((line[i] >= 'N' && line[i] <= 'Z') || (line[i] >= 'n' && line[i] <= 'z'))
			{
				line[i] = line[i]-13;
				printf("%c", line[i]);
			}
		}
		else
			printf("%c", line[i]);
	}

	return 0;
}
