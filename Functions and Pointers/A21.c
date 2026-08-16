#include <stdio.h>
#include <stdlib.h>

void swap (int **x , int **y){
    int temp = *x;
    *x=*y;
    *y=temp;
}


int main(){

    int a = 100 , b = 200;

    int *p1 = &a;
    int *p2 = &b;

    printf("Before swap a = %d and b =%d",a,b);
    swap(&a,&b);
    printf("After swap a = %d and b =%d",a,b);

    return 0;
}

