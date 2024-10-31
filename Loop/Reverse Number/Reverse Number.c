#include<stdio.h>

int main()
{
    int num,ReverseNumber=0,Remainder;

    printf("Enter a number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        Remainder=num%10;
        ReverseNumber=ReverseNumber*10+Remainder;
        num=num/10;
    }

    printf("The Reverse Number is: %d",ReverseNumber);

    return 0;
}
