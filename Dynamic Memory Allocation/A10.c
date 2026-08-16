#include <stdio.h>
#include <stdlib.h>

int main(){


    int rows = 3;
    int **arr = (int**)malloc(rows*sizeof(int*));

    arr[0]=(int*)malloc(2*sizeof(int));
    arr[1]=(int*)malloc(3*sizeof(int));
    arr[2]=(int*)malloc(4*sizeof(int));

    arr[0][0]=10;
    arr[0][1]=20;

    arr[1][0]=30;
    arr[1][1]=40;
    arr[1][2]=50;

    arr[2][0]=60;
    arr[2][1]=70;
    arr[2][2]=80;
    arr[2][3]=90;

    for(int i=0;i<2;i++){
        printf("%d ",arr[0][i]);
    }
    printf("\n");
        
    for(int i=0;i<3;i++){
        printf("%d ",arr[1][i]);
    }
    printf("\n");
    
      for(int i=0;i<4;i++){
        printf("%d ",arr[2][i]);
    }
    printf("\n");
      

    free(arr[0]);
    free(arr[1]);
    free(arr[2]);
        

    
    
    return 0;
}