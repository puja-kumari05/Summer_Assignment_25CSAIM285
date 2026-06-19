#include<stdio.h>
int main(){
    int n,m,i,j,a[10][10],b[10][10];
    printf("enter the number of rows and column of matrix:");
    scanf("%d%d",&n,&m);
    printf("enter the elements of matrix A:");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        b[i][j]=a[j][i];
    }
    printf("transpose of matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        printf("%d\t",b[i][j]);
    
    printf("\n");
    }
    return 0;
}