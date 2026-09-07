#include <stdio.h>

void increment(int *ptr){
    *ptr=*ptr+1;
}

int main(){

    int a = 10;

    increment(&a);

    printf("%d\n",a);

    return 0;
}