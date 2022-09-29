#include "main.h"
/**
* is_prime_number - function that returns 1 if prime otherwise 0
* @n: parameter
*
* Return: 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime(n));
}

/**
* prime - find prime number
* @n: number to check
*
* Return: 0
*/
int prime(int n)
{
	if (n % 2 == 1)
		return (1);
	else
		return (0);
}
