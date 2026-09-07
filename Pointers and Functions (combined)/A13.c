#include <stdio.h>
#include <stdlib.h>

int sum(int *arr , int n){
    int sum = 0;
    for(int i =0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){

    int *arr;
    arr = (int*)malloc(5*sizeof(int));//DMA ARRAY

    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
        
    int res = sum(arr,5);

    printf("The sum is %d\n",res);
    

    free(arr);

    return 0;

}