//Requires sorted array

#include <stdio.h>

int binarySearch(int arr[] , int n , int key){
    int low , mid , high;
    low = 0;
    high=n-1;

    while(low<=high){
        mid=(low+high)/2;

        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
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
    printf("Enter the elemnt to search :");
    scanf("%d",&key);

    int ans = binarySearch(arr,n,key);

    if(ans==-1){
        printf("Element not found");
    }else{
    
    printf("The element is found at position %d",ans+1);
    
}
    return 0;
}
    
