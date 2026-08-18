#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
    int top;
    int size;
    char* arr;
}stack;

stack* push(stack *s , char value){

    if(s->top==s->size-1){
        printf("Stack overflow");
        return s;
    }

    s->top++;
    s->arr[s->top]=value;

    return s;
}

char pop(stack *s){

    if(s->top==-1){
        printf("Stack underflow");
        return '\0';
    }

    char value = s->arr[s->top];
    s->top--;

    return value;
}

void traverse(stack *s){

    for(int i=s->top;i>=0;i--){
        printf("%c ",s->arr[i]);
    }
    printf("\n");
}


int main(){

    stack* s = (stack*)malloc(sizeof(stack));

    s->top=-1;
    s->size=100;
    s->arr=(char*)malloc(s->size*sizeof(char));

    push(s,'m');
    push(s,'a');
    push(s,'d');
    push(s,'a');
    push(s,'m');

    traverse(s);

    printf("Popped %c\n",pop(s));
    printf("Popped %c\n",pop(s));
    printf("Popped %c\n",pop(s));
    printf("Popped %c\n",pop(s));
    printf("Popped %c\n",pop(s));
    
    
    free(s->arr);
    free(s);
     return 0;
} 