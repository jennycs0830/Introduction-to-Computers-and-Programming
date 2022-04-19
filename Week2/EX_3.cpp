#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>



int main()
{
	int a;
	int b;

	printf("Please enter the first integer:");
	scanf("%d", &a);

	printf("Please enter the second integer:");
	scanf("%d", &b);

	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("a+b=%d\n", a + b);
	printf("a-b=%d\n", a - b);
	printf("a*b=%d\n", a * b);
	printf("a/b=%.2f\n",(float) a / b);
	printf("a%%b=%d\n", a % b);

	return 0;
}