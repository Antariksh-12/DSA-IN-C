#include <stdio.h>
#include <stdlib.h>

int main(){

    int a=10; //goes on stack

    int n = 10;
    int *ptr;
    ptr = (int*)malloc(n*sizeof(int));

    
    for(int i =0;i<n;i++){
        scanf("%d",(ptr+i));
    }

    *(ptr+2)=100; // 3rd element as 100

    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }

    free(ptr);

    return 0;
}

