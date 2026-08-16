#include <stdio.h>

int main(){

    typedef struct pokemon{
        char name[100];
        int hp;
        int speed;
        int tier;
    }pokemon;


    typedef struct legendary{
        pokemon normal;
        char ability[100];
    }legendary;
        

    legendary mewtwo;
    strcpy(mewtwo.ability,"Pressure");
    mewtwo.normal.hp=200;
    mewtwo.normal.speed=200;
    mewtwo.normal.tier='S';

    printf("%d\n",mewtwo.normal.hp);
    printf("%d\n",mewtwo.normal.speed);
    printf("%c\n",mewtwo.normal.tier);
    printf("%s\n",mewtwo.ability);

    return 0; 

}