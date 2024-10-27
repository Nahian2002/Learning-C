#include<stdio.h>

int GCD(int a,int b)
{
    if(a<0)
        a=-a;
    if(b<0)
        b=-b;
    while(b!=0)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

int main()
{
    int a,b;

    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);

    printf("The GCD of %d and %d is %d",a,b,GCD(a,b));

    return 0;
}
