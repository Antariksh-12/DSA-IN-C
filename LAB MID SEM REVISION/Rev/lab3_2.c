#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student{
    char *name;
    int roll;
    char grade;
}student;

void read(student *s, int n){
    for(int i=0;i<n;i++){
        printf("Enter name :");
        scanf(" %99[^\n]",(s+i)->name);
        printf("Enter roll :");
        scanf("%d",&(s+i)->roll);
        printf("Enter grade :");
        scanf(" %c",&(s+i)->grade);
    }
}

void display(student *s,int n){
    for(int i=0;i<n;i++){
        printf("Name :%s\n",(s+i)->name);
        printf("Roll Number :%d\n",(s+i)->roll);
        printf("Grade :%c\n",(s+i)->grade);

    }
}

void sort(student *s,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if((s+i)->roll>(s+i+1)->roll){
                student temp = *(s+i);
                *(s+i)=*(s+i+1);
                *(s+i+1)=temp;
            }
        }
    }
}

int main(){

int n;
printf("Enter the number of students :");
scanf("%d",&n);

student* s = (student*)malloc(n*sizeof(student));
for(int i=0;i<n;i++){
    (s+i)->name=(char*)malloc(100*sizeof(char));
}


read(s,n);
sort(s,n);
display(s,n);

for(int i=0;i<n;i++){
    free((s+i)->name);
}
free(s);

return 0;
}