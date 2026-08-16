#include <stdio.h>

int swap(int *a , int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main(){

    int a , b;
    printf("Enter the value of a and b :");
    scanf("%d%d",&a,&b);

    printf("The value of a and b is %d %d",a,b);
    printf("\n");
    
    swap(&a,&b);
    printf("The value of a and b is %d %d",a,b);

    return 0;
}