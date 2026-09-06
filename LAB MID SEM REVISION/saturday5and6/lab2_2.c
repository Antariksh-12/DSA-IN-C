#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void selectionSort(int *arr , int n){

    if(n<=1){
        return;
    }

    int smallestidx = 0;

    for(int j=1;j<n;j++){
        if(*(arr+j)<*(arr+smallestidx)){
            smallestidx=j;
        }
    }
    int temp = *arr;
    *arr=*(arr+smallestidx);
    *(arr+smallestidx)=temp;

    selectionSort(arr+1,n-1);
}


void bubblesort(int *arr , int n){

    if(n<=1){
        return;
    }

    for(int j=0;j<n-1;j++){
        if(*(arr+j)>*(arr+j+1)){
            int temp = *(arr+j);
            *(arr+j)=*(arr+j+1);
            *(arr+j+1)=temp;
        }
    }

    bubblesort(arr,n-1);
}

int main(){

    int n;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }

    selectionSort(arr,n);

    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
        }

    return 0;
}