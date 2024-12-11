#include<stdio.h>

int main()
{
    int i,max,n;

    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the numbers of the array: ");

    for(i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    max=arr[0];

    for(i=0;i<n;i++)
    {
        if(arr[i]>min)
            max=arr[i];
    }

    printf("The maximum number is %d",max);
    return 0;
}

