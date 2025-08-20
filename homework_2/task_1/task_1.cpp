/*
TODO: 
1. Реализовать на языке C/C++ классические операции перемножения квадратных матриц и умножения матрицы на вектор (15%)
# можно использовать %%writefile и оформить сишный код прямо здесь
# но наверное удобней будет писать его напрямую в отдельных файлах 
# и прислать вместе с домашним заданием
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <locale>
using namespace std;


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

int main()
{
    srand(time(NULL)); // инициализация генератора случайных чисел

    int n;
    cout << "Введите размер квадратной матрицы: ";
    cin >> n;

    if(n <= 0){
        cerr << "Размер матрицы должен быть больше нуля." << endl;
        return 1;
    }

    // выделение памяти для матриц
    int** A = new int*[n];
    for(int i = 0; i < n; ++i) {
        A[i] = new int[n];
    }

    int** B = new int*[n];
    for(int i = 0; i < n; ++i) {
        B[i] = new int[n];
    }

    int** res = new int*[n];
    for(int i = 0; i < n; ++i) {
        res[i] = new int[n];
    }

    // Заполнение матриц случайными значениями от 1 до 10
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            A[i][j] = rand() % 10 + 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            B[i][j] = rand() % 10 + 1; // числа от 1 до 10
        }
    }

    // Вызываем функцию умножения матриц
    multiplyMatrices(A, B, res, n);

    // Выводим на экран матрицу А (просто так)
    cout << "Матрица А:" << endl;
    printMatrix(A, n);

    // Выводим на экран матрицу Б
    cout << "Матрица B:" << endl;
    printMatrix(B, n);

    // Выводим результат
    cout << "Результат перемножения матриц:" << endl;
    printMatrix(res, n);

    // Запрос вектора у пользователя
    int* vec = new int[2];
    cout << "Введите элементы вектора (размер " << 2 << "):\n";
    for (int i = 0; i < 2; ++i) {
        cin >> vec[i];
    }

    // Результирующий вектор
    int* result = new int[n];

    // Выполняем умножение матрицы на вектор
    multiplyMatrixByVector(A, vec, result, n);

    // Выводим результат
    printVector(result, n);

    return 0;
}