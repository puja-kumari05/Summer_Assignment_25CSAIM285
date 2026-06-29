#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    int choice;

    printf("Enter first string:");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';

    do{
        printf("****MENU DRIVEN STRING OPERATING SYSTEM****\n");
        printf("\n1. Find Length");
        printf("\n2. Copy String");
        printf("\n3. Concatenate String");
        printf("\n1. Compare String");
        printf("\n5. Reverse String");
        printf("\n6. Exit");

        printf("\nEnter your choice:");
        scanf("%d",&choice);
        getchar();

        switch(choice){
            case 1:
            printf("Length=%d\n",strlen(str1));
            break;

            case 2:
            strcpy(str2,str1);
            printf("Copied String=%s\n",str2);
            break;

            case 3:
            printf("Enter second string:");
            fgets(str2,sizeof(str2),stdin);
            str2[strcspn(str2,"\n")]='\0';

            strcat(str1,str2);
            printf("Concatenated String=%s\n",str1);
            break;

            case 4:
            printf("Enter second string:");
            fgets(str2,sizeof(str2),stdin);
            str2[strcspn(str2,"\n")]='\0';

            if(strcmp(str1,str2)==0)
            printf("Strings are Equal\n");
            else
            printf("Strings are not Equal\n");
            break;

            case 5:
            int i,len;
            char temp;
            len=strlen(str1);
            for(i=0;i<len/2;i++){
                temp=str1[i];
                str1[i]=str1[len-1-i];
                str1[len-1-i]=temp;
            }
            printf("Reversed string=%s\n",str1);
            break;
            
            case 6:
            printf("Program Ended");
            break;

            default:
            printf("Invalid Choice");

        }
    }while(choice!=6);
    return 0;
}