#include <stdio.h>

int main() {
  int meterno = 1021, conu, curr, past_reading = 194, conType = 0;
  float chg, surchg = 0, gramt, netamt;

  printf("Meter no : %d\n", meterno);
  printf("Past meter reading : %d\n", past_reading);
  printf("Input the current meter reading: \n");
  scanf("%d", &curr);
  conu = curr - past_reading;
  printf("Unit consumed : %d", conu);
  printf("\n\n------------- Tariff charges -------------\n");
  printf("Domestic (less than 200) @1.2/unit\n");
  printf("(more than 200 upto 400) @1.5/unit\n");
  printf("(more than 400 upto 600) @1.8/unit\n");
  printf("(more than 600) @2.0/unit\n");

  printf("Non-domestic @2.0/unit\n");
  printf("Industrial @2.5/unit\n");

  printf("\n\n------------- Electricity Bill -------------\n");

  while (conType < 1 || conType > 3) {
    printf(
        "Select connection type: "
        "\n1.Domestic "
        "\n2.Non-domestic "
        "\n3.Industrial \n");
    scanf("%d", &conType);
  }

  printf("Enter the number of units consumed per month\n");
  scanf("%d", &conu);

  if (conType == 2) {
    chg = 2.0;
  } else if (conType == 3) {
    chg = 2.5;
  } else {
    if (conu < 200) {
      chg = 1.20;
    } else if (conu >= 200 && conu < 400) {
      chg = 1.50;
    } else if (conu >= 400 && conu < 600) {
      chg = 1.80;
    } else {
      chg = 2.0;
    }
  }

  gramt = conu * chg;
  netamt = gramt;

  if (gramt > 300) {
    surchg = gramt * 15 / 100.0;
    netamt = gramt + surchg;
  }

  if (netamt < 100) {
    netamt = 100;
  }

  printf("Amount Charges @Rs. %4.2f per unit : %8.2f\n", chg, gramt);
  printf("Surcharge Amount : %8.2f\n", surchg);
  printf("Net Amount Paid by the customer :%8.2f\n", netamt);
  printf("Due date for payment : 31-12-2022\n");
}
