#include <stdio.h>

int mod ();

void
main ()
{
  int x, y;
  printf (" enter the two nos");
  scanf ("%d %d", &x, &y);
  printf (" the remainder is %d \n", mod (x, y));
  return;
}

int
mod (int a, int b)
{
  int c = a % b;

  return c;
}
