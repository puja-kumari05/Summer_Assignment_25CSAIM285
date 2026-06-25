#include<stdio.h>

int main(){
    int a[50],b[50],c[100];
    int n,m,i,j,k;

    printf("enter size of first array:");
    scanf("%d",&n);
    printf("enter elements of first sorted array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("enter size of second sorted array:");
    scanf("%d",&m);
    printf("enter elements of second sorted array:");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    i=j=k=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
        }
        else{
            c[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n){
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<m){
        c[k]=b[j];
        j++;
        k++;
    }
    printf("merged array:\n");
    for(i=0;i<n+m;i++){
        printf("%d",c[i]);
    }
    return 0;
}