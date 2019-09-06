#include<stdio.h>

void main ()
{ 
	int a[] = {0};
	int n,i;
	printf("enter the array size");
	scanf ("%d",&n);
	printf("enter the array nos");
	
	for (int i=0;i<n;i++)	
		{scanf("%d\n",&a[i]);}

	for (int i=0;i<n;i++)
		{ a[i]=a[i]*a[i];}
	
	for (int i=0;i<n;i++)
		{printf ("%d",&a[i]);}

return;
}
