#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	while (i = 0, i <= 9)
	{
		while (j = 0, j <= 9)
		{
			if (i == j)
				j++;
			else
				putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
			i++;
			j++;
		}
	}
	putchar('\n');
	return (0);
}
