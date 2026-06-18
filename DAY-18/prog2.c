#include<stdio.h>
int main(){
    int n,i,j,a[10],min,temp;
    printf("input the array size:");
    scanf("%d",&n);
    printf("input the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //selection sort
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }

        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("sorted array:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}