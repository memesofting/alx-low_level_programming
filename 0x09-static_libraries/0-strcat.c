#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @c: character to check
 * Return: pointer (Success)
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
