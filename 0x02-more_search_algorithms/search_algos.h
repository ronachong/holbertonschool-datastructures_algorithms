#ifndef _SEARCH_H_
#define _SEARCH_H_

#include <stdio.h>
#include <stdbool.h>

int jump_search(int *array, size_t size, int value);
int check_values(int *array, int value, int i, int j);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search(int *array, int start, int end, int value);
void print_search(int *array, int start, int end);
int advanced_binary(int *array, size_t size, int value);
int adv_binary_search(int *array, int start, int end, int value);
int find_first_i(int *array, int i, int value);
#endif
