#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many numbers do you wanna input: ");
    scanf("%d",&n);

    int evenCount= 0,oddCount= 0,positiveCount= 0,negativeCount= 0;

    for(int i=0;i<n;i++)
        {
        int x;

        printf("Enter your number: ");
        scanf("%d",&x);

        if(x%2==0)
            evenCount++;
        else
            oddCount++;
        if(x>0)
            positiveCount++;
        else if(x<0)
            negativeCount++;
    }

    printf("Even: %d\n",evenCount);
    printf("Odd: %d\n",oddCount);
    printf("Positive: %d\n",positiveCount);
    printf("Negative: %d\n",negativeCount);

    return 0;
}
