#include <stdio.h>
#include <stdlib.h>



void push()
{
	a[++top]=5;
	printf("after push\n");
  		//for (int i=0;i<10;i++)
		while(top!=0)
  		{
  		printf("%d\n",a[top]);
		top--;
  		}
}

void pop()
{       top--;
	printf("after pop\n");
  	//for (int i=0;i<10;i++)
 	while(top!=0)
  	{
  	printf("%d\n",a[top]);
	top--;
  	}
}



int main()
{ 
  int top=-1;
  int a[10] = {0,1,2,3,4};
  int no=5;
  
  push(a,top,no);
  pop(a,top);
  

}
