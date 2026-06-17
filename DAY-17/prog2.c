#include<stdio.h>
int main(){
    int n1,n2,i,j,a[10],b[10],found;
    printf("enter the first array size:");
    scanf("%d",&n1);

    printf("input the elements of first array:");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }

    printf("enter size of second array:");
    scanf("%d",&n2);
    printf("input the elements of second array:");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    printf("Union Array:");
    //print first array
    for(i=0;i<n1;i++){
        printf("%d",a[i]);
    }
    //print only non-duplicate elements of second array
    for(i=0;i<n2;i++){
    found=0;
    for(j=0;j<n1;j++){
        found=1;
        break;
    }
}
if(found==0){
    printf("%d",b[i]);
}
    return 0;
}