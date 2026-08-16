#include <stdio.h>
#include <stdlib.h>

void input(int *arr , int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

void display(int *arr , int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int sum(int *arr , int n){
    int s=0;

    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return s;
}

int maximum(int *arr , int n){
    int max = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int minimum(int *arr , int n){
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){

    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int *arr;
    arr = (int*)malloc(n*sizeof(int));

    input(arr,n);
    display(arr,n);
    printf("%d",minimum(arr,n));
    printf("%d",maximum(arr,n));

    return 0;

}