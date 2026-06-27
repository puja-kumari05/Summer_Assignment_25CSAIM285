#include<stdio.h>
int main(){
    int roll;
    char name[50];
    float marks;

    printf("***Student Record Management System***\n");

    //input
    printf("Enter roll:");
    scanf("%d",&roll);
    printf("Enter name:");
    scanf("%s",&name);
    printf("Enter marks:");
    scanf("%f",&marks);

    //display
    printf("\n-----Student Record-----\n");
    printf("Roll number:%d\n",roll);
    printf("Name:%s\n",name);
    printf("Marks:%.2f\n",marks);

    return 0;
}