#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: string which lenght will be printed
 *
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (strlen(s));
	}
	return (_strlen_recursion(s + 1));
}
