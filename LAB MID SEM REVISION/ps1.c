#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct phoneContact{
    long int phoneNum;
    char* name;
}phoneContact;

long int findContact(phoneContact* contacts , int n , char name[]);
void create(phoneContact* contacts , int n);


int main(){

int n;
printf("Enter the number of persons :");
scanf("%d",&n);

phoneContact *contacts = (phoneContact*)malloc(n*sizeof(phoneContact));
if(contacts==NULL){
    printf("Memory allocation failed");
    return 1;
}

create(contacts , n);

char searchname[100];
printf("Enter the name to search :");
scanf(" %[^\n]",searchname);

if(findContact(contacts , n , searchname)==-1){
printf("Contact not found");
printf("\nAdding new contact\n");
n++;
long int pno;
printf("Enter phone number :");
scanf("%ld",&pno);
contacts = (phoneContact*)realloc(contacts,n*sizeof(phoneContact));
int last = n-1;
(contacts+last)->name = (char*)malloc(100*sizeof(char));
strcpy((contacts+last)->name,searchname);
(contacts+last)->phoneNum=pno;
}
else{

    long int res = findContact(contacts , n , searchname);
    printf("Name found\n");
    printf("Phone number :%ld",res);
}


printf("Final list :");
for(int i=0;i<n;i++){

    printf("Name :%s\n",(contacts+i)->name);
    printf("Phone Number :%ld",(contacts+i)->phoneNum);
}



for(int i=0;i<n;i++){
    free((contacts+i)->name);
}
free(contacts);

return 0;
}




// ----------------------------------
void create(phoneContact* contacts , int n){

    for(int i=0;i<n;i++){
        (contacts+i)->name=(char*)malloc(100*sizeof(char));
        printf("Enter name :");
        scanf(" %99[^\n]",(contacts+i)->name);
        printf("Enter phone number :");
        scanf("%ld",&contacts[i].phoneNum);
    }
}
// ---------------------------------

long int findContact(phoneContact* contacts , int n , char name[]){

    for(int i=0;i<n;i++){
        if(strcmp((contacts+i)->name,name)==0){
            return (contacts+i)->phoneNum;
        }
    }
    return -1;
}
// -----------------------------------




