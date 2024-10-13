#include<stdio.h>

int main()
{
    int a;

    printf("Enter an integer: ");

    scanf("%d",&a);

    if(a%2==0)
        printf("The integer is even");
    else
        printf("The integer is odd");

    return 0;
}
