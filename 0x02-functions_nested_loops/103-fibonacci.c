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
	sum = 2;
	for (count = 0; count < 48; count++)
	{
		next = x + y;
		if (next % 2 == 0 && next <= 4000000)
		{
			sum += next;
		}
		x = y;
		y = next;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
