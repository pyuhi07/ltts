#include <stdio.h>

void
main ()
{
  int x;
  printf (" enter your number\n");
  scanf ("%d", &x);

  for (int i = 1; i <= 10; i++)
    {
      printf ("%d \n", x * i);
    }


  return;
}
