#include<stdio.h>
struct Product{
    int id;
    char name[30];
    int quantity;
    float price;
};
int main(){
    struct Product p[100];
    int n=0,choice,i,id,found;

    do{
        printf("\n*****INVENTORY MANAGEMENT SYSTEM*****");
        printf("\n1. Add Product");
        printf("\n2. Display Product");
        printf("\n3. Search Product");
        printf("\n4. Exit");

        printf("\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("\nEnter Product ID:");
            scanf("%d",&p[n].id);
            printf("Enter Product Name:");
            scanf("%s",&p[n].name);
            printf("Enter Quantity:");
            scanf("%d",&p[n].quantity);
            printf("Enter Price:");
            scanf("%f",&p[n].price);

            n++;
            printf("Product added successfully!\n");
            break;

            case 2:
            if(n==0){
                printf("No Products Available.\n");
            }
            else{
                printf("\nID\tName\tQuantity\tPrice\n");
                for(i=0;i<n;i++){
                    printf("%d\t%s\t%d\t\t%.2f\n",
                    p[i].id,p[i].name,p[i].quantity,p[i].price);
                }
            }
            break;

            case 3:
            found=0;
            printf("Enter Product ID to search:");
            scanf("%d",&id);

            for(i=0;i<n;i++){
                if(p[i].id==id){
                    printf("\nProduct Found\n");
                    printf("ID:%d\n",p[i].id);
                    printf("Name:%s\n",p[i].name);
                    printf("Quantity:%d\n",p[i].quantity);
                    printf("Price:%.2f\n",p[i].price);
                    found=1;
                    break;

                }
            }
            if(found==0)
            printf("Product not found!\n");
            break;

            case 4:
            printf("Program Ended.\n");
            break;

            default:
            printf("Invalid Choice!\n");
        }
    }while(choice!=4);

    return 0;
}