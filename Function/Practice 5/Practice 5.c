#include<stdio.h>
#include<math.h>

float CalculateDiscriminant(float a,float b,float c);
void CalculateRoot(float a,float b,float discriminant);

int main()
{
    float a,b,c,discriminant;

    printf("Enter the value of a: ");
    scanf("%f",&a);

    if (a==0)
    {
        printf("Error: 'a' cannot be 0 in quadratic function!");

        return 1;
    }

    printf("Enter the value of b: ");
    scanf("%f",&b);
    printf("Enter the value of c: ");
    scanf("%f",&c);

    discriminant=CalculateDiscriminant(a,b,c);
    CalculateRoot(a,b,discriminant);

    return 0;
}

float CalculateDiscriminant(float a,float b,float c)
{
    return (b*b)-(4*a*c);
}
void CalculateRoot(float a,float b,float discriminant)
{
    float root1,root2;

    if(discriminant>0)
    {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);

        printf("The two real roots are %.2f and %.2f",root1,root2);
    }
    else if(discriminant==0)
    {
        root1=(-b)/(2*a);

        printf("The repeated root is %.2f",root1);
    }
    else
    {
        float realroot=(-b)/(2*a);
        float imaginaryroot=sqrt(-discriminant)/(2*a);

        printf("The two complex roots are %.2f + %.2fi and %.2f - %.2fi",realroot,imaginaryroot,realroot,imaginaryroot);
    }
}
