#include <stdio.h>

int main(){


    int arr[] = {10,20,30};

    int *p = arr;

    for(int i=0;i<3;i++){
        printf("%d ",*(p));
        p++;
    }

    return 0;

}