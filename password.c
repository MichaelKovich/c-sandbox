#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
  srand((unsigned int)(time(NULL)));

  int i;
  char pass[55];
  char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789^$*.[]{}()?-!@#&/,><':;|_~`\"\%\\";

  printf("Press enter to generate a 55-character long password.\n");
  getchar();

  for (i = 0; i < sizeof(pass); i++)
    printf("%c", characters[rand() % (sizeof characters - 1)]);

  printf("\n\n");
}