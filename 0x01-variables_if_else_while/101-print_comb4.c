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

	for (i = '0'; i < '8'; i++)
	{
		for (j = i + 1; j < '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
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
		}
	}
	putchar('\n');
	return (0);
}
