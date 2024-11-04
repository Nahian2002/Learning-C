#include<stdio.h>

int main()
{
    int i,n;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int a[n],b[n],c[n];

    printf("Enter Values for Array 1: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter Values for Array 2: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d+%d=%d ",a[i],b[i],c[i]);
    }

    return 0;
}
