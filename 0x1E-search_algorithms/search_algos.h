#ifndef _SEARCH_ALGOS_
#define _SEARCH_ALGOS_

/* Standard Library */
#include <stdio.h>

/* Search Algorith Functions Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

/* Auxiliar Functions */
void print_array(int *array, int left, int right);
void print_array2(int *array, size_t size);
size_t minimum_value(size_t a, size_t b);

#endif /* SEARCH_ALGOS */