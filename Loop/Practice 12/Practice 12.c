#include<stdio.h>

int main()
{
    int i,x,y;

    printf("Enter x and y: ");
    scanf("%d%d",&x,&y);

    for(i=1;x!=y;i++)
    {
        printf("%d, ",x*x);

    if(x<y)
        x++;
    else
       x--;
    }
    printf("Reached!");

    return 0;
}
