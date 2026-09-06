#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(int* arr , int n){
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
}
 
void bubblesort(int *arr , int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void selectionsort(int *arr , int n){
    for(int i=0;i<n-1;i++){
        int smallestidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestidx]){
                smallestidx=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[smallestidx];
        arr[smallestidx]=temp;
    }
}

void insertionSort(int *arr , int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int prev = i-1;

        while(prev>=0 && arr[prev]>current){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=current;
    }
}

int main(){

    int n;
    printf("Enter the number of elements :");
    scanf("%d",&n);

    int *arr =(int*)malloc(n*sizeof(int));
    input(arr,n);

    bubblesort(arr,n);
    selectionsort(arr,n);
    insertionSort(arr,n);

    free(arr);


    return 0;
}