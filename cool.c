#include <stdio.h>

void
main ()
{
  char name[10];
  int x = 0;
  printf (" enter your name\n");
  scanf ("%s", name);
  printf ("how cool are you on a scale on 1 to 10?\n");
  scanf ("%d", &x);
  if (x > 7)
    {
      printf ("hey dudette %s ,you are damn cool\n", name);
    }
  else
    {
      printf ("better luck next time\n");
    }
  return;
}
