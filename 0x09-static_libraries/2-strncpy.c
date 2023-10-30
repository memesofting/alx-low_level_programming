#include "main.h"
#include <string.h>

/**
 * _strncpy - copies strings
 * @dest: first string
 * @src: second string
 * @n: src bytes
 *
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
