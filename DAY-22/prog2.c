#include<stdio.h>
int main(){
    char str[100];
    int i=0,words=1;
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);

    while(str[i]!='\0'){
        if(str[i]==' '){
            words++;
        }
        i++;
    }
    printf("number of words:%d",words);
    return 0;
}