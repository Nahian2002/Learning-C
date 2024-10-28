#include<stdio.h>

int main()
{
    int m,n;

    printf("Enter two integers to find perfect number in between: ");
    scanf("%d %d",&m,&n);

    printf("The Perfect Numbers from %d to %d are: ",m,n);

    for(int i=m;i<=n;i++)
    {
        int sum=0;

        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
                sum+=j;
        }
        if(sum==i)
            printf("%d ",i);
    }
}
