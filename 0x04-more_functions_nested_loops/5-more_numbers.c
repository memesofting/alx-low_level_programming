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
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar('1');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
