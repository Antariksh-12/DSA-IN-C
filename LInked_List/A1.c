#include <stdio.h>
#include <stdlib.h>

void input(int *arr, int n){
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
}

void display(int *arr , int n){

    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
}

int main(){
    

    int *ptr;
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));

    input(ptr,n);
    display(ptr,n);
    return 0;

}