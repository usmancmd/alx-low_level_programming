#include "main.h"
/**
* is_prime_number - function that returns 1 if prime otherwise 0
* @n: parameter
*
* Return: 0
*/
int is_prime_number(int n)
{
	if (n % 2 == 0)
	return (0);
	else
	{
	return (is_prime_number(n % 2));
	}
}
