#include <stdio.h>
#include <stdlib.h>


int smallest(int *arr , int n){

    int* smallest =arr;
    for(int i=0;i<n;i++){
        if(*(arr+i)<*smallest){
            smallest=(arr+i); //store address of smallest element
            
        }
    }
    return *smallest;
}


int main(){

    int arr[]={1,2,3,4,5};
    
    int res = smallest(arr,5);
    
    printf("%d\n",res);
    
    return 0;
}