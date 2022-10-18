#include <stdio.h>

int main() {
  float principal, time, rateOfInterest, totalInterest, totalAmount;
  // prompt for principal amount
  printf("Enter principal amount\n");
  scanf("%f", &principal);
  // prompt time
  printf("Enter time in years\n");
  scanf("%f", &time);
  // prompt for rate of interest
  printf("Enter rate of interest\n");
  scanf("%f", &rateOfInterest);

  // calculate total interest
  totalInterest = (principal * rateOfInterest * time) / 100;
  // lump sum
  totalAmount = totalInterest + principal;

  printf("Total interest is %f and total amount is %f\n", totalInterest,
         totalAmount);
}
