#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(int **A , int r , int c){
    printf("Enter the elements :");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",(*(A+i)+j));
        }
    }
}

void display(int **A , int r , int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",*(*(A+i)+j));
        }
        printf("\n");
    }
}
    
void multiplymatrix(int **A , int **B , int **C , int r1 , int c1 , int r2 , int c2){

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            *(*(C+i)+j)=0;
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                *(*(C+i)+j)+=*(*(A+i)+k) * *(*(B+k)+j);
            }
        }
    }
}


int main(){

int r1 ,c1 , r2 ,c2;

printf("Enter the number of rows and columns of first matrix :");
scanf("%d%d",&r1,&c1);
printf("Enter the number of rows and columns of second matrix :");
scanf("%d%d",&r2,&c2);

int** A = (int**)malloc(r1*sizeof(int*));
for(int i=0;i<r1;i++){
    A[i]=(int*)malloc(c1*sizeof(int));
}

int** B = (int**)malloc(r2*sizeof(int*));
for(int i=0;i<r2;i++){
    B[i]=(int*)malloc(c2*sizeof(int));
}

int** C = (int**)malloc(r1*sizeof(int*));
for(int i=0;i<r1;i++){
    C[i]=(int*)malloc(c2*sizeof(int));
}

input(A,r1,c1);
input(B,r2,c2);

multiplymatrix(A,B,C,r1,c1,r2,c2);

display(C,r1,c2);

for(int i=0;i<r1;i++){
    free(A[i]);
}
free(A);   

for(int i=0;i<r2;i++){
    free(B[i]);
}
free(B);

for(int i=0;i<r1;i++){
    free(C[i]);
}
free(C); 

    return 0;
}