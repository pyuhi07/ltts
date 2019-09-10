#include <stdio.h>

void A(int n)
{
	if(n>0)
	{ 	A(n-1);
		printf("%d\n",n);
		A(n-1);
	  
	  //printf("%d\n",n);
	}
}

void main()
{ 
	int a = 3;
	A(a);
	



}
