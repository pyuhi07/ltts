#include<stdio.h>

void main ()
{ 
	
	int n,i,j,m;
	printf("enter the array size");
	scanf ("%d %d",&n,&m);

	int a[n][m];
	printf("enter the array nos");
	
	for (int i=0;i<n;i++)	
		{for (int j=0;j<m;j++)	
			{scanf("%d",&a[i][j]);}
		}

	for (int i=0;i<n;i++)	
		{for (int j=0;j<m;j++)	
			{printf("%d", a[i][j]);}
		printf("\n");
		}
		


return;
}
