#include <stdio.h>


int main(){
    int arr[]={1,2,3,4,5};

    int(*p)[5]=&arr;

    for(int i=0;i<5;i++){
        printf("%d ",(*p)[i]);
    }
    return 0;
}