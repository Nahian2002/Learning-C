#include<stdio.h>

int main()
{
    int num,Factorial=1;

    printf("Enter a Number: ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        Factorial*=i;
    }
    printf("The Factorial of %d is %d",num,Factorial);

    return 0;
}
