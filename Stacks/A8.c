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

void push(stack *s , int data){
    if(isfull(s)==1){
        return ;
    }
    s->top++;
    s->arr[s->top]=data;
}

char pop(stack *s){
    char value =  s->arr[s->top];
    s->top--;
    return value;
}
 
char peek(stack *s){
    return s->arr[s->top];
}

void traverse(stack *s){
    for(int i=s->top;i>=0;i--){
        printf("%d ",s->arr[i]);
    }
}

void infixtopostfix(stack *s , char *infix , char *postfix){

    int i=0;
    int j=0;

    while(infix[i]!='\0'){

        if((infix[i]>='a' && infix[i]<='z')||
        (infix[i]>='A' && infix[i]<='Z')||
        infix[i]>='0' && infix[i]<='9'){
            postfix[j]=infix[i];
            j++;
        }

    else if(infix[i]=='('){
        push(s,infix[i]);
    }    
    
    }
}

int precedence(char op){

    if(op=='^'){
        return 3;
    }
    if(op=='*' || op=='/' || op=='%'){
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




int main(){

    stack *s = (stack*)malloc(sizeof(stack));
    
    s->top=-1;
    s->size=100;
    s->arr=(int*)malloc(sizeof(int));


}
