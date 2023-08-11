#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * mult - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: 0 (Success)
 * else: 1 (error)
 */
int mult(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}

int main(int argc, int *argv[])
{
	int c;
	int d;
	int i;

	i = 0;
	for (i = 0; i < argc; i++)
	{
		argv[i] = c;
		argv[i] + 1 = d;
	}
	printf("%d\n", mult(c, d));
	return (0);
}
