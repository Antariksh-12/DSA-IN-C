
#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n;
    printf("Enter dimensions: ");
    scanf("%d %d", &m, &n);

    // Declare double pointers
    int **arr;
    int **arr2;
    int **arr3;

    // Allocate memory for rows (array of pointers)
    arr = (int**)malloc(m * sizeof(int*));
    arr2 = (int**)malloc(m * sizeof(int*));
    arr3 = (int**)malloc(m * sizeof(int*));

    // IMPORTANT: Allocate memory for columns in each row
    for(int i = 0; i < m; i++){
        arr[i] = (int*)malloc(n * sizeof(int));
        arr2[i] = (int*)malloc(n * sizeof(int));
        arr3[i] = (int*)malloc(n * sizeof(int));
    }

    // Read first array
    printf("Enter elements of first array:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // Read second array
    printf("Enter elements of second array:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    // Create maximum matrix
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > arr2[i][j]){
                arr3[i][j] = arr[i][j];
            } else {
                arr3[i][j] = arr2[i][j];
            }
        }
    }

    // Display result
    printf("Maximum Matrix:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    // Free memory - free columns first, then rows
    for(int i = 0; i < m; i++){
        free(arr[i]);
        free(arr2[i]);
        free(arr3[i]);
    }
    free(arr);
    free(arr2);
    free(arr3);

    return 0;
}
