#include<stdio.h>
int main(){
    int age;

    printf("***Voting Eligibility System***\n");

do{
    printf("enter the age:");
    scanf("%d",&age);

    if(age < 18){
        printf("You are not eligible to vote.\n");
    }
    else{
        printf("You are eligible to vote.\n");
    }
}while(age != 18 && age < 18);

return 0;
}
    