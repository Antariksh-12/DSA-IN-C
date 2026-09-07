#include <stdio.h>

int main(){

    int a=5;
    int *p;

    p = &a;

    printf("%d\n",a); // prints a
    printf("%d\n",&a); // prints address of a 

    printf("%d\n",p); // prints address of a
    printf("%d\n",&p); //prints address of p
    printf("%d\n",*p); //gives value at pointer pointing

    return 0;
}