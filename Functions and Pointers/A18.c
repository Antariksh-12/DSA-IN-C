#include<stdio.h>
#include<stdlib.h>

int main()
{
    int rows=3;
    int *arr[3];
    int size[3];


    for(int i=0;i<rows;i++)
    {
        printf("Columns in row %d : ",i);
        scanf("%d",&size[i]);

        arr[i]=malloc(size[i]*sizeof(int));
    }

    printf("\nEnter values\n");

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<size[i];j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nMatrix\n");

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<size[i];j++)
        {
            printf("%d ",arr[i][j]);
        }

        printf("\n");
    }

    for(int i=0;i<rows;i++)
        free(arr[i]);

    return 0;
    
}