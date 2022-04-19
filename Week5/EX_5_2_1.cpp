#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
# include <time.h>

int main()
{
	int n, i, prime;
	double START = clock();
	for (n = 2; n <= 80000; n++)
	{
		prime = 0;
		for (i = 2; i < n; i++)
		{
			if (n%i == 0)
				prime++;
		}
		if (prime == 0)
			printf("%d\n", n);
	};
	double END = clock();
	printf("time: %lf\n", (END - START) / CLOCKS_PER_SEC);
	system("pause");
	return 0;
}