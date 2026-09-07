#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length(char *str){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

void concat(char *str1 , char* str2){
    int i=0,j=0;

    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
}

int compare(char *str1 , char *str2){
    int l1 = length(str1);
    int l2 = length(str2);

    if(l1!=l2){
        return 0;
    }
    else {
        int i=0;
        while(str1[i]!='\0'){
            if(str1[i]!=str2[i]){
                return 0;
            }
            i++;
        }
    }
    return 1;
}

void insert(char *str , char *str2 , int n){
    int len1 = length(str);
    int len2 = length(str2);

    for(int i=len1;i>=n;i--){
        str[i+len2]=str[i];
    }//shift by length of incoming string

    for(int i=0;i<n;i++){
        str[i+n]=str2[i];
    }//adding str2 to str1
    str[len2+len1]='\0';
}

void delete(char *str , int position , int n){

    int i=position;
    while(str[position+n]!='\0'){
        str[position]=str[position+n];
        i++;
    }
    str[i]='\0';
}
    
int main(){

}