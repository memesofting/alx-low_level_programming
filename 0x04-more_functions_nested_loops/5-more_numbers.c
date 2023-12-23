#include "main.h"
/**
 * more_numbers - prints all integers from 0 to 9
 *
 * Return: Always void
 */
void more_numbers(void)
{
	int n, i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			_putchar(n + '0');
		}
		for (n = 0; n < 5; n++)
		{
			_putchar('1');
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
