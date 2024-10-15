#include<stdio.h>
int main()
{
    int n;

    printf("Enter A Number: ");
    scanf("%d",&n);

    for(int i=0;i<=10;i++)
        printf(" %d  x %3d = %4d\n",n,i,n*i);

    return 0;
}
