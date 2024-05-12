#include <stdio.h>
/**
 * main - entry point to
 * print combo of three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = '0';
	while (i < '8')
	{
		j = '0';
		while (j < '9')
		{
			if (i < j)
			{
				k = '0';
				while (k <= '9')
				{
					if (j < k)
					{
						putchar(i);
						putchar(j);
						putchar(k);
						if (i != '7' || (i == '6' && j != '9'))
						{
							putchar(',');
							putchar(' ');
						}
					}
					k++;
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
