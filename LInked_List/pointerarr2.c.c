#include <stdio.h>
#include <stdlib.h>

void input(int *arr , int n){
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
}

void insert(int *arr, int ele , int n , int position){
    for(int i=n-1;i>=position;i--){
        arr[i+1]=arr[i];
    }
    arr[position]=ele;
}

void display(int *arr ,int n){
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
}

int main(){

    int *ptr;
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    ptr = (int*)malloc((n+1)*sizeof(int));

    input(ptr,n);

    insert(ptr,5,n,2);

    display(ptr,n+1);

    return 0;
}