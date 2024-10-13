#include<stdio.h>

int main()
{
    int a;
    float c,f,cc,cf;

    printf("||  Temperature Conversion Program  ||\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Choose your option '1' or '2': ");

    scanf("%d",&a);

    switch(a)
    {case 1:
        {
            printf("Enter your value in Celsius: ");

            scanf("%f",&c);
            cc=(c*(9.0/5.0)+32);

            printf("%.2f in Fahrenheit is %.2f",c,cc);
        }
    break;
    case 2:
        {
            printf("Enter your value in Fahrenheit: ");

            scanf("%f",&f);
            cf=((f-32)*(5.0/9.0));

            printf("%.2f in Fahrenheit is %.2f",f,cf);
        }
    break;
    default:
        printf("***Input is invalid***");}

        return 0;

}
