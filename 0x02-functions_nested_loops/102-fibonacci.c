#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers starting with 1 and 2
 *
 * Return: 0 on success
 */

int main(void)
{
	long int x, y, count, next;

	x = 1;
	y = 2;
	count = 0;
	printf("%ld, %ld, ", x, y);
	for (count = 0; count < 48; count++)
	{
		next = x + y;
		if (count == 47)
		{
			printf("%ld", next);
		}
		else
		{
			printf("%ld, ", next);
		}
		x = y;
		y = next;
	}
	printf("\n");
	return (0);
}
