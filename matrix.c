#include <stdio.h>

#define SIZE 4

void multiplyMatrix(int mat1[][SIZE], int mat2[][SIZE], int result[][SIZE]) {
    int i, j, k;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (k = 0; k < SIZE; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int mat[][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int matrix1[SIZE][SIZE] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    int matrix2[SIZE][SIZE] = {
        {1, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };
    
    int result[SIZE][SIZE];
    
    multiplyMatrix(matrix1, matrix2, result);
    
    printf("Matrix 1:\n");
    displayMatrix(matrix1);
    
    printf("Matrix 2:\n");
    displayMatrix(matrix2);
    
    printf("Result:\n");
    displayMatrix(result);
    
    return 0;
}
