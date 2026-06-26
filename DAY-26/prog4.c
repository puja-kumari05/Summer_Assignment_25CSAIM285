#include<stdio.h>
int main(){
    int choice;
    int score=0;
    
    printf("***Quiz Application***\n");
    //Question 1
    printf("Q1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer:");
    scanf("%d",&choice);

    if(choice==2){
        printf("Correct Answer.\n");
        score++;
    }
    else{
        printf("Wrong Answer.\n");
    }
    //Question 2
    printf("Q2. 10+5*3= ?\n");
    printf("1. 34\n2. 50\n3. 25\n4. 45\n");
    printf("Enter your answer:");
    scanf("%d",&choice);

    if(choice==3){
        printf("Correct Answer.\n");
        score++;
    }
    else{
        printf("Wrong Answer.\n");
    }
    //Question 3
    printf("Q3. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido Van Rossum\n");
    printf("Enter your answer:");
    scanf("%d",&choice);

    if(choice==1){
        printf("Correct Answer.\n");
        score++;
    }
    else{
        printf("Wrong Answer.\n");
    }
    printf("\nYour Final Score=%d/3\n",score);
    return 0;
}