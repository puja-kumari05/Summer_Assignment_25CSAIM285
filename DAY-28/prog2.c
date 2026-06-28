#include<stdio.h>
int main(){
    int choice,accNo;
    char name[30];
    float balance=0,amount;
    do{
        printf("***Bank Account System***\n");
        printf("1. Create Account.\n");
        printf("2. Deposit Money.\n");
        printf("3. Withdraw Money.\n");
        printf("5. Check Balance.\n");
        printf("4. Exit.\n");

        printf("Enter choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter Account Number:");
            scanf("%d",&accNo);
            printf("Enter Account Holder Name:");
            scanf("%s",&name);
            printf("Enter Initial Balance:");
            scanf("%f",&balance);

            printf("Account Created Successfully.\n ");
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
            printf("\nAccount Number:%d",accNo);
            printf("\nAccount Holder Name:%d",name);
            printf("Current Balance:%.2f\n",balance);
            break;

            case 5:
            printf("Thank You\n");
            break;
            default:
            printf("Invalid Choice.\n");
        }
    }while(choice!=5);
    return 0;
}