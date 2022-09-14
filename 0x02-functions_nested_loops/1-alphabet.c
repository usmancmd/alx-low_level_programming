#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Description: print lowercase alphabet a to z
 * Return;
 */
void print_alphabet(void)
{
	char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
