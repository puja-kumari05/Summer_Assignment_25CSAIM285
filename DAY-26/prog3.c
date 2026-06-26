#include<stdio.h>
int main(){
    int choice,amount;
    int balance=10000;
    do{
        printf("***ATM Simulation***\n");
        printf("1. Check Balance.\n");
        printf("2. Deposit.\n");
        printf("3. Withdraw.\n");
        printf("4. Exit.\n");

        printf("Enter choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("your current balance:%d\n",balance);
            break;
            case 2:
            printf("Enter amount to deposit:");
            scanf("%d",&amount);
            balance=balance+amount;
            printf("Amount deposited successfully.\n");
            break;
            case 3:
            printf("Enter amount to withdraw:");
            scanf("%d",&amount);
            if(amount<=balance){
                balance=balance-amount;
                printf("Please collect your cash.\n");
            }
            else{
                printf("Insufficient balance.\n");
            }
            break;
            case 4:
            printf("Thankyou for using ATM.\n");
            break;
            default:
            printf("Invalid Choice.\n");
        }
    }while(choice!=4);
    return 0;
}