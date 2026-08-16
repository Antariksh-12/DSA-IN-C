#include <stdio.h>

int doPower(int a , int b){

    if(b==0){
        return 1;
    }
    
    return a * doPower(a,b-1);
}
    
int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int m;
    printf("Enter the exponent :");
    scanf("%d",&m);

    int res = doPower(n,m);

    printf("The result is :%d\n",res);

    return 0;
}
