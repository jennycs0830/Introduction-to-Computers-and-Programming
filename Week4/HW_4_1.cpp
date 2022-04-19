#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c, d,temp;
	printf("Please enter the first positive integer:");
	scanf("%d", &a);
	printf("Please enter the second positive integer:");
	scanf("%d", &b);
	if (a >= b)
	{
		c = a;
		d = b;
	}
	else
	{
		c = b;
		d = a;
	}
	while (c%d != 0)
	{
		temp = c % d;
		c=d;
		d = temp;
	}
	printf("%d", d);
	system("pause");
	return 0;
}