#include "search_algos.h"

/**
 * linear_search - searches using linear algo
 * @array: array to search
 * @size: size o array
 * @value: value to be sought
 * Return:  first index where value is locate
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
