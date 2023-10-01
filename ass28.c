#include <stdio.h>

void Accept(int matrix[3][3]) {
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}


void multiplyMatrix(int matrix1[][3], int matrix2[][3], int result[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) 
        {
            for (int k = 0; k < 3; k++)
             {
                result[i][j] = result[i][j] + matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[3][3];
    int matrix2[3][3];
    int result[3][3];
    
    Accept(matrix1);
    Accept(matrix2);

    multiplyMatrix(matrix1, matrix2, result);

    printf("Matrix 1:\n");
    displayMatrix(matrix1);

    printf("\nMatrix 2:\n");
    displayMatrix(matrix2);

    printf("\nResultant Matrix:\n");
    displayMatrix(result);

    return 0;
}


