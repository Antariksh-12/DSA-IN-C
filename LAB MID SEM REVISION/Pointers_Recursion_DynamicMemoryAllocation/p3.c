#include <stdio.h>

int fact(int n){
    if(n<0){
        return -1;
    }

    if(n==1 || n==0){
        return 1;
    }

    return n*fact(n-1);
}

int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int res = fact(n);
    if(res==-1){
        printf("Factorial not declared for negative numbers");
    }
    else{
    printf("The factorial is %d\n",res);
    }

    return 0;
}
    