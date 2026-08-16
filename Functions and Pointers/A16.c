#include <stdio.h>

int main(){

    int a=10,b=20,c=30,d=40,e=50;

    int *ptr[5];

    ptr[0]=&a;
    ptr[1]=&b;
    ptr[2]=&c;
    ptr[3]=&d;
    ptr[4]=&e;

    for(int i=0;i<5;i++){
        printf("%d ",*ptr[i]);
    }

    return 0;
}