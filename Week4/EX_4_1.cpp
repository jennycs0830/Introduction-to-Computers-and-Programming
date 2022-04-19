#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	for (int a = 1; a < 10; a++)
	{
		for (int b = 1; b < 10; b++)
		{
			printf("%d*%d=%d\t", a, b, a*b);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}