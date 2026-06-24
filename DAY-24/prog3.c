#include<stdio.h>
#include<string.h>
int main(){
    char str[100],word[20],longest[20];
    int i=0,j=0;
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);

    while(str[i]!='\0'){
        if(str[i]!=' ' && str[i]!='\n'){
            word[j++]=str[i];
        }
        else{
            word[j]='\0';

            if(strlen(word)>strlen(longest))
            strcpy(longest,word);
            j=0;
        }
        i++;
    }
    printf("longest word:%s",longest);
    return 0;
}