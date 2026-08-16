#include <stdio.h>
#include <string.h>

typedef struct pokemon{
    int attack;
    int speed;
    char tier;
}pokemon;

int main(){

    pokemon p1 = {23,45,'A'};

    printf("%d\n",p1.attack);
    printf("%d\n",p1.speed);
    printf("%c\n",p1.tier);
    return 0;
}