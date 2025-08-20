#include <iostream>
#include <ctime>
#include <cstdlib>
#include "matrix.h"
using namespace std;

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
    // cout << "Матрица А:" << endl;
    // printMatrix(A, n);

    // Выводим на экран матрицу Б
    // cout << "Матрица B:" << endl;
    // printMatrix(B, n);

    // Выводим результат
    // cout << "Результат перемножения матриц:" << endl;
    // printMatrix(res, n);

    // Запрос вектора у пользователя
    int* vec = new int[3]{12, 24, 56};
    // cout << "Введите элементы вектора (размер " << 2 << "):\n";
    // for (int i = 0; i < 2; ++i) {
        // cin >> vec[i];
    // }

    // Результирующий вектор
    int* result = new int[n];

    // Выполняем умножение матрицы на вектор
    multiplyMatrixByVector(A, vec, result, n);

    // Выводим результат
    // printVector(result, n);

    return 0;
}