#include<stdio.h>
int main()
{
    int m,l;

    printf("**Month Days Calculation**");
    printf("\nEnter Month Number(1-12): ");
    scanf("%d",&m);

    switch(m)
    {
        case 1:
            printf("January has 31 days");
            break;
        case 2:
            {
                printf("Enter Year: ");
                scanf("%d",&l);

                if((l%4==0&&l%100!=0)||(l%400==0))
                    printf("February has 29 days");
                else
                    printf("February has 28 days");
            }
            break;
        case 3:
            printf("March has 31 days");
            break;
        case 4:
            printf("April has 30 days");
            break;
        case 5:
            printf("May has 31 days");
            break;
        case 6:
            printf("June has 30 days");
            break;
        case 7:
            printf("July has 31 days");
            break;
        case 8:
            printf("August has 31 days");
            break;
        case 9:
            printf("September has 30 days");
            break;
        case 10:
            printf("October has 31 days");
            break;
        case 11:
            printf("November has 30 days");
            break;
        case 12:
            printf("December has 31 days");
            break;
        default:
            printf("Enter a valid month number!");
    }
    return 0;
}

