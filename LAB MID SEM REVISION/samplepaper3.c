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

int count(employee *e , int n){

    int count = 0;

    for(int i=0;i<n;i++){
        if(strstr((e+i)->email,"@gmail.com")!=NULL){
            count++;
        }
    }
    return count;
}

void highestSalary(employee *e , int n){
    
    int index=0;
    int max = e->salary;
    for(int i=0;i<n;i++){
        if((e+i)->salary>max){
            max=(e+i)->salary;
            index = i;
        }
    }

    printf("The employee with the highest salary is %s and salary is %f\n",e[index].name,e[index].salary);
}

void retirementAge(employee *e , int  n ){

    printf("People with retirement age :\n");

    int count=0;
    int retirement_age = 60;
    for(int i=0;i<n;i++){
        int age = 2026 - (e+i)->dob_year;
        if(age>retirement_age){
            printf("%s\n",(e+i)->name);
            count++;
        }
    }
    if(count==0){
        printf("No one is having retiremnt age\n");
    }
}



int main(){

    int n;
    printf("Enter the number of employees :");
    scanf("%d",&n);
    employee *e = (employee*)malloc(n*sizeof(employee));
    
    printf("Enter details for employees :\n");
    for(int i=0;i<n;i++){
        (e+i)->email = (char*)malloc((100*sizeof(char)));
        (e+i)->name = (char*)malloc((100*sizeof(char)));
        printf("Enter details for employee %d",i+1);
        printf("Enter ID :");
        scanf("%d",&e[i].id);
        printf("Enter name :");
        scanf(" %99[^\n]",e[i].name);
        printf("Enter E-Mail :");
        scanf(" %99[^\n]",e[i].email);
        printf("Enter salary");
        scanf("%f",&e[i].salary);
        printf("Enter Date of Birth :");
        scanf("%d%d%d",&e[i].dob_day,&e[i].dob_month,&e[i].dob_year);
    }

    printf("\n");
    int countres = count(e,n);
    printf("The number of employees having gmail id is %d\n",countres);

    highestSalary(e,n);
    retirementAge(e,n);


    free(e);

    return 0;
}