#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int binary_search_aux(int *array, int value, int start, int end, int size);
int int_search_aux(int *arr, int start, int end, size_t size, int value);
int interpolation_search(int *arr, size_t size, int value);
int advanced_binary_aux(int *array, int value, int start, int end);
int advanced_binary(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
#endif
