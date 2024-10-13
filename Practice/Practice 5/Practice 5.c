#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter three numbers: ");

    scanf("%f%f%f",&a,&b,&c);

    if(a>b&&a>c)
        printf("A is the greatest number");

    if(b>a&&b>c)
        printf("B is the greatest number");

    if(c>b&&c>a)
        printf("C is the greatest number");


    return 0;

}
