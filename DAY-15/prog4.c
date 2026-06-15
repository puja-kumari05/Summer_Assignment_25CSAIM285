#include<stdio.h>
int main(){
    int n,i,j=0,a[10],temp;
    printf("input the array size:");
    scanf("%d",&n);
    printf("input the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        if(a[i]!=0)
        {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j++;
        }
    }

    printf("array after moving zeroes to end:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}