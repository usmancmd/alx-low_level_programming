#include <ctype.h>
/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: function parameter
 * Return: (n);
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
