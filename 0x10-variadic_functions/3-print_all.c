#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything
 * @format: List of types of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
va_list argPtr;
char *s;
char *sep = "";
int j = 0, len = 0;

	va_start(argPtr, format);
	if (format)
	{
		while (format[j])
		{
			switch (format[j])
				{
				case 'c':
				printf("%s%c", sep, (char) va_arg(argPtr, int));
				break;
				case 'i':
				printf("%s%i", sep, va_arg(argPtr, int));
				break;
				case 'f':
				printf("%s%f", sep, (float) va_arg(argPtr, double));
				break;
				case 's':
				s = va_arg(argPtr, char *);
				if (s == NULL)
				s = "(nil)";
				printf("%s%s", sep, s);
				break;
				default:
					j++;
					continue;
				}
		sep = ", ";
		j++;
		}
	}
	printf("\n");
	va_end(argPtr);
}
