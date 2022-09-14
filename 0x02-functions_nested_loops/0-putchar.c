#include "main.h"
/**
 * main - Entry point
 * description: program that print putchar
 * return: 0;
 */
int main(void)
{
char *sh = "_putchar";

while (*sh)
{
_putchar(*sh);
sh++;
}

_putchar('\n');
return (0);
}
