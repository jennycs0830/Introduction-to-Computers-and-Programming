#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap(int, int);

int main()
{
	int a, b;
	printf("input a:");
	scanf("%d", &a);
	printf("input b:");
	scanf("%d", &b);
	swap(a, b);
	system("pause");
	return 0;
}

void swap(int a, int b)
{
	int *ptra, *ptrb;
	ptra = NULL;
	ptrb = NULL;
	ptra = &b;
	ptrb = &a;
	printf("a=%d ", *ptra);
	printf("b=%d", *ptrb);
}