#include <stdio.h>

int main(){

    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[100];
    }pokemon;

    pokemon arr[3];

    for(int i=0;i<3;i++){
        scanf("%d",&arr[i].hp);
        scanf("%d",&arr[i].attack);   
        scanf("%d",&arr[i].speed);
        scanf(" %c",&arr[i].tier);
    }

    for(int i=0;i<3;i++){
        printf("%d\n",arr[i].hp);
        printf("%d\n",arr[i].attack);
        printf("%d\n",arr[i].speed);
        printf("%c\n",arr[i].tier);
    }

    printf("\n");

    return 0;
} 