#include <stdio.h>

void
main ()
{
  int x;
  printf
    ("who is the capatain of the indian cricket team?\n 1.dhoni\n2.Virat\n3.Hardik\n 4.Rohit\n");
  printf (" enter your choice\n");
  scanf ("%d", &x);

  switch (x)
    {
    case 1:
      {
	printf
	  ("Incorrect,Dhoni was the captain prior to 					Virat, who is currently leading the team");
	break;
      }
    case 2:
      {
	printf ("correct,Virat is currently leading the team");
	break;
      }
    case 3:
      {
	printf
	  ("Incorrect, Virat is currently leading the 					team, Hardik is just a member of the team");
	break;
      }
    case 4:
      {
	printf
	  ("Incorrect, Virat is currently leading the 					team, Rohit is just a member of the team");
	break;
      }
    default:
      {
	printf ("Choose a valid option");
      }
    }

  return;
}
