#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m, n, p,i,j,k;

	printf("Enter the number of columns m and rows n of matrix A and the number of rows p of matrix B\n");
	scanf("%d %d %d", &m, &n, &p);
	int a[100][100], b[100][100],c[100][100];
	printf("Please enter the matrix A\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Please enter matirx B\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < p; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < p; j++)
		{
			c[i][j] = 0;
			for (k = 0; k < n; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < p; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}