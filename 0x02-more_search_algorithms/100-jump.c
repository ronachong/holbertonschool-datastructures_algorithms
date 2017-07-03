#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search an array of given size for the specified value
 * @array - pointer to first element in array
 * @size - number of elements in array
 * @value - value to search for in array
 *
 * Return: first index where @value is located; else -1 for failure to find @value or if array is null.
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int i;
	unsigned int j;
	unsigned int k; /* jump step size */

	k = sqrt(size);
	i = 0;

	while (i < size && array)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);

		j = i;
		i += k;

		if (i > size)
			return (check_values(array, value, size - 1, j));

		if (array[i] > value)
			return (check_values(array, value, i, j));
	}

	return (-1);
}

int check_values(int *array, int value, int i, int j)
{
	int l;

	printf("Value found between indexes [%i] and [%i]\n", j, i);
	/* check values */
	for (l = j; l < i; l++)
	{
		printf("Value checked array[%i] = [%i]\n", l, array[l]);
		if (array[l] == value)
			return (l);
	}

	/* no matching value found: */
	return (-1);

}
