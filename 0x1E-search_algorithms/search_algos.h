#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdio.h>

/* main function */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* helper functions */
int recursive_search(int *array, size_t size, int value);
#endif
