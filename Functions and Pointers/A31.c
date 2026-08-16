#include <stdio.h>

int main(){

    int var = 19;
    int *ptr;

    ptr = &var;

    printf("Address of var is %d\n",ptr);
    printf("Address of var is %d\n",&var);
    printf("Value of var is %d\n",*ptr);

    return 0;

}