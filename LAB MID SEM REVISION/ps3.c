#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct employee{
    int id;
    char *name;
    char *email;
    float salary;
    int dob_year;
    int dob_month;
    int dob_day;
}employee;

int countgmail(employee* emp , int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(strstr((emp+i)->email,"@gmail.com")!=NULL){
            count++;
        }
    }
    return count;
}

void highestSalary(employee* emp , int n){
    
    int index = 0;
    float max = (emp+0)->salary;
    for(int i=0;i<n;i++){
        if((emp+i)->salary>max){
            max = (emp+i)->salary;
            index = i;
        }
    }
    printf("The person with highest salary is %s and salarys is %.2f",(emp+index)->name,(emp+index)->salary);
}

void retirementAge(employee* emp , int n){
    int retirement_age=60;

    printf("People having retirement age is \n");
    for(int i=0;i<n;i++){
    int age = 2026 - (emp+i)->dob_year;
    if(age>=retirement_age){
        printf("%s\n",(emp+i)->name);
    }
    }
}        

int main(){

int n;
printf("Enter the number of employees :");
scanf("%d",&n);
employee* emp = (employee*)malloc(n*sizeof(employee));
if(emp==NULL){
    printf("memory allocation failed");
    return 1;
}

for(int i=0;i<n;i++){
    (emp+i)->name=(char*)malloc(100*sizeof(char));
    (emp+i)->email=(char*)malloc(100*sizeof(char));


    printf("Enter id :");
    scanf("%d",&(emp+i)->id);
    printf("Enter name :");
    scanf(" %[^\n]",(emp+i)->name);
    printf("Enter email :");
    scanf(" %[^\n]",(emp+i)->email);
    printf("Enter salary :");
    scanf("%f",&(emp+i)->salary);
    printf("Enter DOB :");
    scanf("%d%d%d",&(emp+i)->dob_day,&(emp+i)->dob_month,&(emp+i)->dob_year);
}

int res = countgmail(emp  , n);
printf("The number of people having gmail is %d\n",res);

highestSalary(emp,n);
printf("\n");
retirementAge(emp,n);

for(int i=0;i<n;i++){
    free((emp+i)->name);
    free((emp+i)->email);
}

free(emp);

    return 0;
}