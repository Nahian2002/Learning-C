#include<stdio.h>

int isPrime(int N)
{
    if(N<=1)
    {
        return 0;
    }
    for(int i=2;i<=N/2;i++)
    {
        if(N%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;

    printf("Enter the value of N: ");
    scanf("%d",&n);

    if(isPrime(n))
        printf("%d is a Prime Number",n);
    else
        printf("%d is not a Prime Number",n);

    return 0;
}

