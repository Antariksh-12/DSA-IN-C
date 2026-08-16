#include <stdio.h>

void printNum(int n){
    
    if(n<=0){
        return;
    }
    
    printf("%d ",n);
    printNum(n-1);
}

int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    printNum(n);

    return 0;
}
