#include <stdio.h>
#include <stdlib.h>

void allocate(int** arr , int n){
    *arr = (int*)malloc(n*sizeof(int));
}

int main(){

    int *arr;

    allocate(&arr,5);

    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    free(arr);

    return 0;
}