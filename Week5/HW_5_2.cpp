#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int len, i, j, len2, count, k;
	char a[100], v[53] = { 0 }, var, temp;
	scanf("%s", a);
	len = strlen(a);
	k = 0;
	for (i = 0; i < len; i++)
	{
		var = a[i];
		count = 0;
		len2 = strlen(v);
		for (j = 0; j < len2; j++)
		{
			if (var == v[j])
				count++;
		}
		if (count == 0)
		{
			v[k] = var;
			k++;
		}
	}
	len2 = strlen(v);
	for (i = 0; i < len2; i++)
	{
		for (j = i + 1; j < len2; j++)
		{
			if (((v[i] >= 'A'&&v[i] <= 'Z') || (v[i] >= 'a'&&v[i] <= 'z')) || ((v[j] >= 'A'&&v[j] <= 'Z') || (v[j] >= 'a'&&v[i] <= 'z')));
			{
				if (v[i] < v[j])
				{
					temp = v[i];
					v[i] = v[j];
					v[j] = temp;
				}
			}
		}
	}
	for (i = 0; i < len2; i++)
	{
		for (j = i + 1; j < len2; j++)
		{
			if ((v[i] >= 97) && (v[j] >= 97))
			{
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
			if ((v[i] < 97) && (v[j] < 97))
			{
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
	for (i = 0; i < len2; i++)
	{
		printf("%c:", v[i]);
		for (j = 0; j <= len; j++)
		{
			if (a[j] == v[i])
				printf("%d ", j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}