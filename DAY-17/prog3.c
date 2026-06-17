int main(){
    int n1,n2,i,j,a[10],b[10];
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

    printf("Intersection array:");
    
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a[i]==b[j]){
                printf("%d\t",a[i]);
            }
        }
    }
    
    return 0;
}