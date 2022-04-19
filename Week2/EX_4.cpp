#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;

	printf("Input an positive integer(second):");
	scanf("%d", &a);

	printf("%d days ", a / 86400);
	printf("%d hr ", (a %= 86400) / 3600);
	printf("%d min ", ((a %= 86400) %=3600)/60);
	printf("%d s ", ((a %= 86400) %= 3600) % 60);

	return 0;
}

