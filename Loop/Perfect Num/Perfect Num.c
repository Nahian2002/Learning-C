#include<stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d",&n);

    printf("Perfect numbers between 1 and %d are: ", n);

    for(int num=1;num<=n;num++)
    {
        int sum=0;

        for(int i=1;i<=num/2;i++)
        {
            if(num%i==0)
                sum+=i;
        }
    if(sum==num)
    {
        printf("%d ",num);
    }

    }

    return 0;
}
