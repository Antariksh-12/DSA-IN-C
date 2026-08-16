#include <stdio.h>
int total;

int square(int x){
    return x*x;
}

int squareofsum(int x , int y){
    int z = square(x+y);
    return z;
}

int main(){

    int a = 4 , b = 8;
    total = squareofsum(a,b);
    printf("%d\n",total);

    return 0;
}A