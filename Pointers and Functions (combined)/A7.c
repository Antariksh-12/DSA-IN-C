#include <stdio.h>
int main(){

    int a = 1025;
    int *p = &a;

    printf("Address id %d and value is %d\n",p,*p);
    printf("Address id %d and value is %d\n",p+1,*(p+1));

    char *p1;
    p1=(char*)p;
    printf("Address is %d and value is %d",p1,*p1);

    return 0;
}