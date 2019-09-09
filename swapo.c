#include <stdio.h>


int swap( int *x,int*y)
{ int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf(" the swapped nos are %d and %d", *x,*y);
return 0;
}
	
void main()
{ printf("enter the two nos");
	int p;
	int q;
  int *a = &p;
  int *b = &q;

	scanf("%d %d",&p,&q);
	swap(a,b);
}
