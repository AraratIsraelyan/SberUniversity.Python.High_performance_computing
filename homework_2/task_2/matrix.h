#ifndef MATRIX_H
#define MATRIX_H

void multiplyMatrices(int** matA, int** matB, int** result, int size);
void printMatrix(int** matrix, int size);
void multiplyMatrixByVector(int** matA, int* vec, int* result, int size);
void printVector(int* vec, int size);

#endif // MATRIX_H
