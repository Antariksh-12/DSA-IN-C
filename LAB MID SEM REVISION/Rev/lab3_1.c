#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length(char *str){
    int i=0;
    int len=0;

    while(*(str+i)!='\0'){
        len++;
        i++;
    }
    return len;
}

void concat(char *str , char *str2){

    int i=0,j=0;
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

    if(length(str)!=length(str2)){
        return 0;
    }
    int i=0;
    while(str[i]!='\0' && str2[i]!='\0'){
        if(str[i]!=str2[i]){
            return 0;
        }
    }
    return 1;
}

void insertsub(char *str , char *str2 , int position){
    int len1 = strlen(str);
    int len2 = strlen(str2);

    for(int i=len1;i>=position;i--){
        str[i+len2]=str[i];
    }

    for(int i=0;i<len2;i++){
        str[i+position]=str2[i];
    }
}
   
void deletesub(char *str , int position , int length){

    while(str[position+length]!='\0'){
        str[position]=str[position+length];
        position++;
    }
}


int main(){

    char str[100];
    printf("Enter the string :");
    scanf(" %99[^\n]",str);

    char str2[100];
    printf("Enter the concat string :");
    scanf(" %99[^\n]",str2);

    concat(str,str2);
    printf("The concatenated string is %s\n",str);

    char str3[100];
    printf("Enter the third string :");
    int res = compare(str,str3);
    if(res==1){
        printf("The strings are equal\n");
    }
    else{
        printf("The strings are not equal\n");
    }

    insertsub(str,str3,3);
    printf("%s\n",str);

    return 0;
}