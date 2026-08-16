#include <stdio.h>

int Stair(int n){

    if(n==1){
        return 1;
        }
    if(n==2){
        return 2;
    }

    int ways = Stair(n-1)+Stair(n-2);
    return ways;
}

int main(){

    int n;
    printf("Enter the value of N :");
    scanf("%d",&n);

    int res = Stair(n);

    printf("The total number of ways are :%d\n",res);

    return 0;
}