#include <stdio.h>

void input(int m ,int *arr){
    for(int i=0;i<m;i++){
        scanf("%d",(arr+i));
    }
}
    

void display(int m ,int *arr){
    for(int i=0;i<m;i++){
        printf("%d ",*(arr+i));
    }
}

int main(){

    int m;
    printf("Enter the number of elements :");
    scanf("%d",&m);

    int arr[m];
    input(m,arr);
    display(m,arr);

    return 0;
}