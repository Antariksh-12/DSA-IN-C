#include <stdio.h>

int main(){

    
    int m , n ;
    printf("Enter the value of m and n :");
    scanf("%d%d",&m,&n);

    int arr[m][n];

    int (*ptr)[n]=arr;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",*(ptr+i)+j);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",*(*(ptr+i)+j));
        }
        printf("\n");
    }

    return 0;
}