#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student{
    int roll;
    char name[100];
    float marks;
}student;

int main(){

student s[3];

s[0].roll=1;
strcpy(s[0].name,"Antriksh");
s[0].marks=10;

return 0;
}
