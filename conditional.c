#include <stdio.h>

int main()
{
  int score = 98;
  int goal = 90;
  int wins = 0;

  if (score >= goal)
  {
    wins++;
    printf("You win!\n");
    printf("Win Count: %d\n", wins);
  }
  else
  {
    printf("Better luck next time.\n");
  }

  score >= goal ? printf("You win!\n") : printf("Better luck next time.\n");

  switch (score)
  {
  case 98:
    printf("Score of 98");
    break;
  case 97:
    printf("Score of 97");
    break;
  default:
    printf("Unknown");
    break;
  }

  return 0;
}