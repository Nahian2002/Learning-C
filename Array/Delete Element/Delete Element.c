#include<stdio.h>

int main()
{
    int i,n,pos;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    if(n<=0)
        {
        printf("Enter a valid number!");

        return 0;
        }
    int a[n];

    printf("Enter Values for Array: \n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

    printf("Enter the element position to delete: ");
    scanf("%d",&pos);

    if(pos<1||pos>n)
        {
            printf("Invalid position! Please enter position 1 to %d",n);
        }
    else
        {
            for(i=pos-1;i<n-1;i++)
                {
                    a[i]=a[i+1];
                }
            n--;

            printf("Updated array: ");

            for(i=0;i<n;i++)
                {
                    printf("%d ",a[i]);
                }
        }

    return 0;
}
