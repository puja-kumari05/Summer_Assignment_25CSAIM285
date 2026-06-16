#include<stdio.h>
int main(){
    int n,i,a[10],sum=0,total,missing;
    printf("input the array size:");
    scanf("%d",&n);
    printf("input the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    total=(n+1)*(n+2)/2;
    missing=total-sum;

    printf("missing element:%d",missing);
    return 0;

}