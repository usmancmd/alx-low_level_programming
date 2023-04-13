#include <stdio.h>
#include "search_algos.h"

/*
 * linear_search - searches for a value in an array of integers
 *
 * @array: array of integers to search
 * @size: size of the array
 * @value: the element to search for in the array
 *
 * Return: the index of the searched element
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (0);
}
