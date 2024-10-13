#include<stdio.h>

int main()
{
    char c;

    printf("Enter a character: ");

    scanf("%c",&c);

    if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'))
        printf("It is alphanumeric");
    else
        printf("It is not alphanumeric");

    return 0;
}
