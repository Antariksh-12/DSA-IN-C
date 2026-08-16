#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    fgets(str,sizeof(str),stdin);

    puts(str);

    return 0;
}
    