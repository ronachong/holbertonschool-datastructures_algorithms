#include "search_algos.h"

/**
 * binary_search - searches array for value in binary fashion
 * @array: pointer to the first element in sorted, ascending int array
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: first index where value is located, or -1 if the value is not
 * present in the array, or if the array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	/* to match task more closely,
	   I need to allow search to continue to last or first
	   index, b4 breaking if value is not in array.
	*/
	if (array == NULL ||
	    array[0] > value ||
	    array[size - 1] < value)
		return (-1);

	return (adv_binary_search(array, 0, size - 1, value));
}

/**
 * binary_search - searches subarray of array for value in binary fashion
 * @array: pointer to the first element in sorted, ascending int array
 * @start: start index for subarray
 * @end: end index for subarray
 * @value: the value to search for
 *
 * Return: first index where value is located, or -1 if the value is not
 * present in the array.
 */
int adv_binary_search(int *array, int start, int end, int value)
{
	int prb;

	prb = start + (end - start)/2;
	print_search(array, start, end);

	if (array[prb] == value &&
	    (prb == start || array[prb - 1] != value))
	    return (prb);

	if (start == end)
		return (-1);

	if (array[prb] < value)
		start = prb + 1;
	else
		end = prb - 1;

	return (adv_binary_search(array, start, end, value));
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
