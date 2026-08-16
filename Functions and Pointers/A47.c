#include <stdio.h>
#include <stdlib.h>

void input(int *arr , int m){
    for(int i=0;i<m;i++){
        scanf("%d",(arr+i));
    }
}

void display(int *arr , int m){
    for(int i =0;i<m;i++){
        printf("%d ",*(arr+i));
    }
}

int main(){

    int m;
    printf("Enter the number of elements:");
    scanf("%d",&m);

    int *ptr;
    ptr = (int*)malloc(m*sizeof(int));
    input(ptr,m);
    display(ptr,m);

    free(ptr);
    return 0;
}