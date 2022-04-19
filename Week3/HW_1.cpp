#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c;
	printf("ax^2+bx+c=0\n");
	printf("Input the coefficient a,b,c\n");
	scanf("%d%d%d", &a, &b, &c);
	if (b*b - 4 * a*c> 0)
	{
		printf("%dx^2+%dx+%d=0\nhas two distinct real root", a, b, c);
	}
	else if (b*b - 4 * a*c < 0)
	{
		printf("%dx^2+%dx+%d=0\nhas no real root", a, b, c);
	}
	else
	{
		printf("%dx^2+%dx+%d=0\nhas double root", a, b, c);
	}
	system("pause");
	return 0;
}
