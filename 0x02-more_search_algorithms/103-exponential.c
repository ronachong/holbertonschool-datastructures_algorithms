#include "search_algos.h"

/**
 * exponential_search - search array for value using exponential search
 * @array: pointer to first element in array being searched
 * @size: number of elements in array
 * @value: value to search for in array
 *
 * Return: first index where @value is present in @array, or else -1 if value
 * is not present in array or array is null.
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int u_bound;
	unsigned int l_bound;
	
	if (array == NULL || array[size - 1] < value)
		return (-1);

	u_bound = 1;
	while (u_bound < size && array[u_bound] < value)
	{
		printf("Value checked array[%i] = [%i]\n", u_bound, array[u_bound]);
		u_bound *= 2;
	}

	l_bound = u_bound/2;
	u_bound = (u_bound < size) ? u_bound:size - 1;
	printf("Value found between indexes [%i] and [%i]\n", l_bound, u_bound);
	printf("Should do search now.\n");

	return (-1);
}
