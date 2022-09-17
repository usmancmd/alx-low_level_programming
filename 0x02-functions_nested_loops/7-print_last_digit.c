#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: number whose last digit is to be printed
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = x % 10;
	last_digit = last_digit < 0 ? 0 - last_digit : last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
