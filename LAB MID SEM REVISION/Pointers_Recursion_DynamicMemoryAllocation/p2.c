#include <stdio.h>
#include <stdlib.h>


void input(int* arr , int n){
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

    
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    // int arr[n];

    int *arr = (int*)calloc(n,sizeof(int));
    if(arr==NULL){
        printf("Memory Allocation failed");
        return 0;
    }
        
    
    input(arr,n);
    display(arr,n);
    

    free(arr);
    
return 0;

}

