#include <string.h>
#include "main.h"

/**
 * main - entry point
 * @c: character to be checked
 * @s: pointer to character
 *
 * Return: s (Success)
 * else: null
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
