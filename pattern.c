#include <stdio.h>

/*void main()
{	int n;
	printf("enter no of rows");
	scanf("%d",&n);
	for (int i =1 ;i<= n;i++)
		{for(int j=1;j<=i;j++)
			{printf("%d",i);}
		printf("\n");
		}
	
return;
}*/

void
main ()
{
  int n, i, j, k;
  printf ("enter no of rows");
  scanf ("%d", &n);
  for (int i = n; i > 0; i--)
    {
      for (int j = 1; j < i; j++)
	{
	  printf (" ");
	}

      for (int k = 0; k <= n - i; k++)
	{
	  printf ("*");
	}

      printf ("\n");
    }

  return;
}
