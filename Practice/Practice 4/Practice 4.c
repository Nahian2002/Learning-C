#include<stdio.h>

int main()
{
    float C,F;
    printf("Enter your temperature in C: ");
    scanf("%f", &C);

    F =(C*(9.0/5.0)+32);

    printf("Temperature in F: %.2f", F);

    return 0;
}
