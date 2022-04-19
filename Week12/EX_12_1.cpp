#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int **A = NULL;
	A = (int**)calloc(3, sizeof(int));
	*A = (int*)calloc(5, sizeof(int));
	*(A + 1) = (int*)calloc(4, sizeof(int));
	*(A + 2) = (int*)calloc(7, sizeof(int));

	printf("step 1:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *(*A + i));
	}
	printf("\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", *(*(A + 1) + i));
	}
	printf("\n");
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", *(*(A + 2) + i));
	}
	printf("\n");
	
	printf("step 2:\n");
	*(A + 1) = (int*)realloc(*(A + 1), 9 * sizeof(int));
	for (int i = 4; i < 9; i++)
	{
		*(*(A + 1) + i)= 1;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *(*A + i));
	}
	printf("\n");
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", *(*(A + 1) + i));
	}
	printf("\n");
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", *(*(A + 2) + i));
	}
	printf("\n");

	printf("step 3:\n");
	A = (int**)realloc(A, 4 * sizeof(int*));
	*(A + 3) = (int*)calloc(2, sizeof(int));
	for (int i = 0; i < 2; i++)
	{
		*(*(A + 3) + i) = 2;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *(*A + i));
	}
	printf("\n");
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", *(*(A + 1) + i));
	}
	printf("\n");
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", *(*(A + 2) + i));
	}
	printf("\n");
	for (int i = 0; i < 2; i++)
	{
		printf("%d ", *(*(A + 3) + i));
	}
	printf("\n");

	printf("step 4:\n");
	free(*(A + 1));
	*(A + 1) = (int*)realloc(*(A + 2), 7 * sizeof(int));
	*(A + 2) = (int*)realloc(*(A + 3), 2 * sizeof(int));
	A = (int**)realloc(A, 3 * sizeof(int*));
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *(*A + i));
	}
	printf("\n");
	for (int i = 0; i < 7; i++)
	{
		printf("%d ", *(*(A + 1) + i));
	}
	printf("\n");
	for (int i = 0; i < 2; i++)
	{
		printf("%d ", *(*(A + 2) + i));
	}
	printf("\n");

	system("pause");
	return 0;
}