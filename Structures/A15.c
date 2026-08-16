#include <stdio.h>
#include <string.h>

typedef struct student{
    int roll;
    char name[100];
    char department[100];
    char course[100];
    int year;
}student;

void check(student s1 , student s2){
    if(strcmp(s1.department,s2.department)==0){
        printf("Same department");
    }else{
        printf("Different department");
    }
}

int main(){


    student s1 , s2 ;
    strcpy(s1.department,"CSE");
    strcpy(s2.department,"EEE");

    check(s1,s2);

    return 0;

}