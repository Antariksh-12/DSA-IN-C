#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct phoneContact{
    long int phoneNum;
    char* name;
}phoneContact;

void create(phoneContact* phone , int n){
    for(int i=0;i<n;i++){
        phone[i].name= (char*)malloc(100*sizeof(char));
        printf("Enter person name :");
        scanf(" %[^\n]",phone[i].name);
        printf("Enter phone number :");
        scanf("%ld",&phone[i].phoneNum);
    }

}

long int FindContact(phoneContact* contact , int n , char name[]){
    for(int i=0;i<n;i++){
        if(strcmp(contact[i].name,name)==0){
            return contact[i].phoneNum;
        }
    }
    return -1;
}

void display(phoneContact* contact , int n){
    for(int i=0;i<n;i++){
        printf("Details for person %d\n",i+1);
        printf("Name :%s\n",contact[i].name);
        printf("Phone Number :%ld\n",contact[i].phoneNum);
    }
}

int main(){

    int n;
    printf("Enter the number of persons :");
    scanf("%d",&n);
    phoneContact* contact = (phoneContact*)malloc(n*sizeof(phoneContact));


    create(contact , n);
    display(contact , n);

    char searchname[100];
    printf("Enter the name to search :");
    scanf(" %[^\n]",searchname);

    if(FindContact(contact , n ,searchname)==-1){

        n++;
        contact = (phoneContact*)realloc(contact,n*sizeof(phoneContact));
        int last = n-1;
        contact[last].name = (char*)malloc(100*sizeof(char));
        strcpy(contact[last].name,searchname);
    }else{
        printf("Name found\n");
        long int res = (FindContact(contact,n,searchname));
        printf("The phone number is %ld\n",res);
    }


   for(int i=0;i<n;i++){
    free(contact[i].name);
}
free(contact);
    
    return 0;
}