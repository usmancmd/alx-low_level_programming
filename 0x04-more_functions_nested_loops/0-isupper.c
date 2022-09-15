#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper -  function that checks for uppercase character.
 * @c:  uppercase character.
 * Return: (n);
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
