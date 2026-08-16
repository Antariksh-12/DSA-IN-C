#include <stdio.h>

void swap(int *a , int *b){
        int temp = *a;
         *a = *b;
         *b = temp;
    }

int main(){
    int a = 10 , b = 20;

    printf("Before swap a= %d and b = %d",a,b);

    swap(&a,&b);
    printf("\n");

    printf("After swap a = %d and b = %d",a,b);

    return 0;

    
}