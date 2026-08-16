#include <stdio.h>

int main(){

    for(int i=0;i<4;i++){
        for(int j=0;j<6;j++){
            if((i==1 || i==2)&&(j==1 || j==2 || j==3 || j==4)){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
            printf("\n");
    }
    return 0;
}
