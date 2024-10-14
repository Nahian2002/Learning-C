#include<stdio.h>
int main()
{
    float w,h,bmi;

    printf("Enter your Weight: ");
    scanf("%f",&w);

    printf("Enter your height in meters: ");
    scanf("%f",&h);

    bmi=w/(h*h);

    if(bmi<18.5)
        printf("You are underweight.");
    else if(bmi>=18.5&&bmi<=24.9)
        printf("You have a normal BMI.");
    else if(bmi>=25&&bmi<=29.9)
        printf("You are overweight.");

    return 0;
}
