/****************************
C Sandbox | Michael Kovich
****************************/

#include <stdio.h>

int main()
{
  char str[100];
  int i;
  float jason = 23.333;
  double jason2 = 55.55555e+11;
  _Bool boolVariable = 1;

  printf("Please enter two values: ");
  scanf("%s %d", str, &i);
  printf("\nYou entered: %s %d\n", str, i);

  enum gender
  {
    male,
    female
  };

  enum gender myGender = male;
  enum gender anotherGender = female;
  _Bool isMale = (myGender == anotherGender);

  char newLine = '\n';
  char firstInitial = 'M';
  printf("Character: %c and Integer: %i\n", firstInitial, i);

  return 0;
}

// int main(int argc, char *argv[])
// {
//   int numberOfArguments = argc;
//   char *argument1 = argv[0];
//   char *argument2 = argv[1];

//   printf("Number of Arguments: %d\n", numberOfArguments);
//   printf("Program Name: %s\n", argument1);
//   printf("Argument 2: %s\n", argument2);
// }