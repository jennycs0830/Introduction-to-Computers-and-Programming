#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int *create(int, int);

int main()
{
	int a, n;
	printf("input a:");
	scanf("%d", &a);
	printf("input n:");
	scanf("%d", &n);
	int *ptr=create(n, a);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", ptr[i]);
	}
	system("pause");
	return 0;
}

int *create(int n, int a)
{
	int *ptr= (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		*(ptr+i) = a;
	}
	return ptr;
}