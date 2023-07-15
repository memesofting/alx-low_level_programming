#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char big = 'A';
	char small = 'a';

	while (small <= 'z')
	{
		putchar(small);
		small++;
	}
	while (big <= 'Z')
	{
		putchar(big);
		big++;
	}
	putchar('\n');
	return (0);
}
