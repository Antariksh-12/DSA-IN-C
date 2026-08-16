#include <stdio.h>

int main(){

    int x , *y  , z , *q;
    x=3;
    y = &x;

    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",*y);
    printf("%d\n",*y+1);
    
    z = *(&x);

    printf("%d\n",z);

    return 0;
}