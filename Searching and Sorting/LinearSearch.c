#include <stdio.h>

void linearSearch(int arr[],  int n , int element){
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            printf("Element found at position %d",i+1);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Element not found");
    }
}



        
int main(){

    int n;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int key;
    printf("Enter the element to search :");
    scanf("%d",&key);

    linearSearch(arr,n,key);
    
    return 0;
    
}




