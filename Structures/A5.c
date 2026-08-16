#include <stdio.h>

int main(){

    struct pokemon{
        int hp;
        int attack;
        int speed;
    };

    struct legendary{
        int specialAttack;
        struct pokemon x;
    };  //this is nesting of structures

    struct pokemon p;
}