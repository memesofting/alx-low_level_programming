#include <stdio.h>

/**
 * main - program prints number of arguments passed to it
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
