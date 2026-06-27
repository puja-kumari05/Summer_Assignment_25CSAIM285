#include<stdio.h>
int main(){
    
    float basic,hra,da,total;

    printf("***Salary Management System***\n");

    //input
    printf("Enter basic salary:");
    scanf("%f",&basic);
    
    hra=basic*0.20;
    da=basic*0.10;
    total=basic+hra+da;

    //display
    printf("\n-----Salary Details-----\n");
    printf("Basic Salary :%.2fn",basic);
    printf("HRA (20%%) :%.2f\n",hra);
    printf("DA (10%%) :%.2f\n",da);
    printf("Total Salary :%.2f\n",total);

    return 0;
}