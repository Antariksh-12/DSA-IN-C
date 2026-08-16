#include <stdio.h>
#include <math.h>

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

int main(){

    int n , r;
    printf("Enter the value of n and r :");
    scanf("%d%d",&n,&r);

    int r1 = combination(n,r);
    int r2 = permutation(n,r);

    printf("The permutation is %d\n",r2);
    printf("The combination is %d\n",r1);

    return 0;
}