#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);

int *A = (int*)malloc(n*sizeof(int));

int j=2;
for(int i=0;i<n;i++){
    A[i]=j;
    j++;
}
 
for(int i=0;i<n;i++){
    printf("%d ",*(A+i));
}

free(A);

return 0;

}