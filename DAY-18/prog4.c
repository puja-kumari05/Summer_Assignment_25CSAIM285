#include<stdio.h>
int main(){
    int n,i,j,a[10],max,temp;
    printf("input the array size:");
    scanf("%d",&n);
    printf("input the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        max=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[max]){
                max=j;
            }

        }
        temp=a[i];
        a[i]=a[max];
        a[max]=temp;
    }
    printf("sorted array:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
