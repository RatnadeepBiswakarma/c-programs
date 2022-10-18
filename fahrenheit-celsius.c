// Program to convert celsius to fahrenheit
#include <stdio.h>

int main() {
  float temperature, celsius;
  // Prompt for temperature in celsius
  printf("Enter temperature in fahrenheit \n");
  scanf("%f", &temperature);

  // convert to celsius
  celsius = (temperature - 32) * 5 / 9;

  // Print celsius
  printf("celsius: %fC\n", celsius);
  return 0;
}
