#include "main.h"
#include <string.h>
/**
 * _strspn - gets length of substring
 * @s: string
 * @accept: character
 * Return: number of bytes (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	strspn(s, accept);
	return (sizeof(s));
}
