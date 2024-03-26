#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: src bytes
 *
 * Return: pointer (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
