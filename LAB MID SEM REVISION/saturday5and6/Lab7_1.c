#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int size;
    int top;
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

void push(stack *s , int data){
    if(isfull(s)){
        return;
    }
    s->top++;
    s->arr[s->top]=data;
}

char pull(stack *s){
    if(isempty(s)){
        return '\0';
    }
    char value = s->arr[s->top];
    s->top--;
    return value;
}

int ispaindrome(stack *s , char* str){
    for(int i=0;str[i]!='\0';i++){
        push(s,str[i]);
    }

    for(int i=0;str[i]!='\0';i++){
        char popped = pull(s);
        if(popped!=str[i]){
            return 0;
        }
    }
    return 1;   
}
 
char peek(stack *s){
    return s->arr[s->top];
}

int parenthesismatch(stack *s , char* str){
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
            push(s,str[i]);
        }

        if(str[i]==')' || str[i]==']' || str[i]=='}'){
            if(isempty(s)){
                return 0;
            }

        if(str[i]==')' && peek(s)!='('){
            return 0;
        }    
        if(str[i]==']' && peek(s)!='['){
            return 0;
        }
        if(str[i]=='}' && peek(s)!='{'){
            return 0;
        }
        pull(s);
        }
    }
    if(isempty(s)){
        return 1;
    }
    return 0;
}

int main(){
stack* s = (stack*)malloc(sizeof(stack));
s->arr=(char*)malloc(100*sizeof(char));
s->top=-1;
s->size=100;

char arr[100]="AbabA";
char arr2[100]="{12{56}+65}";

if(ispaindrome(s,arr)==1){
    printf("The given string is a palindrome");
}else{
    printf("The given string is not a palindrome");
}

printf("\n");

if(parenthesismatch(s,arr2)==1){
    printf("Parenthesis are matching");
}else{
    printf("The parenthesis are not matching");
}

free(s->arr);
free(s);


    return 0;
}