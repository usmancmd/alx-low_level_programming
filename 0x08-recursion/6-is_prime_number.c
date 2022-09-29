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
	return (prime(n, n - 1));
}

/**
* prime - find prime number
* @n: number to check
* @i: count parameter
* Return: 0
*/
int prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime(n, i - 1));
}
