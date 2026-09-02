#include <stdio.h>

int length(char str[]){

    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

void concat(char str1[] , char str2[]){

    int i=0,j=0;
    int len1 = 0 , len2 = 0;
    while(str1[i]!='\0'){
        len1++;
        i++;
    }

    while(str2[j]!='\0'){
        str1[i+j]=str2[j];
        j++;
    }
    str1[i+j]='\0';
}

int comparestring(char str1[] , char str2[]){
 int i=0,j=0;
int equal = 1;

int len1= 0 , len2 = 0 ;

while(str1[i]!='\0'){
    len1++;
    i++;
}

while(str2[j]!='\0'){
    len2++;
    j++;
}

if(len1!=len2){
    equal=0;
}

i=0;

 while(str1[i]!='\0' && str2[i]!='\0'){
    if(str1[i]!=str2[i]){
        equal=0;
        break;
    }
    i++;
 }
 return equal;
}

void insert(char str1[] , char str2[] , int pso){

    int len1=0 , len2=0;
    int i=0 , j=0;

    while(str1[i]!='\0'){
        len1++;
        i++;
    }
    while(str2[j]!='\0'){
        len2++;
        j++;
    }

    i=0,j=0;
    for(int i=len1;i>=pso;i--){
        str1[i+len2]=str1[i];
    }

    for(int i=0;i<len2;i++){
        str1[pso+i]=str2[i];
    }
}

void delete(char str1[] , int pos , int n){

    int len = 0 , i =0;
    while(str1[i]!='\0'){
        len++;
        i++;
    }

    for(int i = pos ;i<n;i++){
        str1[i]=str1[i+n];
    }
}








    



int main(){

    char str[100];
    printf("Enter the string :");
    scanf(" %[^\n]",str);
    char str2[100];
    printf("Enter the second string :");
    scanf(" [^\n]",str2);


    int len = length(str);
    printf("The length of the string is %d\n",len);

    if(comparestring(str,str2)==1){
        printf("The strings are equal");
    }
    else{
        printf("The strings are not equal");
    }


    concat(str,str2);
    printf("%s",str);

   
    return 0;
}