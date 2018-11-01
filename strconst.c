#include <stdio.h>
#include <string.h>

#define TAXRATE 0.015
#define INSTRUCTIONS "Please enter a value."

#include <stdio.h>

int charCount(const char sampleString[])
{
  int result = 0;

  while (sampleString[result] != '\0')
    result++;

  return result;
}

int main(void)
{
  char str[] = "Hello";
  const int MONTHS = 12;
  const char message[] = "Here's a message.";

  // printf("%s %f %s %d", str, TAXRATE, INSTRUCTIONS, MONTHS);

  char myString[] = "My name is Michael";
  char temp[50];

  strncpy(temp, myString, sizeof(temp) - 1);

  printf("The length is: %d\n", strlen(myString));
  printf("The string is: %s\n", temp);

  char src[50], dest[50];

  strcpy(src, "This is source");
  strcpy(dest, "This is destination");
  strncat(dest, src, 15);

  printf("Final destination string: |%s|", dest);

  char buf[100];    // input buffer
  int nLetters = 0; // Number of letters in input
  int nDigits = 0;  // Number of digits in input
  int nPunct = 0;   // Number of punctuation characters in input

  printf("Enter an interesting string of less than %d characters:\n", 100);
  scanf("%s", buf); // Read a string into the buffer.

  int i = 0; // Buffer index

  while (buf[i])
  {
    if (isalpha(buf[i]))
      ++nLetters;
    else if (isdigit(buf[i]))
      ++nDigits;
    else if (ispunct(buf[i]))
      ++nPunct;
    ++i;
  }

  printf("\nYour string contained %d letters, %d digits, and %d punctuation characters.\n", nLetters, nDigits, nPunct);

  const char sampleString[] = "Here is a sample string.";
  printf("The string you entered is %d characters long!", charCount(sampleString));

  int result = strcmp("Here is a sample string", "Here is a sample");
  printf("\nYou said the strings are the same... the lie detector test said that's... %s", result == 0 ? "True!" : "False!");

  return 0;
}