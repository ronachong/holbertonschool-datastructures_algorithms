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

	if (array == NULL)
		return (-1);

	i = size/2;
	start = 0;
	end = size;
	while (i > -1 && (size_t) i < size)
	{
		print_search(array, start, end);
		if (array[i] == value)
			return (i);
		if (array[i] > value)
		{
			start = 0;
			end = i;
			i = i/2;
		}
		else if (array[i] < value)
		{
			if (size - i == 1)
				break; /* last ind in array has been checked*/
			start = i;
			end = size;
			i += (size - i)/2;
		}
	}
	return (-1);
}

void print_search(int *array, int start, int end)
{
	int j;

	printf("Searching in array: ");
	for (j = start; j < end - 1; j++)
	{
		printf("%i, ", array[j]);
	}
	printf("%i\n", array[j]);
}
