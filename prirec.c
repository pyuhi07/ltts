#include <stdio.h>
#include <stdlib.h>



struct list {
	int data;
	struct list* next;
};





void printrec(struct list* n)
{  
  if (n==NULL)
        {return;}
  else 
        {printf("%d",n->data);
	printrec(n->next);
	return;}
}

void main()
{	 struct list* head = NULL;
	 struct list* second = NULL;
 	 struct list* third = NULL;

 head = (struct list*)malloc(sizeof(struct list));
 second = (struct list*)malloc(sizeof(struct list));
 third = (struct list*)malloc(sizeof(struct list));

 head->data = 1;
 head->next = second;

 second->data = 2;
 second->next = third;

 third->data = 3;
 third->next = NULL; 

 printf("original data by recursion\n");
 printrec(head);

}
