#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: no of bytes
 *
 * Return: **p (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
