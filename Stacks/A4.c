#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node;


// Check whether stack is empty
int isempty(node* top) {

    if (top == NULL) {
        return 1;
    }

    return 0;
}


// Push an element into the stack
void push(node** top, int value) {

    node* s = (node*)malloc(sizeof(node));

    if (s == NULL) {
        printf("Stack is full\n");
        return;
    }

    s->data = value;
    s->next = *top;

    *top = s;
}


// Pop an element from the stack
void pop(node** top) {

    if (isempty(*top)) {
        printf("Stack is empty\n");
        return;
    }

    node* ptr = *top;

    printf("Element: %d\n", ptr->data);

    *top = (*top)->next;

    free(ptr);
}


// Display the top element
void peek(node* top) {

    if (isempty(top)) {
        printf("Stack is empty\n");
        return;
    }

    printf("Topmost element: %d\n", top->data);
}


// Display the complete stack
void display(node* top) {

    if (isempty(top)) {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack: ");

    while (top != NULL) {
        printf("%d ", top->data);
        top = top->next;
    }

    printf("\n");
}


int main() {

    // Initially stack is empty
    node* top = NULL;


    // Check if stack is empty
    if (isempty(top)) {
        printf("Stack is empty\n");
    }
    else {
        printf("Stack is not empty\n");
    }


    // Push elements
    push(&top, 10);
    push(&top, 20);
    push(&top, 30);


    // Display stack
    display(top);


    // Peek
    peek(top);


    // Pop
    pop(&top);


    // Display after pop
    display(top);


    // Peek again
    peek(top);


    // Pop remaining elements
    pop(&top);
    pop(&top);


    // Check stack after all elements are removed
    if (isempty(top)) {
        printf("Stack is empty\n");
    }
    else {
        printf("Stack is not empty\n");
    }


    return 0;
}