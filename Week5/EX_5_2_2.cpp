#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main()
{
	int n, x, i, j;
	double START = clock();
	for (n = 2; n <= 80000; n++)
	{
		x = sqrt(n);
		j = 0;
		for (i = 2; i < x; i++)
		{
			if (n%i == 0)
				j++;
		}
		if (j == 0)
			printf("%d\n", n);
	}
	double END = clock();
	printf("time: %lf\n", (END - START) / CLOCKS_PER_SEC);
	system("pause");
	return 0;
}