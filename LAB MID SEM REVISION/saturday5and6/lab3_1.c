#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len(char *str){
    int len=0;
    int i=0;

    while(str[i]!='\0'){
        len++;
        i++;
    }
    return len;
}

void concat(char *str , char *str2){
    int i=0;
    int j=0;

    while(str[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str[i]=str2[j];
        j++;
        i++;
    }
}

int compare(char *str , char *str2){
    int i = 0;
    if(len(str)!=len(str2)){
        return;
    }

    while(str[i]!='\0' && str2[i]!='\0'){
        if(str[i]!=str2[i]){
            return 0;
        }
    }
    return 1;
}

void insert(char *str , char* insert, int position){

    int len1 = len(str);
    int len2 = len(insert);

    for(int i = len(str);i>=position;i--){
        str[i+len2]=str[i];
    }

    for(int i=0;i<len2;i++){
        str[i+position]=insert[i];
    }
}
 
void delete(char *str , int position , int n){
    
    while(str[position+n]!='\0'){
        str[position]=str[position+n];
        position--;
    }
}

int main(){

    char str[100];
    printf("Enter the string :");
    scanf(" %[^\n]",str);



    return 0;
}