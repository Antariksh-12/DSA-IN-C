#include <stdio.h>
#include <stdlib.h>

int *creatememory(int n){
    int *ptr;

    ptr = (int*)malloc(n*sizeof(int));

    return ptr;
}

int main(){

    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int *ptr = creatememory(n);

    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }

    for(int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }

    return 0;

}