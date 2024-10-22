#include<stdio.h>
#define PI 3.14159

double CalculateDiameter(double radius);
double CalculateArea(double radius);
double CalculateCircumference(double radius);

int main()
{
    double diameter,area,circumference,radius;

    printf("Enter the radius of the circle: ");
    scanf("%lf",&radius);

    diameter=CalculateDiameter(radius);
    area=CalculateArea(radius);
    circumference=CalculateCircumference(radius);

    printf("The Diameter of the Circle is %.2lf\n",diameter);
    printf("The Area of the Circle is %.2lf\n",area);
    printf("The Circumference of the Circle is %.3lf",circumference);

    return 0;
}

double CalculateDiameter(double radius)
{
    return 2*radius;
}

double CalculateArea(double radius)
{
    return PI*radius*radius;
}

double CalculateCircumference(double radius)
{
    return 2*PI*radius;
}

