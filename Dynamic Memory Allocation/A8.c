#include <stdio.h>
#include <stdlib.h>

int *largest(int *a , int *b){

    int* large = a;

    if(*b>*large){
        large=b;
    }
    return large;
}

int main(){

    int a , b;
    printf("Enter value of a and b :");
    scanf("%d%d",&a,&b);

    int *res = largest(&a,&b);

    printf("%d",*(res));

    return 0;
}