#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int tempC2F(int);

int main()
{
	int A,C;
	printf("What the temperature<Celsius>:");
	scanf("%d", &A);
	C = tempC2F(A);
	printf("Celsius=%d, Fahrenheit=%d", A, C);
	system("pause");
	return 0;
}

int tempC2F(int A)
{
	return ((A * 9) / 5) + 32;
}