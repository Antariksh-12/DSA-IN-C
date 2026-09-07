#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack{
    int size;
    int top;
    char *arr;
}stack;

int isfull(stack *s){
    if(s->top==s->size-1){
        return 1;
    }
    return 0;
}

int isempty(stack *s){
    if(s->top==-1){
        return 1;
    }
    return 0;
}

void push(stack *s , int data){
    if(isfull(s)){
        return;
    }
    s->top++;
    s->arr[s->size]=data;
}

char pop(stack *s){
    if(isempty(s)){
        return;
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
    else if(op=='*' || op=='/'){
        return 2;
    }
    else if(op=='+' || op=='-'){
        return 1;
    }
    return 0;
}

int isoperator(char ch){
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^'){
        return 1;
    }
    return 0;
}

void infixtopostfix(char *infix , char *postfix){

    stack *s = (stack*)malloc(sizeof(stack));
    s->top=-1;
    s->size=100;
    s->arr=(char*)malloc(s->size*sizeof(stack));
    
    int i=0,j=0;

    while(infix[i]!='\0'){
        char ch = infix[i];

        if((ch>='A' && ch<='Z')||
            (ch>='a' && ch<='z')||
            (ch>=0 && ch<='9')){
                push(s,ch);
            }
        else if(ch=='('){
            push(s,ch);
        }    
        else if(ch==')'){
            while(!isempty(s) && peek(s)!='('){
                postfix[j]=pop(s);
                j++;
            }
            pop(s);
        }  
        else{
            while(!isempty(s) && precedence(peek)>=precedence(ch)){
                postfix[j]=pop(s);
                j++;
            }
            push(s,ch);
        }  
        i++;
    }

    while(!isempty(s)){
        push(postfix[j],s);
        j++;
    }
    postfix[j]='\0';
    free(s->arr);
    free(s);
}

int postfixevaluate(char *postfix){

    stack *s = (stack*)malloc(sizeof(stack));
    s->top=-1;
    s->size=100;
    s->arr=(int*)malloc(sizeof(int));


    int i=0;
    while(postfix[i]!='\0'){
        char ch = postfix[i];

        if(ch>='0'&& ch<='9'){
            push(s,ch);
        } 
        else{

            int a = pop(s);
            int b = pop(s);

            int result;
            if(ch=='+'){
                result = b+a;
            }
            else if(ch=='-'){
                result=a-b;
            }
            else if(ch=='*'){
                result = b*a;
            }
            else if(ch=='/'){
                result = b/a;
            }
            push(s,result);
        }
        i++;
    }
    int ans = pop(s);
    free(s->arr);
    free(s);

    return ans;
}


int main(){


    return 0;
}