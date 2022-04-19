#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void hanoi(char, char, char, int);

int main()
{
	int n;
	printf("Enter a number which is mean how many disk at the first(A) pole");
	scanf("%d", &n);
  	hanoi('A', 'B', 'C', n);
	system("pause");
	return 0;
}

void hanoi(char from, char to, char buffer, int n)
{
	if (n == 1)
	{
		printf("Move disk from %c to %c\n", from, to);
		return;
	}
	hanoi(from, buffer,to, n - 1);
	printf("Move disk from %c to %c\n", from, to);
	hanoi(buffer, to, from, n - 1);
}