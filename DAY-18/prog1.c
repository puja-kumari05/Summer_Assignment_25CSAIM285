#include<stdio.h>
int main(){
int n,i,j,a[10],temp;
printf("input the array size:");
scanf("%d",&n);
printf("input the array elements:");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}

//bubble sort
for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }

}
printf("sorted array:");
for(i=0;i<n;i++){
    printf("%d\t",a[i]);
}
return 0;

}