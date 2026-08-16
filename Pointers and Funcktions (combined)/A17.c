#include <stdio.h>

int main(){

    int C[3][2][2]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    int (*p)[2][2]=C;

    printf("%d\n",*(*(*(C)+1)+1));
    printf("%d\n",*(*(*(C+1)+1)+1));
    printf("%d\n",*(*(*(C+2)+1)+1));

    return 0;
}