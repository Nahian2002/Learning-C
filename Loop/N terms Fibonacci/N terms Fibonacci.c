#include<stdio.h>

int main()
{
    int n,temp,a=0,b=1;

    printf("Enter the number of terms: ");
    scanf("%d",&n);

    printf("The Fibonacci series is: ");

    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        temp=a+b;
        a=b;
        b=temp;
    }

    return 0;
}
