#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c,x,sum;
	printf("Input four positive integers(a b c x):");
	scanf("%d %d %d %d", &a, &b, &c, &x);

	sum = a * x*x + b * x + c;
	printf("%d", a);
	printf("x^2 + %d", b);
	printf("x + %d", c);
	printf(" = %d", sum);

	system("pause");
	return 0;
}