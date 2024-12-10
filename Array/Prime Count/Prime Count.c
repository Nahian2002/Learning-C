#include<stdio.h>

int main()
{
    int n,i,j,num;

    printf("Enter the number of total elements of the array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the integers in array: \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int primecount=0;

    for(i=0;i<n;i++)
    {
        num=arr[i];
        if(num<2)
            continue;

        int isprime=1;

        for(j=2;j<=num/2;j++)
        {
            if(num%j==0)
            {
                isprime=0;
                break;
            }
        }
        if(isprime)
            primecount++;
    }

    printf("The number of the prime number in the array is %d",primecount);

    return 0;
}
