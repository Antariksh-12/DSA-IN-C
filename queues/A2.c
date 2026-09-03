#include <stdio.h>
#include <stdlib.h>


typedef struct queue{
    int size;
    int f;
    int r;
    int *arr;
}queue;

int isfull(queue *q){
    if((q->r+1)%q->size==q->f){
        return 1;
    }
    return 0;
}

int isempty(queue *q){
    if(q->f==q->r){
        return 1;
    }
    return 0;
}

void enqueue(queue *q , int value){
    if(isfull(q)){
        printf("Queue overflow");
        return;
    }

    q->r=(q->r+1)%q->size;
    q->arr[q->r]=value;
}

int dequeue(queue *q){
    if(isempty(q)){
        printf("queue underflow");
        return;
    }

    q->f=(q->f+1)%q->size;
    int value = q->arr[q->f];
    return value;
}

void traverse(queue *q){

    int i = (q->f+1)%q->size;
    while(i!=(q->r+1)%q->size){
        printf("%d ",q->arr[i]);
        i++;
    }
}


int main(){
queue* q = (queue*)malloc(sizeof(queue));
    q->size=5;
    q->f=0;
    q->r=0;
    q->arr=(int*)malloc(q->size*sizeof(int));

    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);

    traverse(q);

    return 0;
    
   
    
}