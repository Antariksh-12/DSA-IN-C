#include <stdio.h>

int addSum(int n);

int addSum(int n){
    if(n<=0){
        return 0;
    }
    
   n=n+addSum(n-1);
   return n;
}
    
int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int res = addSum(n);
    
    printf("The sum 1 to %d is %d",n,res);
    return 0;
}



