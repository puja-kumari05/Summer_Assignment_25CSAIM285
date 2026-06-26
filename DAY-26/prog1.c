#include<stdio.h>
int main(){
int secret=50,guess;

printf("*****Number Guessing Game*****\n");
do{
    printf("enter your guess:");
    scanf("%d",&guess);

    if(guess>secret){
        printf("guess is too high!\n");
    }
    else if(guess<secret){
        printf("guess is too low!\n");
    }
    else{
        printf("Congratulations you guess the correct number.\n");
    }
}

while(guess!=secret);
return 0;
}