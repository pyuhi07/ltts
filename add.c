#include <stdio.h>

int
main ()
{
  int a = 0, b = 0;
  printf (" enter the two numbers:");
  scanf (" %d %d", &a, &b);
  printf ("the sum of two numbers %d and %d is %d \n", a, b, a + b);
  printf ("the difference of two numbers %d and %d is %d \n", a, b, a - b);
  printf ("the product of two numbers %d and %d is %d \n", a, b, a * b);
  printf ("the quotient of two numbers %d and %d is %d \n", a, b, a / b);
  return 0;
}
