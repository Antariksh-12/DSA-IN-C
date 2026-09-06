#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student{
    char *name;
    int roll;
    float marks;
}student;

void input(student* s ,int n){
    for(int i=0;i<n;i++){
        printf("Enter name :");
        scanf(" %99[^\n]",(s+i)->name);
        printf("Enter roll number :");
        scanf("%d",&(s+i)->roll);
        printf("Enter marks :");
        scanf("%f",&(s+i)->marks);
    }
}

void display(student *s , int n){
    for(int i=0;i<n;i++){
        printf("Name :%s\n",(s+i)->name);
        printf("Roll Number :%d\n",(s+i)->roll);
        printf("Marks :%.2f\n",(s+i)->marks);
    }
}

void displayhighest(student *s, int n){

    student* highest = s;

    for(int i=0;i<n;i++){
        if((s+i)->marks>highest->marks){
            highest = (s+i);
        }
    }

    printf("Name :%s\n",highest->name);
    printf("Roll number :%d\n",highest->roll);
    printf("Marks :%f\n",highest->marks);
}


int main(){

    int n;
    printf("Enter the number of students :");
    scanf("%d",&n);

    student* s = (student*)malloc(n*sizeof(student));
    if(s==NULL){
        printf("Memory allocation failed");
        return 1;
    }

    for(int i=0;i<n;i++){
    (s+i)->name=(char*)malloc(100*sizeof(char));}
    if(s->name==NULL){
        printf("Memory allocation failed");
        return 1;
    }

    input(s,n);
    display(s,n);
    displayhighest(s,n);

        for(int i=0;i<n;i++){
            free(s->name);
        }
        free(s);

    return 0;
}