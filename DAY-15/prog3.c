#include<stdio.h>
int main(){
    int n,i,a[10],temp;
    printf("input the array size:");
    scanf("%d",&n);
    printf("input the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    temp=a[n-1];
    for(i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=temp;

    printf("array after right rotation:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}