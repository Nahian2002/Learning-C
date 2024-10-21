#include<stdio.h>
int main()
{
    int n,sum=0;

    printf("Enter number: ");
    scanf("%d",&n);

    printf("The odd numbers are: ");

    for(int i=1;i<=n;i++)
    {
        printf("%d ",(2*i)-1);

        sum=sum+(2*i)-1;
    }
    printf("\nThe sum of the numbers are %d",sum);

    return 0;
}

