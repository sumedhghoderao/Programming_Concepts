#include<stdio.h>

void Accept(int matrix[3][3]) {
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void Display(int matrix[3][3]) {
    printf("Matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void Transpose(int matrix[3][3], int transpose[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }
}

void MatrixAddition(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int matrix1[3][3], matrix2[3][3], transpose[3][3], result[3][3];

    // Accept matrix1
    Accept(matrix1);

    // Display matrix1
    Display(matrix1);

    // Find transpose of matrix1
    Transpose(matrix1, transpose);

    // Display transpose of matrix1
    printf("Transpose of Matrix:\n");
    Display(transpose);

    // Accept matrix2
    Accept(matrix2);

    // Display matrix2
    Display(matrix2);

    // Find addition of matrix1 and matrix2
    MatrixAddition(matrix1, matrix2, result);

    // Display resultant matrix
    printf("Resultant Matrix after addition:\n");
    Display(result);

    return 0;
    
}
