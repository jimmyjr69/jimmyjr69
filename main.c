#include "libs/data_structures/matrix/matrix.h"
#include <assert.h>

matrix createMatrixFromArray(const int* array, size_t rows, size_t columns) {
    matrix matrix = getMemMatrix(rows, columns);
    int arrayIndex = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix.cells[i][j] = array[arrayIndex++];
        }
    }

    return matrix;
}

matrix* createArrayOfMatrixFromArray(const int* array, size_t matrixAmount, size_t rows, size_t columns) {
    matrix* matrices = getMemArrayOfMatrices(matrixAmount, rows, columns);
    int arrayIndex = 0;

    for (size_t k = 0; k < matrixAmount; k++) {
        for (size_t i = 0; i < rows; i++) {
            for (size_t j = 0; j < columns; j++) {
                matrices[k].cells[i][j] = array[arrayIndex++];
            }
        }
    }

    return matrices;
}

int countZeroRows(matrix matrix, int rows, int columns) {
    int count = 0;

    for (int i = 0; i < rows; i++) {
        bool foundNonZero = false;

        for (int j = 0; j < columns; j++) {
            if (matrix.cells[i][j] != 0) {
                foundNonZero = true;
                break;
            }
        }

        if (!foundNonZero) {
            count++;
        }
    }

    return count;
}

void test_countZeroRows() {
    matrix matrix = createMatrixFromArray((int[]) {
        1, 1, 0,
        0, 0, 0,
        0, 0, 1,
        0, 0, 0,
        0, 1, 1,
        }, 5, 3
    );

    assert(countZeroRows(matrix, 5, 3) == 2);

    freeMemMatrix(&matrix);
}

int main() {
    test_countZeroRows();
}