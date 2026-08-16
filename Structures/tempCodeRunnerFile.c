#include <stdio.h>
#include <string.h>

typedef struct person{
    int age;
    double weight;
}person;

void display(person* p){
    printf("%d\n",p->age);
    printf("%.2f\n",p->weight);
}

int main(){

    person p;
    p.age = 19;
    p.weight=100;

    display(&p);

    return 0;
}