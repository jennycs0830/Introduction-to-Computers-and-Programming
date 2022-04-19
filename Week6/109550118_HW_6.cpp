#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int i, j;
	int number;
	char name[10][10];
	char input[100000];
	for (i = 0; i < 100000; i++)
	{
		input[i] = '/0';
	}

	scanf("%d", &number);
	for (i = 0; i < number; i++)
	{
		scanf("%s", name[i]);
	}

	char map[300][300];
	for (i = 0; i <300; i++)
	{
		for (j = 0; j < 300; j++)
		{
			map[i][j] = '\0';
		}
	}
	
	FILE *abc, *cde;
	abc = fopen("input.txt","r");
	cde = fopen("output.txt","w");


	while (fgets(input, 10000, abc) != NULL)
	{	
		int row = 0;
		int word_length = 0;
		for (j = 0; j < (int)strlen(input); j++)
		{
			if (input[j] == ' ' || input[j] == ',' || input[j] == '.' || input[j] == '_' || input[j] == '\'' || input[j] == '"')
			{
				word_length = 0;
				row++;
				map[row][0] = input[j];
				row++;
			}
			else
			{
				map[row][word_length] = input[j];
				word_length++;
			}
		}
		for (i = 0; i < number; i++)
		{
			for (j = 0; j <= row; j++)
			{
				if (strcmp(map[j], name[i]) == 0)
					strcpy(map[j], "***");
			}
		}
		for (i = 0; i <= row; i++)
		{
			for (j = 0; j < (int)(strlen(map[i])); j++)
			{
				fprintf(cde, "%c", map[i][j]);
			}
		}
		for (int i = 0; i < 300; i++)
		{
			for (int j = 0; j < 300; j++)
			{
				map[i][j] = '\0';
			}
		}

	}

	fclose(abc);
	fclose(cde);
	system("pause");
	return 0;
}