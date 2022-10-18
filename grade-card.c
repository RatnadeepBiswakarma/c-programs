#include <stdio.h>

int main()
{
    float sub1, sub2, sub3;
    printf("Enter the marks for each subject\n");
    scanf("%f %f %f", &sub1, &sub2, &sub3);

    if ((sub1 + sub2 + sub3 / 300 * 100) < 40 || (sub1 / 100 * 100) < 33 || (sub2 / 100 * 100) < 33 || (sub3 / 100 * 100) < 33)
    {
        printf("You have not passed\n");
    }
    else
    {
        printf("You have passed\n");
    }
    return 0;
}
