// #include <stdio.h>

// void printNum(int n){

//     if(n==0){
//         return;
//     }
//     printNum(n-1);
//     printf("%d ",n);
// }

// int main(){

//     int n;
//     printf("Enter the value of n :");
//     scanf("%d",&n);
    
//     printNum(n);
    
//     return 0;
// }

#include <stdio.h>


void printNum(int x , int y){

    if(y<1){
        return ;
    }

    if(x>y){
        return;
    }

    printf("%d ",x);
    printNum(x+1,y);
}

int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    printNum(1,n);

    return 0;
}

