#include <stdio.h>

void input(int *arr, int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

int main(){

    int A[5]={2,4,6,8,10};

    int *p = A;

    input(A,5);

    for(int i=0;i<5;i++){

        printf("%d ",*(p+i));
    }
    return 0;
}