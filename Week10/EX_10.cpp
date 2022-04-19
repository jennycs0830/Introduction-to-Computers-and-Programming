#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int binary_search(int[], int, int, int);

int main()
{
	int a[10], size, num, index;
	printf("Enter the size of the array:");
	scanf("%d", &size);
	for (int i = 0; i < size; i++)
	{
		a[i] = 0;
	}
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter th number you want to search:");
	scanf("%d", &num);
	index = binary_search(a, 0, size - 1, num);
	if (index == -1)
	{
		printf("Could not find the number.");
	}
	else
	{
		printf("The number is at the index %d", index);
	}
	system("pause");
	return 0;
}

int binary_search(int arr[], int start, int end, int num)
{
	int middle = (start + end) / 2;
	printf("the value of the middle point is %d\n", arr[middle]);
	if (arr[middle] > num)
	{
		return binary_search(arr, start, middle - 1, num);
	}
	else if (arr[middle] < num)
	{
		return binary_search(arr, middle + 1, end, num);
	}
	else if (arr[middle] == num)
	{
		return middle;
	}
	else
	{
		printf("Could not find the number.");
		return -1;
	}
}