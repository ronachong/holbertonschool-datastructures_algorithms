#ifndef _SEARCH_H_
#define _SEARCH_H_

#include <stdio.h>

int jump_search(int *array, size_t size, int value);
int check_values(int *array, int value, int i, int j);
int interpolation_search(int *array, size_t size, int value);

#endif
