#include "main.h"
#include <string.h>
/**
 * _memcpy - copies memory area
 * @dest: memory to paste to
 * @src: memory to copy
 * @n: no of bytes to copy
 *
 * Return: **dest (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
