#include<stdio.h>

int main()
{
    int num,day;

    printf("Enter a number to find the Day: ");
    scanf("%d",&num);

    day=num%7;

    if(num>0)
    {
        switch(day)
        {
        case 1:
            printf("Saturday");
            break;
        case 2:
            printf("Sunday");
            break;
        case 3:
            printf("Monday");
            break;
        case 4:
            printf("Tuesday");
            break;
        case 5:
            printf("Wednesday");
            break;
        case 6:
            printf("Thursday");
            break;
        case 7:
            printf("Friday");
            break;
        }
    }
    else
        printf("Enter a valid number!!!");

    return 0;
}
