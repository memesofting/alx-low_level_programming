#include "main.h"
/**
 * print_most_numbers - prints all integers from 0 to 9
 * except 2 and 4
 * Return: Always void
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			n++;
		_putchar(n + '0');
	}
	_putchar('\n');
}
