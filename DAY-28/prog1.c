#include<stdio.h>
int main(){
    int id[10],status[10];
    char name[10][30];
    int n=0,choice,i,search;

    do{
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Issue Book");
        printf("\n4. Return Book");
        printf("\n5. Exit");

        printf("\nEnter choice:");
        scanf("%d",&choice);

        switch(choice){

            case 1:
            printf("Enter book ID:");
            scanf("%d",&id[n]);

            printf("Enter book name:");
            scanf("%s",name[n]);

            status[n]=1;
            n++;
            break;

            case 2:
            printf("\nID\tBook Name\tStatus\n");
            for(i=0;i<n;i++){
                printf("%d\t%s\t\t",id[i],name[i]);
                if(status[i]==1){
                    printf("Available\n");
                }
                else{
                    printf("Issued\n");
                }
            }
            break;

            case 3:
            printf("Enter book ID:");
            scanf("%d",&search);
            for(i=0;i<n;i++){
                if(id[i]==search){
                    status[i]=0;
                    printf("Book Issued Successfully\n");
                }
            }
            break;

            case 4:
            printf("Enter book ID:");
            scanf("%d",&search);
            for(i=0;i<n;i++){
                if(id[i]==search){
                    status[i]=1;
                    printf("Book Returned Successfully\n");
                }
            }
            break;

            case 5:
            printf("Program End");
            break;

            default:
            printf("Invalid Choice");
        }

    } while(choice!=5);
    return 0;
}