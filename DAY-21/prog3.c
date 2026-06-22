#include<stdio.h>
int main(){
    char str[100];
    int i=0,vowels=0,consonants=0;
    printf("enter the string:");
    fgets(str,sizeof(str),stdin);

    while(str[i]!='\0'){
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){

            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
                str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
                    vowels++;
                }
                else{
                    consonants++;
                }
        }
        i++;
    }
    printf("vowels in a string:%d\n",vowels);
    printf("consonants in a string:%d",consonants);
    return 0;
}