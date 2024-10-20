#include<stdio.h>
float add(float num1,float num2);
float sub(float num1,float num2);
float mul(float num1,float num2);
float div(float num1,float num2);

int main()
{
    int choice;
    float num1,num2,result;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Choose an option: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
        printf("Enter first number: ");
        scanf("%f",&num1);
        printf("Enter second number: ");
        scanf("%f",&num2);

        result=add(num1,num2);

        printf("%.2f + %.2f = %.2f\n",num1,num2,result);
        }
    break;
    case 2:
        {
        printf("Enter first number: ");
        scanf("%f",&num1);
        printf("Enter second number: ");
        scanf("%f",&num2);

        result=sub(num1,num2);

        printf("%.2f - %.2f = %.2f\n",num1,num2,result);
        }
    break;
    case 3:
        {
        printf("Enter first number: ");
        scanf("%f",&num1);
        printf("Enter second number: ");
        scanf("%f",&num2);

        result=mul(num1,num2);

        printf("%.2f * %.2f = %.2f\n",num1,num2,result);
        }
    break;
    case 4:
        {
        printf("Enter first number: ");
        scanf("%f",&num1);
        printf("Enter second number: ");
        scanf("%f",&num2);

        if(num2==0)
            printf("Error: Division by zero is undefined\n");
        else
        {
            result=div(num1,num2);

            printf("%.2f / %.2f = %.2f\n",num1,num2,result);
        }
        }
    break;
    default:
        {
            printf("Error! Choose a valid option!\n");
        }
    }
    return 0;
}

    float add(float num1,float num2)
    {
    return num1+num2;
    }

    float sub(float num1,float num2)
    {
    return num1-num2;
    }

    float mul(float num1,float num2)
    {
    return num1*num2;
    }

    float div(float num1,float num2)
    {
    return num1/num2;
    }
