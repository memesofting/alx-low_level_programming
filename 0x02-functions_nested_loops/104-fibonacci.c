#include <stdio.h>

/**
 * main - prints first 98 fibonacci numbers starting with 1 and 2
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned long x, y, count, next;

	x = 1;
	y = 2;
	count = 2;
	printf("%lu, %lu, ", x, y);
	while (count < 98)
	{
		next = x + y;
		x = y;
		y = next;
		count++;
		if (count == 98)
		{
			printf("%lu\n", next);
		}
		else
		{
			printf("%lu, ", next);
		}
	}
	return (0);
}
