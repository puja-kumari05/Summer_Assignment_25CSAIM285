#include<stdio.h>
int main(){
    int n,i,j,a[10],temp;
    printf("input the array size:");
    scanf("%d",&n);
    printf("input the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //Sorting
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    printf("elements after duplicate elements are removed:\t");

    printf("%d",a[0]);
    for(i=0;i<n;i++){
        if(a[i]!=a[i-1]){
            printf("%d",a[i]);
        }
    }
    return 0;
}