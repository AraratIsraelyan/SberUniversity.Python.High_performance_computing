#include <iostream>
using namespace std;
#include "matrix.h"

// Функция умножения двух квадратных матриц
void multiplyMatrices(int** matA, int** matB, int** result, int size)
{
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < size; ++k) {
                result[i][j] += matA[i][k] * matB[k][j];
            }}}}

// Функция вывода матрицы
void printMatrix(int** matrix, int size)
{
    cout << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }}

// Функция умножения матрицы на вектор
void multiplyMatrixByVector(int** matA, int* vec, int* result, int size) {
    for (int i = 0; i < size; ++i) {
        result[i] = 0;
        for (int j = 0; j < size; ++j) {
            result[i] += matA[i][j] * vec[j];
        }
    }
}

// Функция вывода вектора
void printVector(int* vec, int size) {
    cout << endl;
    for (int i = 0; i < size; ++i) {
        cout << vec[i] << "\t";
    }
    cout << endl;
}

