#include <stdio.h>
#include <string.h>

int main(){

    struct person{
        char name[100];
        double salary;
        int age;
    };

    struct person p1 , p2;

    strcpy(p1.name,"Arun");
    p1.salary=25000;
    p1.age=20;

    strcpy(p2.name,"Varun");
    p2.salary=33000;
    p2.age=19;

    printf("%s\n",p1.name);
    printf("%d\n",p2.age);

    return 0;
}