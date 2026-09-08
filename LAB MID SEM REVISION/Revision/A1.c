#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct employee{
    int id;
    char *name;
    char* mail;
    double salary;
    int dob_day;
    int dob_month;
    int dob_year;
}employee;

void input(employee *e ,int n){
    for(int i=0;i<n;i++){
        printf("Enter ID :");
        scanf("%d",&(e+i)->id);
        printf("Enter name :");
        scanf(" %99[^\n]",(e+i)->name);
        printf("Enter mail :");
        scanf(" %99[^\n]",(e+i)->mail);
        printf("Enter salary :");
        scanf("%lf",&(e+i)->salary);
        printf("Enter DOB :");
        scanf("%d%d%d",&(e+i)->dob_day,&(e+i)->dob_month,&(e+i)->dob_year);
    }
}

void display(employee *e , int n){
    for(int i=0;i<n;i++){
        printf("ID :%d\n",(e+i)->id);
        printf("Name :%s\n",(e+i)->mail);
        printf("Mail :%s\n",(e+i)->mail);
        printf("Salary :%lf\n",(e+i)->salary);
        printf("Date of birth :%d%d%d\n",(e+i)->dob_day,(e+i)->dob_month,(e+i)->dob_year);
    }
}

void countemp(employee *e , int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(strstr((e+i)->mail,"@gmail.com")!=NULL){
            count++;
        }
    }
    printf("The number of employees with gmail account is %d\n",count);
}

void highestsalary(employee *e , int n){
    
    employee *highest = e;

    for(int i=0;i<n;i++){
        if((e+i)->salary > highest->salary){
            highest=(e+i);
        }
    }

    printf("Details of employee with highest salary");
    printf("ID :%d\n",(highest)->id);
    printf("Name :%s\n",(highest)->name);
    printf("Mail :%s\n",highest->mail);
    printf("Salary :%lf\n",(highest)->salary);
    printf("Date of birth :%d%d%d\n",(highest)->dob_day,(highest)->dob_month,(highest)->dob_year);
}
 
void retirementage(employee *e , int n){

    int count=0;
    for(int i=0;i<n;i++){
        int age = 2026-(e+i)->dob_year;
        if(age>=60){
            count++;
        }
    }
    printf("The number of employees with retirement age is %d\n",count);
}
    


int main(){

int n;
printf("Enter the number of students :");
scanf("%d",&n);

employee *e = (employee*)malloc(n*sizeof(employee));
for(int i=0;i<n;i++){
    (e+i)->name=(char*)malloc(100*sizeof(char));
    (e+i)->mail=(char*)malloc(100*sizeof(char));
}

input(e,n);
printf("\n");
display(e,n);
printf("\n");
countemp(e,n);
printf("\n");
highestsalary(e,n);
printf("\n");
retirementage(e,n);

for(int i=0;i<n;i++){
    free((e+i)->name);
    free((e+i)->mail);
}
free(e);

    return 0;
}