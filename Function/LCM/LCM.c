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
    int a,b,lcm;

    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);

    lcm=LCM(a,b);

    printf("The LCM of %d and %d is %d",a,b,lcm);

    return 0;
}

