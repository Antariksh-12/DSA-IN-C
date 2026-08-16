#include <stdio.h>
#include <stdlib.h>

void input(int m , int n , int (*ptr)[n]){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",*(ptr+i)+j);
        }
    }
}

void display(int m , int n , int (*ptr)[n]){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",*(*(ptr+i)+j));
        }
        printf("\n");
    }
}



int main(){

    int m,n;
    printf("Enter the value of m and n :");
    scanf("%d%d",&m,&n);

    int arr[m][n];

    int (*ptr)[n]=arr;
    input(m,n,ptr);
    display(m,n,ptr);

    return 0;
}
