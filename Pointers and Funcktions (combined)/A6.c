#include <stdio.h>
int main(){

    int a;
    int *p;
    p=&a;
    a=10;

    printf("%d\n",sizeof(int));
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",&a);

    int b = 120;
    *p=b;
    printf("%d\n",a);

    printf("%d\n",*p);
    printf("%d\n",*p+1);

    return 0;
}