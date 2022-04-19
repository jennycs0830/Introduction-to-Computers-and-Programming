#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void transfer(void);

int main()
{
	transfer();
	return 0;
}

void transfer(void)
{
	FILE*fptr;
	fptr = fopen("C:/Users/admin/source/repos/Project69/Project69/hw-7-2.txt", "r");

	char input[1000];
	while (fgets(input, 10000, fptr) != NULL)
	{
		for (int i = 0; i < (int)strlen(input); i++)
		{
			if ((input[i] >= 'A')&&(input[i] <= 'Z'))
			{
				input[i] = input[i] + 32;
			}
			else if (input[i] >= 'a'&&input[i] <= 'z')
			{
				input[i] = input[i] - 32;
			}
			else
			{
				input[i] = input[i];
			}
		}
		for (int i = 0; i < (int)strlen(input); i++)
		{
			printf("%c", input[i]);
		}

	}
	
}