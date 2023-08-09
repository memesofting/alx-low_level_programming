#include "main.h"
#include <stdio.h>
/**
 * main - prints name of program
 * @argc: count
 * @argv: vector
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
