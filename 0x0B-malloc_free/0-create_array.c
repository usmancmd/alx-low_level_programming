#include "main.h"
#include <stdlib.h>

/**
* create_array -  function that creates an array of chars
* @size: size of memory
* @c: character to store in memory
*
* Return: pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *str

	str = (char *)malloc(sizeof(char) * size)
	if (size == 0 || str == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
