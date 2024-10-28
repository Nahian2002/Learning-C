#include<stdio.h>

int main()
{
    int n,count=1,num=2;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("First %d Prime Numbers are: ",n);

    while(count<=n)
    {
        int isPrime=1;

        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime==1)
        {
            printf("%d ",num);
            count++;
        }
        num++;
    }

    return 0;
}
