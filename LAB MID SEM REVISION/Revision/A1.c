#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct phoneContact{
    long int phoneNum;
    char* name;
}phoneContact;

int main(){

phoneContact* p1 = (phoneContact*)malloc(sizeof(phoneContact));

if(p1==NULL){
    printf("Memory allocation failed");
    return ;
}


    return 0;
}