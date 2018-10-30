#include <stdio.h>

/****************************
C Sandbox | Michael Kovich
****************************/

int main()
{
  char str[100];
  int i;

  printf("Please enter two values: ");
  scanf("%s %d", str, &i);
  printf("\nYou entered: %s %d\n", str, i);

  return 0;
}