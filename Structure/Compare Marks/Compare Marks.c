#include<stdio.h>

struct Student
{
    char name[50];
    int id;
    float mark;
};

int main()
{
    struct Student Student1,Student2;

    printf("Enter First Student Name: ");
    scanf("%s",&Student1.name);
    printf("Enter First Student Id  : ");
    scanf("%d",&Student1.id);
    printf("Enter First Student Mark: ");
    scanf("%f",&Student1.mark);

    printf("\nEnter Second Student Name: ");
    scanf("%s",&Student2.name);
    printf("Enter Second Student Id  : ");
    scanf("%d",&Student2.id);
    printf("Enter Second Student Mark: ");
    scanf("%f",&Student2.mark);

    if(Student1.mark>Student2.mark)
    {
        printf("\nName: %s\n",&Student1.name);
        printf("Id  : %d\n",Student1.id);
    }
    else if(Student2.mark>Student1.mark)
    {
        printf("\nName: %s\n",&Student2.name);
        printf("Id  : %d\n",Student2.id);
    }
    else
    {
        printf("\nBoth Student have equal marks\n");
    }
    return 0;
}
