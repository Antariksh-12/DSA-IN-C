#include <stdio.h>

int* smallest(int *a , int *b , int *c){
    int* small = a;
    if(*b<*small){
        small = b;
    }
    if(*c<*small){
        small = c;
    }
    return small;
}

int main(){

    int a = 10 , b  = 20 , c= 30;

    int* res = smallest(&a,&b,&c);

    printf("%d\n",*res);

    return 0;
}