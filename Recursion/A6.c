// fibonacci series = addition of previous 2 terms 

#include <stdio.h>

int  printFib(int n){

     if(n==1){
        return 1;
     }
     if(n==0){
        return 0;
     }
     return printFib(n-1) + printFib(n-2);
    }
    

    




int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    int res = printFib(n);

    printf("%d",res);

    return 0;
}