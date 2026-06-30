#include<stdio.h>
int main(){
    int id[100],n=0,choice,i,search,found;
    char book[100][50],author[100][50];

    do
    {
        printf("\n****Mini Library System****\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Enter Book ID:");
            scanf("%d",&id[n]);
            printf("Enter Book Name:");
            scanf("%s",book[n]);
            printf("Enter Author Name:");
            scanf("%s",author[n]);

            n++;
            printf("Book Added Successfully!\n");
            break;

            case 2:
            if(n==0){
                printf("No Books Available!\n");
            }
            else{
                printf("\nID\tBook Name\tAuthor\n");
                for(i=0;i<n;i++){
                    printf("%d\t%s\t%s\n",id[i],book[i],author[i]);
                }
            }
            break;

            case 3:
            printf("Enter Book ID to Search:");
            scanf("%d",&search);

            found=0;
            for(i=0;i<n;i++){
                if(id[i]==search){
                    printf("\nBook Found\n");
                    printf("ID: %d\n",id[i]);
                    printf("Book Name: %s\n",book[i]);
                    printf("Author: %s\n",author[i]);
                    found=1;
                    break;
                }
            }
            if(found=0){
                printf("Book Not Found");
            }
            break;

            case 4:
            printf("Thank You\n");
            break;

            default:
            printf("Invalid choice");
        }
    } while(choice!=4);
    return 0;
}