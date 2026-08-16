#include <stdio.h>

void increment(int *ptr , int n){
    for(int i=0;i<n;i++){
        *(ptr+i)=*(ptr+i)+1;
    }
}

int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int arr[n];

    int *ptr = arr;

    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }

    increment(ptr,n);

    // for(int i=0;i<n;i++){
    //    *(ptr+i)=*(ptr+i)+1;
    // }

    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
}