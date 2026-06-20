#include<stdio.h>
int main(){
    int n,m,a[10][10],i,j,flag=1;
    printf("enter rows and column of matrix:");
    scanf("%d%d",&m,&n);
    printf("enter elements of matrix:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){
                flag=0;
                break;
            }
        }
    }
        if(flag==1)
        printf("symmetric matrix");
        else
        printf("not symmetric matrix");
    
    return 0;
}