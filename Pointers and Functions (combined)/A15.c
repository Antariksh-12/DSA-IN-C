#include <stdio.h>

int main(){

    int B[2][3]={{2,3,6},{4,5,8}};

    int (*p)[3]=B;

    printf("%d\n",B); //&B[0][0]
    printf("%d\n",*(B+1)); //&B[1][0]
    printf("%d\n",*(B+1)+2); //&B[1][2]
    printf("%d\n",*(*(B+1))); //4

    printf("%d\n",*(B[1]+2));
    printf("%d\n",*(*(B+1)+0));
    printf("%d\n",*(*(B+1)+1));
    printf("%d\n",*(*(B+1)+2));

}