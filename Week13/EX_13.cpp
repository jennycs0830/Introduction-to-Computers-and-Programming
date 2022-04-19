#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	FILE *fptr;
	fptr = fopen("//AD1/Profiles/yjsun0830/Downloads/input.txt", "r");

	int student, attribute, queries;
	fscanf(fptr, "%d %d %d", &student, &attribute, &queries);

	char s[100];
	for (int i = 0; i < 6; i++)
	{
		fscanf(fptr, "%s", s);
	}

	typedef struct _grade
	{
		int subject[4];
	}grade;

	struct student
	{
		char name[10];
		int student_id;
		grade student_grade;
	};

	struct student student_list[100];

	for (int i = 0; i < student; i++)
	{
		fscanf(fptr, "%s %d %d %d %d %d", student_list[i].name, &student_list[i].student_id, &student_list[i].student_grade.subject[0], &student_list[i].student_grade.subject[1], &student_list[i].student_grade.subject[2], &student_list[i].student_grade.subject[3]);
	}

	char subject2[4];
	int score[4];

	for (int i = 0; i < queries; i++)
	{
		scanf("%s %d",subject2, &score[i]);
	}
	for (int i = 0; i < queries; i++)
	{
		if (i == 0)
		{
			printf("Chinese:");
			for (int j = 0; j < student; j++)
			{
				if (score[i] > student_list[j].student_grade.subject[0])
				{
					printf("%d ", student_list[j].student_id);
				}
			}
			printf("\n");
		}
		if (i == 1)
		{
			printf("Math:");
			for (int j = 0; j < student; j++)
			{
				if (score[i] > student_list[j].student_grade.subject[1])
				{
					printf("%d ", student_list[j].student_id);
				}
			}
			printf("\n");
		}
		if (i == 2)
		{
			printf("English:");
			for (int j = 0; j < student; j++)
			{
				if (score[i] > student_list[j].student_grade.subject[2])
				{
					printf("%d ", student_list[j].student_id);
				}
			}
			printf("\n");
		}
		if (i == 3)
		{
			printf("ComputerScience:");
			for (int j = 0; j < student; j++)
			{
				if (score[i] > student_list[j].student_grade.subject[3])
				{
					printf("%d ", student_list[j].student_id);
				}
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}