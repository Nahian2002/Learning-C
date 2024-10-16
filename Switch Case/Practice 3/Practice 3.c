#include<stdio.h>
int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d",&a);

    switch(a<0)
    {
        case 1:
            printf("The number is negative.");
            break;
        case 0:
           {
              switch(a>0)
              {
                case 1:
                    printf("The number is positive");
                    break;
                case 0:
                    printf("The number is '0'");
                    break;
              }
              break;
           }


    }

}
