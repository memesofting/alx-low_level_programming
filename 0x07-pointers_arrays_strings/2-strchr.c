#include "main.h"
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @c: character to be checked
 * @s: pointer to character
 *
 * Return: **s (Success)
 * else: null
 */
char *_strchr(char *s, char c)
{
	char *p;

	p = &c;
	strchr(s, c);
	return (p);
}
