#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    char name[100];
    int roll;
    char grade;
}student;

void readStudents(student students[] , int n ){
    for(int i=0;i<n;i++){
        printf("Enter student name :");
        scanf(" %[^\n]",&students[i].name);
        printf("Enter roll number :");
        scanf("%d",&students[i].roll);
        printf("Enter student grade :");
        scanf(" %c",&students[i].grade);
    }
}

void displayStudents(student students[] , int n){
    for(int i=0;i<n;i++){

        printf("Student Name : %s\n",students[i].name);
        printf("Roll Number :%d\n",students[i].roll);
        printf("Student grade :%c\n",students[i].grade);
        printf("\n");
    }
}

void sort(student students[] , int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(students[j].roll>students[j+1].roll){
                student temp = students[j];
                students[j]=students[j+1];
                students[j+1]=temp;
            }
        }
    }
}


        


int main(){

    int n;
    printf("Enter the number of students :");
    scanf("%d",&n);
    if(n<1){
        printf("Invalid number of students");
    }

    student students[n];

    printf("Enter student details :");
    printf("\n");
    
    readStudents(students,n);
    sort(students,n);
    displayStudents(students,n);

    return 0;
}