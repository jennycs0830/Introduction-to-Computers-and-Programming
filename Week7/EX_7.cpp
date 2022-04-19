#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Intersection(int[], int[]);
void Union(int[], int[]);
void Substraction(int[], int[],char,char);

int main()
{
	int A[10] = { 2,2,2,4,4,4,6,6,6,8 };
	int B[10] = { 1,1,1,3,3,3,5,5,5,7 };

	Intersection(A, B);
	Union(A, B);
	Substraction(A, B,'A','B');
	Substraction(B, A,'B','A');

}

void Intersection(int A[], int B[])
{
	int C[10], D[10];
	int k = 0, K = 0;
	for (int a = 0; a < 10; a++)
	{
		for (int c = 0; c < 10; c++)
		{
			if (A[a] == C[c])
				break;
			if (c == 9) {
				C[k] = A[a];
				k++;
			}
		}
	}
	for (int c =0; c < k; c++)
	{
		for (int b = 0; b < 10; b++)
		{
			if (B[b] == C[c])
			{
				D[K] = C[c];
				K++;
				break;
			}
		}
	}
	printf("A¡äB=");
	for (int i = 0; i < K; i++)
	{
		printf("%d ", D[i]);
	}
	printf("\n");
}

void Union(int A[], int B[])
{
	int C[10], D[20];
	for (int c = 0; c < 10; c++) {
		C[c] = 0;
	}
	int same = 0, k = 0, K;
	for (int a = 0; a < 10; a++)
	{
		for (int c = 0; c < 10; c++)
		{
			if (A[a] == C[c])
				break;
			if (c == 9) {
				C[k] = A[a];
				k++;
			}
		}
	}
	for (int i = 0; i < k; i++)
	{
		D[i] = C[i];
	}
	for (int b = 0; b < 10; b++)
	{
		for (int d = 0; d < k; d++)
		{
			if (B[b] == D[d])
				break;
			if (d == k - 1) {
				D[k] = B[b];
				k++;
			}
		}
	}
	printf("A¡åB=");
	for (int i = 0; i < k; i++)
	{
		printf("%d ", D[i]);
	}
	printf("\n");
}

void Substraction(int A[], int B[],char a,char b)
{
	int C[10], D[20];
	for (int c = 0; c < 10; c++) {
		C[c] = 0;
	}
	int x = 0, k = 0, K;
	for (int a = 0; a < 10; a++)
	{
		for (int c = 0; c < 10; c++)
		{
			if (A[a] == C[c])
				break;
			if (c == 9) {
				C[k] = A[a];
				k++;
			}
		}
	}
	for (int c = 0; c < k; c++)
	{
		for (int b = 0; b < 10; b++)
		{
			if (C[c] == B[b])
				break;
			if (b == 9) {
				D[x] = C[c];
				x++;
			}
		}
	}
	printf("%c-%c=",a,b);
	for (int i = 0; i < x; i++)
	{
		if (D[i] == 0)
			break;
		else
			printf("%d ", D[i]);
	}
	printf("\n");
}