#include <stdio.h>
#include <stdlib.h>


int smallest(int *arr , int n){
    int *smallest = arr;
    for(int i=0;i<n;i++){
        if(*(arr+i)<*smallest){
            smallest=(arr+i);
        }
    }
    return *smallest;
}

int main(){


    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int res = smallest(arr,n);
    printf("%d\n",res);

    return 0;
}

