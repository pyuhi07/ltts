#include <stdio.h>

void
main ()
{
  char x;
  printf (" enter your alphabet\n");
  scanf ("%c", &x);

  if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A'
      || x == 'E' || x == 'I' || x == 'O' || x == 'U')
    {
      printf ("It is a vowel");
    }
  else
    {
      printf (" not a vowel");
    }

  return;
}
