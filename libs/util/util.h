#ifndef LAB_15_UTIL_H
#define LAB_15_UTIL_H

#include <stdbool.h>

int findMax(const int* array, int size);

int findMin(const int* array, int size);

bool isSet(const long long* array, int size);

long long sum(const int* array, int size);

int countUniques(long long* array, int size);

bool isNonDescending(const int* array, int size);

int countValues(const int* array, int size, int value);

#endif //LAB_15_UTIL_H