#include <stdio.h>
#include <stdlib.h>

int a[10];
int front=0;
int rear=0;


void enq(int x)
{  if (rear==(sizeof(a)-1))
	{printf("queue is full\n");}
	
   else
   a[++rear]=x ;
   

}

void deq()
{  if (front==rear )
	{printf("queue is empty \n");}
	
   else
   a[front++];
   
}
 
printq()
{ for (int i=front;i<=rear;i++)
	{ printf("%d",a[i]);
	  
	 }
 printf("\n");
}

void main()
{  
   int opt,no;
   printf("enter the initail pos of the queue\n");
   scanf("%d",&front);
   printf("enter the final pos of the queue\n");
   scanf("%d",&rear);
   
   
   for (int i=front;i<=rear;i++)
	{ printf("enter the  next no of the queue\n");
          scanf("%d",&a[i]);}

   printf("the queue is\n");
   printq();

  

   printf("press 0 to enqueue and 1 to dequeue\n");
   scanf("%d",&opt);

   if (opt==0)
	{
		printf("enter the number to be enqueue\n");
		scanf("%d",&no);
		enq(no);
		printf("after enq array is\n");
		printq();
	}

   else if(opt==1)
        { deq();
	  printf("after deq array is\n");
	  printq();
	  

	}


        else printf("invalid option chosen");
}

