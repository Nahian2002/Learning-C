#include<stdio.h>
int main()
{
    int choose;

    printf("**Unit Converter**\n");
    printf("1. Length: Meters to Feet \n2. Weight: Kilograms to Pounds \n3. Temperature: Celsius to Fahrenheit \n4. Area: Square Meters to Square Feet");
    printf("\nChoose your option: ");
    scanf("%d",&choose);

    switch(choose)
    {
    case 1:
        {
            float length,feet;

            printf("Enter your Length in Meters: ");
            scanf("%f",&length);

            feet=(length*3.28084);

            printf("%.2f Meters is %.2f feet",length,feet);
        }
        break;
    case 2:
        {
            float weight,pound;

            printf("Enter your Weight in Kilograms: ");
            scanf("%f",&weight);

            pound=(weight*2.20462);

            printf("%.2f Kilograms is %.2f Pounds",weight,pound);
        }
        break;
    case 3:
        {
            float temperature,fahrenheit;

            printf("Enter your Temperature in Celsius: ");
            scanf("%f",&temperature);

            fahrenheit=(temperature*9/5)+32;

            printf("%.2f Celsius is %.2f Fahrenheit",temperature,fahrenheit);
        }
        break;
    case 4:
        {
            float square_feet,area;

            printf("Enter your Area in Square Meters: ");
            scanf("%f",&area);

            square_feet=(area*10.7639);

            printf("%.2f Square Meters is %.2f Square Feet",area,square_feet);
        }
        break;
    default:
        {
            printf("Invalid option!\nChoose between 1-4");
        }
    }
    return 0;
}
