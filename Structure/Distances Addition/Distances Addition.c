#include<stdio.h>

struct Dist{int feet,inch};

int main()
{
    struct Dist Dist1,Dist2,result;

    printf("Enter your first distance in this format (Feet,Inches): \n");
    scanf("%d %d",&Dist1.feet,&Dist1.inch);

    printf("Enter your second distance in this format (Feet,Inches): \n");
    scanf("%d %d",&Dist2.feet,&Dist2.inch);

    result.inch=Dist1.inch+Dist2.inch;
    result.feet=Dist1.feet+Dist2.feet;

    if(result.inch>=12)
        {
            result.feet+=result.inch/12;
            result.inch=result.inch%12;
        }

    printf("Result: %d %d",result.feet,result.inch);

    return 0;
}
