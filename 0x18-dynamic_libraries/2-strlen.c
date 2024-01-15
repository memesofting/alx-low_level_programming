#include "main.h"
/**
 * _strlen - returns length of string
 * @s: string pointer
 *
 * Return: len (Success)
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
