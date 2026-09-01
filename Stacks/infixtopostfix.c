#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int top;
    int size;
    char *arr;
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
        return ;
    }

    s->top++;
    s->arr[s->top]=value;
}

char pop(stack *s){
    char value = s->arr[s->top];
   s->top--;
   return value;
}

char peek(stack *s){
    return s->arr[s->top];
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

int isoperator(char ch){
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^'){
        return 1;
    }
    return 0;
}

void infixtopostfix(char *infix , char *postfix){

    stack *s;

    s->size=100;
    s->top==-1;
    s->arr=(char*)malloc(sizeof(char));

    int i=0 , j=0;

    while(infix[i]!='\0'){
    if((infix[i]>='a' && infix[i]<='z')||
    (infix[i]>='A' && infix[i]<='Z')||
    (infix[i]>='0' && infix[i]<='9')){
        postfix[j]=infix[i];
        j++;
    }

    if(infix[i]=='('){
        push(s,infix[i]);
    }

    if(infix[i]==')'){
        while(!isempty(s) && peek(s)=='('){
            postfix[j]=infix[i];
            j++;
        }
    if(!isempty(s)){
        pop(s);
    }    
    }
    
    if(isoperator(infix[i])){

        while(!isempty(s) && peek(s)!='(' && precedence(peek(s))>=precedence(infix[i])){
            postfix[j++]=pop(s);
        }
        push(s,infix[i]);
    }
    i++;
}

while(!isempty(s)){
    postfix[j++]=pop(s);
}   



postfix[j]='\0';

free(s->arr);
}



int main(){

    char infix[100];
    char postfix[100];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;


}