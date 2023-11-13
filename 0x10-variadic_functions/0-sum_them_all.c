#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all parameters
 * @n: number of parameters
 *
 * Return: 0 on success
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list digit;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(digit, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(digit, int);
	}
	va_end(digit);
	return (sum);
}
