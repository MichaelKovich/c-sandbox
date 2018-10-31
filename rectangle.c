#include <stdio.h>

int main()
{
  double width = 0.0;
  double height = 0.0;
  double perimeter = 0.0;
  double area = 0.0;

  printf("Please enter the width of your rectangle: ");
  scanf("%lf", &width);

  printf("Please enter the height of your rectangle: ");
  scanf("%lf", &height);

  perimeter = (width + height) * 2.0;
  area = (width * height);

  printf("Width:  %.2f, Height: %.2f, Perimeter: %.2f\n", width, height, perimeter);
  printf("Area: %.2f\n", area);

  return 0;
}