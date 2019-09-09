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
	
	int p,q;
	printf("enter the array size");
	scanf ("%d %d",&p,&q);

	int b[p][q];
	printf("enter the array nos");
	
	for (int i=0;i<p;i++)	
		{for (int j=0;j<q;j++)	
			{scanf("%d",&a[i][j]);}
		}

	for (int i=0;i<p;i++)	
		{for (int j=0;j<q;j++)	
			{printf("%d", a[i][j]);}
		printf("\n");
		}

	int c[10][10];

	if (m!=p)
		{printf("the matrices cannot be multiplied");}

	else
	 
	{ for (int i=0;i<n;i++)
		{for (int j=0;j<m;j++)
			{for (int k=0;k<q;k++)
				c[i][j]+= a[i][k]*b[k][j];}}}

	printf("the multiplied matrix is");	
	for (int i=0;i<n;i++)	
		{for (int j=0;j<q;j++)	
			{printf("%d", c[i][j]);}
		printf("\n");
		}


		


return;
}



