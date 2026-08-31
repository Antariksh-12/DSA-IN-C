#include <stdio.h>


int main(){

    int n;
    int arr[5]={4,3,1,2,6};

    for(int i=1;i<5;i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }

        arr[prev+1]=curr;
    }

    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    

    return 0;
}