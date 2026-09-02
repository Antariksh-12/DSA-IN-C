#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct phoneContact{
    long int phoneNum;
    char* name;
}phoneContact;

void create(phoneContact* p1 , int n){
    for(int i=0;i<n;i++){
        p1[i].name = (char*)malloc(100*sizeof(char));
        printf("Enter name %d :",i+1);
        scanf(" %[^\n]",p1[i].name);
        printf("Enter contact number :");
        scanf("%ld",&p1[i].phoneNum);
    } 
}

long int findContact(phoneContact *p1 , int n , char* searchName){

    for(int i=0;i<n;i++){
        if(strcmp(p1[i].name,searchName)==0){
            return p1[i].phoneNum;
        }
    }
    return -1;
}

void display(phoneContact* p1 , int n){
    for(int i=0;i<n;i++){
        printf("Details\n");
        printf("Name :%s\n",p1[i].name);
        printf("Contact :%ld\n",p1[i].phoneNum);
    }
}



int main(){

    int n;
    printf("Enter the number of people :");
    scanf("%d",&n);

    phoneContact* p1 = (phoneContact*)malloc(n*sizeof(phoneContact));

    create(p1,n);
    display(p1,n);

    char searchname[100];
    printf("Enter the name to search :");
    scanf(" %[^\n]",searchname);

    long int result = findContact(p1,n,searchname);

    if(result!=-1){
        printf("Phone numebr found :%ld",result);
    }else{

        printf("Name not found\n");

        n++;
        p1 = (phoneContact*)realloc(p1,n*sizeof(phoneContact));

        int last = n-1;//last index
        p1[last].name=(char*)malloc(100*sizeof(char));
        strcpy(p1[last].name,searchname);

        display(p1,n);
    }

    for(int i=0;i<n;i++){
        free(p1[i].name);
    }
    free(p1);

    printf("\nMemory released ");

    return 0;
}

