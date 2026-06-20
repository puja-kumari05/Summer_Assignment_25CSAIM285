#include<stdio.h>
int main(){
    int n,m,a[10][10],i,j;
    printf("enter rows and column of matrix:");
    scanf("%d%d",&m,&n);
    printf("enter elements of matrix:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(j=0;j<n;j++){
        int sum=0;
        for(i=0;i<n;i++){
            sum=sum+a[i][j];
        }
    
    printf("Sum of column%d=%d\n",j+1,sum);
    }
    return 0;
}