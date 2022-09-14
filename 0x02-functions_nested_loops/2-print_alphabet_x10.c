#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet, in lowercase
 *
 * return;
 */
void print_alphabet_x10(void)
{
  int a = 0, b;
   while (a < 10)
{
    b = 'a';
    while (b <= 'z')
{
     _putchar(b);
      b++;
}

}
      _putchar('\n');
       a++;
}
