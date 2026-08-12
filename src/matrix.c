#include <stdio.h>

#define MAX 10

void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int A[MAX][MAX], int B[MAX][MAX],
               int result[MAX][MAX], int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiplyMatrix(int A[MAX][MAX], int B[MAX][MAX],
                    int result[MAX][MAX],
                    int r1, int c1, int c2) {
    int i, j, k;

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;

            for (k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void transposeMatrix(int matrix[MAX][MAX],
                     int result[MAX][MAX],
                     int rows, int cols) {
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];
    int rows, cols, r1, c1, r2, c2;
    int choice;

    while (1) {
        printf("\n=================================\n");
        printf("       MATRIX OPERATIONS\n");
        printf("=================================\n");
        printf("1. Matrix Addition\n");
        printf("2. Matrix Multiplication\n");
        printf("3. Matrix Transpose\n");
        printf("4. Exit\n");
        printf("=================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEnter number of rows: ");
                scanf("%d", &rows);

                printf("Enter number of columns: ");
                scanf("%d", &cols);

                if (rows <= 0 || rows > MAX ||
                    cols <= 0 || cols > MAX) {
                    printf("Invalid matrix size!\n");
                    break;
                }

                printf("\nEnter elements of Matrix A:\n");
                inputMatrix(A, rows, cols);

                printf("\nEnter elements of Matrix B:\n");
                inputMatrix(B, rows, cols);

                addMatrix(A, B, result, rows, cols);

                printf("\nMatrix A:\n");
                displayMatrix(A, rows, cols);

                printf("\nMatrix B:\n");
                displayMatrix(B, rows, cols);

                printf("\nResult of Matrix Addition:\n");
                displayMatrix(result, rows, cols);

                break;

            case 2:
                printf("\nEnter rows of Matrix A: ");
                scanf("%d", &r1);

                printf("Enter columns of Matrix A: ");
                scanf("%d", &c1);

                printf("Enter rows of Matrix B: ");
                scanf("%d", &r2);

                printf("Enter columns of Matrix B: ");
                scanf("%d", &c2);

                if (r1 <= 0 || r1 > MAX ||
                    c1 <= 0 || c1 > MAX ||
                    r2 <= 0 || r2 > MAX ||
                    c2 <= 0 || c2 > MAX) {
                    printf("Invalid matrix size!\n");
                    break;
                }

                if (c1 != r2) {
                    printf("\nMatrix multiplication is not possible.\n");
                    printf("Columns of Matrix A must equal rows of Matrix B.\n");
                    break;
                }

                printf("\nEnter elements of Matrix A:\n");
                inputMatrix(A, r1, c1);

                printf("\nEnter elements of Matrix B:\n");
                inputMatrix(B, r2, c2);

                multiplyMatrix(A, B, result, r1, c1, c2);

                printf("\nResult of Matrix Multiplication:\n");
                displayMatrix(result, r1, c2);

                break;

            case 3:
                printf("\nEnter number of rows: ");
                scanf("%d", &rows);

                printf("Enter number of columns: ");
                scanf("%d", &cols);

                if (rows <= 0 || rows > MAX ||
                    cols <= 0 || cols > MAX) {
                    printf("Invalid matrix size!\n");
                    break;
                }

                printf("\nEnter matrix elements:\n");
                inputMatrix(A, rows, cols);

                printf("\nOriginal Matrix:\n");
                displayMatrix(A, rows, cols);

                transposeMatrix(A, result, rows, cols);

                printf("\nTranspose of Matrix:\n");
                displayMatrix(result, cols, rows);

                break;

            case 4:
                printf("\nThank you for using Matrix Operations!\n");
                return 0;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}
