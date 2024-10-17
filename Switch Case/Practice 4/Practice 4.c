#include<stdio.h>
int main()
{
    int a;

    printf("    **Travel Mode Selector**");
    printf("\nEnter your distance kilometers: ");
    scanf("%d",&a);

    switch(a)
    {
    case 0 ... 4:
        printf("Walk");
        break;
    case 5 ... 50:
        printf("Car");
        break;
    case 51 ... 500:
        printf("Train");
        break;
    default:
            if(a>500)
                printf("Airplane");
            else
                printf("Enter a valid distance!");
    }

}
