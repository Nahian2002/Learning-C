#include<stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d",&n);

    printf("The Prime Numbers from 1 to %d are: ",n);

    for(int num=2;num<=n;num++)
    {
        int isPrime=1;

        for(int i=2;i<=num/2;i++)
            if(num%i==0)
        {
            isPrime=0;
            break;
        }

        if(isPrime==1)
            printf("%d ",num);
    }

    return 0;
}
