#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int month;
	printf("Please input month:");
	scanf("%d", &month);
	switch (month)
	{
		case 3 :
		case 4:
		case 5:
			printf("Spring!");
			break;
		case 6:
		case 7:
		case 8:
			printf("Summer!");
			break;
		case 9:
		case 10:
		case 11:
			printf("Autumn!");
			break;
		case 12:
		case 1:
		case 2:
			printf("Winter!");
			break;
		default:
			printf("Wrong put!");
			break;
		}
	system("pause");
	return 0;
}