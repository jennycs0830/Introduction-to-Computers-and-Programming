#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,i,sum,n;
	printf("Please enter any integer:");
	scanf("%d", &a);
	printf("All perfect numbers less than this integer\n");
	for (i = 2; i <= a; i++)
	{
		sum = 0;
		for (n = 1; n <= i / 2; n++)
		{
			if (i%n == 0)
			{
				sum = sum + n;
			}
		}
		if (i == sum)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}