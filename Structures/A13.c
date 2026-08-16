#include <stdio.h>


    typedef struct pokemon{
        int attack;
        int hp;
        int speed;
        int tier;
    }pokemon;

    void change(pokemon p){
        p.hp=70;
        p.attack=60;
        p.speed=110;
    }

   void fun(pokemon p){
     printf("%d\n",p.hp);
    }

int main(){
    pokemon pikachu;

    pikachu.hp=60;
    pikachu.attack=50;
    pikachu.speed=100;

    change(pikachu);

    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);


    return 0;
}
    
