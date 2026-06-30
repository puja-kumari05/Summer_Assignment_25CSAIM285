#include<stdio.h>
#include<string.h>
int id[100],age[100],n=0;
float salary[100];
char name[100][50];

void addEmployee();
void displayEmployee();
void searchEmployee();
void updateSalary();
void deleteEmployee();

int main(){
    int choice;

    do{
        printf("\n*******Employee Management System*******\n");
        printf("1. Add Employee\n");
        printf("2. Display Employee\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            addEmployee();
            break;

            case 2:
            displayEmployee();
            break;

            case 3:
            searchEmployee();
            break;

            case 4:
            updateSalary();
            break;

            case 5:
            deleteEmployee();
            break;

            case 6:
            printf("Thank You\n");
            break;

            default:
            printf("Invalid Choice");
        }
    }while(choice!=6);
    return 0;
}

void addEmployee(){
    printf("\nEnter Employee ID:");
    scanf("%d",&id[n]);
    printf("Enter Employee Name:");
    scanf("%s",name[n]);
    printf("Enter Employee Age:");
    scanf("%d",&age[n]);
    printf("Enter Employee Salary:");
    scanf("%f",&salary[n]);

    n++;
    printf("Employee Added Successfully!\n");
    
}

void displayEmployee(){
    int i;
    if(n==0){
        printf("No Records found!\n");
        return;
    }
    printf("\nID\tName\t\tAge\tSalary\n");
    for(i=0;i<n;i++){
        printf("%d\t%s\t\t%d\t%.2f\n",id[i],name[i],age[i],salary[i]);
    }
}

void searchEmployee(){
    int search,i,found=0;
    printf("Enter Employee ID to Search:");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(id[i]==search){
            printf("\nEmployee Found\n");
            printf("ID :%d\n",id[i]);
            printf("Name :%s\n",name[i]);
            printf("Age :%d\n",age[i]);
            printf("Salary :%.2f\n",salary[i]);

            found=1;
            break;
        }
    }
    if(found==0)
    printf("Employee not found!\n");
}

void updateSalary(){
    int search,i,found=0;
    printf("Enter Employee ID:");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(id[i]==search){
            printf("Enter New Salary:");
            scanf("%d",&salary[i]);

            printf("Salary Updated Successfully!\n");
            found=1;
            break;
        }
    }
    if(found=0)
    printf("Employee not found!\n");
}

void deleteEmployee(){
    int search,i,j,found=0;
    printf("Enter Employee ID to delete:");
    scanf("%d",&search);
    for(i=0;i<n;i++){
        if(id[i]==search){
            for(j=i;j<n-1;j++){
                id[j]=id[j+1];
                age[j]=age[j+1];
                salary[j]=salary[j+1];
                strcpy(name[j],name[j+1]);
            }
            n--;
            found=1;
            printf("Employee Deleted Successfully!\n");
            break;
        }
    }
    if(found=0)
    printf("Employee not found!\n");
}