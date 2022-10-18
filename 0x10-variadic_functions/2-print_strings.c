#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print numbers
 * @separator: to seperate parameters to print
 * @n: numbers of parameter to print
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)

	{
		p = va_arg(str, char *);

		if (p == NULL)
			p = "(nil)";

		printf("%s", p);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str);
}
