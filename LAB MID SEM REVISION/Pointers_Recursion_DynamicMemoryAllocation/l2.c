#include <stdio.h>
#include <stdlib.h>


// void selectionsort(int *arr , int n)
// {
//     for(int i=0;i<n-1;i++){
//         int smallestidx = i;

//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[smallestidx]){
//                 smallestidx=j;
//             }
//         }
//         int temp = arr[i];
//         arr[i]=arr[smallestidx];
//         arr[smallestidx]=temp;
//     }
// }


void input(int *arr , int n){
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
}
 
void display(int *arr , int n){
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
}

void selectionsort(int *arr , int n)
{
    if(n<=1){
        return;
    }
    
    int smallestidx = 0;
    for(int j = 1;j<n;j++){
        if(*(arr+j)<*(arr+smallestidx)){
        smallestidx=j;
    }
}

int temp = *arr;
*arr=*(arr+smallestidx);
*(arr+smallestidx)=temp;

selectionsort(arr+1,n-1);
}




int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    int arr[n];
    
    input(arr,n);
    selectionsort(arr,n);
    display(arr,n);

    return 0;
}
