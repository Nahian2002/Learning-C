#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Input three sides of triangle: \n");
    scanf("%d %d %d",&a,&b,&c);

    if (a<=0||b<=0||c<=0)
        {
            printf("Side lengths must be positive integers.\n");
            return 0;
        }
    if(a+b+c!=180)
    {
        if ((a+b>c)&&(a+c>b)&&(b+c>a))
        {
        if(a==b&&b==c)
            {
                printf("This is an equilateral triangle.\n");
            }
        else if(a==b||a==c||b==c)
            {
                printf("This is an isosceles triangle.\n");
            }
        else
            {
                printf("This is a scalene triangle.\n");
            }
        }
    else
        {
            printf("Input sides do not form a valid triangle.\n");
        }
    }
    else
        {
            printf("Input sides do not form a valid triangle.\n");
        }

    return 0;
}

