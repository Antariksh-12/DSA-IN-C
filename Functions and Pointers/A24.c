#include <stdio.h>
#include <stdlib.h>

int add(int *a , int *b){
    int c =  *a+*b;
    return c;
}

int main(){

    int x = 10 , y = 20;

    int res = add(&x,&y);
    printf("%d\n",res);

    return 0;

}