#include <stdio.h>
#include <string.h>

int main(void)
{
  char input[11];
  char reversedInput[11];
  int rIndex = 0;

  printf("Please enter a string of up to 10 characters.\n");
  scanf("%s", input);
  printf("\nOkay, you entered: %s\nLet me turn things around.", input);

  for (int i = strlen(input) - 1; i >= 0; i--)
  {
    reversedInput[rIndex] = input[i];
    rIndex++;
  }

  printf("\nHere's your new string, fresh from the oven: %s", reversedInput);

  return 0;
}