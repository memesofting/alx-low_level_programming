#include "main.h"

/**
 * print_line - prints a line withe underscores
 * @n: number of times to print the underscore
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	i = 1;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}

