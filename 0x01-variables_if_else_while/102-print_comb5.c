#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0 on success
 */

int main(void)
{
	int i, j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;

		while (j < 100)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}

	putchar('\n');
	return (0);
}
