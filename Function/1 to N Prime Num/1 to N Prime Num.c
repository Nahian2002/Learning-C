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

    printf("The Prime Numbers from 1 to %d are: ",n);

    for(int i=2;i<n;i++)
    {
        if(isPrime(i))
            printf("%d ",i);
    }

    return 0;
}
