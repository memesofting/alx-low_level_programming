#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size/lenght of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = size; i >= 1; i--)
		{
			_putchar(' ');
			for (j = i; j >= 1; j--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
