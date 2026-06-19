#include<stdio.h>
int main(){
    int n,m,i,j,a[10][10],b[10][10],c[10][10];
    printf("enter the number of rows and column of matrix:");
    scanf("%d%d",&n,&m);
    printf("enter the elements of matrix A:");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    printf("enter the elements of matrix B: ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        scanf("%d",&b[i][j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        c[i][j]=a[i][j]-b[i][j];
    }
    printf("subtraction of matrices:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        printf("%d\t",c[i][j]);
    
    printf("\n");
    }
    return 0;
}