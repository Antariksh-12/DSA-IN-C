#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack{
    int top;
    int size;
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

void push(stack *s , char data){
    if(isfull(s)){
        return;
    }
    s->top++;
    s->arr[s->top]=data;
}

char pop(stack *s){
    if(isempty(s)){
        return 1;
    }
    char value = s->arr[s->top];
    s->top--;
    return value;
}

char peek(stack *s){
    return s->arr[s->top];
}

int ispalindrome(stack *s,char *str){

   int i=0;
    while(str[i]!='\0'){
        push(s,str[i]);
        i++;
    }

    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=pop(s)){
            return 0;
        }
    }
    return 1;
}

int parenthesismatch(stack *s , char *str){

    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
            push(s,str[i]);
        }
    

   else if(str[i]==')'||str[i]==']'||str[i]=='}'){

    if(isempty(s)){
        return 0;
    }

        if(str[i]==')' && peek(s)!='('){
            return 0;
        }
        if(str[i]==']' && peek(s)!='['){
            return 0;
        }if(str[i]=='}' && peek(s)!='{'){
            return 0;
        }
        pop(s);
    }    
    }

if(isempty(s)){
    return 1;
}

return 0;
}

        


int main(){

    stack *s = (stack*)malloc(sizeof(stack));
    s->top=-1;
    s->size=100;
    s->arr=(char*)malloc(100*sizeof(char));

    char str[100];
    printf("Enter the string :");
    scanf(" %99[^\n]",str);
    
   

    int res = ispalindrome(s,str);
    if(res==1){
        printf("The given string is a palindrome");
    }
    else{
        printf("The given string is not a palindrome");
    }

    if(parenthesismatch(s,str)==1){
        printf("The parenthesis are matching");
    }
    else{
        printf("The parenthesis are not matching");
    }

    free(s->arr);
    free(s);
    
    return 0;
}