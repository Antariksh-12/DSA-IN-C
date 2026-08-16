#include <stdio.h>
#include <string.h>


    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[100];
    }pokemon;

int main(){

    pokemon pikachu;

    pokemon* x = &pikachu; 
    //stores address of first element in structure
    printf("%p",x);

    return 0;

}
        