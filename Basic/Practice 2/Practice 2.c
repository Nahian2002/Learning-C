#include<stdio.h>
int main()
{
    float p,r,t,i;

    printf("**Simple Interest Calculator**\n");
    printf("Enter principal amount: ");
    scanf("%f",&p);
    printf("Enter rate of interest in percentage: ");
    scanf("%f",&r);
    printf("Enter time period in year: ");
    scanf("%f",&t);

    i=(p*r*t)/100;

    printf("Your interest will be %.2f",i);

    return 0;
}
