#include<stdio.h>
int main(){
    char str[100];
    int i,j;
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);

    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            for(j=i;str[j]!='\0';j++){
                str[j]=str[j+1];
            
            }
            i--;
        }
    }
    printf("string after removing spaces:%s",str);
    return 0;
}