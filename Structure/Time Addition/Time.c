#include<stdio.h>

struct Time
{
    int Hour,Minute,Second;
};

int main()
{
    struct Time time1,time2,result;

    printf("Enter first time in this format (Hours,Minutes,Seconds): \n");
    scanf("%d %d %d",&time1.Hour,&time1.Minute,&time1.Second);

    printf("Enter second time in this format (Hours,Minutes,Seconds): \n");
    scanf("%d %d %d",&time2.Hour,&time2.Minute,&time2.Second);

    result.Second=time1.Second+time1.Second;
    result.Minute=time1.Minute+time2.Minute+result.Second/60;
    result.Hour=time1.Hour+time2.Hour+result.Minute/60;

    result.Second=result.Second%60;
    result.Minute=result.Minute%60;

    printf("Result: %d %d %d",result.Hour,result.Minute,result.Second);

    return 0;
}
