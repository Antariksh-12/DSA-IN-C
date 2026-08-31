#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next; //pointer to next node
}node;

node* insertAtBeginning(node* head , int value){

    node* p = (node*)malloc(sizeof(node));

    p->data=value;
    p->next=head;
    head=p;

    return head;
}

node* insertAtIndex(node* head , int value , int index){

    node* p = (node*)malloc(sizeof(node));
    node* ptr = head;

    int i = 0;
    while(i!=index-1){
        i=i+1;
        ptr=ptr->next;
    }

    p->next=ptr->next;
    p->data=value;
    ptr->next=p;

    return head;
}

node* InsertatEnd(node* head , int value){

    node* p = (node*)malloc(sizeof(node));
    node* ptr = head;
    p->data=value;
    p->next=NULL;

    int i=0;
    while(ptr->next!=NULL){
        ptr=ptr->next;
        i++;
    }

    ptr->next=p;

    return head;
}


void insertafternode(node* head , int value , int pos){

    node * ptr = (node*)malloc(sizeof(node));
    node* p = head;

    while(p!=pos){
        ptr=ptr->next;
    }
     
    ptr->next=p->next;
    ptr->data=value;
    p->next=ptr;

    return head;
}




void traverse(node* head){
    node* p = head;

    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}


int main(){

    node* head = (node*)malloc(sizeof(node));
    node* second = (node*)malloc(sizeof(node));
    node* third = (node*)malloc(sizeof(node));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;   

    head = insertAtBeginning(head,5);

    insertAtIndex(head,5,2);
    
    traverse(head);
    
    InsertatEnd(head,7);
    
    traverse(head);
    
    return 0;
}
