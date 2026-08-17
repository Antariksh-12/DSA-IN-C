#include <stdio.h>
#include <stdlib.h> //for DMA

typedef struct node{
    int data; // data 
    struct node* next; //pointer to next node
}node;

/*
typdef struct node{
int data;
struct node* next;}node;
*/

/*
node* display(node* head){
node* ptr = (node*)malloc(sizeof(node));

while(ptr!=NULL){
printf("%d ",ptr->data);ṇ
ptr=ptr->next;}
}*/

 

node* display(node * head){ // O(n)

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
    node* fourth;
    //allocating memory for the nodes

    head=(node*)malloc(sizeof(node));
    second=(node*)malloc(sizeof(node));
    third=(node*)malloc(sizeof(node));
    fourth=(node*)malloc(sizeof(node));


    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=NULL;

    display(head);

    return 0;

    
}
