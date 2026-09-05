#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee{
    int id;
    char* name;
    char* email;
    float salary;
    int dob_day;
    int dob_month;
    int dob_year;
}employee;

int count(employee* e , int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(strstr((e+i)->email,"@gmail.com")!=NULL){
            count++;
        }
    }
    return count;
}

void highestSalary(employee *e , int n){
    int max = e->salary;
    int index;
    for(int i=0;i<n;i++){

    }
}

int main(){

    employee* e = (employee*)malloc(sizeof(employee));



    return 0;
}