#include <stdio.h>
#include <string.h>

int main(){

    
    char arr[100];

    fgets(arr,sizeof(arr),stdin);

    arr[strcspn(arr,"\n")]='\0';

    puts(arr);

    int size=0;
    int i=0;
    while(arr[i]!='\0'){
        size++;
        i++;
    }

    for(int i=size-1;i>=0;i--){
        printf("%c",arr[i]);
    }

    return 0;

}


