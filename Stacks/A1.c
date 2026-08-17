

#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int top;
    int size;
    int *arr;
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

void push(stack* s , int value){
    if(isfull(s)){
        printf("Stack overflow");
        return ;
    }
    s->top++;
    s->arr[s->top]=value;
}

void pop(stack *s){
    if(isempty(s)){
        printf("Stack underflow");
        return ;
    }
    printf("Element :%d\n",s->arr[s->top]);
    s->top--;
}

void traverse(stack *s){

    for(int i=s->top;i>=0;i--){
        printf("%d ",s->arr[i]);
    }
}

int main(){

    stack *s;
    s=(stack*)malloc(sizeof(stack));

    s->size=60;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));


    int emp = isempty(s);
    printf("\n");
    push(s,1);
    push(s,2);
    push(s,3);
    printf("\n");
    int full = isfull(s);
    
    traverse(s);


    free(s->arr);
    free(s);
}



    