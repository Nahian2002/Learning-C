#include<stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c",&ch);

    switch(ch)
       {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("The alphabet is a vowel");
            break;
        default:
            if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
                printf("The alphabet is consonant");
            else
                printf("Error!! Put an alphabet");
       }
      return 0;
}
