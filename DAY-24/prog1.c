#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100],temp[200];
    printf("enter first string:");
    scanf("%s",str1);

    printf("enter second string:");
    scanf("%s",str2);

    //length must be equal
    if(strlen(str1)!=strlen(str2)){
        printf("not a rotation\n");
        return 0;
    }
    //concatenate str1 with itself
    strcpy(temp,str1);
    strcat(temp,str1);

    //check if str2 is a substring of temp
    if(strstr(temp,str2))
    printf("rotation of string\n");
    else
    printf("not a rotation\n");
    return 0;
}