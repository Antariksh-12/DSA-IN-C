#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* findSmallest(int* arr , int n){
    
    int* smallest = arr;
    for(int i=0;i<n;i++){
        if(*(arr+i)<*smallest){
            smallest=(arr+i);
        }
    }
    return smallest;
}

int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int* arr = (int*)malloc(n*sizeof(int));

    printf("Enter the elements of the array :");
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }

    int *res = findSmallest(arr,n);
    printf("The smallest element in the array is %d\n",*res);

    free(arr);

    return 0;
}