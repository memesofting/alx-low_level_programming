#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - checks for prime numbers
 * @n: nuber to be checked
 *
 * Return: Always 0
 */

int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n == 0 || n == 1)
	{
		return (0);
	}
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	i++;
	return is_prime_number(n);
}
