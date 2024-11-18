#include<stdio.h>
#include<limits.h>

int main()
{
    int i,max,n,smax;

    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the numbers of the array: ");

    for(i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    max=arr[0];
    smax=INT_MAX;

    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
            {
                smax=max;
                max=arr[i];
            }
        else if(arr[i]>smax&&arr[i]!=max)
        {
            smax=arr[i];
        }
    }

    if(smax==INT_MAX)
        printf("All numbers are equal");
    else
        printf("The second maximum number is %d",smax);
    return 0;
}

