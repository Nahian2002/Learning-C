#include<stdio.h>

struct employee
{
    char name[50];
    int dobday,dobmonth,dobyear;
    int startday,startmonth,startyear;
    float salary;
};

int main()
{
    int n,top=0;

    printf("Enter the total number of employees: ");
    scanf("%d",&n);

    struct employee employee[n];
    getchar();

    for(int i=0;i<n;i++)
    {
        printf("\nEnter details for employee %d: \n",i+1);
        printf("\nEnter Employee Name: ");
        fgets(employee[i].name,50,stdin);
        employee[i].name[strcspn(employee[i].name,"\n")]='\0';
        printf("Enter Date of Birth (DD/MM/YYYY): ");
        scanf("%d/%d/%d",&employee[i].dobday,&employee[i].dobmonth,&employee[i].dobyear);
        printf("Enter Starting Date (DD/MM/YYYY): ");
        scanf("%d/%d/%d",&employee[i].startday,&employee[i].startmonth,&employee[i].startyear);
        printf("Enter Salary: ");
        scanf("%f",&employee[i].salary);

        if(employee[i].salary>employee[top].salary)
        {
            top=i;
        }
        getchar();
    }

    printf("\n**Employee with the Highest Salary**");
    printf("\nName          : %s",employee[top].name);
    printf("\nDate of Birth : %02d/%02d/%02d",employee[top].dobday,employee[top].dobmonth,employee[top].dobyear);
    printf("\nStarting Date : %02d/%02d/%02d",employee[top].startday,employee[top].startmonth,employee[top].startyear);
    printf("\nSalary        : %.2f\n",employee[top].salary);

    return 0;
}
