#include<stdio.h>
int main(){
    int n,i,a[10],temp;
    printf("input the array size:");
    scanf("%d",&n);
    printf("input the array elements:");

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-i-1]=temp;
    }
    printf("Reversed array:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}