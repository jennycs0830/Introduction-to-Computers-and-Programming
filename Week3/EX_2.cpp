#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1, num2;
	printf("Please enter an integer:");
	scanf("%d", &num1);
	if (num1 %2 == 1)
		printf("%d is an odd:", num1);
	else if (num1 %2== 0)
		printf("%d is an even", num1);
	system("pause");
	return 0;

}