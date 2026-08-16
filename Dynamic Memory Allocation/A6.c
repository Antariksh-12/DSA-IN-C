#include <stdio.h>
#include <stdlib.h>

int* create(int n){

    int *ptr = (int*)malloc(n*sizeof(int));
    return ptr;
}

int main(){

    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int *ptr = create(n);
    if(ptr == NULL){
        printf("Memory allocation failed");
    }
    
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }

    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }

    free(ptr);


    return 0;
}
