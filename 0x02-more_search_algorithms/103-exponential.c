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
	
	if (array == NULL ||
	    array[size - 1] < value ||
	    array[0] > value )
		return (-1);

	u_bound = 1;
	while (u_bound < size && array[u_bound] < value)
	{
		printf("Value checked array[%i] = [%i]\n", u_bound, array[u_bound]);
		u_bound *= 2;
	}

	l_bound = u_bound/2; /* add + 1 optimize,
				but it won't match req'd algo */
	u_bound = (u_bound < size) ? u_bound:size - 1;
	printf("Value found between indexes [%i] and [%i]\n", l_bound, u_bound);
	return binary_search(array, l_bound, u_bound, value);
}

/**
 * binary_search - searches subarray of array for value in binary fashion
 * @array: pointer to the first element in sorted, ascending int array
 * @start: start index for subarray
 * @end: end index for subarray
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 if the value is present
 * in the array, or if the array is NULL.
 */
int binary_search(int *array, int start, int end, int value)
{
	int prb;
	
	/* check commented out bc already implemented in exp search */
	/* if (array == NULL || */
	/*     array[size - 1] < value || */
	/*     array[0] > value ) */
	/* 	return (-1); */
	/* to match task more closely,
	   I need to allow search to continue to last or first
	   index, then break. for some reason search for 0 in
	   array without 0 doesn't end up breaking without
	   additional conditionals.
	*/

	while (true)
	{
		print_search(array, start, end);
		prb = start + (end - start)/2;
		if (array[prb] == value)
			return (prb);
		if (start == end)
			break;
		if (array[prb] < value)
			start = prb + 1;
		else
			end = prb - 1;
	}
	return (-1);
}


/**
 * print_search - print subarray of array being searched
 * @array: pointer to the first element in sorted, ascending array of ints
 * @start: start index for subarray
 * @end: end index for subarray
 */
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
