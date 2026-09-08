#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct account{
    long int accountNo;
    char *firstname;
    char *lastname;
    char *acctype;
    double balance;
}account;

void input(account *acc , int n){
    for(int i=0;i<n;i++){
        printf("Enter account number :");
        scanf("%ld",&(acc+i)->accountNo);
        printf("Enter firstname :");
        scanf(" %99[^\n]",(acc+i)->firstname);
        printf("Enter lastname :");
        scanf(" %99[^\n]",(acc+i)->lastname);
        printf("Enter account type :");
        scanf(" %99[^\n]",(acc+i)->acctype);
        printf("Enter balance :");
        scanf("%lf",&(acc+i)->balance);
    }
}

void details(account *acc){
    printf("Account number :%ld",(acc)->accountNo);
    printf("Firstname :%s\n",(acc)->firstname);
    printf("LastName :%s\n",(acc)->lastname);
    printf("Account type :%s\n",(acc)->acctype);
    printf("Balance :%lf\n",(acc)->balance);
}

void sort(account* acc , int n){
    for(int i=1;i<n;i++){

        // int curr = arr[i];
        // int prev = i-1;
        //while(prev>=0 && arr[prev]>curr){
        // arr[prev+1]=arr[prev];
        // prev--;}
        // arr[prev+1]=curr;

        account curr = *(acc+i);
        int prev = i-1;

        while(prev>=0 && (acc+prev)->accountNo>curr.accountNo){
            *(acc+prev+1)=*(acc+prev);
            prev--;
        }
        *(acc+prev+1)=curr;
    }
}

void samesurname(account *acc , int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp((acc+i)->lastname , (acc+j)->lastname)==0){
                details(acc+i);
                details(acc+j);
            }
        }

    }
}
        
void transaction(account *acc){

    int choice;
    printf("Enter 1 to deposit and 2 to withdraw :");
    scanf("%d",&choice);
    int amount;

    switch(choice){
        case 1:
        printf("Enter amount to deposit :");
        scanf("%d",&amount);
        (acc)->balance+=amount;
        printf("Amount deposited successully");
        break;

        case 2:
        printf("Enter amount to withdraw :");
        scanf("%d",&amount);
        (acc)->balance-=amount;
        printf("Amount withdrawn successully");
        break;

        default:
        printf("Invalid input");
    }
        
}

int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

    account* acc = (account*)malloc(n*sizeof(account));
    for(int i=0;i<n;i++){
        (acc+i)->firstname=(char*)malloc(100*sizeof(char));
        (acc+i)->lastname=(char*)malloc(100*sizeof(char));
        (acc+i)->acctype=(char*)malloc(100*sizeof(char));
    }

    input(acc,n);
    printf("\n");
    transaction(acc);
    printf("\n");
    details(acc);

    sort(acc,n);
    printf("\n");
    samesurname(acc,n);
    
    for(int i=0;i<n;i++){
        free((acc+i)->firstname);
        free((acc+i)->lastname);
        free((acc+i)->acctype);
    }
    free(acc);
    
    return 0;
}