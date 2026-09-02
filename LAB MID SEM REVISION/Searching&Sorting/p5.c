#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int low = 0;
    int high = n-1;
    int mid = 0;

    int key;
    printf("Enter the element to found :");
    scanf("%d",&key);
    int found=0;
    while(low<=high){
        mid = low+(high-low)/2;

        if(arr[mid]==key){
            printf("Element found at index %d",mid);
            found=1;
            break;
        }
        if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    if(found==0){
        printf("Element not found");
    }

    return 0;
}