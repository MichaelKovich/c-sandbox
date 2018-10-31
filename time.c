#include <stdio.h>

int main()
{
  int minutes = 0;

  printf("Please enter the number of minutes you would like to convert: ");
  scanf("%d", &minutes);

  double days = ((minutes / 60.0) / 24.0);
  double years = (days / 365.0);

  printf("You provided %d minutes.\n", minutes);
  printf("This is equal to %.2f year(s) and %.2f day(s).\n", years, days);

  printf("Here is the sizeof result for int: %u bytes!\n", sizeof(int));
  printf("Here is the sizeof result for double: %u bytes!\n", sizeof(double));

  return 0;
}