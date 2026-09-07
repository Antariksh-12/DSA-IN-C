#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct queue{
    int size;
    int f;
    int r;
    char *arr;
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

void enqueue(queue *q , char data){
    if(isfull(q)){
        return ;
    }
    q->r++;
    q->arr[q->r]=data;
}

void dequeue(queue *q){
    q->f++;
}

void traverse(queue *q){
    
    for(int i=q->f+1;i<=q->r;i++){
        printf("%c ",q->arr[i]);
    }
}


int main(){

    queue *q = (queue*)malloc(sizeof(queue));
    q->size=100;
    q->f=-1;
    q->r=-1;
    q->arr=(char*)malloc(q->size*sizeof(char));

    enqueue(q,'1');
    enqueue(q,'2');
    enqueue(q,'3');
    enqueue(q,'4');
    enqueue(q,'5');

    dequeue(q);

    traverse(q);
    

    return 0;
}