#include<stdio.h>
int main(){
    int n,i,j,a[10],sum;
    printf("input the array size:");
    scanf("%d",&n);
    printf("input the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter required sum:");
    scanf("%d",&sum);
    

    printf("pair are:\n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                printf("(%d,%d)\n",a[i],a[j]);
            }
        }
    }
    return 0;
}