#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubblesort(int a[], int size);
void selectionsort(int a[], int size);
void insertionsort(int a[], int size);

int main()
{
	FILE *fptr1;
	fptr1 = fopen("data3.txt", "r");

	int a[25000],B[25000],C[25000],i=0;
	while (fscanf(fptr1, "%d", &a[i]) != EOF)
	{
		i++;
	}

	for (int j = 0; j < i; j++)
	{
		B[j] = a[j];
		C[j] = a[j];
	}

	double START, END,START2,END2,START3,END3, TIMEBUBBLE, TIMESELECT, TIMEINSERT;
	START = clock();
	bubblesort(a, i);
	END = clock();
	TIMEBUBBLE = END - START;
	printf("TIMEBUBBLE=%1f\n", TIMEBUBBLE / CLOCKS_PER_SEC);

	START2 = clock();
	selectionsort(B, i);
	END2 = clock();
	TIMESELECT = END2 - START2;
	printf("TIMESELECT=%1f\n", TIMESELECT / CLOCKS_PER_SEC);

	START3 = clock();
	insertionsort(C, i);
	END3 = clock();
	TIMEINSERT = END3 - START3;
	printf("TIMEINSERT=%1f\n", TIMEINSERT / CLOCKS_PER_SEC);

	for (int j = 1; j < i+1; j++)
	{
		printf("%d ", a[j-1]);
		if (j != 0 && j % 10 == 0)
		{
			printf("\n");
		}
	}

	fclose(fptr1);
	return 0;
}

void bubblesort(int a[], int size)
{
	int temp, k, pass;
	for (pass = 0; pass < size - 1; pass++)
	{
		for (k = 0; k < size - 1 - pass; k++)
		{
			if (a[k] > a[k + 1])
			{
				temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}
	}
}

void selectionsort(int a[], int size)
{
	int min,temp;
	for (int i = 0; i < size; i++)
	{
		min = i;
		for (int j = i; j < size-i; j++)
		{
			if (a[j] < a[j + 1])
			{
				min = j;
			}
		}
		temp = a[i];
		a[i] =a[min];
		a[min] = temp;
	}
}

void insertionsort(int a[], int size)
{
	int temp, j;
	for (int i = 0; i < size; i++)
	{
		temp = a[i];
		j = i - 1;
		while (temp < a[j] && j >= 0)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
}