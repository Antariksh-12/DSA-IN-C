#include <stdio.h>
#include <stdlib.h>

void input(int *arr , int n){
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

void display(int *arr, int n){
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int *arr;
    arr= (int*)malloc(n*sizeof(int));

    if(arr==NULL){
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter %d elements",n);

    input(arr, n);
    display(arr,n);

    free(arr);

    return 0;

}
