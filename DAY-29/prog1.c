#include<stdio.h>
int main(){
    int choice;
    float a,b,result;

    do{
        printf("****MENU DRIVEN CALACULATOR****\n");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n1. Division");
        printf("\n5. Exit");

        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter any two number:");
            scanf("%f%f",&a,&b);
            result=a+b;
            printf("Result=%.2f\n",result);
            break;

            case 2:
            printf("Enter any two number:");
            scanf("%f%f",&a,&b);
            result=a-b;
            printf("Result=%.2f\n",result);
            break;

            case 3:
            printf("Enter any two number:");
            scanf("%f%f",&a,&b);
            result=a*b;
            printf("Result=%.2f\n",result);
            break;

            case 4:
            printf("Enter any two number:");
            scanf("%f%f",&a,&b);
            if(b!=0){
                result=a/b;
                printf("Result=%.2f\n",result);
            }
            else{
                printf("Division by 0 is not possible");
            }
            break;


            case 5:
            printf("Program Ended");
            break;

            default:
            printf("Invalid Choice");

        }
    }while(choice!=5);
    return 0;
}