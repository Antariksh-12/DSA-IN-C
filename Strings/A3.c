#include <stdio.h>

int main(){

    char name[]= "Antriksh";
    char arr[]={'H','e','l','l','o','\0'};

    for(int i=0;name[i]!='\0';i++){
        printf("%c",*(name+i));
    }

    printf("\n");


    return 0;
}