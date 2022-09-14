#include <ctype.h>
/**
 * _islower - checks for lowercase character
 * @c: singe letter
 * Return: islower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
