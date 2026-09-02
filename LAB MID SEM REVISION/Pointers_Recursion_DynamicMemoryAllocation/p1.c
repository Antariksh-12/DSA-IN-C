#include <stdio.h>
#include <stdlib.h>

void change(int *x){ //passing access to change the variable
    *x=10;
}

int main(){

    //  int x = 10;
    // int *ptr;

    // ptr = &x;

    // printf("Value of x = %d\n", x);
    // printf("Value of x using pointer = %d\n", *ptr);

    // *ptr = 20;

    // printf("New value of x = %d\n", x);



    int a=100;
    printf("%d ",a);
    printf("\n");

    change(&a);
    //here we passed address of the variable
    printf("Modified Value :%d\n",a);



    return 0;

}


    