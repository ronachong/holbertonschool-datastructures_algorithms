#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches array for value in binary fashion
 * @array: pointer to the first element in sorted, ascending int array
 * @size: # of elements in @array
 * @value: the value to search for
 * Return: the index where value is located, or -1 if the value is present
 * in the array, or if the array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int start;
	int end;

	start = 0;
	end = size - 1;
	while (start != end && array)
	{
		print_search(array, start, end);
		i = start + (end - start)/2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			end = i - 1;
		else if (array[i] < value)
			start = i + 1;
	}
	return (-1);
}

void print_search(int *array, int start, int end)
{
	int j;

	printf("Searching in array: ");
	for (j = start; j < end; j++)
	{
		printf("%i, ", array[j]);
	}
	printf("%i\n", array[j]);
}
