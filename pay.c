#include <stdio.h>
#include <stdlib.h>

// CONSTANTS
#define HOURLYPAY 45.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 67.5

int main()
{
  // Declare our variables
  int hours = 0;
  double grossPay = 0.0;
  double taxes = 0.0;
  double netPay = 0.0;

  // Get some information from the employee
  printf("Enter the number of hours you worked this week: ");
  scanf("%d", &hours);

  // Calculate their gross pay
  if (hours <= 40)
    grossPay = hours * HOURLYPAY;
  else
  {
    grossPay = 40 * HOURLYPAY;
    double overtimePay = (hours - 40) * (HOURLYPAY * 1.5);
    grossPay += overtimePay;
  }

  // Calculate their taxes
  if (grossPay <= 300)
  {
    taxes = grossPay * TAXRATE_300;
  }
  else if (grossPay > 300 && grossPay <= 450)
  {
    taxes = 300 * TAXRATE_300;
    taxes += (grossPay - 300) * TAXRATE_150;
  }
  else if (grossPay > 450)
  {
    taxes = 300 * TAXRATE_300;
    taxes += 150 * TAXRATE_150;
    taxes += (grossPay - 450) * TAXRATE_REST;
  }

  // Calculate their net pay
  netPay = grossPay - taxes;

  // Display the results
  printf("Your gross pay this week is: %.2f\n", grossPay);
  printf("Your taxes this week is: %.2f\n", taxes);
  printf("Your net pay this week is: %.2f\n", netPay);

  return 0;
}
