#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int randomNumber = 0;
  int numberOfAttempts = 5;
  int guess = 0;

  time_t t;

  // Initializing the random number generator
  srand((unsigned)time(&t));

  // Generating the random number
  randomNumber = rand() % 21;

  printf("\nWelcome to 'Guess the Number!'");
  printf("\nYour goal is to guess the number I'm thinking of. You'll have five attempts!");
  printf("\nLet's get started.\n");

  for (numberOfAttempts; numberOfAttempts > 0; --numberOfAttempts)
  {
    printf("\nYou have %d tr%s left.", numberOfAttempts, numberOfAttempts == 1 ? "y" : "ies");
    printf("\nWhat number am I thinking of? ");
    scanf("%d", &guess);

    if (guess == randomNumber)
    {
      printf("\nYou win! Congratulations!\n");
      return 0;
    }
    else if (guess < 0 || guess > 20)
      printf("The number is somewhere between 0 and 20. Try again!\n");
    else if (randomNumber > guess)
      printf("Sorry, that's a bit too low. %s\n", numberOfAttempts > 1 ? "Try again!" : "");
    else if (randomNumber < guess)
      printf("Sorry, that's a bit too high. %s\n", numberOfAttempts > 1 ? "Try again!" : "");
  }
  printf("\nGame Over! I was thinking of %d.\n", randomNumber);

  return 0;
}
