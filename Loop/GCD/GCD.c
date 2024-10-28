#include<stdio.h>

int main()
{
    int n1,n2,gcd;

    printf("Enter two integers: ");
    scanf("%d %d",&n1,&n2);

    printf("The GCD of %d and %d is ",n1,n2);

    if(n1<0)
        n1=-n1;
    if(n2<0)
        n2=-n2;
    do
    {
        if(n1>n2)
            n1=n1-n2;
        else
            n2=n2-n1;
    }
    while(n2!=0);

    gcd=n1;
    printf("%d",gcd);

    return 0;
}
