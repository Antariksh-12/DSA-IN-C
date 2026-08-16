#include <stdio.h>

void input(int m , int n , int(*ptr)[n]){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",*(ptr+i)+j);
        }
    }
}

void display(int m ,int n , int(*ptr)[n]){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",*(*(ptr+i)+j));
        }
        printf("\n");
    }
}

int sum(int m ,int n , int(*ptr)[n]){
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=*(*(ptr+i)+j);
        }
    }
    return sum;
}

int main(){

    int m,n;
    printf("Enter the value of m and n :");
    scanf("%d%d",&m,&n);

    int arr[m][n];
    int (*ptr)[n]=arr;

    input(m,n,ptr);
    display(m,n,ptr);
    int res = sum(m,n,ptr);

    printf("\n");

    printf("The sum of all the elements of the array is %d\n",res);

    return 0;

}