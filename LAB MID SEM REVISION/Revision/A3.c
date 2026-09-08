#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
    int regNo;
    char *name;
    float marks;
} student;

typedef struct stack {
    int top;
    int size;
    student *arr;
} stack;

int isempty(stack *s) {
    return s->top == -1;
}

int isfull(stack *s) {
    return s->top == s->size - 1;
}

void push(stack *s) {
    if (isfull(s)) {
        printf("Stack Overflow\n");
        return;
    }

    s->top++;

    printf("Enter Registration Number: ");
    scanf("%d", &s->arr[s->top].regNo);

    printf("Enter Name: ");
    scanf(" %99[^\n]", s->arr[s->top].name);

    printf("Enter Marks: ");
    scanf("%f", &s->arr[s->top].marks);
}

void pop(stack *s) {
    if (isempty(s)) {
        printf("Stack Underflow\n");
        return;
    }

    printf("Registration Number: %d\n", s->arr[s->top].regNo);
    printf("Name: %s\n", s->arr[s->top].name);
    printf("Marks: %.2f\n", s->arr[s->top].marks);

    s->top--;
}

void display(stack *s) {
    if (isempty(s)) {
        printf("Stack is empty\n");
        return;
    }

    for (int i = s->top; i >= 0; i--) {
        printf("\nRegistration Number: %d\n", s->arr[i].regNo);
        printf("Name: %s\n", s->arr[i].name);
        printf("Marks: %.2f\n", s->arr[i].marks);
    }
}

int greaterorequal(stack *s, int index, float min) {
    if (index < 0)
        return 0;

    if (s->arr[index].marks >= min)
        return 1 + greaterorequal(s, index - 1, min);

    return greaterorequal(s, index - 1, min);
}

int main() {
    int n, choice;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    stack *s = malloc(sizeof(stack));

    s->top = -1;
    s->size = n;
    s->arr = malloc(n * sizeof(student));

    for (int i = 0; i < n; i++) {
        s->arr[i].name = malloc(100 * sizeof(char));
    }

    do {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Count Students\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push(s);
                break;

            case 2:
                pop(s);
                break;

            case 3:
                display(s);
                break;

            case 4: {
                float min;
                printf("Enter minimum marks: ");
                scanf("%f", &min);

                printf("Count = %d\n",
                       greaterorequal(s, s->top, min));
                break;
            }

            case 5:
                break;

            default:
                printf("Invalid choice\n");
        }

    } while (choice != 5);

    for (int i = 0; i < n; i++) {
        free(s->arr[i].name);
    }

    free(s->arr);
    free(s);

    return 0;
}