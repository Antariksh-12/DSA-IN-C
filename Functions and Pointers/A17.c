#include <stdio.h>
#include <stdlib.h>

int main(){

    int *rows[3];
    int rowsize[] = {1,2,3};

    rows[0]=(int*)malloc(rowsize[0]*sizeof(int));
    rows[1]=(int*)malloc(rowsize[1]*sizeof(int));
    rows[2]=(int*)malloc(rowsize[2]*sizeof(int));

    for(int i=0;i<3;i++){
        for(int j=0;j<rowsize[i];j++){
            scanf("%d",&rows[i][j]);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<rowsize[i];j++){
            printf("%d ",rows[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<3;i++){
        free(rows[i]);
    }

    return 0;
}