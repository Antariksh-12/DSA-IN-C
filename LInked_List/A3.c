#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node* display(node * head){

    node* ptr = head;

    while(ptr!=NULL){
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }

    return head;
}
int main(){

    node* head;
    node* second;
    node* third;

    head=(node*)malloc(sizeof(node));
    second=(node*)malloc(sizeof(second));
    third=(node*)malloc(sizeof(node));

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=NULL;

    display(head);

    return 0;

    
}
