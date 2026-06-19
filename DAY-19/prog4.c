#include<stdio.h>
int main(){
    int n,m,i,j,a[10][10],b[10][10],sum=0;
    printf("enter the number of rows and column of matrix:");
    scanf("%d%d",&n,&m);
    printf("enter the elements of matrix A:");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i==j){
                sum=sum+a[i][j];
            }
        }
        
    }
    printf("sum of diagonal elements of matrix:%d",sum);
    
    return 0;
}