#include "search_algos.h"
/**
 * linear_search - searches for a value in a sorted array of integers
 * @array: array to search
 * @size: size of the array
 * @value: key to search for in the array
 * Return: index where value is located otherwise return -1;
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
