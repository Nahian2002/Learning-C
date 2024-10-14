#include<stdio.h>
int main()
{
    float a,res;

    printf("Enter your electricity usage in units: ");
    scanf("%f",&a);

    if(a>=0&&a<=100)
    {
        res=a*5;
        printf("Your bill is %.2f",res);
    }
    else if(a>100&&a<=200)
    {
        res=(100*5)+(a-100)*7;
        printf("Your bill is %.2f",res);
    }
    else if(a>200)
    {
        res=(100*5)+(100*7)+(a-200)*10;
        printf("Your bill is %.2f",res);
    }
    else
        printf("Enter a valid unit.");

    return 0;
}
