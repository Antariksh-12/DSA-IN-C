#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

int isempty(node* top){

    if(top==NULL){
        return 1;
    }
    return -1;
}

int isfull(node* top){
    
    node* p = (node*)malloc(sizeof(node));
    if(p==NULL){
        return 1;
    }
    return -1;

    free(p);
}

node* push(node* top , int value){

    node* p = (node*)malloc(sizeof(node));

    p->data=value;
    p->next=top;
    top=p;
    
    return top;
}
 
node* pull(node* top){

    node*p = (node*)malloc(sizeof(node));
    if(isempty(top)){
        printf("Stack underflow");
    }

    printf("Topmost element :%d\n",top->data);

    p=top;
    top=top->next;
    free(p);

    return top;
}

void traversal(node* top){

    node* p = top;

    while(p!=NULL){
        printf("Element :%d\n",p->data);
        p=p->next;
    }
}


int main(){

    node* top = NULL;

    top=push(top,12);
    top=push(top,29);
    top=push(top,30);
    top=push(top,31);
    top=push(top,32);

    traversal(top);

    top = pull(top);
    top = pull(top);
    top = pull(top);

    traversal(top);


    return 0;
}