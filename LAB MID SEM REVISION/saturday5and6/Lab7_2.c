#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

char peek(stack *s){
    return s->arr[s->top];
}

int precedence(char op){
    
    if(op=='^'){
        return 3;
    }
    if(op=='*' || op=='/'||op=='%'){
        return 2;
    }
    if(op=='+' || op=='-'){
        return 1;
    }
    return 0;
}

void infixtopostfix(char* infix , char* postfix){

    stack *s;
    s->top=-1;
    s->size=100;
    s->arr=(char*)malloc(100*sizeof(char));

    int i=0,j=0;

    while(infix[i]!='\0'){

        if((infix[i]>='a' && infix[i]<='z')||
        (infix[i]>='A' && infix[i]<='Z')||
        (infix[i]>='0' && infix[i]<='9')){

            postfix[j]=infix[i];
            j++;
            i++;
        }

        else if(infix[i]=='('){
            push(s,infix[i]);
            i++;
        }

        else if(infix[i]==')'){

            while(!isempty(s) && peek(s)!='('){
                postfix[j]=pop(s);
                j++;
            }
            pop(s); //to remove '('
            i++;
        }

        else{

            while(!isempty(s)&&(precedence(peek(s))>=infix[i])){
                postfix[j]=pop(s);
                j++;
            }
            push(s,infix[i]);
            i++;
        }
    }

     while(!isempty(s)){
        postfix[j]=pop(s);
        j++;
     }

     postfix[j]='\0';
     
    }

int postfixevaluation(char* postfix){
    stack *s = (stack*)malloc(sizeof(stack));
    s->top=-1;
    s->size=100;
    s->arr=(char*)malloc(sizeof(char));

    int i=0;
    while(postfix[i]!='\0'){
        if((postfix[i]>='0' && postfix[i]<='9')){
            int value = postfix[i]='0';
            push(s,postfix[i]);
        }

        if((postfix[i]=='+')||postfix[i]=='-'||postfix[i]=='*'||postfix[i]=='/'||postfix[i]=='%'||postfix[i]=='^'){
            int a = pop(s);
            int b = pop(s);

           int result;

           if(postfix[i]=='+'){
            result=a+b;
           }
           else if(postfix[i]=='-'){
            result = a-b;
           }
           else if(postfix[i]=='*'){
            result = a*b;
           }else if(postfix[i] == '/'){
                result = b / a;
            }
            else if(postfix[i] == '%'){
                result = b % a;
            }
            push(s,result);
        }
        i++;
    }
    int answer = pop(s);
    return answer;
        
}
            

