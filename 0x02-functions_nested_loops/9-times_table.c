#include "main.h"

/**
 * times_table - prints the 0 to 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, product, product_first_digit, product_last_digit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			product_first_digit = product / 10;
			product_last_digit = product % 10;

			if (j != 0)
			{
				_putchar(product_first_digit == 0 ? ' ' : product_first_digit + '0');
			}
			_putchar(product_last_digit + '0');

			if (j == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
