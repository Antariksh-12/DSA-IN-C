#include <stdio.h>
#include <stdlib.h>

int main(){

    int rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);

    int *arr[rows];

    for(int i=0;i<rows;i++){
        arr[i]=(int*)malloc((i+1)*sizeof(int));
        if(arr[i]==NULL){
            printf("Memory allocation failed");
            return 1;
        }
    }


    for(int i=0;i<rows;i++){
        for(int j=0;j<(i+1);j++){
            scanf("%d",*(arr+i)+j);
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<(i+1);j++){
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");
    }



    for(int i=0;i<rows;i++){
    free(arr[i]);
}

    return 0;

}