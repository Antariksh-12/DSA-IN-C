#include <stdio.h>
#include <stdlib.h>

void allocateMemory(int **arr , int n){
    *arr = (int*)malloc(n*sizeof(int));
}

int main(){

    
    int *arr;
    allocateMemory(&arr,5);

    for(int i=0;i<5;i++){
        arr[i]=(i+1)*10;
        printf("%d ",arr[i]);
    }

   free(arr);

    return 0;
}