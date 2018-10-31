#include <stdio.h>

int main()
{
  enum Companies
  {
    GOOGLE,
    FACEBOOK,
    XEROX,
    YAHOO,
    EBAY,
    MICROSOFT
  };

  enum Companies california = GOOGLE;
  enum Companies washington = MICROSOFT;
  enum Companies otherCalifornia = FACEBOOK;

  printf("Companies: %d %d %d ", california, washington, otherCalifornia);

  return 0;
}