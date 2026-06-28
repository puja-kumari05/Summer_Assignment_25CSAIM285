#include<stdio.h>
int main(){
    int choice,seats=10,ticket;

    do{
        printf("\n****Ticket Booking System****\n");
        printf("1. Book Ticket.\n");
        printf("2. Cancel Ticket.\n");
        printf("3. Check Available Seats.\n");
        printf("4. Exit.\n");

        printf("Enter choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter Number of tickets:");
            scanf("%d",&ticket);
            
            if(ticket<=seats){
                seats=seats-ticket;
                printf("Ticket Booked Successfully!\n");
                printf("Available Seats=%d\n",seats);
            }else{
                printf("Not enough seats available!\n");
            }
            break;

            case 2:
            printf("Enter number of tickets to cancel:");
            scanf("%d",&ticket);
            
            seats=seats+ticket;

            if(seats>10)
            seats=10;
            printf("Ticket Cancelled Successfully!\n");
            printf("Available Seats=%d\n",seats);
            break;

            case 3:
            printf("Available Seats =%d\n",seats);
            break;
            
            case 4:
            printf("Thank You\n");
            break;
            default:
            printf("Invalid Choice.\n");
        }
    }while(choice!=4);
    return 0;
}