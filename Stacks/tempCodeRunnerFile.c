#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct stack{
    int top;
    int size;
    char *arr;
}stack;

int isfull(stack *s){

    if(s->top==s->size-1)
    {return 1;}
return -1;}

int isempty(stack* s){

    if(s->top==-1){
        return 1;
    }
    return -1;
}


void push(stack *s , char value){

    if(isfull(s)==1){
        printf("Stack overflow");
        return;
    }

    s->top++;
    s->arr[s->top]=value;
}


char pop(stack *s){

    if(isempty(s)==1){
        printf("Stack underflow");
        return 0;
    }

    char value = s->arr[s->top];
    s->top--;

    return value;
}

int parenthesismatch(char* str , stack *s){

    int i=0;
    int len=0;

    while(str[i]!='\0'){
        i++;
        len++;
    }

    for(int i=0;str[i]!='\0';i++){
        
        if(str[i]=='('){
            push(s,str[i]);
        }else if(str[i]==')'){
            if(isempty(s)==1){
                return 0;
            }
            pop(s);
        }

         if(str[i]=='{'){
            push(s,str[i]);
        }else if(str[i]=='}'){
            if(isempty(s)==1){
                return 0;
            }
            pop(s);
        }

         if(str[i]=='['){
            push(s,str[i]);
        }else if(str[i]==']'){
            if(isempty(s)==1){
                return 0;
            }
            pop(s);
        }


    }

    if(isempty(s)==1){
        return 1;
    }
    return 0;
}
        
        



int main()
{

    
    char str[100];
    printf("Enter the string :");
    scanf("%s",str);

    stack* s = (stack*)malloc(sizeof(stack));

    s->top=-1;
    s->size=strlen(str);
    s->arr=(char*)malloc(s->size*sizeof(char));

    if(parenthesismatch(str,s)==1){
        printf("The parenthesis are matching");
    }
    else{
        printf("The parenthesis are not matching");
    }


    return 0;
}



