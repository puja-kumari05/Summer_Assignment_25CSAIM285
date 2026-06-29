#include<stdio.h>
int main(){
    int a[10],n,i,choice,pos,value;

    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    do{
        printf("****MENU DRIVEN ARRAY OPERATIONS****\n");
        printf("\n1. Display Array");
        printf("\n2. Insert Element");
        printf("\n3. Delete Element");
        printf("\n4. Search Element");
        printf("\n5. Exit");

        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Array Elements:");
            for(i=0;i<n;i++){
                printf("%d\t",a[i]);
                }
                    printf("\n");
            break;

            case 2:
            printf("Enter positon:");
            scanf("%d",&pos);
            
            printf("Enter value:");
            scanf("%d",&value);
            for(i=n;i>pos;i--){
                a[i]=a[i-1];
            }
            a[pos-1]=value;
            n++;
            printf("Element Inserted Successfully");
            break;

            case 3:
            printf("Enter position:");
            scanf("%d",&pos);

            for(i=pos-1;i<n-1;i++){
                a[i]=a[i+1];
            }
            n--;
            printf("Element Deleted Successfully");
            break;

            case 4:
            printf("Enter element to search:");
            scanf("%d",&value);
            for(i=0;i<n;i++){
                if(a[i]==value){
                printf("Element found at position:%d\n",i+1);
                break;
                }
            }
            if(i==n)
            printf("Element not Found");
            
            break;


            case 5:
            printf("Program Ended");
            break;

            default:
            printf("Invalid Choice");

        }
    }while(choice!=5);
    return 0;
}