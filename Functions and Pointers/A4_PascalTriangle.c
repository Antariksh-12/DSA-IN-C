#include <stdio.h>

int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n * fact(n-1);
}
    
int combination(int n , int r){
    return fact(n)/(fact(n-r)*fact(r));
}
 
int permutation(int n, int r){
    return fact(n)/fact(n-r);
}

void Pascal(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",combination(i,j));
        }
        printf("\n");
    }
}

int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    Pascal(n);

    return 0; 
}
    

