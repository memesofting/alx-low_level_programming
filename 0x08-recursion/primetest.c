#include <stdio.h>
#include <math.h>
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
	else if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else if (i >= n / 2)
	{
		return (1);
	}
	else
	{
		i += 1;
		return (is_prime_number(n));
	}
}
int main(void)
{
	int r;

	r = is_prime_number(1);
	printf("%d\n", r);
	r = is_prime_number(1024);
	printf("%d\n", r);
	r = is_prime_number(16);
	printf("%d\n", r);
	r = is_prime_number(17);
	printf("%d\n", r);
	r = is_prime_number(25);
	printf("%d\n", r);
	r = is_prime_number(-1);
	printf("%d\n", r);
	r = is_prime_number(113);
	printf("%d\n", r);
	r = is_prime_number(7919);
	printf("%d\n", r);
	return (0);
}
