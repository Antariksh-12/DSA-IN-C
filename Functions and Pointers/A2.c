#include <stdio.h>

int min(int a , int b){
    int min; 
    if(a<b){
        min = a;
    }else{
        min = b;
    }
    return min;
}
       
int main(){

    int a , b ;
    printf("Enter the value of a and b :");
    scanf("%d%d",&a,&b);

    int res = min(a,b);

    printf("The minimum number is :%d\n",res);

    return 0;
}
    