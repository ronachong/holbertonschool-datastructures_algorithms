#include "search_algos.h"

/**
 * interpolation_search - search for @value in a sorted array of ints using interpolation
 * @array - pointer to the first element in array to search
 * @size - number of elements in @array
 * @value - value to search for
 *
 * Return: the first index where @value is located, else -1 if @value could not
 * be located or array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int i_high;
	unsigned int i_low;
	size_t prb;

	i_high = size - 1;
	i_low = 0;

	while (i_high != i_low && array)
	{
		prb = i_low + (double)(value - array[i_low])/(array[i_high] - array[i_low])*(i_high - i_low);
		if (prb <= i_high) 
			printf("Value checked array[%i] = [%i]\n",
			       (int) prb,
			       array[prb]);
		else
		{
			printf("Value checked array[%i] is out of range\n",
			       (int) prb);
			break;
		}

		if (array[prb] == value)
			return (prb);
		if (array[prb] > value)
			i_high = prb;
		if (array[prb] < value)
			i_low = prb;
	}
	return (-1);
}
