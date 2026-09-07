#include <stdio.h>

void increment(int x){
    x++;
    printf("Address of value a in increment is %d\n",&x);
}

int main(){

    int a = 10;
    increment(a);

    printf("Address of value a in increment is %d\n",&a);

    printf("%d",a);

    return 0;
}