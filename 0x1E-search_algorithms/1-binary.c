#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: sorted array of integers to search
 * @size: size of the the array
 * @value: value to search for in the array
 *
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int lower = 0;
	int upper = size - 1;
	int mid_elem = 0;
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	while (lower <= upper)
	{
		printf("Searching in array: ");
		for (i = 0; i <= upper; i++)
		{
			
			printf("%d", array[i]);
			if (i != upper)
			{
				printf(", ");
			}
		}
		printf("\n");

		mid_elem = (lower + upper) / 2;

		if (array[mid_elem] == value)
		{
			return (mid_elem);
		}
		else if (array[mid_elem] > value)
		{
			upper = mid_elem - 1;
		}
		else if (array[mid_elem] < value)
		{
			lower = mid_elem + 1;
		}
	}
	return (-1);
}
