#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int *compare(char[], char[], int);

int main()
{
	int n;
	char s[10], t[10];
	printf("enter the size n:");
	scanf("%d", &n);
	printf("enter the string s:");
	scanf("%s", s);
	printf("enter the string t:");
	scanf("%s",t);
	int *cmp = compare(s, t, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d", cmp[i]);
	}
	
	system("pause");
	return 0;
}

int *compare(char s[], char t[], int n)
{
	int *cmp = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		if (s[i] == t[i])
		{
			*(cmp + i) = 1;
		}
		else
		{
			*(cmp + i) = 0;
		}
	}
	return cmp;
}