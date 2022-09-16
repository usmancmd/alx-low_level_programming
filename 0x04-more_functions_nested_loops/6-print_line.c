#include "holberton.h"
#include "main.h"
/**
 * print_line - prints an underscore: '_', n times
 * @n: the width of the line
 *
 * Return: void
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
	for (a = 0; a < n ; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
