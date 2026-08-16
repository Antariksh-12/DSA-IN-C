#include <stdio.h>

int main(){

    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",j+1);
        }
        printf("\n");
    }
        printf("\n");


    for(int i=0;i<4;i++){
        for(int j=i;j<4;j++){
            printf("%d ",j+1);
        }
        printf("\n");
    }

    return 0;
}