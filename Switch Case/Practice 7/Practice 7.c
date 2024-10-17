#include<stdio.h>
int main()
{
    int opt;
    float balance=1000.00;

    printf("**Simple Banking System**");
    printf("\n1. Deposit Money. \n2. Withdraw Money. \n3. Check Balance. \n4. Exit.\nChoose your option: ");
    scanf("%d",&opt);

    switch(opt)
    {
    case 1:
        {
           float deposit;

            printf("Enter deposit amount: ");
            scanf("%f",&deposit);

            if(deposit>0)
            {
                balance=(balance+deposit);

                printf("Your %.2f$ deposited successfully. \nYour current balance is %.2f$",deposit,balance);
            }
            else
                printf("Invalid deposit amount");
        }
        break;
    case 2:
        {
            float withdraw;

            printf("Enter withdrawal amount: ");
            scanf("%f",&withdraw);

            if(withdraw>0&&withdraw<=balance)
            {
                balance=(balance-withdraw);

                printf("Your %.2f$ withdrawn successfully. \nYour current balance is %.2f$",withdraw,balance);
            }
            else if(withdraw>balance)
                printf("Insufficient balance");
            else
                printf("Invalid withdrawal amount");
        }
        break;
    case 3:
        {
            printf("Your balance is %.2f",balance);
        }
        break;
    case 4:
        {
           printf("Exiting the system. \nThanks for using our system.");
        }
        break;
    default:
        printf("Choose a valid option.");
    }
    return 0;
}
