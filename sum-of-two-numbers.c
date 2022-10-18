#include <stdio.h>

int main() {
  float num1, num2;
  // Prompt for first number
  printf("Enter first number \n");
  scanf("%f", &num1);
  // Prompt for second number
  printf("Enter second number \n");
  scanf("%f", &num2);
  // Print sum
  printf("Sum is: %f\n", num1 + num2);
  return 0;
}
