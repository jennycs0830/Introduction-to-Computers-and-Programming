#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int layers, i, j;
	int mat[30][30];
	printf("Input layers of pascal triangle(0<=layers<=9):");
	scanf("%d", &layers);
	mat[0][0] = 1;
	for (i = 0; i <= 9; i++)
	{
		j = i + 1;
		mat[i][i + 1] = 0;
	}
	for (i = 1; i <= 9; i++)
	{
		mat[i][0] = mat[i - 1][0];
		for (j = 1; j <= i; j++)
		{
			mat[i][j] = mat[i - 1][j] + mat[i - 1][j - 1];
		}
	}
	for (i = 0; i <= layers; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}