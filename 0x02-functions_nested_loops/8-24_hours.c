#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int h, m, i, n;

	for (h = 0; h <= 2; h++)
	{
		for (m = 0; m <= 9; m++)
		{
			if ((h <= 1 && m <= 9) || (h <= 2 && m <= 3))
			{
				for (i = 0; i <= 5; i++)
				{
					for (n = 0; n <= 9; n++)
					{
						_putchar(h + '0');
						_putchar(m + '0');
						_putchar(':');
						_putchar(i + '0');
						_putchar(n + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
