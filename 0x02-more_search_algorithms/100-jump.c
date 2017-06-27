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
	unsigned int l;

	k = sqrt(size);

	/* jump */
	for (i = k, j = 0; i < size && array; i += k)
	{
		if (array[i] > value)
		{
			printf("Value found between indexes [%i] and [%i]\n", j, i);
			/* check values */
			for (l = j; l < i; l++)
			{
				printf("Value checked array[%i] = [%i]\n", l, array[l]);
				if (array[l] == value)
					return (l);
			}

			/* no matching value found: */
			break;
		}
		else if (array[i] == value)
			return (i);
	}

	return (-1);
}
