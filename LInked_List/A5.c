#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node* deleteatbeginning(node* head){

    node* p = head;

    head=head->next;
    free(p);

    return head;
}

node* deleatindex(node* head , int index){

    node* p = head;
    node* q = head->next;

    for(int i=0 ;i<index-1 ; i++){
        p=p->next;
        q=q->next;
    }

    p->next=q->next;
    free(q); 
    
    
    return head;
}
    
    
 

node* deleteatend(node* head){

    node* p = head;

    while((p->next)->next!=NULL){
        p=p->next;
    }

    free(p->next);
    p->next=NULL;

    return head;
}



void traversal(node* head){

    node*p = head;

    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}




int main(){

   
    node *head = (node*)malloc(sizeof(node));
    node *second = (node*)malloc(sizeof(node));
    node* third = (node*)malloc(sizeof(node));
    node* fourth = (node*)malloc(sizeof(node));
    node* fifth = (node*)malloc(sizeof(node));
    
    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=fifth;

    fifth->data=50;
    fifth->next=NULL;




    traversal(head);
    printf("\n");

    head = deleteatbeginning(head);

    traversal(head);
    printf("\n");


    head = deleatindex(head,1);

    traversal(head);
    printf("\n");

    head = deleteatend(head);

    traversal(head);
    printf("\n");


return 0;}
