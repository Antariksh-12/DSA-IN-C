#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct college{
    char* name;
    int code;
    char* city;
    int ranking[5];
}college;

typedef struct stack{
    int top;
    int size;
    college *arr;
}stack;

int isempty(stack *s){
    if(s->top==-1){
        return 1;
    }
    return 0;
}

int isfull(stack *s){
    if(s->top==s->size-1){
        return 1;
    }
    return 0;
}

void push(stack *s , college data){
    if(isfull(s)){
        return;
    }
    s->top++;
    s->arr[s->top]=data;
}

void pop(stack *s){
    s->top--;
}

void input(college *c, int n){
    for(int i=0;i<n;i++){
        printf("Enter college name :");
        scanf(" %99[^\n]",(c+i)->name);
        printf("Enter code :");
        scanf("%d",&(c+i)->code);
        printf("Enter city :");
        scanf(" %99[^\n]",(c+i)->city);
        printf("Enter ranking for past 5 years:");
        for(int j=0;j<5;j++){
        scanf("%d",&(c+i)->ranking[j]);
    }
    }
     }

int avgranking(college *c , int index){
    int sum = 0;

    for(int i=0;i<5;i++){
        sum+=(c+index)->ranking[i];
    }
    return sum/5;
}


    

void display(college *c , int n){
    for(int i=0;i<n;i++){
    printf("College name :%s\n",(c+i)->name);
    printf("College code :%d\n",(c+i)->code);
    printf("Collge city :%s\n",(c+i)->city);
    printf("College ranking :\n");
    for(int j=0;j<5;j++){
        printf("%d ",(c+i)->ranking[j]);
    }
    printf("Average ranking :%d\n",avgranking(c,i));   
}
}



int pushing(stack *s , int n ,college *c){
    
}



int main(){

    int n;
    printf("Enter the number of colleges :");
    scanf("%d",&n);
    college* c = (college*)malloc(n*sizeof(college));
   
    for(int i=0;i<n;i++){
        (c+i)->name=(char*)malloc(100*sizeof(char));
        (c+i)->city=(char*)malloc(100*sizeof(char));
    }

    stack *s = (stack*)malloc(sizeof(stack));
    s->top=-1;
    s->size=100;
    s->arr=(college*)malloc(100*sizeof(college));


    input(c,n);
    display(c,n);



    return 0;
}