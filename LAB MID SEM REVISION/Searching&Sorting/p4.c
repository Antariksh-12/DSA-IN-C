#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int *arr;

    arr=(int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }

    int key;
    printf("Enter the element to found :");
    scanf("%d",&key);

    int found=0;
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            found=1;
            index = i;
            break;
            
        }
    }

        if(found){
            printf("Element found at index %d",index);
        }
        else{
            printf("Element not found");
        }


    return 0;
}