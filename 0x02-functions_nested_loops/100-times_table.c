#include "main.h"
/**
 * print_times_table - multiplies n times table
 * @n: number of times table
 */
void print_times_table(int n)
{
	int i, j, k;

	k = 0;
	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j > 0 && k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else if (j > 0 && (k > 9 && k < 100))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (j > 0 && k > 99)
			{
				_putchar(',');
				_putchar(' ');
			}
			print_digit(k);
		}
		_putchar('\n');
	}
}

/**
 * print_digit - prints digits of a number with _putchar
 * @n: number to be printed
 */
void print_digit(int n)
{
	int a, b, c;

	if (n < 10)
	{
		_putchar(n + '0');
	}
	else if (n >= 10 && n < 100)
	{
		a = n / 10;
		b = n % 10;
		_putchar(a + '0');
		_putchar(b + '0');
	}
	else
	{
		a = n / 100;
		b = (n / 10) % 10;
		c = n % 10;
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(c + '0');
	}
}
