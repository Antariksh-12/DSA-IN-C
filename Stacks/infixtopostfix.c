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
        printf("Push failed");
        return;
    }

    s->top++;
    s->arr[s->top]=value;
}

char pop(stack *s){
    if(isempty(s)){
        printf("Empty stack");
        return;
    }

    char value =  s->arr[s->top];
    s->top--;
    return value;
}

int isoperator(char op){

    if(op=='+' || op=='-' || op=='*'|| op=='/'|| op=='^'){
        return 1;
    }
    return 0;
}

int precedence(char op){
    if(op=='^'){
        return 3;
    }
    if(op=='*' || op=='/'){
        return 2;
    }
    if(op=='+' || op=='-'){
        return 1;
    }
    return 0;
}

void infixtopostfix(char* infix , char* postfix){

    stack* s2 = (stack*)malloc(sizeof(stack));
    s2->top=-1;
    s2->size=100;
    s2->arr=(char*)malloc(s2->size*sizeof(char));

    int i=0,j=0;

    while(infix[i]!='\0'){

        if((infix[i]>='a' && infix[i]<='z')||
            (infix[i]>='A' && infix[i]<='Z')||
            (infix[i]>='0' && infix[i]<='9')){
                postfix[j++]=infix[i];
            }
        
        else if(infix[i]=='('){
            push(s2,infix[i]);
        }

        else if(infix[i]==')'){

            while(!isempty(s2) && peek(s2)=='('){
                postfix[j++] = pop(s2);
                        }
            if(!isempty(s2)){
                pop(s2);
            }            
        }

        else if(isoperator(infix[i])){

            while(!isempty(s2) && peek(s2)!='(' && precedence(peek(s2)>=precedence(infix[i]))){
                postfix[j++] = pop(s2);
            }

            push(s2,infix[i]);
        }
        i++;

        while(!isempty(s2)){
            postfix[j++]=pop(s2);
        }
        postfix[j]='\0';

        free(s2->arr);
        free(s2);
    }
}

int main(){

    char infix[100];
    char postfix[100];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixtopostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;

}

