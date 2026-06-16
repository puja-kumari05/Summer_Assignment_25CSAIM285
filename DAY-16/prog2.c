#include<stdio.h>
int main(){
    int n,i,j,a[10],maxfreq,element;
    printf("input the array size:");
    scanf("%d",&n);
    printf("input the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        int count=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j])
            count++;
        }

        if(count>maxfreq){
            maxfreq=count;
            element=a[i];
        }
    }
    printf("element with maximum frequency:%d\n",element);
    printf("frequency:%d",maxfreq);
    return 0;

}