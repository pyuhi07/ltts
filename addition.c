#include <stdio.h>

int add (int a , int b)
{ if (!a)
    return b;
  else 
    return add((a&b)<<1,a^b);
}

void main ()
{ int a, b;
  printf (" enter the two numbers:");
  scanf (" %d %d",&a,&b);
  printf ("the addition is %d",add(a,b));
}

