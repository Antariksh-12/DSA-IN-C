#include <stdio.h>

int main(){

    int a = 10;
    int *p = &a;
    int **pp = &p;

    printf("%d\n",a);  //10
    printf("%p\n",&a); //add of a
    printf("%p\n",p);  //add of a
    printf("%d\n",*p);    //10 
    printf("%p\n",&p);    //add of p
    printf("%p\n",pp);    //add of p
    printf("%p\n",*pp);   //add of a
    printf("%d\n",**pp);  //10

    return  0;
}


