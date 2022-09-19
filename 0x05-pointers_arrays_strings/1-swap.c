#include "main.h"
/**
* swap_int - function that swap int
* @a: first param
* @b: second param
*
* return: void
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
