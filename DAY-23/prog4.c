#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    int i,j,count,max=0;
    printf("enter string:");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++){
        count=0;
        for(j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            ch=str[i];
        }
    }
    printf("maximum occuring character:%c",ch);
    return 0;
}