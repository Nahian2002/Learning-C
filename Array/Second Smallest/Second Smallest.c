#include<stdio.h>
#include<limits.h>

int main()
{
    int i,min,n,smin;

    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the numbers of the array: ");

    for(i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    min=arr[0];
    smin=INT_MAX;

    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
            {
                smin=min;
                min=arr[i];
            }
        else if(arr[i]<smin&&arr[i]!=min)
        {
            smin=arr[i];
        }
    }

    if(smin==INT_MAX)
        printf("All numbers are equal");
    else
        printf("The second minimum number is %d",smin);
    return 0;
}
