#include <stdio.h>

int min(int a , int b){
    if(a<b){
        return a;
    }
     else{
        return b;
     }   
}


int GCD(int a, int b){

    int hcf;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf=i; //get ans in early time and often one shot
            break;
        }
    }
    return hcf; 
}

int main()
{
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);

    int res =GCD(a,b);

    printf("The GCD of %d and %d is %d",a,b,res);

    return 0;
}
    