#include<stdio.h>
float SimpleInterest(float P,float R,float T);

int main()
{
    float P,R,T,Interest;

    printf("**Simple Interest Converter**");
    printf("\nEnter Principal Amount: ");
    scanf("%f",&P);
    printf("Enter Rate of Interest: ");
    scanf("%f",&R);
    printf("Enter TIme Period: ");
    scanf("%f",&T);

    Interest = SimpleInterest(P,R,T);

    printf("Your Interest is %.2f",Interest);

    return 0;
}

float SimpleInterest(float P,float R,float T)
{
    return (P*R*T)/100;
}
