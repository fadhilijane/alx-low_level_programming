#include "search_algos.h"

/**
 * binary_search - algo used for searching
 * @array:  pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search
 * Return: index
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = 0; i < size; i++)
                {
                        printf("%d", array[i]);
                        printf(", ");
                }
                printf("\n");

		mid = (left + right) / 2;
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
		{
			right = mid - 1;
			size = right - left;
			i = left++;
		}
		else if (value > array[mid])
		{
			left = mid + 1;

		}
	}
	return (-1);
}
