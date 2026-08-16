#include <stdio.h>

int main(){

    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            if(i%2==0){
                printf("%d ",j+1);
            }
            else{
                printf("%c ",'A'+j);
            }
        }
        printf("\n");
    }

    return 0;
}