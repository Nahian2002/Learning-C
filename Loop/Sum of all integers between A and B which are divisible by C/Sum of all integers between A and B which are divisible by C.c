#include<stdio.h>

int main()
{
    int a,b,c,sum=0;

    printf("\nEnter the start point: ");
    scanf("%d",&a);
    printf("Enter the end point: ");
    scanf("%d",&b);
    printf("Enter an integer to divide the numbers with: ");
    scanf("%d",&c);

    printf("All integers between %d to %d which is divisible by &d are: ",a,b,c);

    for(int i=a;i<=b;i++)
    {
        if(i%c==0)
            {
            printf("%d ",i);
            sum=sum+i;
            }

    }
    printf("\nThe sum: %d",sum);

    return 0;
}

