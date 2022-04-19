#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c;
	printf("Please set a set of five digits as the input password:");
	scanf("%d", &a);
	b = 3;
	while (b > 0 && b <= 3)
	{
		printf("Please enter the password <%d times left>:", b);
		scanf("%d", &c);
		while (c != a)
		{
			b -= 1;
			break;
		}
		while (c == a)
		{
			printf("Password is correct welcome back!");
			b = 4;
			break;
		}
	}
	while (b <= 0)
	{
		printf("The password was entered incorrectly more than three times!!");
		break;
	}
	system("pause");
	return 0;
}