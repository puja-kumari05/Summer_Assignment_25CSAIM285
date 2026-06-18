#include<stdio.h>
int main(){
    int n, i, a[10], key, low, high, mid, found = 0;
    printf("input the array size:");
    scanf("%d", &n);
    printf("input the array elements:");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("input the search key:");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    while(low <= high){
        mid = (low + high) / 2;
        if(a[mid] == key){
            printf("element is found at position :%d\n", mid + 1);
            found = 1;
            break;
        } else if(key < a[mid]){
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    if(found==0){
        printf("element not found\n");
    }

    return 0;
}