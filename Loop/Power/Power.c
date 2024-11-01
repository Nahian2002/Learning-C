#include<stdio.h>

int main()
{
    double x,result=1;
    int y;

    printf("Enter the base number (x): ");
    scanf("%lf",&x);
    printf("Enter the exponent (y): ");
    scanf("%d",&y);

    if(y<0)
    {
        for(int i=0;i<-y;i++)
        {
            result*=x;
        }
        result=1.0/result;
    }
    else
        for(int i=0;i<y;i++)
        {
            result*=x;
        }
    printf("The result is %.3lf",result);

    return 0;
}
