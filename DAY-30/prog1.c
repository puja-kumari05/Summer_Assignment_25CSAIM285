#include<stdio.h>
#include<string.h>
int main(){
    int roll[100],n=0,choice,i,search,found;
    float marks[100];
    char name[100][50];

    do
    {
        printf("\n****Student Record System****\n");
        printf("1. Add Student\n");
        printf("2. Display Student\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Enter Roll Number:");
            scanf("%d",&roll[n]);
            printf("Enter Name:");
            scanf("%s",name[n]);
            printf("Enter Marks:");
            scanf("%d",&marks[n]);

            n++;
            printf("Record Added Successfully!\n");
            break;

            case 2:
            if(n==0){
                printf("No Records Found!\n");
            }
            else{
                printf("\nRoll\tName\t\tMarks\n");
                for(i=0;i<n;i++){
                    printf("%d\t%s\t\t%.2f\n",roll[i],name[i],marks[i]);
                }
            }
            break;

            case 3:
            printf("Enter Roll Number to Search:");
            scanf("%d",&search);

            found=0;
            for(i=0;i<n;i++){
                if(roll[i]==search){
                    printf("\nStudent Found\n");
                    printf("Roll No: %d\n",roll[i]);
                    printf("Name: %s\n",name[i]);
                    printf("Marks: %.2f\n",marks[i]);
                    found=1;
                    break;
                }
            }
            if(found=0){
                printf("Student Not Found");
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