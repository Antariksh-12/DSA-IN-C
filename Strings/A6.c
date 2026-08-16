#include <stdio.h>
#include <string.h>

int main(){

    char str[]="College Wallah";
    char *ptr = str;

    for(int i=0;str[i]!='\0';i++){
        printf("%c",*(ptr+i));
    }

    int i =0;
    while(*(ptr+i)!='\0'){
        printf("%c",*(ptr+i));
        i++;
    }
    printf("%p\n",&str[0]);
    printf("%p\n",&str[1]);
    printf("%p\n",&str[2]);
    printf("%p\n",&str[3]);
    printf("%p\n",&str[4]);
    printf("%p\n",&str[5]);
    printf("%p\n",&str[6]);
    printf("%p\n",&str[7]);
    return 0;
}