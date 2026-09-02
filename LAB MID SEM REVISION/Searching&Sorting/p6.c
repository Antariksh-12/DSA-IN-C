#include <stdio.h>
#include <stdlib.h>

int  bubblsort(int *arr,  int n){
int bswap=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                bswap++;
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return bswap;
}

int selectionsort(int *arr , int n){
    int sswap=0;

    for(int i=0;i<n-1;i++){
        int smallestidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestidx]){
                smallestidx=j;
            }
        }
        
        if(smallestidx!=i){
            sswap++;
            int temp  = arr[i];
            arr[i] = arr[smallestidx];
            arr[smallestidx]=temp;
        }
}
return sswap;
}

int insertionsort(int *arr , int n){

    int isort=0;
    for(int i=1;i<n;i++){
        int curr= arr[i];
        int prev = i-1;

        while(prev>=0 && arr[prev]>curr){
            isort++;
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
    return isort;
}


int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int arr2[n];
    int arr3[n];

    for(int i=0;i<n;i++){
        arr2[i]=arr[i];
    }

    for(int i=0;i<n;i++){
        arr3[i]=arr[i];
    }

    int bres = bubblsort(arr,n);
    int sres = selectionsort(arr2,n);
    int ires = insertionsort(arr3,n);

    printf("\n--- Swap / Shift Comparison ---\n");
    printf("Bubble Sort Swaps    : %d\n", bres);
    printf("Selection Sort Swaps : %d\n", sres);
    printf("Insertion Sort Shifts: %d\n", ires);

    return 0;
}


    
    

    