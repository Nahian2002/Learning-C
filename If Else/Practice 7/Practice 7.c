#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter 'x' xordinate: ");
    scanf("%d",&x);
    printf("Enter 'y' cordinate: ");
    scanf("%d",&y);

    if(x>0&&y>0)
        printf("The point (%d,%d) are on first quadrant.",x,y);
    else if(x>0&&y<0)
        printf("The point (%d,%d) are on second quadrant.",x,y);
    else if(x<0&&y<0)
        printf("The point (%d,%d) are on third quadrant.",x,y);
    else if(x<0&&y>0)
        printf("The point (%d,%d) are on forth quadrant.",x,y);
    else if(x==0&&y==0)
        printf("The point (%d,%d) are on the origin.",x,y);
    else if(x==0)
        printf("The point (%d,%d) are on the Y-axis.",x,y);
    else if(y==0)
        printf("The point (%d,%d) are on the X-axis.",x,y);

    return 0;

}
