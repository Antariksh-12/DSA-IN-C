#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;


void display(node * ptr){
    while(ptr!=NULL){
        printf("Element :%d\n",ptr->data);
        ptr=ptr->next;
    }
}

node* deleteatbeginning(node * head){

    node *p;

    p = head;
    head = head->next;
    free(p);

    return head;
}
    
node* deleteatindex(node* head , int index){
//q at node to delete
    node *q=head->next;
    node *p = head;

    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }

    p->next=q->next;
    free(q);

    return head; 
}

node* deletelastnode(node* head){

    node*p = head;
    node*q = head->next;

    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }

    p->next=NULL;
    free(q);

    return head;
}

node* deletenode(node* head , int value){
    node*p = head;
    node*q = head->next;

    while(q!=NULL && q->data!=value){

        if(q==NULL){
            return head;
        }

        p=p->next;
        q=q->next;
    }

    if(q->data==value){
    p->next=q->next;
    free(q);
}

    return head;
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

    printf("Linked list before deletion:\n");
    display(head);

    printf("Linked list after deleting first element :\n");
    head = deleteatbeginning(head);
    display(head);

    printf("Linked list after deletion at end :\n");
    head = deletelastnode(head);
    display(head);

    printf("Linked list after deleting given value:\n");
    head = deletenode(head,20);
    display(head);

    return 0;
}
