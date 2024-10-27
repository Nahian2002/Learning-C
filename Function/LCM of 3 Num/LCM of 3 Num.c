#include<stdio.h>

int LCM(int n1,int n2)
{
    int lcm=(n1>n2)?n1:n2;

    while(1)
    {
        if(lcm%n1==0&&lcm%n2==0)
        {
            return lcm;
        }
        lcm++;
    }
}

int main()
{
    int a,b,c,lcm,lcm2;

    printf("Enter three integers: ");
    scanf("%d %d %d",&a,&b,&c);

    lcm=LCM(a,b);
    lcm2=LCM(lcm,c);

    printf("The LCM of %d, %d and %d is %d",a,b,c,lcm2);

    return 0;
}

