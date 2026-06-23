#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,j;

    printf("enter string:");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++){
        
        for(j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){
                printf("first non-repeating character:%c",str[i]);
                return 0;
                }
            }    
    }
    printf("no repeating character found");
    return 0;
}