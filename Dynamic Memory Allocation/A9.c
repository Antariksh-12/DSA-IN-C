#include <stdio.h>
#include <stdlib.h>

void create(int **ptr , int n){
    
    *ptr = (int*)malloc(n*sizeof(int));
}

int main(){

    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int *ptr;

    create(&ptr , n);

    if(ptr==NULL){
        printf("Memory allocation failed");
        return 1;
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