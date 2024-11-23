#include<stdio.h>

struct Student
{
    char name[50];
    int id;
    float mark;
};

int main()
{
    int n,top=0;

    printf("Enter the total numbers of student: ");
    scanf("%d",&n);

    struct Student student[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter student name: ");
        scanf("%s",&student[i].name);
        printf("Enter student id: ");
        scanf("%d",&student[i].id);
        printf("Enter student mark: ");
        scanf("%f",&student[i].mark);

        if(student[i].mark>student[top].mark)
        {
            top=i;
        }
    }
    printf("Topper of the class - \n");
    printf("Name  - %s\n",student[top].name);
    printf("Id    - %d\n",student[top].id);
    printf("Marks - %.2f\n",student[top].mark);

    return 0;
}
