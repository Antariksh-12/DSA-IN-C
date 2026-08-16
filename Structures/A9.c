#include <stdio.h>

int main(){

    typedef struct player{
        char name[100];
        int age;
        int matches;
        float avg;
    }player;
        
    player arr[20];

    for(int i=0;i<20;i++){
        scanf(" %s",arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].matches);
        scanf("%f",&arr[i].avg);
    }

    for(int i=0;i<20;i++){
        printf(" %s\n",arr[i].name);
        printf("%d\n",arr[i].age);
        printf("%d\n",arr[i].matches);
        printf("%.2f\n",arr[i].avg);
    }

    return 0;
    
}