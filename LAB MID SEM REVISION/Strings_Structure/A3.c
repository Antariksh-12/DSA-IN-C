#include <stdio.h>
#include <stdlib.h>

typedef struct str{
    char name[100];
    int roll;
    float marks;
}str;


void input(str* s , int n){

    for(int i=0;i<n;i++){
       scanf(" %[^\n]",s[i].name); 
       scanf("%d",&s[i].roll);
       scanf("%f",&s[i].marks);
    }
}

void display(str *s , int n){
    for(int i=0;i<n;i++){

        printf("%s",s[i].name);
        printf("%d",s[i].roll);
        printf("%f",s[i].marks);
    }
}

str* highest(str *s , int n){

    str* top = s;
    for(int i=0;i<n;i++){
        if(s[i].marks>top->marks){
            top = (s+i);
        }
    }
    return top;
}

   

int main(){

    int n;
    printf("Enter the number of students :");
    scanf("%d",&n);
    str *s;
    s=(str*)malloc(n*sizeof(str));

    input(s,n);
    display(s,n);

    str * topper = highest(s,n);

    return 0;


}
