#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program adds positive numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i;
	int add;

	i = 1;
	add = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("error\n");
				return (1);
			}
			else
				add = add + atoi(argv[i]);
		}
	printf("%d\n", add);
	return (0);
}
