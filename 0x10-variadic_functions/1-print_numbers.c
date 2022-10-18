#include <stdarg>
/**
 * print_numbers - print numbers
 * @separator: to seperate parameters to print
 * @n: numbers of parameter to print
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

va_list num;

	va_start(num, n);

	for (i = 1; i <= n; i++)
	{
	_putchar(va_arg(num, int));
	if (i != n)
	_putchar(separator);
	}
va_end(num);
}
