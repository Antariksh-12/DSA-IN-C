#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node;

node* top = NULL;


// PUSH
void push(int data) {

    node* newNode = (node*)malloc(sizeof(node));

    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = data;
    newNode->next = top;

    top = newNode;

    printf("%d pushed into stack\n", data);
}


// POP
void pop() {

    if (top == NULL) {
        printf("Stack Underflow\n");
        return;
    }

    node* temp = top;

    printf("%d popped from stack\n", top->data);

    top = top->next;

    free(temp);
}


// PEEK
void peek() {

    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }

    printf("Top element: %d\n", top->data);
}


// DISPLAY
void display() {

    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }

    node* ptr = top;

    printf("Stack elements:\n");

    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}


// CHECK IF STACK IS EMPTY
void isEmpty() {

    if (top == NULL)
        printf("Stack is empty\n");
    else
        printf("Stack is not empty\n");
}


// MAIN
int main() {

    push(10);
    push(20);
    push(30);

    display();

    peek();

    pop();

    display();

    isEmpty();

    return 0;
}