#include<stdio.h>

int main()
{
    int i,min,n;

    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the numbers of the array: ");

    for(i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    min=arr[0];

    for(i=0;i<n;i++)
    {
        if(arr[i]>min)
            min=arr[i];
    }

    printf("The maximum number is %d",min);
    return 0;
}

