#include <stdio.h>
/**
 * main - prints sum of multiple of 3 and 5 btw 0 and 1024
 *
 * Return: 0 on success
 */

int main(void)
{
	int n, sum;

	sum = 0;
	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
