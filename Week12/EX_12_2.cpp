#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void matrix_reshape(int**, int**, int, int);
void matrix_transpose(int**, int**, int, int);


int main()
{
	int n, m, p, q;
	scanf("%d %d %d %d", &n, &m, &p, &q);

	int *t, **A, **B, **C;
	t = (int*)calloc(n*m, sizeof(int));
	A = (int**)calloc(n, sizeof(int*));
	B = (int**)calloc(p, sizeof(int*));
	C = (int**)calloc(m, sizeof(int*));

	for (int i = 0; i < n; i++)
	{
		*(A + i) = t + i * m;
	}
	for (int i = 0; i < n*m; i++)
	{
		scanf("%d", t + i);
	}
	matrix_reshape(A, B, p, q);
	printf("reshape:\n");
	for (int i = 0; i < p; i++)
	{
		for (int j = 0; j < q; j++)
		{
			printf("%d ", *(*(B + i) + j));
		}
		printf("\n");
	}
	matrix_transpose(A, C, n, m);
	printf("transpose:\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", *(*(C + i) + j));
		}
		printf("\n");
	}
}
void matrix_reshape(int **a, int **b, int p, int q)
{
	for (int i = 0; i < p; i++)
	{
		*(b + i) = *a + i * q;
	}
}
void matrix_transpose(int **a, int **c, int n, int m)
{
	int *t = (int*)calloc(m*n, sizeof(int));
	for (int i = 0; i < m; i++)
	{
		*(c + i) = t + i * n;
		for (int j = 0; j < n; j++)
		{
			*(*(c + i) + j) = *(*(a + j) + i);
		}
	}
}
