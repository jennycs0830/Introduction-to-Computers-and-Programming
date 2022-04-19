#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	int a = rand() % 100,b,c,d,guess;
	printf("Key:%d\n", a);
	b = 1, c = 1, d = 100;
	do
	{
		printf("(the %d times guess)%d~%d:",b,c,d);
		scanf("%d", &guess);
		b++;
		if(a > guess)
		{
			printf("too small!\n");
			c = guess;
		}
		else if(a < guess)
		{
			printf("too big!\n");
			d = guess;
		}
		else
		{
		printf("bingo!");
		}
	} while (guess != a);
	system("pause");
	return 0;
}