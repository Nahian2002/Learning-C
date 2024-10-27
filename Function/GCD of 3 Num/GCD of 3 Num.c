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
    int a,b,c,gcd,gcd2;

    printf("Enter three integers: ");
    scanf("%d %d %d",&a,&b,&c);

    gcd=GCD(a,b);
    gcd2=GCD(gcd,c);

    printf("The GCD of %d, %d and %d is %d",a,b,c,gcd2);

    return 0;
}

