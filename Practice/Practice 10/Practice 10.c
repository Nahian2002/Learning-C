#include<stdio.h>

int main()
{
    int a;

    printf("Enter you marks to see your Grade: ");
    scanf("%d",&a);

    if(a<=100&&a>=90)
        printf("You got an 'A'");
    else if(a<=89&&a>=80)
            printf("You got an 'B'");
    else if(a<=79&&a>=70)
            printf("You got an 'C'");
    else if(a<=69&&a>=60)
            printf("You got an 'D'");
    else if(a<=59&&a>=0)
            printf("You got an 'F'");
        else
            printf("\nEnter your valid mark");

    return 0;

}
