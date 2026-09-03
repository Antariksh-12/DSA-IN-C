#include <stdio.h>
#include <stdlib.h>


typedef struct queue{
    int size;
    int f;
    int r;
    int *arr;
}queue;

int isfull(queue *q){
    if(q->r==q->size-1){
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

void enqueue(queue *q , int data){
    if(isfull(q)){
        return;
    }

    q->r++;
    q->arr[q->r]=data;
}

int dequeue(queue *q){
    if(isempty(q)){
        printf("Queue underflow");
        return 0;
    }
    q->f++;
    int value  = q->arr[q->f];
    return value;
}

void traversefront(queue *q){
    for(int i=q->f+1;i<=q->r;i++){
        printf("%d ",q->arr[i]);
    }
}

void traverseback(queue *q){
    for(int i=q->r;i>q->f;i--){
        printf("%d ",q->arr[i]);
    }
}

int main(){

    queue *q = (queue*)malloc(sizeof(queue));
    q->size=100;
    q->f=-1;
    q->r=-1;
    q->arr=(int*)malloc(q->size*sizeof(int));

    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);
    enqueue(q,6);
    enqueue(q,7);

    traversefront(q);
    printf("\n");
    traverseback(q);

    return 0;
}
