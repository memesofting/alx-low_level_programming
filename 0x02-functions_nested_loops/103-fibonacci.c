#include <stdio.h>

/**
 * main - prints sum of fibonacci numbers between 1 and 4,000,000
 *
 * Return: 0 on success
 */

int main(void)
{
	long int x, y, count, next, sum;

	x = 1;
	y = 2;
	count = 0;
	for (count = 0; count < 48; count++)
	{
		next = x + y;
		if (next <= 4000000 && next % 2 == 0)
		{
			sum += next;
		}
		x = y;
		y = next;
	}
	printf("%ld", next);
	printf("\n");
	return (0);
}
