#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	printf("Please enter an positive integer:");
	scanf("%d", &a);
	printf("%d\n", a);
	do 
	{
		if (a % 2 != 0)
		{
			printf("%d\t", a = 3 * a + 1);
		}
		else
		{
			printf("%d\t", a = a / 2);
		}
	} while (a != 1);
	printf("1");
	system("pause");
	return 0;
}