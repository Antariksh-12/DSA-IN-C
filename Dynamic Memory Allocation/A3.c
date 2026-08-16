#include <stdio.h>

int* largest(int *a , int *b){
    if(*a>*b){
        return a;
    }
    else{
        return b;
    }
}

int main(){

    int x , y;
    printf("Enter the value of x and y :");
    scanf("%d%d",&x,&y);

    int* res = largest(&x,&y);

    printf("The result is %d\n",*res);

    return 0;
}