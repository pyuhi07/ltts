
#include <stdio.h>

int factorial ();

void
main ()
{
  int x;
  printf (" enter the no");
  scanf ("%d", &x);
  printf (" the factorial is %d \n", factorial (x));
  return;
}

int
factorial (int a)
{
  if (a <= 1)
    return 1;
  else
    return a * factorial (a - 1);
}
