#include <stdio.h>

int main(){

    int B[2][3]={{1,2,3,},{4,5,6}};
    int (*ptr)[3]=B; 

    printf("%d\n",B);
    printf("%d\n",*(*(&B[0])+1));

    return 0;
}