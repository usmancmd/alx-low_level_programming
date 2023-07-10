#include "search_algos.h"
/**
 * binary_search -  searches for a value using the Binary search algorithm
 * @array:  array to search
 * @size: size of the array
 * @value: key to search for in the array
 *
 * Return: index where value is located otherwise return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	size_t i;
	size_t middle;

	if (array == NULL)
	{
		return (-1);
	}

	while (start <= end)
	{
		middle = (start + end) / 2;

		if (array[middle] == value)
		{
			return (middle);
		}

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < size - 1)
				printf(", ");
		}
		printf("\n");

		if (array[middle] < value)
			start = middle + 1;
		else
			end = middle - 1;
	}

	return (-1);
}
