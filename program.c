// https://www.codecademy.com/courses/learn-c/lessons/conditionals-c/exercises/review

/* Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.

Write a space.c program that helps him keep track of his target weight by: It should ask him what his earth weight is. Ask him to enter a number for the planet he wants to fight on. It should then compute his weight on the destination planet.

Here is the table of conversion:

# Planet  Relative Gravity
1 Mercury 0.38
2 Venus 0.91
3 Mars  0.38
4 Jupiter 2.34
5 Saturn  1.06
6 Uranus  0.92
7 Neptune 1.19

*/


#include <stdio.h>

int main() {

  float personWeightOnEarth;
  double weightOnPlanet;
  int planetNumber;


  printf("Enter your weight on earth\n");
  scanf("%f", &personWeightOnEarth);

  printf("Enter the planet number you want to fight on\n");
  scanf("%i", &planetNumber);

  switch (planetNumber) {
  case 1:
    weightOnPlanet = personWeightOnEarth * 0.38;
  case 2:
    weightOnPlanet = personWeightOnEarth * 0.91;
    break;
  case 3:
    weightOnPlanet = personWeightOnEarth *  0.38;
    break;
  case 4:
    weightOnPlanet = personWeightOnEarth * 2.34;
    break;
  case 5:
    weightOnPlanet = personWeightOnEarth *  1.06;
    break;
  case 6:
    weightOnPlanet = personWeightOnEarth *  0.92;
    break;
  case 7:
    weightOnPlanet = personWeightOnEarth * 1.19;
    break;
  default:
    goto fail;
    break;
  }
  if (planetNumber >= 1 || planetNumber <= 7) {
    printf("Your weight on destination planet is: %f\n", weightOnPlanet);
    return 0;
  }

fail:
  printf("Please enter a planet number between 1 and 7\n");
  return 0;
}
