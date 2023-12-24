#include "main.h"

/**
 * print_square - prints square array
 * @size: size of square
 *
 * Return: nothing
 */

void print_square(int size)
{
	int l, b;

	b = 1;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (b <= size)
		{
			l = 1;
			while (l <= size)
			{
				_putchar('#');
				l++;
			}
			_putchar('\n');
			b++;
		}
	}
}
