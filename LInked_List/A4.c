#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    int data;
    struct node* next;
}node;


void display(node* ptr){
    
    while(ptr!=NULL){
        printf("Element :%d\n",ptr->data);
        ptr=ptr->next;
    }
}

node* insertatbeginning(node* head , int data){

    node *ptr = (node*)malloc(sizeof(node));

    ptr->data=data;
    ptr->next=head;
    head=ptr;

    return ptr;
}

node* insertatindex(node * head , int data , int index){

    node *ptr = (node*)malloc(sizeof(node));
    struct node* p = head;

    int i=0;
    while(i!=index-1){ 
        //bc we want to reach at index after which we insert
        p = p->next; 
        i++;
    }
    ptr->next=p->next;
    ptr->data=data;
    p->next=ptr;

    return ptr;
}

node* insertatend(node* head , int data){
    node *ptr = (node*)malloc(sizeof(node));
    node*  p = head;

    int i=0;
    while(p->next!=NULL){
        p=p->next;
        i++;
    }

    ptr->next=NULL;
    ptr->data=data;
    p->next=ptr;

    return ptr;
}
   
node* insertafternode(node* head , node* previous , int data){

    node* ptr = (node*)malloc(sizeof(node));
    previous->next=ptr;
    ptr->next=NULL;
    ptr->data=data;

    return ptr;

}

    



int main(){

   
    node *head = (node*)malloc(sizeof(node));
    node *second = (node*)malloc(sizeof(node));
    node* third = (node*)malloc(sizeof(node));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;

    display(head);

    printf("\n");

    head = insertatbeginning(head,0);
    
    display(head);
    printf("\n");

    insertatindex(head, 25 , 3);

    display(head);
    printf("\n");

    insertafternode(head , third , 35);
    
    display(head);
    printf("\n");
    
    insertatend(head ,40);

    display(head);
    printf("\n");

    return 0;

}