#include <stdio.h>

void
main ()
{
  char x, y;
  printf (" enter your alphabet\n");
  scanf ("%c", &x);
  y = x - 32;
  printf (" capital number is %c\n", y);

  return;
}
