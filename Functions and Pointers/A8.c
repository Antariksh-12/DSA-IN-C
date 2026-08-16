#include <stdio.h>

int main(){

    int arr[]={5,10,15,20};

    int *p =arr;

    printf("%d ",*p);
    printf("%d ",*(p+1));

    for(int i=0;i<4;i++){
        printf("%d ",*(p+i));
    }

    printf("\n");

    for(int i=0;i<4;i++){
        printf("%d ",*p);
        p++;
    }

    return 0;
}