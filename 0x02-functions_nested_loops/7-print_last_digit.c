#include "main.h"

/**
 * print_last_digit - prints last digit
 * @int: digit to print its last digit
 *
 * Return: last digit on success
 */

int print_last_digit(int);

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
		i = i * -1;
	_putchar(i + '0');
	return (i);
}
