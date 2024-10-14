#include<stdio.h>
int main()
{
    float a,b,c;
    char op;

    printf("Enter first number: \n");
    scanf(" %f",&a);

    printf("Enter your operator (+,-,*,/,%): \n");
    scanf(" %c",&op);

    printf("Enter second number: \n");
    scanf(" %f",&b);

    if(op=='+')
    {
       c=a+b;
       printf("The result is (%.2f %c %.2f) = %.2f\n",a,op,b,c);
    }
    else if(op=='-')
    {
        c=a-b;
        printf("The result is (%.2f %c %.2f) = %.2f\n",a,op,b,c);
    }
    else if(op=='*')
    {
        c=a*b;
        printf("The result is (%.2f %c %.2f) = %.2f\n",a,op,b,c);
    }
    else if(op=='/')
    {
        if(b==0)
        printf("Integer cannot be devided by 0\n");
        else
            {
            c=a/b;
        printf("The result is (%.2f %c %.2f) = %.2f\n",a,op,b,c);
            }
    }
    else if(op=='%')
    {
        int x = (int)a;
        int y = (int)b;

        if(y==0)
            printf("Integer cannot be modulo by 0\n");
        else
            {
            int z=x%y;
            printf("The result is (%d %c %d) = %d\n",x,op,y,z);}
            }
    else
        printf("Invalid Operator or Integer.\n");

    return 0;
}
