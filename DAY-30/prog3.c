#include<stdio.h>
int main(){
    int id[100],age[100],n=0,choice,i,search,found;
    float salary[100];
    char name[100][50];

    do
    {
        printf("\n****Employee Management System****\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Enter Employee ID:");
            scanf("%d",&id[n]);
            printf("Enter Employee Name:");
            scanf("%s",name[n]);
            printf("Enter Age:");
            scanf("%d",&age[n]);
            printf("Enter Employee Salary:");
            scanf("%f",&salary[n]);

            n++;
            printf("Employee Record Added Successfully!\n");
            break;

            case 2:
            if(n==0){
                printf("No Employee Records Found!\n");
            }
            else{
                printf("\nID\tName\t\tAge\tSalary\n");
                for(i=0;i<n;i++){
                    printf("%d\t%s\t\t%d\t%.2f\n",id[i],name[i],age[i],salary[i]);
                }
            }
            break;

            case 3:
            printf("Enter Employee ID to Search:");
            scanf("%d",&search);

            found=0;
            for(i=0;i<n;i++){
                if(id[i]==search){
                    printf("\nEmployee Found\n");
                    printf("ID: %d\n",id[i]);
                    printf("Name: %s\n",name[i]);
                    printf("Age: %d\n",age[i]);
                    printf("Salary: %.2f\n",salary[i]);
                    found=1;
                    break;
                }
            }
            if(found=0){
                printf("Employee Not Found");
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