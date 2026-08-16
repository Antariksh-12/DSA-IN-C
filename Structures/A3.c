#include <stdio.h>
#include <string.h>

int main(){

    struct book{
        char name[100];
        double price;
        int pages;
    }a,b,c;

  
    a.price=124;
    a.pages=45;


    strcpy(a.name,"Harry Potter");//append on 1st string use this 
    
    printf("%.2f\n",a.price);
    printf("%d\n",a.pages);
    printf("%s",a.name);
    // printf("\n");
    

    return 0;
}