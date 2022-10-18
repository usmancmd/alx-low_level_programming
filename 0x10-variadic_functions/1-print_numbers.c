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
	printf("%d", va_arg(num, int));
	if (i != n)
	{
		if (separator != NULL)
		{
		printf("%c", separator);
		}
	}
printf('\n');
va_end(num);
}
