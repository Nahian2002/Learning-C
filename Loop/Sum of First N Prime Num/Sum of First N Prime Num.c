
#include<stdio.h>

int main()
{
    int n,count=1,num=2,sum=0;

    printf("Enter a number: ");
    scanf("%d",&n);

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
            sum+=num;
            count++;
        }
        num++;
    }

    printf("The sum of first %d Prime Numbers is %d",n,sum);

    return 0;
}
