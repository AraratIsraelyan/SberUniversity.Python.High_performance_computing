def multiplyMatrix(list A, list B):
    """
    Умножение матриц A и B (списки списков).
    """
    cdef int i, j, k
    cdef int n = len(A)
    cdef int m = len(B[0])
    cdef int p = len(B)

    if len(A[0]) != p:
        raise ValueError("Количество столбцов A должно быть равно количеству строк B")

    # создаем результирующую матрицу
    C = [[0 for j in range(m)] for i in range(n)]

    for i in range(n):
        for j in range(m):
            for k in range(p):
                C[i][j] += A[i][k] * B[k][j]

    return C


def multiplyVec(list A, list x):
    """
    Умножение матрицы A (n x m) на вектор x (m) заданной длины.
    """
    cdef int i, j
    cdef int n = len(A)
    cdef int m = len(A[0])

    if len(x) != m:
        raise ValueError("Длина вектора должна быть равна числу столбцов матрицы")

    y = [0 for i in range(n)]

    for i in range(n):
        for j in range(m):
            y[i] += A[i][j] * x[j]

    return y
