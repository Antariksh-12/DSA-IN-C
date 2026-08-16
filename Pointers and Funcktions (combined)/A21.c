#include <stdio.h>
#include <stdlib.h>

int add(int *a , int *b){ 
return    *a+*b;
 
}

//address of parameters would be diff but values same

int main(){

    int a = 4 , b = 8;
    int res = add(&a,&b);

    printf("%d ",res);

    return 0;
}
