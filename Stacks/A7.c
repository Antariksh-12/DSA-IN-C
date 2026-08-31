#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int top;
    int size;
    char* arr;
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

void push(stack *s , int value){
    if(isfull(s)){
        return;
    }
    s->top++;
    s->arr[s->top]=value;
}

void pop(stack *s){
    if(isempty(s)){
        printf("Stack udnerflow");
        return;
    }

    s->top--;
}

char peek(stack *s){

    return s->arr[s->top];
}


int parenthesismatch(char *arr){

stack *s2 = (stack*)malloc(sizeof(stack));
s2->top=-1;
s2->size=100;
s2->arr=(char*)malloc(s2->size*sizeof(char));


for(int i=0;arr[i]!='\0';i++){

    if(arr[i]=='(' || arr[i]=='[' || arr[i]=='{'){
        push(s2,arr[i]);
    }

    if(arr[i]==')' || arr[i]==']' || arr[i]=='}'){
        if(isempty(s2)){
            return 0;
        }

        if(arr[i]==')' && peek(s2)!='('){
            return 0;
        }

        if(arr[i]=='}' && peek(s2)!='{'){
            return 0;
        }

        if(arr[i]==']' && peek(s2)!='['){
            return 0;
        }
        pop(s2);
    }
}


    if(isempty(s2)){
        return 1;
    }

    return 0;
}


    

    

int main(){

    stack*s = (stack*)malloc(sizeof(stack));
    s->top=-1;
    s->size=100;
    s->arr=(char*)malloc(s->size*sizeof(char));


    char *arr ;
    arr="({45*[45+4]}+34)";

    if(parenthesismatch(arr)==1){
        printf("The parenthesis are matching");
    }
    else{
        printf("The parenthesis are not matching");
    }

    return 0;
}