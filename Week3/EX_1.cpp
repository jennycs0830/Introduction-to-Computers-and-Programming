#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char choice;
	int b, c;
	printf("What operator would you like to perform?\n");
	printf("A> Addition\n");
	printf("B> Subtraction\n");
	printf("C> Multiplication\n");
	printf("D> Division\n");
	scanf("%c", &choice);
	switch (choice)
	{
	case'a':
	case'A':
		printf("Please enter the first number:");
		scanf("%d", &b);
		printf("Please enter the second number:");
		scanf("%d", &c);
		printf("%f+%f=%f", (float)b, (float)c, (float)b + c);
		break;
	case'b':
	case'B':
		printf("Please enter the first number:");
		scanf("%d", &b);
		printf("Please enter the second number:");
		scanf("%d", &c);
		printf("%f-%f=%f", (float)b, (float)c, (float)b - c);
		break;
	case'c':
	case'C':
		printf("Please enter the first number:");
		scanf("%d", &b);
		printf("Please enter the second number:");
		scanf("%d", &c);
		printf("%f*%f=%f", (float)b, (float)c, (float)b * c);
		break;
	case'd':
	case'D':
		printf("Please enter the first number:");
		scanf("%d", &b);
		printf("Please enter the second number:");
		scanf("%d", &c);
		printf("%f/%f=%f", (float)b, (float)c, (float)b / c);
		break;
	}
	return 0;
}
