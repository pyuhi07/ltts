#include <stdio.h>

//important prog

struct list {
	int data;
	struct list* next;
};
 

//This function prints contents of linked list starting from 
// the given node 
void printList(struct list* n) 
{ 
    while (n != NULL) { 
        printf(" %d ", n->data); 
        n = n->next; 
    } 
} 

void main()
{	 struct list* head = NULL;
	 struct list* second = NULL;
 	 struct list* third = NULL;

//allocate the lists in heap
// doing typecasting here as malloc returns a  pointer of type void . since only a struct pointer can point to a struct we need to typecast malloc void pointer to a struct

 head = (struct list*)malloc(sizeof(struct list));
 second = (struct list*)malloc(sizeof(struct list));
 third = (struct list*)malloc(sizeof(struct list));

 head->data = 7;
 head->next = second;

 second->data = 7;
 second->next = third;

 third->data = 7;
 third->next = NULL; 

 printList(head);




}
