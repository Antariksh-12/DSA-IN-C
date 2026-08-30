#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack {
    int top;
    int size;
    char *arr;
} stack;

int isempty(stack *s) {
    if (s->top == -1)
        return 1;

    return 0;
}

void push(stack *s, char value) {
    s->top++;
    s->arr[s->top] = value;
}

char pop(stack *s) {
    char value = s->arr[s->top];
    s->top--;
    return value;
}

char peek(stack *s) {
    return s->arr[s->top];
}

int precedence(char ch) {

    if (ch == '^')
        return 3;

    if (ch == '*' || ch == '/')
        return 2;

    if (ch == '+' || ch == '-')
        return 1;

    return 0;
}

int main() {

    char infix[100];
    char postfix[100];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    stack *s = (stack *)malloc(sizeof(stack));

    s->top = -1;
    s->size = strlen(infix);
    s->arr = (char *)malloc(s->size * sizeof(char));

    int i = 0;
    int j = 0;

    while (infix[i] != '\0') {

        // Operand
        if ((infix[i] >= 'A' && infix[i] <= 'Z') ||
            (infix[i] >= 'a' && infix[i] <= 'z')) {

            postfix[j] = infix[i];
            j++;
        }

        // Opening bracket
        else if (infix[i] == '(') {

            push(s, infix[i]);
        }

        // Closing bracket
        else if (infix[i] == ')') {

            while (peek(s) != '(') {
                postfix[j] = pop(s);
                j++;
            }

            pop(s);   // remove '('
        }

        // Operator
        else {

            while (!isempty(s) &&
                   peek(s) != '(' &&
                   precedence(peek(s)) >= precedence(infix[i])) {

                postfix[j] = pop(s);
                j++;
            }

            push(s, infix[i]);
        }

        i++;
    }

    // Pop remaining operators
    while (!isempty(s)) {

        postfix[j] = pop(s);
        j++;
    }

    postfix[j] = '\0';

    printf("Postfix expression: %s\n", postfix);

    free(s->arr);
    free(s);

    return 0;
}