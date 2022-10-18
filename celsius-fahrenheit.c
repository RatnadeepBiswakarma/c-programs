// Program to convert celsius to fahrenheit
#include <stdio.h>

int main() {
  float temperature, fahrenheit;
  // Prompt for temperature in celsius
  printf("Enter temperature in celsius \n");
  scanf("%f", &temperature);

  // convert to fahrenheit
  fahrenheit = (temperature * 9 / 5) + 32;

  // Print fahrenheit
  printf("fahrenheit: %fF\n", fahrenheit);
  return 0;
}
