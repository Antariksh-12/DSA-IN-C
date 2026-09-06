#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct accountNo{
    int AccNo;
    char *firstName;
    char *lastName;
    char *Acctype;
    float balance;
}accountNo;

void printDetails(accountNo *acc);
void Accountsort(accountNo *acc , int n){

    for(int i=1;i<n;i++){
        
        accountNo curr = *(acc+i);
        int prev = (i-1);

        // while(prev>=0 && arr[prev]>curr)
    while(prev>=0 && (acc+prev)->AccNo > curr.AccNo){
        *(acc+prev+1)=*(acc+prev);
        prev--;
    }
    *(acc+prev+1)=curr;
}
}


void samesurname(accountNo *acc , int n){
    for(int i=0;i<n-1;i++){
        if(strcmp((acc+i)->lastName,(acc+i+1)->lastName)==0){
            printDetails(acc+i);
            printDetails(acc+i+1);
        }
    }
}
 
void printDetails(accountNo *acc){
    printf("Account Number :%d\n",(acc)->AccNo);
    printf("First Name :%s\n",(acc)->firstName);
    printf("LastName :%s\n",(acc)->lastName);
    printf("Account Type :%s\n",(acc)->Acctype);
    printf("Balance :%.2f\n",(acc)->balance);
}
        
void depositorwithdraw(accountNo *acc){

    int choice;
    printf("Enter 1 to deposit and 2 to withdraw :");
    scanf("%d",&choice);
    float amonut;

    switch(choice){
    case 1:
    
    printf("Enter amount to deposit :");
    scanf("%f",&amonut);
    (acc)->balance+=amonut;
    printf("Amount deposited");
    printDetails(acc);
    break;

    case2:
    
    printf("Enter amount to withdraw :");
    scanf("%f",&amonut);
    (acc)->balance-=amonut;
    printf("Amount withdrawn");
    printDetails(acc);
    break;
    
    default:
    printf("Invalid Number");
}
}
    
    



int main(){

int n;
printf("Enter the number of accounts :");
scanf("%d",&n);

accountNo *acc = (accountNo*)malloc(n*sizeof(accountNo));

for(int i=0;i<n;i++){
    (acc+i)->firstName=(char*)malloc(100*sizeof(char));
    (acc+i)->lastName=(char*)malloc(100*sizeof(char));
    (acc+i)->Acctype=(char*)malloc(100*sizeof(char));

printf("Enter Account Number :");
scanf("%d",&(acc+i)->AccNo);
printf("Enter firstName and lastname :");
scanf(" %99[^\n]",(acc+i)->firstName);
printf("Enter lastname :");
scanf(" %99[^\n]",(acc+i)->lastName);
printf("Enter Account Type :");
scanf(" %99[^\n]",(acc+i)->Acctype);
printf("Enter balance :");
scanf("%f",&(acc+i)->balance);
}

Accountsort(acc,n);
samesurname(acc,n);
printDetails(acc);

depositorwithdraw(acc);

for(int i=0;i<n;i++){
    free((acc+i)->firstName);
    free((acc+i)->lastName);free((acc+i)->Acctype);
}

free(acc);



    return 0;
}