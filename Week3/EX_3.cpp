#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int year;
	printf("Input an AD year(smaller than 2021):");
	scanf("%d", &year);
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		printf("%d year is leap year", year);
	else
		printf("%d year is common year", year);
	system("pause");
	return 0;
}