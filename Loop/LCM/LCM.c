#include<stdio.h>

int main()
{
    int n1,n2,lcm;

    printf("Enter two integers: ");
    scanf("%d %d",&n1,&n2);

    lcm=(n1>n2)?n1:n2;

    do
    {
        if(lcm%n1==0&&lcm%n2==0)
        {
            break;
        }
        lcm++;
    }
    while(1);

    printf("The LCM of %d and %d is %d",n1,n2,lcm);

    return 0;
}
