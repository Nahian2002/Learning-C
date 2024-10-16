#include<stdio.h>
int main()
{
    int a;

    printf("Enter your bill: ");
    scanf("%d",&a);

    if(a/3)
        printf("Divided by 3");
    else
        printf("Can't divided by 3");

    return 0;
}
