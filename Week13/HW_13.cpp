#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

struct node {
	int id, value;
	struct node* next;
};

struct node* first = NULL;

void remove(int pos) {
	struct node* cur = first;
	for (int i = 0; i < pos - 1; i++)
		cur = cur->next;
	cur->next = cur->next->next;
}

void join(int id, int value) {
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->id = id;
	temp->value = value;
	temp->next = NULL;
	if (first == NULL) {
		first = temp;
		return;
	}
	struct node* cur = first;
	while (cur->next != NULL)
		cur = cur->next;
	cur->next = temp;
}

void insert(int id, int value, int pos) {
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->id = id;
	temp->value = value;
	temp->next = NULL;
	if (first == NULL) {
		first = temp;
		return;
	}
	if (pos == 0) {
		temp->next = first;
		first = temp;
		return;
	}
	struct node* cur = first;
	for (int i = 0; i < pos - 1; i++)
		cur = cur->next;
	temp->next = cur->next;
	cur->next = temp;
}

void printList() {

	struct node* cur = first;
	while (cur != NULL) {
		printf("ID money : %d %d\n", cur->id, cur->value);
		cur = cur->next;
	}

}



int main() {

	int line;
	char tc; // temp char

	scanf("%d", &line);
	tc = getchar();
	for (int i = 0; i < line; i++) {
		int a, b, c;
		int inputType = 1; // amount of numbers in input
		int cn = 0; // current number

		// input        
		while (1) {
			tc = getchar();
			if (tc == '\n') break;

			if (tc == ' ') {
				if (inputType == 1) a = cn;
				else if (inputType == 2) b = cn;
				inputType++;
				cn = 0;
			}
			else {
				cn = cn * 10 + (tc - '0');
			}
		}
		if (inputType == 1) a = cn;
		else if (inputType == 2) b = cn;
		else if (inputType == 3) c = cn;

		if (inputType == 1) {
			remove(a);
		}
		else if (inputType == 2) {
			join(a, b);
		}
		else {
			insert(a, b, c);
		}


	}

	printList();






	return 0;
}