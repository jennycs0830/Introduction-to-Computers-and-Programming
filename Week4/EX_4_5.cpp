#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	float area;
	srand(time(NULL));
	float X1 = 13.0*rand() / (RAND_MAX + 7.0) - 6.0;
	float Y1 = 13.0*rand() / (RAND_MAX + 7.0) - 6.0;
	float X2 = 13.0*rand() / (RAND_MAX + 7.0) - 6.0;
	float Y2 = 13.0*rand() / (RAND_MAX + 7.0) - 6.0;
	float X3 = 13.0*rand() / (RAND_MAX + 7.0) - 6.0;
	float Y3 = 13.0*rand() / (RAND_MAX + 7.0) - 6.0;
	printf("point1(%.1f,%.1f)\n", X1, Y1);
	printf("point1(%.1f,%.1f)\n", X2, Y2);
	printf("point1(%.1f,%.1f)\n", X3, Y3);
	area = (X1*Y2 + X2 * Y3 + X3 * Y1 - X2 * Y1 - X3 * Y2 - X1 * Y3) / 2;
	if (area >= 0)
	{
		printf("Area=%.1f", area);
	}
	else
	{
		printf("Area=%.1f", -area);
	}
	system("pause");
	return 0;
}