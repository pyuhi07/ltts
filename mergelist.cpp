/*
author : Ruhi Dongre
program to check if two linked lists are merged or not

*/
#include "stdafx.h"
#include<stdio.h>
#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

void getlist(struct Node* h)
{
	int x = 0;
	cout << ("press 1 to enter new node ,0 if entered all");
	cin >> x;

	if (x == 1)
	{
		struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
		struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));

		int dat = 0;
		cout << "enter the new data" << endl;
		cin >> dat;

		h = temp;
		if (h == NULL)
		{
			temp->data = dat;
			
			temp->next = NULL;

		}

		else
		{
			temp1->data = dat;
			temp->next = temp1;
			temp1->next = NULL;
			getlist(temp1->next);
		}

	}

}

void intersect(struct Node* h1, struct Node* h2,struct Node* h3)
{
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node*));
	struct Node* temp2 = (struct Node*)malloc(sizeof(struct Node*));

	temp1 = h1;
	while(temp1!=NULL)
	{
		temp1 = temp1->next;
	}
	temp1->next = h3;
	
	temp2 = h2;
	while (temp2 != NULL)
	{
		temp2 = temp2->next;
	}
	temp2->next = h3;

}


void printlist(struct Node* h)
{
	struct Node* temp = h;
	if (temp == NULL)
		return;
	else
		cout << temp->data << endl;
	cout << "address is:" << temp << endl;
	
	printlist(temp->next);
}

int getlen(struct Node* h)
{
	struct Node* temp = h;
	int count = 0;
	while (temp != '\0')
	{
		count++;
		temp->next;
	}
	return count;
}

void checkmerge(struct Node* h1,struct  Node* h2)
{
	struct Node* temp1 = h1;
	struct Node* temp2 = h2;

	int d = (getlen(h1) - getlen(h2));

	for (int i = 0; i < d; i++)
	{
		temp1->next;
	}


	for (int j = 0; j <= getlen(h2); j++)
	{
		if (temp1->next == temp2->next)
			cout << "merged list" << endl;
	}


}
int main()
{
	cout << "in main" << endl;

	struct Node* head1 = (struct Node*)malloc(sizeof(struct Node*));
	head1->data = 1;
	head1->next = NULL;
	cout << " enter the first list\n" << endl;
	getlist(head1);

	struct Node* head2 = (struct Node*)malloc(sizeof(struct Node*));
	head2->data = 11;
	head2->next = NULL;
	cout << "enter the second list\n" << endl;
	getlist(head2);

	
	cout << " the first list\n" << endl;
	printlist(head1);

	cout << " the second list\n" << endl;
	printlist(head2);

	struct Node* head3 = (struct Node*)malloc(sizeof(struct Node*));
	struct Node* first = (struct Node*)malloc(sizeof(struct Node*));
	struct Node* second = (struct Node*)malloc(sizeof(struct Node*));
	
	head3->data = 10;
	head3->next = first;
	first->data = 20;
	first->next = second;
	second->data = 30;
	second->next = NULL;

	intersect(head1, head2,head3);

	checkmerge(head1, head2);





	return 0;
}

