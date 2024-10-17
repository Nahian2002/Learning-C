#include<stdio.h>
int main()
{
    int a;

    printf("**Calculate Area of Geometrical Shapes**");
    printf("\nWhat do you want to calculate:\n1. Calculate the area of circle.\n2. Calculate the area of a rectangle.\n3. Calculate the area of a triangle.\n4. Calculate the area of a square.\n");
    printf("Enter your option between 1 to 4: ");
    scanf("%d",&a);

    switch(a)
    {
    case 1:
        {
            float circle,r;

            printf("Enter the radius of the circle: ");
            scanf("%f",&r);

            circle=(3.1416*(r*r));

            printf("The area of the circle is %.2f",circle);
        }
        break;
    case 2:
        {
            float rectangle,length,width;

            printf("Enter the lenght of the rectangle: ");
            scanf("%f",&length);
            printf("Enter the width of the rectangle: ");
            scanf("%f",&width);

            rectangle=(length*width);

            printf("The area of the rectangle is %.2f",rectangle);
        }
         break;
    case 3:
        {
            float triangle,base,height;

            printf("Enter the base of the triangle: ");
            scanf("%f",&base);
            printf("Enter the height of the triangle: ");
            scanf("%f",&height);

            triangle=(0.5*(base*height));

            printf("The area of the triangle is %.2f",triangle);
        }
        break;
    case 4:
        {
            float square,side;

            printf("Enter the side of the square: ");
            scanf("%f",&side);

            square=(side*side);

            printf("The area of the square is %.2f",square);
        }
        break;
    default:
        printf("Enter a valid option (1-4)!");

    }
    return 0;
}
