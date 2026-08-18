// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct stack {
//     int top;
//     int size;
//     char *arr;
// } stack;

// int isfull(stack *s) {
//     if (s->top == s->size - 1) {
//         return 1;
//     }
//     return 0;
// }

// int isempty(stack *s) {
//     if (s->top == -1) {
//         return 1;
//     }
//     return 0;
// }

// void push(stack *s, char value) {
//     if (isfull(s)) {
//         printf("Stack overflow\n");
//         return;
//     }

//     s->top++;
//     s->arr[s->top] = value;
// }

// char pop(stack *s) {
//     if (isempty(s)) {
//         printf("Stack underflow\n");
//         return '\0';
//     }

//     char value = s->arr[s->top];
//     s->top--;

//     return value;
// }

// int parenthesismatch(char *str, stack *s) {

//     for (int i = 0; str[i] != '\0'; i++) {

//         // Opening brackets
//         if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
//             push(s, str[i]);
//         }

//         // Closing bracket
//         else if (str[i] == ')' || str[i] == '}' || str[i] == ']') {

//             // No opening bracket available
//             if (isempty(s)) {
//                 return 0;
//             }

//             char top = pop(s);

//             // Check corresponding bracket
//             if (str[i] == ')' && top != '(') {
//                 return 0;
//             }

//             if (str[i] == '}' && top != '{') {
//                 return 0;
//             }

//             if (str[i] == ']' && top != '[') {
//                 return 0;
//             }
//         }
//     }

//     // If stack is empty, all brackets matched
//     if (isempty(s)) {
//         return 1;
//     }

//     return 0;
// }

// int main() {

//     char str[100];

//     printf("Enter the string: ");
//     scanf("%99s", str);

//     stack *s = (stack *)malloc(sizeof(stack));

//     s->top = -1;
//     s->size = strlen(str);

//     s->arr = (char *)malloc(s->size * sizeof(char));

//     if (parenthesismatch(str, s)) {
//         printf("The parentheses are matching\n");
//     }
//     else {
//         printf("The parentheses are not matching\n");
//     }

//     free(s->arr);
//     free(s);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack{
    int size;
    int top;
    char* arr;
}stack;

int isfull(stack *s){
    if(s->top==s->size-1){
        return 1;
    }
    return 0;
}

int isempty(stack *s){
    if(s->top==-1){
        return 1;
    }
    return 0;
}

void push(stack *s , char value){
    if(isfull(s)==1){
        printf("Stack overflow");
        return ;
    }

    s->top++;
    s->arr[s->top]=value;
}

char pop(stack* s){
    if(isempty(s)==1){
        printf("Stack underflow");
        return 0;
    }

    char value = s->arr[s->top];
    s->top--;
    return value;
}


int parenthesismatching(char* str , stack* s){

    int i=0;
    int len=0;

    while(str[i]!='\0'){
        i++;
        len++;
    }

    for(int i=0;str[i]!='\0';i++){
        

        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            push(s,str[i]);
        }

        else if(str[i]==')' || str[i]=='}' || str[i]==']'){
            if(isempty(s)){ //nothing to pop so fail
                return 0;
            }
            
            char popped = pop(s);
            
            if(popped=='(' && str[i]!=')'){
                return 0;
            }
            else if(popped=='[' && str[i]!=']'){
                return 0;
            }
            else if(popped=='{' && str[i]!='}'){
                return 0;
            }
        }
    }
       
    
    if(isempty(s)){
        return 1;
    }
    return 0;
}
        

    

int main(){

    char str[100];
    printf("Enter the string :");
    scanf("%s",str);

    int len = strlen(str);

    stack *s;
    s=(stack*)malloc(sizeof(stack));

    s->top=-1;
    s->size=len;
    s->arr=(char*)malloc(len*sizeof(char));

    if(parenthesismatching(str , s)==1){
        printf("Parenthesis are matching");
    }else if(

        parenthesismatching(str,s)==0){
            printf("The parenthesis are not matching");
        }

        free(s->arr);
        free(s);
        



    return 0;
}
