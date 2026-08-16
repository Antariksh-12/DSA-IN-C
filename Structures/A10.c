#include <stdio.h>
#include <string.h>

int main(){

     typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[100];
    }pokemon;


    pokemon a,b,c;

    a.attack=100;
    a.hp=100;
    a.speed=50;
    a.tier='A';
    strcpy(a.name,"Blastoise");

    // b.attack=a.attack;
    // b.hp=a.hp;
    // b.speed=a.speed;
    // b.tier=a.tier;
    // strcpy(b.name,a.name);

    b=a; 

    printf("%d",b.attack);

    return 0;

}