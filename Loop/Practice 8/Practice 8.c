#include<stdio.h>
int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
        printf("%d of cube is %d\n",i,(i*i*i));

    return 0;
}
