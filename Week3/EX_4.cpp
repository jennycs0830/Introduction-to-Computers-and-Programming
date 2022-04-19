#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c;
	printf("Input three positive integers(length of lenth):");
	scanf("%d%d%d", &a, &b, &c);
	if ((a + b > c) && (b + c > a) && (a + c > b))
	{
		printf("%d %d %d can form a triangle.\n", a, b, c);

		if ((a*a + b * b == c * c) || (b*b + c * c == a * a) || (c*c + a * a == b * b))
		{
			printf("%d %d %d can form a right triagle.\n", a, b, c);
			if ((a == b) || (b == c) || (c == a))
			{
				printf("%d %d %d can form a isosceles triagle.\n", a, b, c);
			}
			if (a == b && b == c && a == c)
			{
				printf("%d %d %d can form a equilateral triagle.\n", a, b, c);
			}

		}
		else if ((a*a + b * b > c * c) || (b*b + c * c > a * a) || (c*c + a * a > b * b))
		{
			printf("%d %d %d can form a acute triagle.\n", a, b, c);
			if ((a == b) || (b == c) || (c == a))
			{
				printf("%d %d %d can form a isosceles triagle.\n", a, b, c);
			}
			if (a == b && b == c && a == c)
			{
				printf("%d %d %d can form a equilateral triagle.\n", a, b, c);
			}

		}
		else
		{
			printf("%d %d %d can form a obtuse triagle.\n", a, b, c);
			if ((a == b) || (b == c) || (c == a))
			{
				printf("%d %d %d can form a isosceles triagle.\n", a, b, c);
			}
			if (a == b && b == c && a == c)
			{
				printf("%d %d %d can form a equilateral triagle.\n", a, b, c);
			}

		}
	}
	else
	{
		printf("%d %d %d cannot form a acute triagle.\n", a, b, c);
	}
	system("pause");
	return 0;
	}