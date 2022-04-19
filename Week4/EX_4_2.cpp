#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, num;
	printf("Please enter an positive integer:");
	scanf("%d", &a);
	printf("The factors of %d are:", a);
	for (int b = 1; a >= b; b++)
	{
		if (a%b == 0)
			printf("%d ", b);
	}
	system("pause");
	return 0;
}