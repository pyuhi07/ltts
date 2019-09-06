#include <stdio.h>

void
main ()
{
  int a = 3, b = 5;
  a = a ^ b;
  b = b ^ a;
  a = a ^ b;
  printf ("swapped nos are a=%d,b= %d", a, b);
  return;
}
