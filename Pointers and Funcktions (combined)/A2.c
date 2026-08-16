#include <stdio.h>

void input(int *arr , int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

void output(int *arr , int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int *arr = (int*)malloc(n*sizeof(int));

    input(arr,n);
    output(arr,n);

    free(arr);

    return 0;
}