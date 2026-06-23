#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100],temp;
    int i,j;
    printf("enter first string:");
    scanf("%s",str1);

    printf("enter second string:");
    scanf("%s",str2);

    if(strlen(str1)!=strlen(str2)){
    printf("not anagram");
    return 0;
    }
    
    //sort str1
    for(i=0;str1[i]!='\0';i++){
        for(j=i+1;str1[j]!='\0';j++){
            if(str1[i]>str1[j]){
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
        }
    }
    //sort str2
    for(i=0;str2[i]!='\0';i++){
        for(j=i+1;str2[j]!='\0';j++){
            if(str2[i]>str2[j]){
                temp=str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
        }
    }
    if(strcmp(str1,str2)==0)
    printf("anagram");
    else
    printf("not anagram");
    return 0;
}