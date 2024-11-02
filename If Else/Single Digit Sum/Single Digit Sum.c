#include <stdio.h>

int main()
{
    int num,result;

    printf("Enter an integer: ");
    scanf("%d",&num);

    if (num==0)
        {
        result=0;
        }
    else
        {
        result = 1+(num-1)%9;
        }

    printf("The final single-digit sum is: %d\n",result);

    return 0;
}

