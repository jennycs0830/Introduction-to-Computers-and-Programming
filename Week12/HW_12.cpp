#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int m, n;
	printf("set the size of array A and B:");
	scanf("%d %d", &m, &n);
	char **A, **B;
	int p;
	A = (char**)calloc(m, sizeof(char*));
	B = (char**)calloc(n, sizeof(char*));
	for (int i = 0; i < m; i++)
	{
		*(A + i) = NULL;
	}
	for (int i = 0; i < n; i++)
	{
		*(B + i) = NULL;
	}
	while (1)
	{  
		printf("0:add a book, 1:delete a book, 2:exchange a books\n");
		scanf("%d", &p);
		if (p == 0)
		{
			int x, y, s;
			scanf("%d %d %d", &x, &y, &s);
			if (x == 0)
			{
				if (*(A + y) != NULL || y >= m)
				{
					break;
				}
				else
				{
					char *title;
					title = NULL;
					title = (char*)calloc(s, sizeof(char));
					scanf("%s", title);
					*(A + y) = (char*)realloc(title,s*sizeof(char));
				}
			}
			if (x == 1)
			{
				if (*(B + y) != NULL || y >= n)
				{
					break;
				}
				else
				{
					char *title;
					title = NULL;
					title = (char*)calloc(s,sizeof(char));
					scanf("%s", title);
					*(B + y) = (char*)realloc(title,s*sizeof(char));
				}
			}
		}
		if (p == 1)
		{
			int x, y;
			scanf("%d %d", &x, &y);
			if (x == 0)
			{
				if (y >= m)
				{
					break;
				}
				else
				{
					*(A + y) = NULL;
				}
			}
			if (x == 1)
			{
				if (y >= n)
				{
					break;
				}
				else
				{
					*(B + y) = NULL;
				}
			}
			
		}
		if (p == 2)
		{
			int x, y;
			scanf("%d %d", &x, &y);
			if (x >= m || y >= n)
			{
				break;
			}
			else
			{
				char *temp;
				temp = *(A + x);
				*(A + x) = *(B + y);
				*(B + y) = temp;
			}
		}
		printf("A:\n");
		for (int i = 0; i < m; i++)
		{
			if (*(A + i) == NULL)
			{
				printf("(null)\n");
			}
			else
			{
				printf("%s", *(A + i));
				printf("\n");
			}
		}
		printf("B:\n");
		for (int i = 0; i < n; i++)
		{
			if (*(B + i) == NULL)
			{
				printf("(null)\n");
			}
			else
			{
				printf("%s", *(B + i));
				printf("\n");
			}
		}
	}
}