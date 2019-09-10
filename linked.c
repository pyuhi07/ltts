#include <stdio.h>
#include <stdlib.h>

//important prog

struct list {
	int data;
	struct list* next;
};


//to take data from user
/*struct list* input(struct list* head)
{ int d = 0;
  int flag = 0;
  temp1 = (struct list*)malloc(sizeof(struct list));
  do{
	printf("Press 0 to continue and 1 to end");
	scanf("%d",&flag);
	
	struct list* temp = NULL;
	temp2 = (struct list*)malloc(sizeof(struct list));
  	printf("enter the data");
  	scanf("%d",&d);
	temp2->data = d;
 	temp2->next=NULL;

     }while(flag!=0);
  
  temp1=temp2;

  return temp;
}*/
  
  
 

//This function prints contents of linked list starting from 
// the given node 
void printList(struct list* n) 
{ 
    while (n !==NULL) { 
        printf("%d", n->data); 
        n = n->next; 
    } 
    printf("\n");
}

void printrec(struct list* n)
{  printf("%d",n->data);

  if (n->next=NULL)
        {return;}
  else 
        printrec(n->next);
}
 


struct list* start_node(struct list* n , int data)
{ 
struct list* newnode = (struct list*)malloc(sizeof(struct list));
  newnode->data = data;
  newnode->next = n;
  n= newnode;
  printf("with new node at start\n");
  printList(n);
  return n;
  
}

void final_node(struct list* n , int data)
{ 
struct list* finalnode = (struct list*)malloc(sizeof(struct list));
 
 struct list* temp = n;
 while(temp->next!=NULL)
	{temp=temp->next;}
 temp->next=finalnode;
 finalnode->next=NULL;
 finalnode->data=data;
 printf("with new node at last\n");
 printList(n);
}
 

void new_node(struct list* head, int data, int pos)
{ struct list* midnode = (struct list*)malloc(sizeof(struct list));
  struct list* prev = (struct list*)malloc(sizeof(struct list));

  midnode->data=data;
  prev=head;

 	 while(--pos)
	{ prev = prev->next;}
	
	midnode->next=prev->next;
	prev->next=midnode;
  printf("after inserting a node");
  printList(head);
}


void delete(struct list* n , int pos)
{ struct list* temp;
  struct list* prev = (struct list*)malloc(sizeof(struct list));
  
  if (pos==0)
  { 	temp=n;
        n=temp->next;
  }
  else{
  	prev=n;
  	while(--pos)
  	{ prev=prev->next;}
																																						    		temp=prev->next;
	prev->next=temp->next;

  	}

  printf("after deleting a node");
  printList(n);
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

 head->data = 1;
 head->next = second;

 second->data = 2;
 second->next = third;

 third->data = 3;
 third->next = NULL; 

 printf("original data by recursion\n");
 printrec(head);
 //printList(head);

 //int start , end;

 /*printf("what number to insert at the start?");
 scanf("%d",&start);

 struct list* c = start_node(head,start);

 printf("in main with new node\n");
 printList(c);

 printf("what number to insert at the end?");
 scanf("%d",&end);

 final_node(head,end);

 int pos,mid;

 printf("enter the data and the position of the new node");
 scanf("%d %d",&mid,&pos);
 
 new_node(head,mid,pos);*/

 //int posi;
 //printf("enter the position of the data to be deleted");
 //scanf("%d",&posi);
 
 //delete(head,posi);







}
