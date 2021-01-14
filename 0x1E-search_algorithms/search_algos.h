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

#endif /* SEARCH_ALGOS */