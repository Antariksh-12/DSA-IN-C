#include <stdio.h>

struct Employee{
    char name[100];
    int id;
    double salary;
};

int main(){

    int n;
    
    printf("Enter the number of employees :");
    scanf("%d",&n);

    struct Employee emp[n];

    for(int i=0;i<n;i++){
        printf("Enter name :");
        scanf("%s",&emp[i].name);
        printf("Enter id :");
        scanf("%d",&emp[i].id);
        printf("Enter salary :");
        scanf("%d",&emp[i].salary);
    }

    
    for(int i=0;i<n;i++){
        printf("%d ",emp[i].name);
        printf("%d ",emp[i].salary);
        printf("%d ",emp[i].salary);
        printf("\n");
    }

    return 0;
}