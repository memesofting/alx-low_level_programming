#include <stdio.h>
#include <string.h>

/**
 * _memset - fills memmory with constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: no of bytes
 *
 * Return: **p
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (0);
}
