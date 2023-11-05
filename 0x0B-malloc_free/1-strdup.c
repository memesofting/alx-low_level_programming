#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - returns pointer to a newly allocated memory
 * @str: string to duplicate
 *
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *new;
	int len;
	int i;

	len  = strlen(str) + 1;
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		new = malloc(sizeof(char) * len);
		for (i = 0; i < len; i++)
		{
			new[i] = str[i];
		}
		return (new);
	}
}
