#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers starting with 1 and 2
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int x, y, count, next;

	x = 1;
	y = 2;
	count = 0;
	printf("%lu, %lu, ", x, y);
	for (count = 3; count <= 98; count++)
	{
		next = x + y;
		if (count == 98)
		{
			printf("%lu", next);
		}
		else
		{
			printf("%lu, ", next);
		}
		x = y;
		y = next;
	}
	printf("\n");
	return (0);
}
