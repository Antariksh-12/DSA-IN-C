#include <stdio.h>
#include <stdlib.h>


    int *largest(int *arr , int n){
        int* largest = arr;

        for(int i=0;i<n;i++){
            if(*(arr+i)>*largest){
                largest = (arr+i);
            }
        }
        return largest   ;
    }
     
     int main(){
         
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
    
    int* res = largest(arr,n);
    
    printf("The largest element is %d\n",*res);

    return 0;
}
