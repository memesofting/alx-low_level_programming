#include <stdio.h>

/**
 * main - prints first 98 fibonacci numbers starting with 1 and 2
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned int x, y, count, next;

	x = 1;
	y = 2;
	/*count = 2;*/
	printf("%u, %u, ", x, y);
	for (count = 3; count <= 98; count++)
	{
		next = x + y;
		printf(", %u", next);
		/**
		*if (count < 98)
		*{
		*	printf(", ");
		*}
		*/
		x = y;
		y = next;
	}
	printf("\n");
	return (0);
}
