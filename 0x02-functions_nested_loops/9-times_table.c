#include "main.h"

/**
 * times_table - multiplies 9 times table
 *
 */

void times_table(void)
{
	int i, j, k, l, m;

	k = 0;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k < 10)
			{
				_putchar(k + '0');
			}
			else
			{
				l = k / 10;
				m = k % 10;
				_putchar(l + '0');
				_putchar(m + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
