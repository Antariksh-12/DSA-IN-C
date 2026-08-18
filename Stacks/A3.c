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
    return 0;
}

int isfull(node* top){

    node* n = (node*)malloc(sizeof(node));
    if(n==NULL){//DMA failed
        return 1;
    }
    free(n);
    
    return 0;
}

//node*
node* push(node* top , int value){
//inserting node at index 0

node* n = (node*)malloc(sizeof(node));
if(n==NULL){
    printf("Stack overflow\n");
    return 0;
}

    n->data=value;
    n->next=top;
    top=n;

    return top;
}

void linkedlisttraversal(node* top){

    node* p = top;

    while(p!=NULL){
        printf("Element : %d\n",p->data);
        p=p->next;
    }
}
        

node* pull(node* top){

    if(isempty(top)){
        printf("Stack underflow");
        return top;
    }

    printf("The topmost element of stack is  %d\n",top->data);
    node* p = top;
    top=top->next;
    free(p);

    return top;
}



        


int main(){
//side 1 is used for push and pop operations
//stack full when memory exhausted
//stack empty when top = NULL

    node* top = (node*)malloc(sizeof(node));
    top=NULL;//initially empty linked list


    top=push(top,74);
    top=push(top,75);
    top=push(top,76);
    top=push(top,77);
    top=push(top,78);
    linkedlisttraversal(top);
    printf("\n");

    top = pull(top);

    printf("\n");
    linkedlisttraversal(top);

    

    return 0;
}