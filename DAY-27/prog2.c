#include<stdio.h>
int main(){
    int id;
    char name[50];
    float salary;

    printf("***Employee Management System***\n");

    //input
    printf("Enter employee ID:");
    scanf("%d",&id);
    printf("Enter employee name:");
    scanf("%s",&name);
    printf("Enter employee salary:");
    scanf("%f",&salary);

    //display
    printf("\n-----Employee Record-----\n");
    printf("ID:%d\n",id);
    printf("Name:%s\n",name);
    printf("Salary:%.2f\n",salary);

    return 0;
}