#include<stdio.h>

int main()
{
    int N,i;
    float avg,num,sum=0;

    printf("Enter how many numbers you want to average: ");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        printf("Enter your number: ");
        scanf("%f",&num);

        sum=sum+num;
    }
    avg=sum/N;

    printf("The average of your numbers are %f",avg);

    return 0;
}
