import sys
import random
import multiply

if __name__ == "__main__":
    # читаем размер матрицы из stdin
    n_str = sys.stdin.read().strip()
    if not n_str.isdigit():
        print("Ошибка: нужно передать число (размер матрицы)")
        sys.exit(1)

    n = int(n_str)
    print("Matrix size:", n)
    
    # создаём две случайные матрицы n x n
    A = [[random.randint(0, 9) for _ in range(n)] for _ in range(n)]
    B = [[random.randint(0, 9) for _ in range(n)] for _ in range(n)]
    
    # создаём случайный вектор длины n
    v = [random.randint(0, 9) for _ in range(n)]

    # перемножаем матрицы
    C = multiply.multiplyMatrix(A, B)
    # перемножаем матрицу и вектор
    y = multiply.multiplyVec(A, v)
