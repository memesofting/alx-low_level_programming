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
	printf("%lu, %lu, ", x, y);
	for (count = 3; count <= 98; count++)
	{
		next = x + y;
		printf("%lu", next);
		if (count < 98)
		{
			printf(", ");
		}
		x = y;
		y = next;
	}
	printf("\n");
	return (0);
}
