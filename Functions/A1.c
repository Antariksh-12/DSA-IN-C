//Structure is a user defined datatype

#include <stdio.h>

//This is the structure declaration

struct Employee{
    char name;
    int id;
    float salary;
};


int main(){

struct Employee emp;
emp.name='A';
emp.id = 12;
emp.salary=12000;

struct Employee emp2;
emp2.name='B';
emp2.id = 14;
emp2.salary=15000;

printf("%c",emp.name);

    return 0;
}