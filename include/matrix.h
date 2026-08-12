#ifndef MATRIX_H
#define MATRIX_H

#define MAX 10

/* Matrix structure */
typedef struct
{
    int data[MAX][MAX];
    int rows;
    int cols;

} Matrix;


/* Display functions */
void welcomeScreen();
void instructions();
void loadingAnimation();
void menu();


/* Matrix input/output */
void inputMatrix(Matrix *matrix);
void displayMatrix(Matrix matrix);


/* Matrix operations */
void addMatrices(Matrix A, Matrix B, Matrix *result);

void multiplyMatrices(Matrix A, Matrix B, Matrix *result);

void transposeMatrix(Matrix A, Matrix *result);


/* Validation functions */
int isValidSize(int rows, int cols);

int canAdd(Matrix A, Matrix B);

int canMultiply(Matrix A, Matrix B);


/* Utility function */
void clearMatrix(Matrix *matrix);

#endif
