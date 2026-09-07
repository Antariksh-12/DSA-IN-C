#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct student{
    char *name; //pointer to buffer of char
    int roll;
    int  *marks;//pointer to an int
}student;

void input(student *s , int n){
    for(int i=0;i<n;i++){
        printf("Enter name :");
        scanf(" %99[^\n]",(s+i)->name);
        printf("Enter roll number :");
        scanf("%d",&(s+i)->roll);
        printf("Enter marks :");
        scanf("%d",&(s+i)->marks);
    }
}

void display(student *s , int n){
    for(int i=0;i<n;i++){
        printf("Name :%s\n",(s+i)->name);
        printf("Roll Number :%d\n",(s+i)->roll);
        printf("Marks :%d\n",(s+i)->marks);
    }
//%s wants address so works with (s+i)->name
//%d wants value so *(s+i)->marks is required
// ptr->field = (*ptr).field
}


void highest(student *s , int n){
    
    student* highest = s;
    for(int i=0;i<n;i++){
        if(*(s+i)->marks>*(highest)->marks){
            highest = s+i;
        }
    }

    printf("Marks of student with highest marks is %d\n",*(highest->marks));
}

int main(){

    int n;
    printf("Enter the number of students :");
    scanf("%d",&n);
    student* s = (student*)malloc(n*sizeof(student));
    for(int i=0;i<n;i++){
        (s+i)->name = (char*)malloc(100*sizeof(char));
        (s+i)->marks=(int*)malloc(100*sizeof(int));
    }

    input(s,n);
    display(s,n);
    highest(s,n);

    for(int i=0;i<n;i++){
        free((s+i)->name);
        free((s+i)->marks);
    }
    free(s);

    return 0;
}

