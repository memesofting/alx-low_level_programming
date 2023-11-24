#include "main.h"
/**
 * convert_to_binary - converts number to binary
 * @n: number
 *
 * Return: void
 */

void convert_to_binary(unsigned int n)
{
	if (n == 0)
		return;
	convert_to_binary(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	if (n == 1)
		_putchar('1');
	else
	{
		convert_to_binary(n);
	}
}
