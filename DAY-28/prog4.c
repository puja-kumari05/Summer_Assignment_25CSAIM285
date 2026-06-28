#include<stdio.h>
int main(){
    int phone[10];
    char name[10][30];
    int n=0,choice,i,search;

    do{
        printf("\n***Contact Management System***");
        printf("\n1. Add Contact");
        printf("\n2. Display Contacts");
        printf("\n3. Search Contact");
        printf("\n4. Exit");

        printf("\nEnter choice:");
        scanf("%d",&choice);

        switch(choice){

            case 1:
            printf("Enter book name:");
            scanf("%s",name[n]);
            printf("Enter phone number:");
            scanf("%d",&phone[n]);

            n++;
            printf("Contact Added Successfully!\n");
            break;

            case 2:
            if(n==0){
                printf("No contacts Found!\n");
            }else{
                printf("\nName\t\tPhone Number\n");
                for(i=0;i<n;i++){
                    printf("%s\t\t%d\n",name[i],phone[i]);
                }
            }
            break;

            case 3:
            printf("Enter phone number to search:");
            scanf("%d",&search);
            for(i=0;i<n;i++){
                if(phone[i]==search){
                    printf("\nContact Found!\n");
                    printf("Name :%s\n",name[i]);
                    printf("Phone :%d\n",phone[i]);
                    break;
                }
            }
            if(i==n){
                printf("Contact Not Found!\n");
            }
            break;

            case 4:
            printf("Program End");
            break;

            default:
            printf("Invalid Choice");
        }

    } while(choice!=4);
    return 0;
}