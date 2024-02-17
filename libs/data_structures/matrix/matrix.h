#ifndef LAB_15_MATRIX_H
#define LAB_15_MATRIX_H

#include <stdbool.h>
#include <malloc.h>

typedef struct matrix {
    int** cells;
    int rows;
    int columns;
} matrix;

typedef struct position {
    int rowIndex;
    int colIndex;
} position;

matrix getMemMatrix(int rows, int columns);

matrix* getMemArrayOfMatrices(int matrixAmount, int rows, int columns);

void freeMemMatrix(matrix* matrix);

void freeMemMatrices(matrix* matrices, int matrixAmount);

void inputMatrix(matrix* matrix);

void inputMatrices(matrix* matrices, int matrixAmount);

void outputMatrix(matrix matrix);

void outputMatrices(matrix* matrices, int matrixAmount);

void swapRows(matrix matrix, int row1Index, int row2Index);

void swapColumns(matrix matrix, int column1Index, int column2Index);

void sortRowsByCriteria(matrix matrix, int (*criteria)(int*, int));

void selectionSortColsMatrixByColCriteria(matrix matrix, int (*criteria)(int*, int));

bool isSquareMatrix(matrix* matrix);

bool areTwoMatricesEqual(matrix* matrix1, matrix* matrix2);

bool isEMatrix(matrix* matrix);

bool isSymmetricMatrix(matrix* matrix);

void transposeSquareMatrix(matrix* matrix);

void transposeMatrix(matrix* matrix);

position getMinValuePos(matrix matrix);

position getMaxValuePos(matrix matrix);

#endif //LAB_15_MATRIX_H