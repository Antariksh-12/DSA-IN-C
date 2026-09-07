#include <stdio.h>

int main(){

    int x = 5;
    int *p = &x;
    int **q = &p;
    int ***r = &q;

    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",q);
    printf("%d\n",*q);
    printf("%d\n",**q);
    printf("%d\n",r);
    printf("%d\n",*r);
    printf("%d\n",**r);
    printf("%d\n",***r);

    return 0;
}





