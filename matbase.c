#include <stdio.h>
//do not do all this, cant change the base address of a matrix

void main()
{
  int a[3][3]={1,2,3,4,5,6,7,8,9};
	
	printf(" using a[i] the matrix is \n");
	
	for(int i=0;i<3;i++)
	{ for(int j=0;j<3;j++)
		{printf( "%d",a[i][j]);}
	printf("\n");
	}

	a+=1;
	print (" after a+1 the matrix is\n");
	for(int i=0;i<3;i++)
	{ for(int j=0;j<3;j++)
		{printf( "%d",a[i][j]);}
	printf("\n");
	}

	a++;
	print (" after a++ the matrix is\n");
	for(int i=0;i<3;i++)
	{ for(int j=0;j<3;j++)
		{printf( "%d",a[i][j]);}
	printf("\n");
	}
}

