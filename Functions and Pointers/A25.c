#include <stdio.h>

int *findMax(int *a , int *b){
    if(*a>*b){
        return a;
    }
    else{
        return b;
    }
}

int main(){

    int a , b ;
    a=10,b=20;

    int *max = findMax(&a,&b);

    printf("%d\n",*max);

    return 0;
}