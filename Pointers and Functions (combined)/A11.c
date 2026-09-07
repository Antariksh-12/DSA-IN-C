#include <stdio.h>

int main(){

    int arr[]={1,2,3,4,5};
    int *ptr = arr;

    printf("%d\n",ptr); //4 ka difference
    printf("%d\n",ptr+1);
    printf("%d\n",ptr+2);
    printf("%d\n",ptr+3);
    printf("%d\n",ptr+4);

    printf("%d",*ptr);
    printf("%d",*ptr+1);
    printf("%d",*ptr+2);
    printf("%d",*ptr+3);
    printf("%d",*ptr+4);

    for(int i=0;i<5;i++){
        printf("%d ",*(ptr+i));
    }
    
    return 0;
}