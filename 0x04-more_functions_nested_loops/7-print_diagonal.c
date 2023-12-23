#include "main.h"

/**
 * print_diagonal - prints a line withe underscores
 * @n: number of times to print the underscore
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, s;

	i = 1;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar('\\');
			_putchar('\n');
			for (s = 1; s <= i; s++)
			{
				_putchar(32);
			}
			i++;
		}
		_putchar('\n');
	}
}

