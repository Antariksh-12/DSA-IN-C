#include <stdio.h>
#include <string.h>
 
int main(){

    char name[100];
    printf("Enter your name :");
    fgets(name,sizeof(name),stdin);

    printf("\n");
    printf("Ouptut\n");
    puts(name);

    return 0;
}