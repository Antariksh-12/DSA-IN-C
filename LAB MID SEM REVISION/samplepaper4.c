#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Account
{
    int accNo;
    char *Firstname;
    char *Surname;
    double balance;
    char *acctype;
} Account;


void printDetails(Account *acc)
{
    printf("Account Number : %d\n", acc->accNo);
    printf("First Name : %s\n", acc->Firstname);
    printf("Last Name : %s\n", acc->Surname);
    printf("Balance : %.2lf\n", acc->balance);
    printf("Account Type : %s\n", acc->acctype);
}


void AccountSort(Account *acc, int n)
{
    for(int i = 1; i < n; i++)
    {
        Account current = *(acc+i);
        int prev = i-1;

        while(prev >= 0 && (acc+prev)->accNo > current.accNo)
        {
            *(acc+prev+1) = *(acc+prev);
            prev--;
        }

        *(acc+prev+1) = current;
    }
}


void sameSurname(Account *acc, int n)
{
    for(int i = 0; i < n-1; i++)
    {
        if(strcmp((acc+i)->Surname, (acc+i+1)->Surname) == 0)
        {
            printDetails(acc+i);
            printDetails(acc+i+1);
        }
    }
}


int main()
{
    int n;

    printf("Enter the number of accounts: ");
    scanf("%d", &n);

    Account *acc = malloc(n * sizeof(Account));

    if(acc == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < n; i++)
    {
        (acc+i)->Firstname = malloc(100 * sizeof(char));
        (acc+i)->Surname = malloc(100 * sizeof(char));
        (acc+i)->acctype = malloc(100 * sizeof(char));

        printf("\nEnter details for account %d\n", i+1);

        printf("Enter Account Number: ");
        scanf("%d", &(acc+i)->accNo);

        printf("Enter First Name: ");
        scanf(" %99[^\n]", (acc+i)->Firstname);

        printf("Enter Last Name: ");
        scanf(" %99[^\n]", (acc+i)->Surname);

        printf("Enter Balance: ");
        scanf("%lf", &(acc+i)->balance);

        printf("Enter Account Type: ");
        scanf(" %99[^\n]", (acc+i)->acctype);
    }

    AccountSort(acc, n);

    printf("\nAccounts with same surname:\n");
    sameSurname(acc, n);

    for(int i = 0; i < n; i++)
    {
        free((acc+i)->Firstname);
        free((acc+i)->Surname);
        free((acc+i)->acctype);
    }

    free(acc);

    return 0;
}