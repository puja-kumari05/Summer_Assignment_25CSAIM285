#include<stdio.h>
int main(){
    char str[100];
    int i,j,count;
    printf("enter string:");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++){
        count=1;
    
    for(j=i+1;str[j]!='\0';j++){
        if(str[i]==str[j])
        count++;

    }
    for(j=0;j<i;j++){
        if(str[i]==str[j])
        break;
    }

    if(j==i)
    printf("%c=%d\n",str[i],count);
}
    return 0;
}