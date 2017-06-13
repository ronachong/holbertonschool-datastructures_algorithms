#include <stdio.h>

/**
 * linear_search - searches array for value in linear fashion
 * @array: pointer to the first element in int array
 * @size: # of elements in @array
 * @value: the value to search for
 * Return: the first index where value is located, or -1 if the value is present
 * in the array, or if the array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; (size_t) i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}	
	return (-1);
}
