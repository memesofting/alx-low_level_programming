#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: memory to paste to
 * @src: memory to copy
 *
 * Return: Always **dest (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
