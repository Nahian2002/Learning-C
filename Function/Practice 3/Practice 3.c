#include<stdio.h>

float ConvertToCelsius(float celsius);
float ConvertToFahrenheit(float fahrenheit);

int main()
{
    int choice;
    float F,C;

    printf("**Temperature Converter**\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Choose an option: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            printf("Enter Fahrenheit: ");
            scanf("%f",&F);

            C=ConvertToFahrenheit(F);
            printf("%.2f in Fahrenheit is %.2f Celsius",F,C);
        }
        break;
    case 2:
        {
            printf("Enter Celsius: ");
            scanf("%f",&C);

            F=ConvertToCelsius(C);
            printf("%.2f in Celsius is %.2f Fahrenheit",C,F);
        }
        break;
    default:
        printf("Invalid option!!!");
        break;
    }

    return 0;
}

float ConvertToFahrenheit(float fahrenheit)
{
    return (5.0/9.0)*(fahrenheit-32);
}
float ConvertToCelsius(float celsius)
{
    return (9.0/5.0)*celsius+32;
}
